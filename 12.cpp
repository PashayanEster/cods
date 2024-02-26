#include <iostream>
// // Unenq chareri zangvac , vory sortavorvac e ev petq e hashvenq te qani elementic qani hat ka :
// void compress( char* a){
//     int size = strlen(a);
//     if( size == 1){
//         return;
//     }
//     int count =1;
//     int index = 0;
//     for (int i =1; i <= size; ++i){
//         if(a[i] == a[i-1]){
//             ++count;
//         }
//         else{
//             a[index ++] = a[i-1];
//             if( count > 1){
//                 a[index++] = '0'+ count;
//             }
//             count = 1;
//         }
//     }
//     a[index] = '\0';

// }
// int main(){

//     char foo [] = "aaabbbcc";

//     compress(foo);
//     std:: cout<< foo;



// }

// // Grel naxadasutyun chareri zangvac  , ev gtnel tvayl naxadasutyan mej amenaerkar bari chapy:
// int sentence( char* a){
//     int size = strlen(a);
//     if (size == 0){
//         return 0;
//     }
//     int count = 0;
//     int max = 0;
//     for (int i = 0; i < size; ++i){
//         if( a[i] != ' '){
//             ++count;
//         } else {
//             if(count > max) {
//                 max = count;
//             }
//             count = 0;
//         }
    
    
//         }
//         if(count > max) {
//     max = count;
//                 }
//                 count = 0;
//                 return max;

// }
// int main(){
// char arr1 []= "I loe you";
// sentence(arr1);
// }

