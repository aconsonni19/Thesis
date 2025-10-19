#include <stdio.h>
#include <string.h>
#define	MAXSIZE		40
void
test(void)
{
	char buf[MAXSIZE], *p;
        int ch;
	p = buf;
	while((ch = getc(stdin)) != EOF && ch != '\n')
		*p++ = ch;				/* Vulnerabile! */
	*p++ = 0;
	printf("result: %s\n", buf);
}
int
main(int argc, char **argv)
{
	test();
	return 0;
}

