#include<iostream>
using namespace std;
template <class T>
T AddN(T *arr, int size)
{
    if (arr == NULL || size <= 0)
    {
        return 0; // Return 0 for invalid input
    }
    
    T sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    return sum;
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int result = AddN(arr, size);
    cout << "Sum of array elements: " << result << endl;

    return 0;
}
