#include "Chapter2.h"
Subarray * Scanning_Max_Subarray(int *A, int length)
{
	Subarray * max_subarray = (Subarray *)malloc(sizeof(Subarray));	
	int i,
		max_right,
		sum = 0,
		max_sum = INT_MIN;
	for (i = 0; i < length; ++i)
	{
		sum += A[i];
		if(sum > max_sum)
		{
			max_sum = sum;
			max_right = i;
		}
		if(sum < 0)
		{
			sum = 0;
		}
	}
	for(sum = max_sum, i = max_right; sum != 0; i--)
		sum -= A[i];
	max_subarray -> left = i+1;
	max_subarray -> right = max_right;
	max_subarray -> sum = max_sum;
	return max_subarray;
}