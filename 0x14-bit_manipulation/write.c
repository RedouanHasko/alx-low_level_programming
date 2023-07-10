#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pass;
	FILE *fp;
	
	pass = malloc(4 * sizeof(char));
	if (!pass)
	{
		printf("can't allocate memory!\n");
		return (1);
	}

	fp = fopen("101-password", "w");
	if (fp)
	{
		for (int i = 0; i < 4; i++)
		{
			unsigned int result = 0x46c6f48U >> ((i & 3) << 3 & 0xff);
			pass[i] = (char) result;
		}

		fwrite(pass, sizeof(char), 4, fp);
		fclose(fp);
	}

	return (0);
}
