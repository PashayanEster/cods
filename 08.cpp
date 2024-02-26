#include <iostream>
// grel 2 funkcia allocate and delallocate funkcianery:

// int* foo(int size){
//     int *arr = new int [size];
//     return arr;
// }
// // pt vorpes zangvac chi vercnum:
// void chlp(int * pt){
// delete[] pt;
// }

// int main (){
// int const size = 5;
// int* chlp = foo(size);
// // int arr[size];
// foo(6);
// chlp(foo(6));
// }


// Grel funkcia , vory stanum e zangvac ev index, zangvacy petq e revers ani minchev tvyal indexy:

// int * foo( int *arr, int index , int size){
//     arr = new int [size];
//     if( index < 0 || index >= size){
//         return arr;
//     }
//     int tmp = 0;
//     for (int i = 0; i < index/2; ++i){

//     tmp = arr[i];
//     arr[i] = arr [index -i];
//     arr[index -i] = tmp;
//     }
//     return arr;
// }

// int main(){
//     int const size = 5;
//     int* arr;
//     int index = 3;
//     int *p = foo(arr, index, size);

//     delete [] arr;

// }

// // Grel funkcia, vory stanum e zangvac :krknvox elementnery jnji:
// void foo(int* arr, int size){
//     int count = 0;
//     int tmp = 0;
//     for (int i = 0; i < size -1 - count; ++i){
//         for( int j = i+1; j < size - count; ++i){
//             if (arr[i] == arr[j]){
//                 tmp = arr[size -1- count];
//                 arr[size-1- count] = arr[j];
//                 arr[j] = tmp;
//                 --j;
//                 ++count;

//             }
//         }

//     }
// }
//     int main(){
//         int const size = 5;
//         // int arr[size] = {1,2,2,3,3};
//         int tmp = 0;
//         int count = 0;
//     int*arr = new int[size];
//     foo(arr, size);

//     delete []arr;
// }
// Grel funkci vory stanum e zangvac ev gtum e ev veradardzum e ayd zangvac mecaguyn arjeqy:
// Zangvacy vercvac e dinamikoren:

//         int foo( int* arr, int size){
//         int max = arr[0];
//         for (int i = 0; i < size; ++i){
//         if( arr[i]> max){
//             max = arr[i];
//         }
        
//     }return max;

// }
    
// int main(){
//     int size = 5;
//     int *res = new int [size];
//     for(int i = 0; i < size; ++i){
//         std::cin >> res[i];

//     }
//     std:: cout<< foo(res, size);
// delete []arr;
// }

// 