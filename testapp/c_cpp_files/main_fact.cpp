#include <stdio.h>
#include <stdlib.h>

extern int factorial(int);

template <class T>

void check(T expect, T result)
{
    if (expect == result)
    {
	printf("\nCorrect:\n Expected %d got %d \n",expect,result);
    }
    else 
    {
	printf("\nIncorrect:\n Expected %d got %d \n",expect,result);
	exit (1);
   }
}

int main(void)
{
	int result;
	result = factorial(0);
        printf("Input submitted to the function: 0");
	check(1, result);
	result = factorial(3);
        printf("Input submitted to the function: 3");
	check(6, result);
	printf("All Correct\n");
	return 0;
}
