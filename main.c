/*
* Author: Daniel Moses
* mshell: The super simple shell within a shell
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	while(1)
	{
		char cmd[120];
		printf("$: ");
		fgets(cmd, 120, stdin);
		system(cmd);
	}
	return 0;
}
