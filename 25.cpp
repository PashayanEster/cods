#include <iostream>






int main(){
// Nermucel dinamik zangvac ev tpel dra tarery:
    // int size;
    // std::cin >> size;
    // int* arr = new int[size];




// Nermuce dinamik zangvac u miji elementnery reverse anel:
// int size;
// int tmp = 0;
// std::cin >>size;
// int* arr = new int[size];
// for (int i = 0; i < size; ++i){
//     std::cin>> arr[i];
// }
// for ( int  i =0; i < size/2 ; ++i){
//     int tmp = arr [i];
//     arr[i] = arr[ size -1 -i];
//     arr[size -1 -i] = tmp;
// }



// Stexcel  2  dinamik zangvac ev mi zangvaci elementnery copi anel myusi mej:
// int size1;
// std::cin >> size1;
// int * arr1= new int[size1];
// for (int i = 0; i < size1; ++i){
//     std::cin >> arr1[i];
// }
// int * arr2 = new int[size1 + 5];
// for(int i = 0; i < size1; ++i) {
//     arr2[i] = arr1[i];
// }
// delete [] arr1;
// new = null ptr;
//  delete [ ]arr2;

//  Stexcel erkchap zangvac:
// int size;
// std::cin>> size;
// int ** arr = new int* [size];
// for(int i =0; i < size; ++i){

    
//     arr[i] = new int [size]; // array -i  yurqanchyury hasce e ,vor hamar sarqum enq zangvac:
// }
// for(int i = 0; i < size; ++i){
//         for(int j =0; j < size; ++j){

    
//             std::cin>> arr[i][j];   // mutqagrum enq erkchp zangvaci elementnery: 
//         }
// }

// Miachap chareri dinamik zangvac enq sarqum , u haskanum enq ardyoq polidrom e te voch:

const int size = 3;
char * arr = new char [size];
for(int i = 0; i < size/2; ++ i){
    if( arr[ i] == arr[size -i -1]){
        return true;
    }
    else {
        return false;
    }
}
e





}


