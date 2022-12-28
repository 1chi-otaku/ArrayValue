#pragma once
#include <iostream>
using namespace std;
class Exception
{
protected:
	string message;
public:
	Exception();
	Exception(string mess);
	virtual string GetMessage() = 0;
	virtual void GetExcpetion() = 0;
};

