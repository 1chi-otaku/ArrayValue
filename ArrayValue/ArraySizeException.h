#pragma once
#include "Exception.h"
class ArraySizeException :
    public Exception
{
public:
    ArraySizeException();
    ArraySizeException(string mess);
    string GetMessage();
    void GetExcpetion();
};

