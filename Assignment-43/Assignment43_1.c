/////////////////////////////////////////////////////////////
// File Name :   Assignment43_1.c
// Description : Used to count white spaces from the string
// Input :       char[]
// Output :      
//               HE llo WOR ld
// Author :      Nikita Shahaji Omase
// Date :        25/07/2025
////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(char *str)
{
    int i = 0;
    static int iCount= 0;
   if(*str != '\0')
   {
    if(*str == ' ')
    {
        iCount++;
       
    }
     *str++;
     Count(str);

   }
   return iCount;

}
int main()
{
     char Arr[20]={'\0'};
     int iRet = 0;
     printf("Enter a String\n");
     scanf("%[^'\n']s",Arr);
     iRet = Count(Arr);
     printf("Number of whitespaces are %d:\n",iRet);

    return 0;
}
