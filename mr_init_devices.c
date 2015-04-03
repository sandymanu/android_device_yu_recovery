#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
	"/sys/class/graphics/fb0",
	
	"/sys/block/mmcblk0",
	"/sys/bus/mmc",
	"/sys/bus/mmc/drivers/mmcblk",
	"/sys/module/mmc_core",
	"/sys/module/mmcblk",
	
	"/sys/devices/virtual/input*",
	"/sys/devices/virtual/misc/uinput",
	
	// for adb
	"/sys/devices/virtual/tty/ptmx",
	"/sys/devices/virtual/android_usb/android0*",
	"/sys/class*",
	"/sys/bus/usb",
	
	// for qualcomm overlay - /dev/ion
	"/sys/devices/virtual/misc/ion",
	
	// sdcard
	"/sys/block/mmcblk1",
	
	
	NULL
};
