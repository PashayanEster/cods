#include <iostream>
// Grel funkcia vory vercnum e erku amboxj ev veradarcnum ayd mijakayqi mej exac tveri artadryaly(pakmijakayqov):
// int foo( int a, int b){
//     int chlp = 1;
//     if( a < b){
//         for (int i = a; i <= b; ++i){
//                     chlp *= i;
//         }
//     }
//     if ( a > b ){
//         for(int i = b; i <= a; ++i){
//             chlp *= i;
//         }
//     }
//     return chlp;
// }
// int main (){
// int a;
// std::cin >> a;
// int b;
// std::cin >> b;
// int res = foo( a,b);
// std::cout << res;

// }

// void foo( int size, int* arr){
//     int max1 = INT-MIN;
//     int max2 = INT-MIN;
//     int max3 = INT-MIN;
//     for(int i = 0; i < size; ++i){
//         if( arr[i] > max1){
//            max3 = max2;
//            max2 = max1;
//            max1 = arr[i];
//         }
//         else  if( arr[i]> max2 && arr[i]  < max1){
//             max3 = max2 ;
//             max2 = arr[i];
//         }
//         else if(arr[i] > max3 && arr[i]< max2){
//             max3 = arr[i];
    
//     }

//     }
//     std::cout<< max1<< " " << max2 <<" "<< max3;
    
// }

// int main(){
//     int max1 = 0;
//     int max2 = 0;
//     int max3 = 0;
//     int const  size = 5;
//     int arr[size] = { 1, 44, 20, 34, 5 };
// foo( size, arr);
// }
// Irakanacnel funkcia, vory stanum e amboxj tiv ev tpum e ayd amboxj tvi  erkuakan kodY;
//     int binary( int a){
//         int tmp = 0;
//         if (a == 0){
//             std::cout<< 0;
//         }   

//     while (a != 0){
//         tmp = tmp * 10 + a%2;
//         a/= 2;
//     }

//     return tmp;
// }
//     int main(){
//     int c;
//     std::cin >> c;
//     std::cout << binary(c);
//     return 0;
//     }