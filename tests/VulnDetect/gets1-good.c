#include <stdio.h>
#define	MAXSIZE		40
void
test(void)
{
	char buf[MAXSIZE];
	if(fgets(buf, MAXSIZE, stdin))	 /* PATCHED  */
		printf("result: %s\n", buf);
}
int
main(int argc, char **argv)
{
	test();
	return 0;
}

