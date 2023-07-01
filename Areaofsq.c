//To print area of a square using C program.


#include<stdio.h>
void main()
{
	int a;
	int area;
	
	printf("Enter the side: ");
	scanf("%d", &a);
	
	area = a*a;
	printf("\nArea of Square =%d",area);
}
