#include "HttpParser.h"

void HttpParser::setHTTP(std::string strHttp)
{
	http = new Http(strHttp);
}

std::string HttpParser::getHttpSource()
{
	return http->getRequest();
}

std::string HttpParser::getBody()
{
	return http->getBody();
}
