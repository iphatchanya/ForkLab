// fork7.c

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void fork7()
{
	int ret;

  	ret = fork();
  	if (ret == 0)  {
		printf("\n [%d] Ending Child \n", getpid());
		exit(0); 
	}
	else 
	{
		printf("\n [%d] Running Parent \n", getpid());
    	while(1);  /* infinite loop */
  	}
}

int main() 
{
	fork7();
	return 0; 
}