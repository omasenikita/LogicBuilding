#include<iostream>
template <class T>
int Frequency(T *arr, int size, T iNo)
{
    if (arr == NULL || size <= 0)
    {
        return -1; // Invalid input
    }

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == iNo)
        {
            count++; // Increment count if element matches
        }
    }

    return count; // Return the frequency of the element
}

int main()
{
    int arr[] = {10, 20, 30, 10, 20, 10};
    std::cout << "Enter the number to search: ";
    int iNo;
    std::cin >> iNo;
    int result = Frequency(arr, 6, iNo);
    if (result != -1)
    {
        std::cout << "Frequency of " << iNo << " is: " << result << std::endl;
    }
    else
    {
        std::cout << iNo << " not found in the array." << std::endl;
    }

    return 0;   
}
