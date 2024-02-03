#include <stdio.h>
#include <unistd.h>

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		printf("Return\n");
	}
	execl("./file2", "./file2", NULL);
}
