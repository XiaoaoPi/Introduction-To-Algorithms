void Selection_Sort(int *A, int A_length){
	int min, i, j;
	for ( j = 0; j < A_length; ++j)
	{
		min = A[j];
		i = j+1;
		while(i < A_length)
		{
			if(A[i] < min)
			{
				A[j] = A[i];
				A[i] = min;
				min = A[j];
			}
			i++;
		}
	}
}