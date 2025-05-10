void PrintEven(int iNo)
{
    int iCnt = 0;
    int iTemp = 2;
    if(iNo <= 0)
    {
        return;
    }
    while (iCnt < iNo)
    {
        if((iTemp % 2)==0)
        {
            iCnt++;
            printf("%d ",iTemp);
        }
            iTemp++;
    }  
    
}