/*String tokinezer code*/

#include <stdio.h>
struct st
{
	int a;
	int b;
};
void foo(struct st *);
int main(void)
{
	struct st ab = {128,786};
	struct st *pq = &ab;
	foo(pq);
	return 0;
}

void foo(struct st *p)
{
	char *pt;
	p->a = 768;
	p->b = 128;
	pt = (char *)p;
	printf("%d\n", *++pt);
}