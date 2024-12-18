#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fptr;         
    char ch;            
    int count = 0; 
    int h;

    h = fopen_s(&fptr,"welcome.txt", "r"); 
    if (fptr != NULL)                 
    {
        while ((ch = getc(fptr)) != EOF) 
        {
            printf("%c", ch);  
            count++;
        }
        fclose(fptr);          
        printf("\nThere are %d characters in total\n", count);
    }
    else
        printf("The file failed to be opened!!\n"); 
    system("pause");
    return 0;
}
