LOCAL_PATH := $(my-dir)

include $(CLEAR_VARS)

LOCAL_C_INCLUDES := \
	external/athwlan/include 

LOCAL_SRC_FILES:= wmiconfig.c
LOCAL_MODULE := wmiconfig
LOCAL_STATIC_LIBRARIES := libcutils libc
include $(BUILD_EXECUTABLE)


