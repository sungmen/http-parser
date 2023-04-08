#pragma once

#ifdef HTTPPARSER_EXPORTS
#define HTTPPARSER_API __declspec(dllexport)
#else
#define HTTPPARSER_API __declspec(dllimport)
#endif

#include "Http.h"
#include <iostream>
HTTPPARSER_API class HttpParser
{
public:
	Http* http;
	HTTPPARSER_API HttpParser();
	HTTPPARSER_API HttpParser(std::string httpStr)
	{
		http = new Http(httpStr);
	}
	HTTPPARSER_API void setHTTP(std::string httpStr);
	HTTPPARSER_API std::string getHttpSource();
	HTTPPARSER_API std::string getBody();
};
