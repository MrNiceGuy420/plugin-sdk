/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "RenderWare.h"

class CShadowCamera
{
public:
	RwCamera *m_pShadowCamera;
	RwTexture *m_pShadowRenderTexture;

	RwRaster *DrawOutlineBorder(RwRGBA const& color);
	RwRaster *RasterGradient(RwRaster *Raster);
	RwRaster *RasterBlur(RwRaster *raster, int numPasses);
	RwRaster *RasterResample(RwRaster *raster);
	RwRaster *MakeGradientRaster();
	void InvertRaster();
	RwCamera *Update(RpAtomic *atomic);
	void Destroy();
	RwCamera *Create(int rasterSize);
};

VALIDATE_SIZE(CShadowCamera, 0x08);