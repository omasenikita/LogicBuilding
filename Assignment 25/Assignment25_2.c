#include<stdio.h>

void StruprX(char *Arr)
{
    if((*Arr >= 'A') && (*Arr <= 'Z'))
  {
        printf("Enter a valid string containing uppercase letters only.\n");
    }
    while(*Arr !='\0')
    {
      if((*Arr >='a')&&(*Arr <= 'z'))
        {  
            printf("%c", *Arr-32);
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
    StruprX(Arr);
    return 0;
}
