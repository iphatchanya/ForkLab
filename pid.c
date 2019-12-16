//pid.c

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() 
{
	int id;

	id = getpid();
	printf("\n My identifier is ID = [%d]\n", id);
	sleep(10);
	return 0;
}