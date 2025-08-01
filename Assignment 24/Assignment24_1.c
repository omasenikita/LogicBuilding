/////////////////////////////////////////////////////////////
// File Name :   Assignment24_1.c
// Description : Used to count the capital letters from the string
// Input :       char
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        1/06/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

int CountCapital(char *str)
{
    int Count = 0;
    while(*str != '\0')
    {
     if((*str > 'A') && (*str < 'Z'))
    {
       Count++;
    }
    *str++;
    
    }
     return Count;

}
int main()
{
    char arr[40];
    int iRet = 0;
    printf("Enter a character:\n");
    scanf("%[^'\n]s",arr);
    iRet = CountCapital(arr);
    printf("count of a capital character are :%d\n",iRet);

    return 0;
}