#ifndef _RKTOOLS_H
#define _RKTOOLS_H

#define PATH_LEN 50
#define usb_path "/mnt/usb_storage/"
#define sd_path "/mnt/external_sd/"

#define OFF_VALUE 0
#define ON_VALUE 1

#define EMMC_POINT_NAME "emmc_point_name"
#define SD_POINT_NAME "sd_point_name"
#define SD_POINT_NAME_2 "sd_point_name_2"

static const char *point_items[] = {
    "/dev/mmcblk0",
    "/dev/mmcblk1",
    "/dev/mmcblk2",
    "/dev/mmcblk3",
};

enum type{
    MMC,
    SD,
    SDIO,
    SDcombo,
};

static const char *typeName[] = {
    "MMC",
    "SD",
    "SDIO",
    "SDcombo",
};

char* getSerial();
void setFlashPoint();

#endif
