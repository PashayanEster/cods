#include <iostream>
int foo(int * arr, int size, int target){
    int pivot = size/2;
    int start = 0;
    int end = size - 1;
    while(end >= start){
        pivot =(end+ start)/2;
        if (arr[pivot] == target)
        {
            return pivot;
        }
    
        else if (arr[pivot] > target)
        {
        end = pivot -1;
        }
        else {
            start = pivot + 1;
        }
    }
    return -1;
}

int main(){
    int size = 11;
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    std::cout <<foo(arr, size, 6);
}