#include "Part1.h"
#define PARENT(i) ((i-1)/2)
#define LEFT(i) (2*i+1)
#define RIGHT(i)  (2*i+2)
void Max_Heapify(HeapHead * H, int root)
{
	int * A = H -> A,
		r   = RIGHT(root),
		l   = LEFT(root),
		max = root;
	if(r < H->heap_size && A[r] > A[max])
		max = r;
	if(l < H->heap_size && A[l] > A[max])
		max = l;
	if(max != root)
	{
		Exchange(A[root], A[max]);
		Max_Heapify(H, max);
	}
}

void Build_Maxheap(HeapHead *H)
{
	H -> heap_size = H->length;
	for(int i = H->length /2 - 1; i >=0; i--)
		Max_Heapify(H, i);
}
