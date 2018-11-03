/*
*     COPYRIGHT NOTICE
*     Copyright(c) 2018, Team Shanghai Dream Equinox
*     All rights reserved.
*
* @file		SakuraElement.h
* @brief	This File is SakuraGUI DLL Project.
* @author	Alopex/Helium
* @version	v1.00a
* @date		2018-10-16	v1.00a	alopex	Create Project.
*/
#pragma once

#ifndef __SAKURAELEMENT_H_
#define __SAKURAELEMENT_H_

//Include SakuraGUI Common Header File
#include "SakuraUICommon.h"
#include "SakuraBlend.h"

//Macro Definition
#ifdef	CERASUS_EXPORTS
#define SAKURAELEMENT_API	__declspec(dllexport)
#else
#define SAKURAELEMENT_API	__declspec(dllimport)
#endif

#define	SAKURAELEMENT_CALLMETHOD	__stdcall

//Class Definition
class SAKURAELEMENT_API CSakuraElement
{
protected:
	LPDIRECT3DDEVICE9	m_pD3D9Device;					// CSakuraElement D3D9��Ⱦ�豸

public:
	CSakuraBlendFont	m_FontBlend;					// CSakuraElement ������Ⱦ��
	CSakuraBlendTexture	m_TextureBlend;					// CSakuraElement ������Ⱦ��

public:
	CSakuraElement(LPDIRECT3DDEVICE9 pD3D9Device);		// CSakuraElement ���캯��
	~CSakuraElement();									// CSakuraElement ��������

	CSakuraBlendFont&		SAKURAELEMENT_CALLMETHOD	GetFontBlend();			// CSakuraElement ��ȡ������Ⱦ��
	CSakuraBlendTexture&	SAKURAELEMENT_CALLMETHOD	GetTextureBlend();		// CSakuraElement ��ȡ������Ⱦ��

	void				SAKURAELEMENT_CALLMETHOD	Refresh();				// CSakuraElement ˢ����Ⱦ��Դ

};


#endif // !__SAKURAELEMENT_H_