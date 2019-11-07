#include <stdio.h>

void swap (int x, int y){
	int temp;
	temp = x;
	x =y;
	y = temp;
}
void main(void){
	int a = 3;
	int b = 5;
	swap(a,b);
	printf("a:%i, b:%i \n", a, b);
	
}
