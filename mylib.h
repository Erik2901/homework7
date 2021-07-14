#pragma once

#define NUM(x, y) ((x >= 0) && (x < y) ? true : false ) 
#define SIZE 5
#define SwapINT(a, b) (a=a+b, b=a-b, a=a-b)
#define STRSIZE 1

float FillArr();

void PrintArr(int size, float arr[]);

namespace PrintMinusPlusNs
{
	void PrintMinusPlus(int size, float arr[]);
}

int *FillArr2(int *arr);
void PrintArr2(int *arr);

int *BubbleSort(int *arr);

