/*
* Author: Daniel Moses
* mshell: The super simple shell within a shell
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
  printf("Welcome to Moses Shell, the most limited experience of your life!\n");
  printf("Version: 0.1.updatesain'tgonnahappen\n");
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
			break;
		}
		else if (strncmp(cmd, "close", 5) != 0)
		{
			system(cmd);
		}
	}
	return 0;
}
