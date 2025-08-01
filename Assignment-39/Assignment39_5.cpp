#include <iostream>  // Use C++ header
using namespace std;

template <class T>
void Reverse(T *arr, int size)
{
    if (arr == NULL || size <= 0)
    {
        return; // Invalid input
    }

    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " "; // Print elements in reverse order
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 20, 10};
    cout<< "Enter the number to search: ";
    int iNo;
    cin >> iNo;
    Reverse(arr, 6);
    cout << "Reversed array: ";
    

    return 0;
}
