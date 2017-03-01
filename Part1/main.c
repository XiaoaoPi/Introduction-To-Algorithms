#include "Part1.h"
#include "Scanning_Max_Subarray.c"
int main(void) {
	int A[] = {-45, 68 ,1 ,54 ,-482 , 321  , -35 , 32 , 5};
	int i = 0;
	Subarray * max_subarray = Scanning_Max_Subarray(A, 9);
	for(i = max_subarray -> left; i <= max_subarray -> right ; i++)
	{
		printf("%d ,",A[i] );
		if(! ((i+1) % LINELENGTH))
			putchar('\n');
	}
	printf("\n%d ,",max_subarray -> sum );
	getchar();
}