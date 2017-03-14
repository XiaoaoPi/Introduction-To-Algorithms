#include "Part1.h"
#include "Max_heap.c"
void Heap_Sort(int *A, int length)
{
	HeapHead * H = (HeapHead *)malloc(sizeof(HeapHead));	//freed
	if(!H)
	{
		printf("OverFlow\n");
		exit(OVERFLOW);
	}
	H->A = A;
	H->length = length;
	H->heap_size = 0;
	Build_Maxheap(H);
	for(int i = H->heap_size - 1;i > 0; i--)
	{
		Exchange(A[0], A[i]);
		H->heap_size--;
		Max_Heapify(H, 0);
	}
	free(H);
}
