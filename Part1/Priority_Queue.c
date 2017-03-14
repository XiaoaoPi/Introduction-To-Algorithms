#include "Part1.h"
#include "Max_Heap.c"
#define PARENT(i) ((i-1)/2)
int Heap_Maximum(HeapHead *H)
{
	return *(H->A);
}

int Heap_Extract_MAx(HeapHead *H)
{
	int *A = H->A,
		max = *A;
	if(H->heap_size <= 0)
	{
		puts("heap underflow.");
		return MIN_INT;
	}
	Exchange(A[0], A[H->heap_size - 1]);
	H->heap_size--;
	Max_Heapify(H, 0);
	return max;
}

void Heap_Increase_Key(HeapHead * H, int i, int key)
{
	int *A = H->A,
		parent = PARENT(i);
	if(A[i] > key)
	{
		puts("new key is smaller than the current key.");
		return ;
	}
	while(i > 0 && A[parent] <key)
	{
		A[i] = A[parent];
		i = parent;
		parent = PARENT[i];
	}
}

void Max_Heap_Insert(HeapHead * H, int key)
{
	int *A = H->A;
	if(H -> heap_size == H->length)
	{
		puts("heap overflow");
		return ;
	}
	H->heap_size ++;
	A[H->heap_size-1] = MIN_INT;
	Heap_Increase_Key(H, H->heap_size-1, key);
}