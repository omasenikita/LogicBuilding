#include<iostream>
using namespace std;
template <class T>
T Smallest(T *arr, int size)
{
    if (arr == NULL || size <= 0)
    {
        return 0; // Return 0 for invalid input
    }
    
    T minElement = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }
    return minElement;
}
    


int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int largest = Smallest(arr, size);
    cout << "Smallest element in the array is: " << largest << endl;
    float fArr[] = {1.1f, 2.2f, 3.3f, 4.4f};
    int fSize = 4;
    float largestFloat = Smallest(fArr, fSize);
    cout << "Smallest float in the array is: " << largestFloat << endl;
    double dArr[] = {1.11, 2.22, 3.33, 4.44};
    int dSize = 4;
    double largestDouble = Smallest(dArr, dSize);
    cout << "Smallest double in the array is: " << largestDouble << endl;

    return 0;
}
