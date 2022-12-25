
#pragma once
#include "./C++Header_STL.h"



namespace util
{
	enum SplitType { Contain, Except };

	static vector<string> Split(string _text, SplitType _split_type, regex _format = regex(R"()"))   // ���Խ����� ���ڿ��� Split�Ѵ�
	{
		sregex_token_iterator iter, end;
		if (_split_type == Contain) iter = sregex_token_iterator(_text.begin(), _text.end(), _format);
		else if (_split_type == Except) iter = sregex_token_iterator(_text.begin(), _text.end(), _format, -1);
		return vector<string>(iter, end);
	}
}