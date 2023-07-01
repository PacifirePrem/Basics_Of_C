//To print factorial of a number using C program.


#include<stdio.h>
void main()
{
	int n, f=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n<0)
	    printf("Factorial not possible");
    else if(n==0)
	  printf("factorial = 1");
	else
	{
		while(n>=1)
		{
			f= f*n;
			n= n-1;
		}
	}
	printf("Factorial = %d", f);
}
