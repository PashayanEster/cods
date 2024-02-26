// Grel 3 i kam 5-i bazmapatiknery:Ete trvac tveric nerqev tvarkeqn bolor bnakan tvery, voronq bazmapatik en 3 in kam 5in :
#include<iostream>
int bazmapatik(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 3 == 0 || arr[i] % 5 == 0){
            sum += arr[i];
        }
    }
    return sum;
}
int main(){
int size;
std::cin>>size;
int arr[size];
for(int i = 0; i< size; ++i){
    std::cout<<"Enter the elements";
    std::cin>>arr[i];
}
int result = bazmapatik(arr, size);
std::cout<<result;
return 0;
}