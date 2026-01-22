#include <iostream>
#include <valarray>
#include <stdlib.h>
#include <math.h>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    int nElems;
    std::cout << "Input a count of elements in array\r\n";
    std::cin >> nElems;
    std::valarray<int> iArray(nElems);
    long nProduct = 1L;
    srand(time(nullptr));
    for (int i = 0; i < nElems; i++)
    {
        iArray[i] = 1 + rand() % 10;
    }
    std::cout << "Inputed array : ";
    for (int i = 0; i < nElems; i++)
    {
        std::cout << iArray[i] << " ";
        nProduct *= iArray[i];
    }
    std::cout << "\r\nThe Product of " << nElems
        << " elements of the array is : " << nProduct << "\r\n";
    std::cin.ignore();
    std::cin.get();
}
