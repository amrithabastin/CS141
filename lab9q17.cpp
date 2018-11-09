#include <iostream>
using namespace std;

char* copy(char* str2,char* str)
{
	if (str==NULL)
		return NULL;
	char* ptr=str2;
	while(*str!='\0')
	{
		*str2=*str;
		str2++;
		str++;
	}
	*str2='\0';
	return ptr;
}
