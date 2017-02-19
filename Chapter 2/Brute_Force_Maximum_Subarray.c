#include "Chapter2.h"

Subarray * Brute_Force_Maximum_Subarray(int *A, int length)
{
	Subarray * max_subarray = (Subarray *)malloc(sizeof(Subarray));	//not freed
	int max_sum = INT_MIN;
	int right, left, i, j, sum;
	for( i = 0; i <length; i++)
	{
	    sum = 0;
		for(j = i; j < length; j++)
		{
			sum += A[j];
			if(sum > max_sum)
			{
				max_sum = sum;
				left = i;
				right = j;
			}
		}
	}
	max_subarray -> right = right;
	max_subarray -> left = left;
	max_subarray -> sum = max_sum;
	return max_subarray;
}