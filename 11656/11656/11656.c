//11656

#include <stdio.h>
#include <string.h>

char c[1001] = { 0, };

int main(void)
{
	scanf("%s", c);

	char* ptr = NULL;

	ptr = c;

	for (char i = 'a'; i <= 'z'; i++)
	{
		for (int j = strlen(c); j > 0; j--)
		{
			if (i == ptr[j])
			{
				for (int k = j; ptr[k] != NULL; k++)
				{
					printf("%c", ptr[k]);
				}
				printf("\n");
			}
		}
	}

	return 0;
}