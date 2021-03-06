//
// showpcx.cpp
//
// Author: Johan Gardhage <johan.gardhage@gmail.com>
//
#include "lib/retro.h"
#include "lib/retromain.h"

void DEMO_Render(double deltatime)
{
	Texture *texture = RETRO_GetTexture();
	RETRO_Blit(texture->image, texture->width * texture->height);
}

void DEMO_Initialize()
{
	RETRO_LoadTexture("assets/showpcx_320x240.pcx");
	RETRO_SetPaletteFromTexture();
}
