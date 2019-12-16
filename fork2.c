//fork2.c

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void fork2() 
{
	int ret;

	ret = fork();
	if (ret == 0)
		printf("\n [%d] Hello from child", getpid());
	else
		printf("\n [%d] Hello from parent", getpid());
}

int main() 
{
	fork2();
	return 0;
}