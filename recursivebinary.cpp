#include <iostream>
int binarysearch(int* arr, int start, int end, int key) {
    
    while(start <= end) {
        int mid = (start + end)/2;
        if (arr[mid] == key)
         {
            return mid;
         }
         if( arr[mid] > key)
          {
            return binarysearch(arr, mid -1, end, key);
          }

         else{
                return binarysearch(arr, start, mid + 1 , key);
             }
         }
return -1;
}

int main() {
    int size = 0;
    std::cin>> size;
    int* arr = new int [size];
}