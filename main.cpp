#include "TArray.h"
#include <iostream>


int main()
{
    TArray <int, 4> arr1 { 1, 4, 8, 12 };
    TArray <int, 4> arr2 {1, 3, 1, 10};
    std::cout << arr1[2] << std::endl;
    std::cout << arr2.back() << std::endl;
    std::cout << arr1.front() << std::endl;
    arr2.swap(arr1);
    for (int i = 0; i < arr1.size(); i++)
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < arr2.size(); i++)
    {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    TArray<int, 6> arr3;
    arr3.fill(2);
    for (int i = 0; i < arr3.size(); i++)
    {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    TArray <double, 5> dob1 { 1.0, 2.88, 5.8 };
    TArray <double, 5> dob2 {4.0, 7.0, 0.1, 2.0};
    std::cout << dob1[1] << std::endl;
    std::cout << dob2.front() << std::endl;
    dob1.swap(dob2);
    for (int i = 0; i < dob1.size(); i++)
    {
        std::cout << dob1[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < dob2.size(); i++)
    {
        std::cout << dob2[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}