#include<stdio.h>

void StrToggleX(char *Arr)
{
  while(*Arr !='\0')
    {
      if((*Arr >='a')&&(*Arr <= 'z'))
        {  
            printf("%c", *Arr-32);  //difference between small // and capital letters is 32 in ASCIIssss
        }
         if((*Arr >= 'A') && (*Arr <= 'Z'))
        {
           printf("%c", *Arr+32);  //difference between small // and capital letters is 32 in ASCIIssss
  
        }
        else if(((*Arr == ' ')))
        {
            printf(" ");
        }   
    
    *Arr++;
    }
    }
        


int main()

{
    char Arr[20];
    printf("Enter a string: \n");
    scanf("%[^\n]s", Arr);
    StrToggleX(Arr);
    return 0;
}
