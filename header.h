#define _CRT_SECURE_NO_WARNINGS
#ifndef HEADER
#define HEADER

#include <iostream>
#include <string>
#include <cstdlib>

struct String_number
{
	char string[100];
	int32_t number;
};

int32_t InputStruct(String_number[]);
void QuickSort(String_number[], int32_t, int32_t);
void PrintStruct(String_number[], int32_t);
#endif

