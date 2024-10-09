#include<stdio.h>
#include<string.h>

void reverse(char *str) {
	char *start = str;
	char *end = str + strlen(str) - 1;
	
	char temp;
	while (end > start) {
		temp = *start;
		*start++ = *end;
		*end-- = temp;
	}
}

int main() {
	char str[] = "Hello, world!";
	reverse(str);
	printf("Reversed string: %s\n", str);
	
	return 0;
}
