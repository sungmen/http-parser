#include "Http.h"
void Http::headerParser(std::string strHttp)
{
	setBody(strHttp);
}

void Http::parser(std::string strHttp)
{
	int nIdx = 0;
	int nStrHttpSize = strHttp.size();
	std::string strStr = "\u0000";
	while (nIdx < nStrHttpSize)
	{
		if (strHttp.at(nIdx) == '<')
		{
			nIdx--;
			break;
		}
		nIdx++;
	}
	headerParser(strHttp.substr(0, nIdx));
}


void Http::setRequest(std::string strHttp)
{
	Http::strHttp = strHttp;
	parser(strHttp);
}

std::string Http::getRequest()
{
	return Http::strHttp;
}
