#include "Part1.h"
//test git plugin
//test again
void Quick_Sort(int *A, int low, int high)
{
	if(low >= high)
		return ;
	int pivot_i = Randomised_Partition(A, low ,high);
	Quick_Sort(A, low, pivot_i - 1);
	Quick_Sort(A, pivot_i + 1, high);
}

int Randomised_Partition(int *A, int low, int high)
{
	int num = rand()%(high - low + 1) + low;
	int tmp = 0;
	Exchange(A[num], A[high], tmp);
	return Partition(A, low, high);
}

int Partition(int *A, int low, int high)
{
	int pivot = A[high],
		minor = low - 1,
		tmp = 0;
	for(int i = low; i < high; i++)
	{
		if(A[i] <= pivot)
		{
			minor++;
			Exchange(A[i], A[minor], tmp);
		}
	}
	Exchange(A[high], A[minor+1],tmp);
	return minor+1;
}