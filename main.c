#include <stdio.h>

int main(void)
{
	int i;
	int grade[5];
	int average = 0;
	int *gptr;
	
	for (i=0;i<5;i++)
	{
		printf("grade[%i] = ", i);
		scanf("%d", &grade[i]);		
	}
	gptr = grade;
	for(i=0;i<5;i++)
	{
		printf("grade[%d] = %d \n", i, *(gptr+i));
		average += *(gptr+i);
	}
	printf("\n -- average : %i\n", average/5);
	return 0;
}
