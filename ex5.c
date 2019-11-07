//Implement a C function called ex5 such that it achieves 
//the same functionality as the machine code of objs/ex5_sol.o
//Note: you need to figure out ex5()'s function signature yourself; 
//the signature is not void ex5(node *n). However, as a hint, 
//ex5 does take node * as an argument.
 
#include <assert.h>
#include "ex5.h"

int
ex5(node *n) {
	int i;
	int x;
	do{
		if(n==0)
		{
			return 1;
		}
		if(n->next==0)
		{
			return 1;
		}
		i=n->value;
		n=n->next;
		x=n->value;
	}while(i<=x);
	return 0;
}
