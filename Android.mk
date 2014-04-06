#------------------------------------------------------------------------------
#    Copyright (c) 2005-2010 Atheros Corporation.  All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
#------------------------------------------------------------------------------
#==============================================================================
# Author(s): ="Atheros"
#==============================================================================

# define BOARD_WLAN_ATHEROS_SDK into your android/vendor/xxxx/BoardConfig.mk

ifneq ($(TARGET_SIMULATOR),true)
ifeq ($(BOARD_WLAN_CHIP_AR6002), true)

  #ATHEROS_TOOL_PATH := $(call my-dir)/android_athr_tools
  #ifeq ($(BOARD_HAVE_BLUETOOTH),true)
  #include $(ATHEROS_TOOL_PATH)/athbtfilter/Android.mk
  #endif
  #include $(ATHEROS_TOOL_PATH)/wmiconfig/Android.mk

  # The board config file for the product must define BOARD_WLAN_ATHEROS_SDK
  # in order to build the atheros wlan components.
  ifdef BOARD_WLAN_ATHEROS_SDK
    include $(BOARD_WLAN_ATHEROS_SDK)/ar6k_sdk/host/Android.mk
    #include $(BOARD_WLAN_ATHEROS_SDK)-proprietary/host/Android.mk
  endif
endif
endif
