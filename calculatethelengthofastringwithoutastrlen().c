#include<stdio.h>

int string_length(char *str) {
	int len = 0;
	while (*str++) 
	len++;
	return len;
}  int main() {
	char str[] = "Sample String";
	printf("Length of %s is %d\n", str, string_length(str));
	return 0;
}
