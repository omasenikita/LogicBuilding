#include <iostream>  // Use C++ header
using namespace std;

template <class T>
int SearchLast(T *arr, int size, T iNo)
{
    if (arr == NULL || size <= 0)
    {
        return -1;
    }

    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] == iNo)
        {
            return i; // Found
        }
    }

    return -1; // Not found
}


int main()
{
    int arr[] = {10, 20, 30, 10, 20, 10};
    cout<< "Enter the number to search: ";
    int iNo;
    cin >> iNo;
    int result = SearchLast(arr, 6, iNo);
    if (result != -1)
    {
        cout << "Last occurrence of " << iNo << " is at index: " << result << endl;
    }
    else
    {
        cout << iNo << " not found in the array." << endl;
    }

    return 0;
}
