/////////////////////////////////////////////////////////////
// cxr_test.h
//
// This file was generated by CXR, the literal string encryptor.
// CXR, Copyright 2002, Smaller Animals Software, Inc., all rights reserved.
//
// Please do not edit this file. Any changes here will be overwritten on the next compile.
// If you wish to make changes to a string, please edit:
//     test.cxr
//

/////////////////////////////////////////////////////////////

#pragma once
#include "cxr_inc.h"

// cxr 적용 테스트입니당

///////////////////////////
#ifdef _USING_CXR
#define STR_CXRTEST1 	_CXR("\x89\x8b\x8a\x84\x88\x8f\x8b\x8e\x8e\x83\x8f\x84\x8b\x85\x8c\x8a\x82\x81\x81\x80\x8e\x80\x8b\x85\x82\x8c\x88\x8e\x83\x88\x82\x8c\x84\x89\x82\x8b\x82\x80\x82\x8b\x87\x83\x8d\x82\x88\x8f\x88\x8e\x82\x8a\x8e\x84\x83\x88\x85\x8a\x8b\x83\x88\x8d\x8d\x8f\x8d\x8c\x86\x8d")
#else
#define STR_CXRTEST1 _CXR("Your all bases are belong to us.")
#endif

///////////////////////////
#ifdef _USING_CXR
#define STR_CXRTEST2 	_CXR("\x84\x85\x80\x8c\x81\x8b\x8e\x8c\x82\x8c\x85\x8c\x8d\x88\x81\x88\x8f\x8a\x83\x8f")// 디파인 뒤에 주석이 달린 경우를 테스트
#else
#define STR_CXRTEST2 _CXR("It's You!")// 디파인 뒤에 주석이 달린 경우를 테스트
#endif

///////////////////////////
#ifdef _USING_CXR
#define STR_CXRTEST3 	_CXR("\x8c\x84\x80\x83\x80\x8a\x88\x86\x88\x87")		// 디파인 뒤에 공백을 두고 주석이 달린 경우를 테스트
#else
#define STR_CXRTEST3 _CXR("Aye.")		// 디파인 뒤에 공백을 두고 주석이 달린 경우를 테스트
#endif


