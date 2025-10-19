#include <stdio.h>
#include <string.h>
#define	MAXSIZE		40
void
test(void)
{
	char buf[MAXSIZE];
	if(fgets(buf, 256, stdin))					/* FLAW */
		printf("result: %s\n", buf);
}
int
main(int argc, char **argv)
{
	test();
	return 0;
}

