#include "Exception.h"

Exception::Exception()
{
	message = "N/A";
}

Exception::Exception(string mess)
{
	message = mess;
}
