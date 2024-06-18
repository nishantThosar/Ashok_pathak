/*String tokinezer code*/

#include <stdio.h>
#include <string.h>
int main(void)
{
	char *ptr; //char ptr for catching return value of strtok;
	ptr = strtok("jan:feb,mar", ":");
	// printf("%s", ptr);
	do{
		ptr = strtok(NULL, ":");
		if (ptr)
		{
			printf("%5s\n", ptr );
		}
	}while(ptr);
	return 0;
}