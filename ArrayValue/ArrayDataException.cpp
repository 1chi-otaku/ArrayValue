#include "ArrayDataException.h"

ArrayDataException::ArrayDataException():Exception()
{
}

ArrayDataException::ArrayDataException(string mess):Exception(mess)
{
}

string ArrayDataException::GetMessage()
{
    return message;
}

void ArrayDataException::GetExcpetion()
{
    cout << "ArrayDataException: " << message << endl;
}
