#include "ArraySizeException.h"

ArraySizeException::ArraySizeException():Exception()
{
}

ArraySizeException::ArraySizeException(string mess):Exception(mess)
{
}

string ArraySizeException::GetMessage()
{
	return message;
}

void ArraySizeException::GetExcpetion()
{
	cout << "ArraySizeException" << endl;
}
