#pragma once

#include <string>
#include <map>

class Http
{
private:
	//
	static constexpr char BODY[] = "BODY";
	static constexpr char METHOD[] = "METHOD";
	static constexpr char CR[] = "\r";
	static constexpr char LF[] = "\n";

private:
	// name
	std::string strName;
	int str_len;
	std::string method;
	std::string base;
	std::string resopnseCode;
	std::string responseMsg;
	std::string body;
	std::string bodyAsString;
	std::string bodyAsBytes;
	std::string url;
	std::string remote_user;
	std::string remote_pass;
	std::string status;
	std::string auth_realm;
	std::string redirect;
	std::string strHttp;
	std::map<std::string, std::string> strM;

public:
	std::string getRequest();
	void setRequest(std::string strHttp);
	Http();
	Http(std::string strHttp) : strHttp(strHttp)
	{
		setRequest(strHttp);
	};
	void setBody(std::string strBody)
	{
		Http::body = strBody;
	}
	std::string getBody()
	{
		std::string strRes = BODY;
		strRes.append(LF);
		strRes.append(Http::body);
		return strRes;
	}
	void headerParser(std::string strHttp);
	void parser(std::string strHttp);
};
