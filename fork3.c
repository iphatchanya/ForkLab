//fork3.c

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void fork3() 
{
	int ret;
	int x = 10;

	ret = fork();
	if(ret == 0)
		printf("\n [%d] Child has x = %d\n", getpid(), ++x);
	else
		printf("\n [%d] Parent has x = %d\n", getpid(), --x); 
}

int main() 
{
	fork3();
	return 0;
}