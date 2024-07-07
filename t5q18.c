
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *arr[3] = {
		"hii",
		"Hello",
		"world"
	}; // char array pointer declaration ends

	printf("%s\n",*(arr+1)); //valid
	// printf("%s\n",*arr[0]); //error cannot drefer as array name is already a pointer.
	// printf("%s\n",*arr[1]); //error cannot drefer as array name is already a pointer.
	printf("%s\n", arr[0]); //valid


	return 0;
}