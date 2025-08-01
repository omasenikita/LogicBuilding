#include<iostream>
using namespace std;
template <class T>
T Largest_from_Three(T no1, T no2, T no3)
{
    if (no1 >= no2 && no1 >= no3)
    {
        return no1; // no1 is the largest
    }
    else if (no2 >= no1 && no2 >= no3)
    {
        return no2; // no2 is the largest
    }
    else
    {
        return no3; // no3 is the largest
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    cout << "Enter three integers: ";
    cin >> iValue1 >> iValue2 >> iValue3;
    int iLargest = Largest_from_Three(iValue1, iValue2, iValue3);
    cout << "Largest integer is: " << iLargest << endl; 
   

    return 0;
}
