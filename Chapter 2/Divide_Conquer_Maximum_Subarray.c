#include "Chapter2.h"

Subarray * Find_Max_Crossing_Subarray(int *A, int low, int mid, int high)
{
	Subarray * max_subarray = (Subarray *)malloc(sizeof(Subarray));	
	int sum = 0;
	int left_sum = INT_MIN, right_sum = INT_MIN;
	int max_left, max_right;
	int i;
	for(i = mid, sum = 0; i >= low; i--)
	{
		sum += A[i];
		if(sum > left_sum)
		{
			left_sum = sum;
			max_left = i;
		}
	}
	for(i = mid + 1, sum = 0; i <= high; i++)
	{
		sum += A[i];
		if(sum > right_sum)
		{
			right_sum = sum;
			max_right = i;
		}
	}
	max_subarray -> sum = right_sum +left_sum; 
	max_subarray -> left = max_left;
	max_subarray -> right = max_right;
	return max_subarray;
}

Subarray * Divide_Conquer_Maximum_Subarray(int *A, int low, int high)
{
	Subarray * max_subarray = (Subarray *)malloc(sizeof(Subarray));	
	if(low >= high)
	{
		max_subarray -> sum = A[low];
		max_subarray -> right = low;
		max_subarray -> left = low;
		return	max_subarray;
	}
	int mid = (low + high)/2;
	Subarray * left_max_array,
			 * right_max_array,
			 * cross_max_array;
	left_max_array = Divide_Conquer_Maximum_Subarray(A, low, mid);
	right_max_array = Divide_Conquer_Maximum_Subarray(A, mid + 1, high);
	cross_max_array = Find_Max_Crossing_Subarray(A, low, mid, high);
	int left_sum = left_max_array -> sum,
		right_sum = right_max_array -> sum,
		cross_sum = cross_max_array -> sum;
	if(left_sum > right_sum && left_sum > cross_sum)
	{
		free(right_max_array);
		free(cross_max_array);
		return left_max_array;
	}
	if(right_sum > left_sum && right_sum > cross_sum)
	{
		free(left_max_array);
		free(cross_max_array);
		return right_max_array;
	}
	free(left_max_array);
	free(right_max_array);
	return cross_max_array;
}
