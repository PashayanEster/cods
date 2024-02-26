#include <iostream>
int main(){

    // haytararel pointer u arjeqy poxel;
// int  a = 7 ;
// int* ptr = &a;
// *ptr = 5;
// std::cout<< *ptr;


// ogtagorcelov pointery petq e poxenq arjeqnery:swap-i mijocov:
// int a = 7;
// int b = 3;
// int tmp = 0;
// int * ptr = &a;
// int * str = &b;
// tmp = *ptr;
// *ptr = *str;
// *str = tmp;

// Stexcel statik integerneri zangvac, ogtagorecelov int pontery arjeqavorelov iren, heto pointeri mijocov arjeqnery tpel ekranin:
// const int size = 7;
// int arr[size];
// int*ptr = arr;
// for( int  i = 0; i < size; ++i ){
// std::cin >> *(ptr + i);
// std::cout<< *(ptr + i);
// }

// grel hashvich cragir:
    // int a;
    // std::cin >> a;
    // int b ;
    // std::cin >> b;
    // char x;
    // std::cin >> x;
    // if ( x == '+'){
    //     return a+b;}
    //     else if (x =='-'){
    //     return a-b;}
    //     else if (x == '*'){
    //         return a * b;

    //     }
    //     else if ( b == 0){
    //         return -1; }
    //         else { 
    //             return a/b;
    //         }

// Erku chareri zangvac unenq , konkatenacia katarel, arajinic heto avelacnel erkrody :

const int size1 = 14;
const int size2 = 7;
char * ptr = "Hello";
char * str = "World";

while ( ptr != '\0'){
    ++ptr;
}
while (str != '\0'){
    *ptr = *str;
    ++ptr;
    ++str;

}
std::cout<< ptr;




}





