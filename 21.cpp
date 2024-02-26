#include <iostream>
int main(){

    // double x;
    // std::cin>> x;
    // double y;
    // std::cin>> y;
    // if ( y == 0){
    //     return 1;
    // }
    // int k = (x * y +25 * x / y -400);
    // std::cout<< k;
    // return 0;

// // Mutqagrel simvol, ete mecatar e poxakerpel poqratari, ete poqratar e poxakerpel mcatari:
// char sym ;
// std::cin>> sym;
// if (sym >= 97 && sym <= 122){
//     sym = -32;

// }

// else if (sym >= 65 && sym  <= 90){
//     sym = +32;}
//     else {
//         std::cout <<sym;
//     }



// // Mutqagrel x popoxakan , stugel x patkanum e 0-ic 100 mijakayqin te voch:
// int x;
// std::cin>> x;
// if (x >=0 && x <= 100){
//     std::cout<< "YES";
// }
// else {
//     std::cout<< "NO";
// }


// Mutqagrel tariqy , ev ete poqr e 18-ic-> anchapahas e tpum , ete  18-ic 65 hasarak qaxaqaci, ete 65 ic mec e hamarvum e cer:
// size_t age;
// std::cin>> age;
// if( age < 18 && age >= 1){
//     std::cout<<"Anchapahas";
// }
// else if ( age >=18 && age <= 65){
//     std::cout<<"Hasarak qaxaqaci";
// }
// else if (age > 65){
//     std::cout<< "CER";
// }

// Tpel tvanshanner: ete kent e tpel 0-ic 100 ,ete zuyg e tpel 100-ic 0;
    // int x;
    // std::cin >> x;
    // for(int i = 0; i < 101; ++i) {
    //     if(x % 2 == 0)
    //     {
    //         std::cout << i << " ";
    //     }
    //     else{
    //         std::cout << 100 - i << " ";
    //     }
    // }

// const int size = 100;
//     char name [ size];
//     std::cin>> name;
//     for (int i =0 ; i < size; ++i){
//         if (name[i] >= 97 && name[i] <= 122 ){
//             name[i] -= 32;
//         }
//         if(name[i + 1] == '\0') {
//             break;
//         }


//     }
//     std::cout << name;


// Haytararel popoxakan, ev grel tvyal tvi bazmapatkman axyusaky:
const int  size = 10;
int x;
std::cin>> x;
if (x >= 0 && x <= 9){
    
for (int i = 1; i <= 9; ++i){

std::cout<< x << "*" << i << " " <<  x * i << std::endl;

}

}
}