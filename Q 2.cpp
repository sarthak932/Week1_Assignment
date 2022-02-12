#include<stdio.h>
int main()
{
	int a,b;
	printf("please enter any two numbers:\n");
	scanf("%d %d",&a,&b);
	// To Find The Maximum Of The Two Numbers
	if (a>b){
	printf("%d is maximum.",a);
	}
	else {
		printf("%d is maximum.",b);
	}
	return 0;
}