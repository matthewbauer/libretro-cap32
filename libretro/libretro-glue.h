#ifndef LIBRETRO_CAP32_H
#define LIBRETRO_CAP32_H

#include <stdint.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define TEX_WIDTH 400
#define TEX_HEIGHT 300
#define CROP_WIDTH 320
#define CROP_HEIGHT 220

#define NPLGN 10
#define NLIGN 5
#define NLETT 5

#define XSIDE  (CROP_WIDTH/NPLGN -1)
#define YSIDE  (CROP_HEIGHT/8 -1)

#define YBASE0 (CROP_HEIGHT - NLIGN*YSIDE -8)
#define XBASE0 36+4+2
#define XBASE3 36
#define YBASE3 YBASE0 -4

#define STAT_DECX 120
#define STAT_YSZ  20

#define RGB565(r, g, b)  (((r) << (5+6)) | ((g) << 6) | (b))

/* Zoom game resolution */
#define MXZO 384
#define MYZO 272

typedef struct mres
{
   int x,y;
}MRES;

/* Forward declarations */
int loadadsk (char *arv,int drive);
void emu_reset(void);
void retro_joy0(unsigned char joy0);
void retro_key_down(int key);
void retro_key_up(int key);
int snapshot_save (char *pchFileName);
void enter_gui(void);
int update_input_gui(void);

#endif
