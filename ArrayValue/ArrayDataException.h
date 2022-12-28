#pragma once
#include "Exception.h"
class ArrayDataException :
    public Exception
{
public:
    ArrayDataException();
    ArrayDataException(string mess);
    string GetMessage();
    void GetExcpetion();
};

