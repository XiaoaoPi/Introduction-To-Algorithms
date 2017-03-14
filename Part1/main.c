#include "Quick_Sort.c"
#include <time.h>
int main(void) {
	int A[] = {-45, 68 ,1 ,54 ,-548 , 321  , -35 , 32 , 5};
	//long op, ed;
	int length = sizeof(A)/sizeof(int);
	//op=clock();
	Quick_Sort(A, 0, length - 1);
	//ed=clock();
	//printf("%ld\n", op-ed);
	for(int i = 0; i < length; i++)
	{
		printf("%d ,",A[i] );
		if(! ((i+1) % LINELENGTH))
			putchar('\n');
	}
	getchar();
}