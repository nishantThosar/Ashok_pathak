#include <stdio.h>

int main(int argc, char const *argv[])
{
	float va = 3/2.0 + 1/2; // this is just like "float var = float + int".
	float va2 = 3/2; // this will demonstrate the same that it is int.
	printf("%.3f\n",va);
	printf("%.3f\n",va2);
	return 0;
}