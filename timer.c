#include <stdio.h>
#include <windows.h>

int main(void)
{
	timeBeginPeriod(1);
	printf("Press any key to restore normal timer frequency.\n");
	getchar();
	timeEndPeriod(1);
	return 0;
}