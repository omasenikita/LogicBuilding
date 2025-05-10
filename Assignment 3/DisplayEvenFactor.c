void DisplayEvenFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 2; i<=iNo;i++)
    {
        if(((i % 2)==0) && ((iNo % i )==0))
        {
            printf("%d ",i);
        }
    }
}