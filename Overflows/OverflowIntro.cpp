#include <stdio.h>
#include <string.h>

//turned off all warnings
//changed control flow, security check in code generation
int f()
{
	int x = 25;
	char something[12];
	char first[5] = "Tom";
	char second[5];
	//include null character in overflow
	scanf("%s", second);

	//printf("%s at %p\n", first, first);
	//printf("%s at %p\n", second, second);
	printf("End of fx f");
	return 0;
}

int main() 
{
	f();
	printf("End");
	return 0;
}
