
#include<stdio.h>

int Frequency(char *str, char ch)
{

    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        } 
       str++;
   }
   return iCount;

}
int main()
{
    char Arr[20]={'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a string\n");
    scanf("%[^'\n]s",Arr);

    //Problem due to buffer cleanup
    printf("Enter a character u want to count frequency: \n");
    scanf(" %c",&cValue);

    iRet = Frequency(Arr,cValue);

    printf("%c is present in string %d times\n",cValue,iRet);


    return 0;
}




