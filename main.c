/*
* Author: Daniel Moses
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	printf("Welcome to Moses Shell, the most limited experience of your life!\n");
  	printf("Version: 0.1.updatesain'tgonnahappen\n");
	printf("Type 'help' for help.\n");
 	for(int i = 1; i <= argc; i++)
 	{
		printf("executing command: %s \n", argv[i]);
		system(argv[i]);
   	}
		while(1)
		{
			char cmd[120];
			printf("$: ");
			fgets(cmd, 120, stdin);
			if(strncmp(cmd, "close", 5) == 0)
			{
				return 0;
			}
			else if(strncmp(cmd, "help", 4) ==0)
			{
				printf("simply type 'mshell' and then begin using your favorite command line things!\n");
				return 0;
			}
			else if (strncmp(cmd, "close", 5) != 0)
			{
				system(cmd);
			}
		}
	
return 0;
}	
