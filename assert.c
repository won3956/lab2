#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>

void foo(int num)
{
	assert(((num>=0) && (num<=100)));
	printf("foo : num = %d\n", num);
}

int main(int argc, char *argv[])
{
	int num;

	if(argc < 2)
	{
		fprintf(stderr, "Usage : assert_test aNumber\n(0 <= Number <= 100)\n");
		exit(1);
	}

	num = atoi(argv[1]);
	foo(num);
}
