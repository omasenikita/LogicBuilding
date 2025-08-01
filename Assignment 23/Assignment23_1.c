/////////////////////////////////////////////////////////////
// File Name :   Assignment23_1.c
// Description : Used to display ascii from 0 to 255 HEX DECImal oct representation
// Input :       char
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        1/06/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayASCII()
{
    int i = 0;
    printf("ASCII Table:\n");
    printf("Dec\tHex\tOct\tChar\n");
    for(i = 0; i < 256; i++)
    {
        printf("%d\t%X\t%o\t%c\n", i, i, i, (char)i);
    }
    printf("\n");
}
int main()
{
    DisplayASCII();
    return 0;
}