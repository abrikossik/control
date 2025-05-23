#include "header.h"

int main()
{
	String_number string[100];

	int32_t counter{ InputStruct(string) };
	
	QuickSort(string, 0, counter - 1);
	PrintStruct(string, counter);
	
	return 0;
}