//Implement a C function called ex3 such that it achieves 
//the same functionality as the machine code of objs/ex3_sol.o
//Note: you need to figure out ex3()'s function signature yourself; 
//the signature is not void ex3()

#include <assert.h>

void ex3(char a[], char b[], int n)
{
	char temporary='\0';
	for(int j=0;j<n;j++)
	{
		temporary=a[j];
		a[j]=b[j];
		b[j]=temporary;
		
	}
}
