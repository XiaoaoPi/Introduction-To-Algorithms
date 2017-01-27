void Merge_Sort(int *A, int start, int end){
	if(start < end)
	{
		int mid = (start + end)/2;
		Merge_Sort(A, start, mid);
		Merge_Sort(A, mid + 1, end);
		Merge(A, start, mid, end);	//pass mid to avoid redundent calculation
	}
}

void Merge(int *A, int start, int mid, int end){		//in the comment is the solution which is without sentinel
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
			// if(l_cursor >= l_length)
			// {
			// 	for(i = i+1; i <= end ; i++, r_cursor++)
			// 		A[i] = right[r_cursor];
			// 	break;
			// }
		}
		else
		{
			A[i] = right[r_cursor];
			r_cursor++;
			// if(r_cursor >= r_length)
			// {
			// 	for(i = i + 1; i <= end ; i++, l_cursor++)
			// 		A[i] = left[l_cursor];
			// 	break;
			// }
		}
	}
}