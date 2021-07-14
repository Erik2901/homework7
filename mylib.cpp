#include <iostream>
#include "mylib.h"


///// exercise 1, 5

float FillArr(){
	float number;
	std::cin >> number;
	return  number;
}

void PrintArr(int size, float arr[]) {
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

namespace PrintMinusPlusNs
{
	void PrintMinusPlus(int size, float arr[]) {
		int minus = 0, plus = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] < 0)
			{
				minus++;
			}
			else {
				plus++;
			}
		}
		std::cout << "Minus number count: " << minus << " " << "Plus number count: " << plus << std::endl;
	}
}
//////

///// exercise 3

int *FillArr2(int *arr) {
	std::cout << "Enter 5 int numbers for array: ";
	for (size_t i = 0; i < SIZE; i++)
	{
		std::cin >> arr[i];
	}
	return  arr;
}

int* BubbleSort(int* arr)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				SwapINT(arr[j], arr[j + 1]);
			}
		}
	}
	return arr;
}

void PrintArr2(int *arr) {
	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

/////

