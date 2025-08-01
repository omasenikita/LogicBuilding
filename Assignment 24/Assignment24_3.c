/////////////////////////////////////////////////////////////
// File Name :   Assignment24_3.c
// Description : Used to return a differece betwwen frequency of caps and small leters
// Input :       char
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        1/06/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

int Difference(char *str)
{
    int iSmall = 0;
    int iCap = 0;
    while(*str != '\0')
    {
     if((*str > 'A') && (*str < 'Z'))
    {
       iCap ++;
    }
    else
    {
        iSmall++;
    }
    *str++;
    
    }
     return iCap - iSmall;

}
int main()
{
    char arr[40];
    int iRet = 0;
    printf("Enter a character:\n");
    scanf("%[^'\n]s",arr);
    iRet = Difference(arr);
    if(iRet < 0)
    {
        iRet = -iRet;
    }
    printf("difference is :%d\n",iRet);

    return 0;
}