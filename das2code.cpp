#include <iostream>
int foo(int* arr, int size){
int count = 0;
    for(int i=1; i < size; ++i){
        if(arr[i] % i == 0) {
            ++count;
        }
    }
    return count;
}



int main(){
int size = 6;
int arr[] = {1,2,3,4,5,7,};
int count =0;
foo(arr,size);
std::cout<<count;

return 0;
}
// gtel zangvaci en tarrreri qanaky, voronq anmnacord bajanvum e kargahamri indexi vra ; 