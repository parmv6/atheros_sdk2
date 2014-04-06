#------------------------------------------------------------------------------
# <copyright file="makefile" company="Atheros">
#    Copyright (c) 2005-2010 Atheros Corporation.  All rights reserved.
# 
#
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted, provided that the above
# copyright notice and this permission notice appear in all copies.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
# OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
#
#
#------------------------------------------------------------------------------
#==============================================================================
# Author(s): ="Atheros"
#==============================================================================

ifneq ($(TARGET_SIMULATOR),true)

LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

ATH_ANDROID_SRC_BASE:= $(BOARD_WLAN_ATHEROS_SDK)

ATH_ANDROID_ROOT:= $(CURDIR)
export ATH_SRC_BASE:=$(ATH_ANDROID_ROOT)/$(BOARD_WLAN_ATHEROS_SDK)/ar6k_sdk/host
ATH_TARGET_OUTPUT:=$(ATH_ANDROID_ROOT)

export  ATH_LINUXPATH_OUT=$(KERNEL_OUT)
export  ATH_LINUXPATH=$(ANDROID_BUILD_TOP)/$(KERNEL_SRC)
ATH_CROSS_COMPILE_TYPE:=$(ARM_EABI_TOOLCHAIN)/arm-eabi-

ifndef ATH_LINUXPATH
# Comment out the following variable and $(error) for your platform
# Link your kernel into android SDK directory as 'kernel' directory
# export  ATH_LINUXPATH= [Your android/kernel path ]
ATH_CROSS_COMPILE_TYPE:=$(ATH_ANDROID_ROOT)/prebuilt/linux-x86/toolchain/arm-eabi-4.3.1/bin/arm-eabi-
$(error define your kernel path here for ATH_LINUXPATH)
endif 

mod_cleanup := $(ATH_TARGET_OUTPUT)/$(ATH_ANDROID_SRC_BASE)/dummy

$(mod_cleanup) :
	rm -f `find $(ATH_TARGET_OUTPUT)/$(ATH_ANDROID_SRC_BASE) -name "*.o"`
	mkdir -p $(TARGET_OUT)/wifi/

mod_file := $(TARGET_OUT)/wifi/ar6000.ko
$(mod_file) : $(mod_cleanup) $(TARGET_PREBUILT_KERNEL) $(ACP)
	$(MAKE) ARCH=arm -C $(BOARD_WLAN_ATHEROS_SDK)/ar6k_sdk/host CROSS_COMPILE=$(ATH_CROSS_COMPILE_TYPE) ATH_LINUXPATH=$(ATH_LINUXPATH) O=$(ATH_LINUXPATH_OUT) SUBDIRS=os/linux modules
	$(TARGET_OBJCOPY) --strip-unneeded $(ATH_TARGET_OUTPUT)/$(ATH_ANDROID_SRC_BASE)/ar6k_sdk/host/os/linux/ar6000.ko $(TARGET_OUT)/wifi/ar6000.ko

TARGET_KERNEL_MODULES := $(mod_file)

endif
