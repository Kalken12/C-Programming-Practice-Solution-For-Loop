/*

2. Write a C program to find the sum of first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55
*/
#include <stdio.h>
void main()
{
	int num, sum=0;
	printf("first 10 natural number is: \n");
	for (num=1; num<=10; num++)
	{
		printf("%d ",num);
		sum=sum+num;
	}
	printf("The sum is: %d",sum);
}
