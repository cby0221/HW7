#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ENTER 13
#define MAX 80

int main(void)
{
	FILE* fptr;
	char str[MAX], ch;
	int i = 0, err;
	err = fopen_s(&fptr, "output2.txt", "a");
	printf("Please enter a string and press ENTER to finish the input:\n");
	while ((ch = _getche()) != ENTER && i < MAX)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\nThe file attachment is complete!!\n");
	system("pause");
	return 0;
}
