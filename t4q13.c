/*Ashok Pathak Test 4 questioion */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	if (argc ==1)
	{
		printf("Breaking\n");
		exit(1);
	}//if ends
	while(**argv, --argc)
	{
		printf("%s",*++argv);
	
		while(argc, **argv)
		{
			printf("%c", *(*argv)++);
		}//while ends
		putchar('\n');
	}
	return 0;
}