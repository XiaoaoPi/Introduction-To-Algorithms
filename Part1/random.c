void Generate_Array(int *A, int length, int low, int high)
{
	for(int i = 0; i < length; i++)
		A[i] = Rand_In_Range(low, high);
}

int Rand_In_Range(int low, int high)
{
	return low + rand()%(high - low + 1);
}