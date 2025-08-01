#include<stdio.h>

int CountSpace(char *Arr)
{
    int iCnt = 0;
  while(*Arr !='\0')
    { 
        if(((*Arr == ' ')))
        {
            iCnt++;
        
        }   
    
    *Arr++;
    }
    return iCnt;
    }
        


int main()

{
    char Arr[20];
    int iRet = 0;
    printf("Enter a string: \n");
    scanf("%[^\n]s", Arr);
    iRet = CountSpace(Arr);
    printf("Number of spaces in the string is: %d\n", iRet);
    return 0;
}
