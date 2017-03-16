#ifndef CHAPTER2
#define CHAPTER2
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define OVERFLOW -1
#define LINELENGTH 15
#define SENTINEL 30000
#define Exchange(a,b,tmp) (tmp = b, b = a, a = tmp)

/////////////////////////
//Definition of Struct //
/////////////////////////
typedef struct Subarray
{
	int left;
	int right;
	int sum;
}Subarray;

typedef struct HeapHead
{	
	int length;
	int heap_size;
	int * A;
}HeapHead;

/////////////////////////////
//Declaration of Functions //
/////////////////////////////
/*random*/
void Generate_Array(int *A, int length, int low, int high);
int Rand_In_Range(int low, int high);

int Binary_Sort(int *A, int start, int end, int key);
Subarray * Brute_Force_Maximum_Subarray(int *A, int length);

Subarray * Divide_Conquer_Maximum_Subarray(int *A, int low, int high);
Subarray * Find_Max_Crossing_Subarray(int *A, int low, int mid, int high);

void Insertion_Sort(int *A, int A_length) ;

int Invertion_Counter(int *A, int start, int end);
int Merge1(int *A, int start, int mid, int end);

void Merge_Sort(int *A, int start, int end);
void Merge2(int *A, int start, int mid, int end);

void Selection_Sort(int *A, int A_length) ;
/*Scanning_Max_Subarray*/
Subarray * Scanning_Max_Subarray(int *A, int length);
/*Heap_Sort*/
void Max_Heapify(HeapHead *H, int i);
void Build_Maxheap(HeapHead *H);
void Heap_Sort(int * A, int length);
/*Priority_Queue(Based On MaxHeap)*/						//not tested
int Heap_Maximum(HeapHead *H);
int Heap_Extract_MAx(HeapHead *H);
void Heap_Increase_Key(HeapHead * H, int i, int key);
void Max_Heap_Insert(HeapHead * H, int key);
/*Quick_Sort(Randomised)*/
void Quick_Sort(int * A, int low, int high);
int Randomised_Partition(int * A, int low, int high);
int Partition(int * A, int low, int high);
#endif // CHAPTER2
