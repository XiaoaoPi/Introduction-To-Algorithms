int Binary_Sort(int *A, int start, int end, int key){
	int mid = (start + end)/2;
	if(A[mid] == key)
		return mid + 1;
	if(start >= end)
		return 0;
	if(A[mid] > key)
		return Binary_Sort(A, start, mid, key);
	else 
		return Binary_Sort(A, mid + 1, end, key);
}