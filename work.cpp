#include <iostream>
//using namespace std;

int max_my(int* arr, int size)
{ int num = -1;
    for (int i = 0; i < size; ++i)
    {
        if (*arr > num) {
            num = *arr;
        }
        ++arr;
    }
    return num;
}
int main(){
    const int size=10;
    int arr [size];
    for (int i = 0; i < size; ++i)
    {
        // std::cin >> arr[i];
        arr[i] = i + 4;
    }
    std::cout << max_my(arr, size);
}
