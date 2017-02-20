int Invertion_Counter(int *A, int start, int end){
	int num = 0;
	if(start < end)
	{
		int mid = (start + end)/2;
		num += Invertion_Counter(A, start, mid);
		num += Invertion_Counter(A, mid + 1, end);
		num += Merge(A, start, mid, end);
	}
	return num;
}

int Merge1(int *A, int start, int mid, int end){
	int num = 0;
	int l_length = mid - start +1;
	int r_length = end - mid;
	int left[l_length + 1];
	int right[r_length + 1];
	int l_cursor = 0, r_cursor = 0;
	int i;
	for(i = 0; i < l_length; ++i)
		left[i] = A[start + i];
	left[l_length] = SENTINEL;
	for(i = 0; i < r_length; i++)
		right[i] = A[mid + 1 + i];
	right[r_length] = SENTINEL;
	for(i = start; i <= end; ++i)
	{
		if(left[l_cursor] <= right[r_cursor])
		{
			A[i] = left[l_cursor];
			l_cursor++;
			num += r_cursor;/*************/
		}
		else
		{
			A[i] = right[r_cursor];
			r_cursor++;
		}
	}
	return num;
}