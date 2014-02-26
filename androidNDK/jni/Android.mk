LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := myjni
LOCAL_SRC_FILES := com_example_androidndk_MainActivity.c 

include $(BUILD_SHARED_LIBRARY)