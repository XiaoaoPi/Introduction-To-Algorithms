#ifndef CHAPTER2
#define CHAPTER2
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define LINELENGTH 5

/////////////////////////
//Definition of Struct //
/////////////////////////
typedef struct Subarray
{
	int left;
	int right;
	int sum;
}Subarray;

/////////////////////////////
//Declaration of Functions //
/////////////////////////////

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
/*Scanning_Max_Subarray.c*/
Subarray * Scanning_Max_Subarray(int *A, int length);

#endif // CHAPTER2
