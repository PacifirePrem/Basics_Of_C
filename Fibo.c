//To print Fibonacci series using C program.


#include<stdio.h>
void main()
{
	int i, n, t1=0, t2=1, nt;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	printf("Fibonacci Series: ");
	
	for(i = 1; i<= n; i++)
	     {
	     	printf("%d\t", t1);
	     	nt= t1+t2;
	     	t1= t2;
	     	t2= nt; 
		 }
}
