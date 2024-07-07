#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i = atoi(argv[1]);

	int j = i++ + ++i;
	printf("%d\n", j);
	return 0;
}