#include<iostream>
using namespace std;

template <class T>
void Display( T value , int size)
{
    int i = 0;
    for(i =1 ;i <= size;i++)
    {
        cout<<value <<" "  ;
    }
    cout<<"\n";

}

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);
    return 0;
}