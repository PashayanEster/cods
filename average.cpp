// Mutqagrel tveri zangvac ev hashvel dranc mijiny:(bolor tvery irar gumarelov u bajanelov tarreri yndhanur tvin)
#include <iostream>
int average( int* arr, int size){
    int sum = 0;
    for(int i = 0; i < size; ++i){
    sum +=arr[i];}
    return sum/size;
}
int main(){
    int size;
    std::cout<<"Enter the size";
    std::cin>>size;
    int* arr = new int[size];
    for (int i =0; i < size; ++i){
        std::cin>>arr[i];
    }
    
    int result = average(arr,size);
    std::cout<<result;
    
    delete [] arr;
return 0;
}