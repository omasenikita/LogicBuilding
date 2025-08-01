
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool ChkCharacter(char *str, char ch)
{

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;            
        }
        else if(*str =='\0')
        {
            return FALSE;
        }
        else
        {
            return TRUE;
        }
        
       str++;
   }

}
int main()
{
    char Arr[20]={'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a string\n");
    scanf("%[^'\n]s",Arr);

    //Problem due to buffer cleanup
    printf("Enter a character u want to count frequency: \n");
    scanf(" %c",&cValue);

    bRet = ChkCharacter(Arr,cValue);
    if(bRet == 1)
    {
        printf("%c is present in string %s\n",cValue,Arr);

    }
    else
    {
        printf("%c is not present in string %s\n",cValue,Arr);
    }


    return 0;
}




