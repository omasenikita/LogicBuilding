#include<iostream>
using namespace std;
template <class T>
T Largest(T *arr, int size)
{
    if (arr == NULL || size <= 0)
    {
        return 0; // Return 0 for invalid input
    }
    
    T maxElement = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    return maxElement;
}
    


int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int largest = Largest(arr, size);
    cout << "Largest element in the array is: " << largest << endl;
    float fArr[] = {1.1f, 2.2f, 3.3f, 4.4f};
    int fSize = 4;
    float largestFloat = Largest(fArr, fSize);
    cout << "Largest float in the array is: " << largestFloat << endl;
    double dArr[] = {1.11, 2.22, 3.33, 4.44};
    int dSize = 4;
    double largestDouble = Largest(dArr, dSize);
    cout << "Largest double in the array is: " << largestDouble << endl;

    return 0;
}
