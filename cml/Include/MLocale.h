//////////////////////////////////////////////////
//
// 지역화 관련 코드 모음
//
// 
#ifndef _MLOCALE_H
#define _MLOCALE_H

#include <windows.h>
#include <string>

class MLocale
{
private:
	static int			GetCodePageFromCharset(int nCharset);
	static std::string	TransCode(const wchar_t *pwszString, int nCodePage = CP_UTF8);
	static std::string	TransCode(const char *pszString, int nOldCodePage = CP_ACP, int nNewCodePage=CP_UTF8);
public:
	static int			GetCharsetFromLang(LANGID langid);
	static int			GetCodePageFromLang(LANGID langid);
	static std::string	ConvUTF8ToAnsi(const char* pszString, LANGID langid = LANG_KOREAN);
	static std::string	ConvAnsiToUTF8(const char* pszString, LANGID langid = LANG_KOREAN);
	static std::wstring	ConvAnsiToUTF16(const char* pszString, LANGID langid = LANG_KOREAN);
	
	static std::string	ConvUTF16ToAnsi(const wchar_t* pszString, LANGID langid = LANG_KOREAN);		
	static std::string	ConvUTF16ToAnsi(std::wstring pszString, LANGID langid = LANG_KOREAN);

	static std::string	ConvUTF16ToUTF8(const wchar_t* pszString);
	static std::wstring ConvUTF8ToUTF16(const char* pszString);
	
	// TCHAR 변환용
	static std::string	ConvTCHARToAnsi(const TCHAR* pszString, LANGID langid = LANG_KOREAN)
	{
	#ifdef _UNICODE
		return ConvUTF16ToAnsi(pszString, langid);
	#else
		UNREFERENCED_PARAMETER(langid);
		return pszString;
	#endif
	}

	static std::wstring ConvTCHARToUTF16(const TCHAR* pszString, LANGID langid = LANG_KOREAN)
	{		
	#ifdef _UNICODE
		UNREFERENCED_PARAMETER(langid);
		return pszString;
	#else
		return ConvAnsiToUTF16(pszString, langid);
	#endif
	}

	static std::string ConvAnsiToTCHAR(const char* pszString, LANGID langid = LANG_KOREAN)
	{
	#ifdef _UNICODE
		UNREFERENCED_PARAMETER(langid);
		return ConvAnsiToUTF16(pszString, langid);
	#else
		UNREFERENCED_PARAMETER(langid);
		return pszString;
	#endif
	}

	static std::string ConvUTF16ToTCHAR(const wchar_t* pszString, LANGID langid = LANG_KOREAN)
	{
	#ifdef _UNICODE
		UNREFERENCED_PARAMETER(langid);
		return pszString;
	#else
		return ConvUTF16ToAnsi(pszString, langid);
	#endif
	}

	// 하위호환 - ConvAnsiToUTF16()
	static std::wstring	ConvAnsiToUCS2(const char* pszString, LANGID langid = LANG_KOREAN);
};


#endif