# Bootloader
TARGET_BOOTLOADER_BOARD_NAME := MSM8960
TARGET_NO_BOOTLOADER := true

# Extensions
TARGET_RELEASETOOLS_EXTENSIONS := device/htc/evita
TARGET_BOARD_INFO_FILE ?= device/htc/evita/board-info.txt

# Platform
TARGET_BOARD_PLATFORM := msm8960
TARGET_BOARD_PLATFORM_GPU := qcom-adreno200

# Architecture
TARGET_ARCH := arm
TARGET_ARCH_VARIANT := armv7-a-neon
TARGET_CPU_ABI := armeabi-v7a
TARGET_CPU_ABI2 := armeabi
TARGET_CPU_VARIANT := krait

# Kernel
BOARD_KERNEL_BASE := 0x80400000
BOARD_KERNEL_PAGESIZE := 2048
BOARD_KERNEL_CMDLINE := console=none androidboot.hardware=evita androidboot.selinux=permissive
BOARD_MKBOOTIMG_ARGS := --ramdisk_offset 0x02000000
TARGET_KERNEL_SOURCE := kernel/htc/evita
TARGET_KERNEL_CONFIG := evita_defconfig
TARGET_KERNEL_CUSTOM_TOOLCHAIN := linaro-4.9-cortex-a15

# Audio
BOARD_USES_ALSA_AUDIO := true
BOARD_USES_LEGACY_ALSA_AUDIO := true
#AUDIO_FEATURE_ENABLED_FM := true
BOARD_USES_FLUENCE_INCALL := true
BOARD_USES_SEPERATED_AUDIO_INPUT := true
BOARD_USES_SEPERATED_VOIP := true
#QCOM_FM_ENABLED := true

# Bluetooth
BOARD_HAVE_BLUETOOTH := true
BOARD_HAVE_BLUETOOTH_QCOM := true
BLUETOOTH_HCI_USE_MCT := true
BOARD_BLUETOOTH_BDROID_BUILDCFG_INCLUDE_DIR := device/htc/evita/bluetooth

# Graphics
NUM_FRAMEBUFFER_SURFACE_BUFFERS := 3
TARGET_DISPLAY_USE_RETIRE_FENCE := true
TARGET_USES_C2D_COMPOSITION := true
TARGET_USES_ION := true
USE_OPENGL_RENDERER := true
TARGET_DISPLAY_INSECURE_MM_HEAP := true

# Camera
BOARD_NEEDS_MEMORYHEAPPMEM := true
USE_DEVICE_SPECIFIC_CAMERA := true
TARGET_RELEASE_CPPFLAGS += -DNEEDS_VECTORIMPL_SYMBOLS

# WiFi
BOARD_HAS_QCOM_WLAN := true
BOARD_WLAN_DEVICE := qcwcn
BOARD_WPA_SUPPLICANT_DRIVER := NL80211
BOARD_WPA_SUPPLICANT_PRIVATE_LIB := lib_driver_cmd_$(BOARD_WLAN_DEVICE)
BOARD_HOSTAPD_DRIVER := NL80211
BOARD_HOSTAPD_PRIVATE_LIB := lib_driver_cmd_$(BOARD_WLAN_DEVICE)
TARGET_USES_WCNSS_CTRL := true
TARGET_USES_QCOM_WCNSS_QMI := true
WIFI_DRIVER_FW_PATH_AP := "ap"
WIFI_DRIVER_FW_PATH_STA := "sta"
WIFI_DRIVER_FW_PATH_PARAM := "/sys/module/prima_wlan/parameters/fwpath"
WPA_SUPPLICANT_VERSION := VER_0_8_X

# Filesystem
BLOCK_BASED_OTA := false
TARGET_USERIMAGES_USE_EXT4 := true
TARGET_USERIMAGES_USE_F2FS := true
TARGET_CUSTOM_SYSTEM_FORMAT := true
BOARD_BOOTIMAGE_PARTITION_SIZE := 16777216
BOARD_RECOVERYIMAGE_PARTITION_SIZE := 16776704
BOARD_SYSTEMIMAGE_PARTITION_SIZE := 1744829440
BOARD_USERDATAIMAGE_PARTITION_SIZE := 2550136320
BOARD_CACHEIMAGE_PARTITION_SIZE := 268434944
BOARD_FLASH_BLOCK_SIZE := 131072

# Recovery
BOARD_RECOVERY_BLDRMSG_OFFSET := 2048
BOARD_USE_CUSTOM_RECOVERY_FONT := \"roboto_15x24.h\"
TARGET_RECOVERY_DEVICE_MODULES += chargeled
TARGET_RECOVERY_PIXEL_FORMAT := RGBX_8888
COMMON_GLOBAL_CFLAGS += -DNO_SECURE_DISCARD
ifeq ($(TARGET_CUSTOM_SYSTEM_FORMAT),true)
    TARGET_RECOVERY_FSTAB := device/htc/evita/rootdir/fstab.f2fs
else
    TARGET_RECOVERY_FSTAB := device/htc/evita/rootdir/fstab.evita
endif

# TWRP
BOARD_HAS_NO_REAL_SDCARD := true
RECOVERY_GRAPHICS_USE_LINELENGTH := true
TW_BRIGHTNESS_PATH := "/sys/class/leds/lcd-backlight/brightness"
TW_INCLUDE_CRYPTO := true
TW_NO_SCREEN_BLANK := true
TW_THEME := portrait_hdpi

# Radio
BOARD_RIL_CLASS := ../../../device/htc/evita/ril
BOARD_RIL_NO_CELLINFOLIST := true
BOARD_USES_LEGACY_MMAP := true

# SELinux
-include device/qcom/sepolicy/sepolicy.mk
BOARD_SEPOLICY_DIRS += device/htc/evita/sepolicy

# Vendor
BOARD_VENDOR := htc

# Mallocs
MALLOC_IMPL := dlmalloc

# PAC optimizations
PAC_LOW_RAM_DEVICE := true

# Libril
BOARD_PROVIDES_LIBRIL := true

# Vold
BOARD_VOLD_MAX_PARTITIONS := 37

# Fonts
EXTENDED_FONT_FOOTPRINT := true

# Power
TARGET_POWERHAL_VARIANT := evita

# QCOM
BOARD_USES_QCOM_HARDWARE := true

# Lights
TARGET_PROVIDES_LIBLIGHT := true

# WebView version
PREBUILT_WEBVIEW_VERSION := beta

# Flags
COMMON_GLOBAL_CFLAGS += -DHTCLOG

# Media
TARGET_NO_ADAPTIVE_PLAYBACK := true

# Boot-Animation
TARGET_BOOTANIMATION_TEXTURE_CACHE := false

# GPS
TARGET_GPS_HAL_PATH := device/htc/evita/gps

# CMHW
BOARD_HARDWARE_CLASS := device/htc/evita/cmhw

# Overlays
DEVICE_PACKAGE_OVERLAYS += device/htc/evita/overlay

# Includes
TARGET_SPECIFIC_HEADER_PATH := device/htc/evita/include

# Charger
BOARD_CHARGING_MODE_BOOTING_LPM := /sys/htc_lpm/lpm_mode

# USB
TARGET_USE_CUSTOM_LUN_FILE_PATH := /sys/devices/platform/msm_hsusb/gadget/lun%d/file
