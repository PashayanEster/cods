// XNDIR 4 - Gtnel zangvaci ayn tarreri qanaky, voronq anmnacord bajanvum en irenc kargahamari(index)vra:
#include <iostream>

int foo(int size, int* arr) 
{
    int count =0;
    for (int i = 2; i < size; ++i)
    {    
        if (arr[i] % i == 0)
        {   
            count += 1;
        }
    }
    return count;
}

int main ()
{
    int size = 0;
    std::cin >> size;
    int arr[size];
    for (int i = 0; i < size; ++i)
    { 
        std::cin >> arr[i];
    }
    int c = foo(size, arr);
    std::cout << c;
}


