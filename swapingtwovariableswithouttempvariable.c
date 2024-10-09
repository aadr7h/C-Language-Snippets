#include<stdio.h>
int main() {
	int a = 10, b = 20;
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("After swapping: a + %d, b = %d\n", a, b);
	return 0;
}
