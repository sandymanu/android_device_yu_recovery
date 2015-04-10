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
	"/sys/devices/soc.0",
	"/sys/devices/soc.0/7824900.sdhci",
	"/sys/devices/soc.0/7824900.sdhci/mmc_host",
	"/sys/devices/soc.0/7824900.sdhci/mmc_host",
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0",
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001",
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p21", //boot
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p27", //cache
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p1", //modem
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p26", //persist
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p25", //system
	"/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p29", //userdata
	"/sys/bus/mmc",
	"/sys/bus/mmc/drivers/mmcblk",
	"/sys/module/mmc_core",
	"/sys/module/mmcblk",
	
	"/sys/devices/soc.0/gpio_keys.65/input*",
	"/sys/devices/virtual/input*",
	"/sys/devices/virtual/misc/uinput",
	"/sys/devices/soc.0/78b6000.i2c/i2c-0/0-0068/input*",

	// for adb
	"/sys/devices/virtual/tty/ptmx",
	"/sys/devices/virtual/android_usb/android0*",
	"/sys/bus/usb",
	
	// sdcard
	"/sys/block/mmcblk1",
	
	NULL
};