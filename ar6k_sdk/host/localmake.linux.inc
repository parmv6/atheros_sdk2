#
#  Local Makefile includes for tool and kernel source paths
#  ***** This is only a sample, modify the paths for your specific build environment *****
# 
#  Copyright 2004-2006 Atheros Communications, Inc.
#
# When creating a new build type, use the following template:
ATH_BUILD_TYPE:=tegra
ifeq ($(ATH_BUILD_TYPE),tegra) 
    ATH_ARCH_CPU_TYPE := arm
    ATH_ANDROID_ENV := yes
    ATH_BUS_TYPE := sdio
    ATH_BUS_SUBTYPE := linux_sdio
endif
