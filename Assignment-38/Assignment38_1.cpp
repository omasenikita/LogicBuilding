#include<iostream>
template <class T>
T Multiply(T no1, T no2)
{
    T Ans;
    Ans = no1 * no2;
    return Ans;
}
int main()
{
    int iRet = 0;
    iRet = Multiply(10, 20);
    printf("Multiplication is : %d\n", iRet);
    float fRet = 0.0f;
    fRet = Multiply(10.5f, 20.5f);
    printf("Multiplication is : %f\n", fRet);
    double dRet = 0.0;
    dRet = Multiply(10.5, 20.5);
    printf("Multiplication is : %lf\n", dRet);

    return 0;
}
