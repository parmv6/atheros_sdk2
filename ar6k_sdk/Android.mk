LOCAL_PATH := $(call my-dir)

ath6k_driver_path := $(LOCAL_PATH)/host/os/linux

PRODUCT_COPY_FILES += \
    $(ath6k_driver_path)/ar6000.ko:system/lib/hw/ar6000.ko

ath6k_firmware_path := $(LOCAL_PATH)/target

PRODUCT_COPY_FILES += \
    $(ath6k_firmware_path)/athwlan.bin.z77:system/lib/hw/athwlan.bin.z77

PRODUCT_COPY_FILES += \
    $(ath6k_firmware_path)/data.patch.hw2_0.bin:system/lib/hw/data.patch.hw2_0.bin

PRODUCT_COPY_FILES += \
    $(ath6k_firmware_path)/eeprom.bin:system/lib/hw/eeprom.bin

PRODUCT_COPY_FILES += \
    $(ath6k_firmware_path)/eeprom.data:system/lib/hw/eeprom.data


