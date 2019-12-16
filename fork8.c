// fork8.c

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void fork8()
{
	int ret;
	
  	ret = fork();
  	if (ret == 0)
  	{
		printf("\n [%d] Running Child \n", getpid());
    	while(1);  /* infinite loop */
  	}
	else 
	{
		printf("\n [%d] Ending Parent \n", getpid());
		exit(0); 
	}
}

int main () 
{
	fork8();
	return 0; 
}