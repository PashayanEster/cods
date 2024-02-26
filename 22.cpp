#include <iostream>
int main(){

// Gtnel zangvaci meaguyni u poqraguyni tarberutyuny:

// const int size = 9;
// int arr[size]={ 10, 11, 13, 14, 22, 19, 1, 9, 23};
// int max = arr[0];
// int min =arr[0];
// for(int i = 0; i < size; ++i) {
// if (arr[i] < min){
//     min = arr[i];
// }

// if (arr[i] > max){
//     max =arr[i];
// }
// }
// std::cout<< max - min ;




// Unenq zangvac vory petq e shrjenq:

// const int size =5;
// int arr[size] = { 1, 2, 3, 4, 5};
// int tmp =0;
// for(int i = 0,  j = size -1;  i <= j; ++ i, --j){
// for (int j= size -1; j < 0; --j)
// int  tmp = arr[i];
// arr[i]= arr[j];
// arr[j] = tmp;
// }

// const int size = 5;
// int arr[size] = {-2, 0, 5, 3, 1};
// int count1 = 0;
// int count2 = 0;
// for(int i = 0; i< size; ++i){
//     if (arr [i] >=0){
//         ++count1;
//     }
//     else if (arr[i] < 0){
//         ++count2;
//     }
// }
// std::cout<< count1 <<" " << count2;




// Stexcel zangvac hertov mutqagrel ev tpel :


// const int size = 5; 
// int arr[size];

// for(int i = 0; i <size; ++i){
//     std::cin>>arr[i];
// std::cout<< arr[i];
// }


// Stexcel chareri zangvac, mutqagrel ev tpel;

// const int size = 6;
// char arr[size];
// std::cin>> arr;
// std::cout << arr;

// Piti 10 chapani interi zangvac haytararenq u hashvenq mijin tvabanakan:
// const int size = 10;
// int arr[size]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// int sum = 0;
// for (int i =0 ; i < size; ++i){

// sum += arr[i];
    
// }
// std::cout<< sum/size <<std::endl;

// Stexcel integerneri int zangvac (mutqagrel elementnery) gtnel min u max-y:
//     const int size =10;
//     int arr [size];
//     for(int i = 0; i < size; ++i){
//     std::cin>> arr[i];
//     }
//     int min = arr[0];
//     int max = arr[0];

//     for(int i = 0; i < size; ++i){

//         if (arr[i] < min){
//             min = arr[i];
//         }
//         else if (arr[i] > max){
//             max = arr [i];

//         }
// }
// std::cout<< min <<" " << max << std:: endl;



// Revers enq anelu zangvacy:
    // const int size = 5;
    // int arr[size] = { 1, 2, 3, 4, 5};
    // int tmp =0;
    // for(int i = 0,  j = size -1;  i <= j; ++ i, --j){
    // int tmp = arr [i];
    // arr[i] = arr[j];
    // arr[j] = tmp;}

    // for (int i =0; i < size; ++i)
    // std::cout<< arr[i];

const int size = 3;
int arr[size] = { 11, 7, 3};
int a;
std::cin>> a;
bool check = 0;

for(int i = 0; i < size ; ++i){

    if (a ==arr[i]){
        check = true;
        break;
    }

}
if (check){
    std::cout<<"Yes" << std::endl;
}
else {std::cout <<"NO"<<std::endl;
    }
}
