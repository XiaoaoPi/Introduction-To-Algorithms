#include "Part1.h"
#include "random.c"
#include "Quick_Sort.c"
#include <time.h>
#define ARRAYLENGTH 20000
int main(void) {
/*	int A[] = {-45, 68 ,1 ,54 ,-548 , 321  , -35 , 32 , 5};			//short array
	int length = sizeof(A)/sizeof(int);*/

	int length = ARRAYLENGTH;										//randomised long array
	long op = 0, ed = 0;
	int A[length];
	Generate_Array(A, length, 0-length/10, (int)(length * 1.5));
	op=clock();
	Quick_Sort(A,0, length-1);
	ed=clock();
	printf("%ld\n", ed - op);

	for(int i = 0; i < length; i++)
	{
		printf("%d,	  ",A[i] );
		if(! ((i+1) % LINELENGTH))
			putchar('\n');
	}
	getchar();
}
