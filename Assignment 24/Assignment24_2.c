/////////////////////////////////////////////////////////////
// File Name :   Assignment24_2.c
// Description : Used to count the small letters from the string
// Input :       char
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        1/06/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

int CountSmall(char *str)
{
    int Count = 0;
    while(*str != '\0')
    {
     if((*str > 'a') && (*str < 'z'))
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
    iRet = CountSmall(arr);
    printf("count of a small character are :%d\n",iRet);

    return 0;
}