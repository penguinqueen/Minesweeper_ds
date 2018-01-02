/*
 *	File Name	:	graphic_sub.h
 *	Author		:
 *	Last Update :	23.12.2017
 *
 *	Header file of graphics on sub screen
 */

#ifndef GRAPHIC_SUB_H_
#define GRAPHIC_SUB_H_
#include <nds.h>


u16* gfx;
void configureGraphics_Sub(); // To configure the SUB engine
void configBG2_Sub();
void fill_sub(); // Configure the sub engine with all the 100 buttons
void fillScreen_Sub(u16 color); //Initialize with a color
void fill_19x19_one(unsigned int top, unsigned int left);
void fill_19x19_two(unsigned int top, unsigned int left);
void fill_19x19_three(unsigned int top, unsigned int left);
void fill_19x19_four(unsigned int top, unsigned int left);
void fill_19x19_five(unsigned int top, unsigned int left);
void fill_19x19_six(unsigned int top, unsigned int left);
void fill_19x19_seven(unsigned int top, unsigned int left);
void fill_19x19_eight(unsigned int top, unsigned int left);
void fill_19x19_button(unsigned int top, unsigned int left, u16 out, u16 in); //The buttons
void fill_19x19_bomb(unsigned int top, unsigned int left);

/************************
 * Macros for the colors
 ***********************/
#define	RED ARGB16(1,31,0,0)
#define GREEN ARGB16(1,0,31,0)
#define DARK_GREEN ARGB16(1,0,25,0)
#define	BLUE ARGB16(1,0,0,31)
#define DARK_BLUE ARGB16(1,0,0,15)
#define DARK_RED ARGB16(1,15,0,0)
#define	YELLOW ARGB16(1,31,31,0)
#define	LIGHT_BLUE ARGB16(1,0,31,31)
#define	WHITE ARGB16(1,31,31,31)
#define	BLACK ARGB16(1,0,0,0)
#define GREY ARGB16(1,10,10,10)
#define LIGHT_GREY ARGB16(1,20,20,20)
#define MAGENTA ARGB16(1,31,0,31)

#endif /* GRAPHIC_SUB_H_ */
