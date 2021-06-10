/*

3. Write a program in C to display n terms of natural number and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
*/
#include <stdio.h>
void main()
{
	int limit,i, sum;
	printf("Enter the limit\n");
	scanf("%d",&limit);
	printf("The first %d natural no is\n", limit);
	for (i=1; i<=limit; i++)
	{
		printf("%d ",i);
	}
	
}
