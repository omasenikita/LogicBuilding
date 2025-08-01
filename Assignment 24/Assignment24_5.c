/////////////////////////////////////////////////////////////
// File Name :   Assignment24_5.c
// Description : Used to print string in reverse order
// Input :       char
// Output :      char
// Author :      Nikita Shahaji Omase
// Date :        2/06/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;

    while (*end != '\0') 
    {
        end++;
    }
    end--; 

    while (start < end) 
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);  
   

}
int main()
{
    char arr[40];
    int iRet = 0;
    printf("Enter a character:\n");
    scanf("%[^'\n]s",arr);
    Reverse(arr);

    return 0;
}