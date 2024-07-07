
#include "stdio.h"
int main(int argc, char const *argv[])
{
	struct a{

	int tmp[3];

	};

	int j;


	static int p[3] = { 1,2,3}; 
	static int q[3] = { 4,5,6};

	*(struct a)q= *(struct a *)p;

	for(j=0; j <3; j++)
		printf("%3d" *(q+j));
	
	return 0;
}