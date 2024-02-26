// Grel cragir, vory ekranin ktpi !( A && B)|| A &&  !B || A
// Bulyan artahaytutyan jshtutyan axyusaky:


#include <iostream>
int main(){

bool A;
bool B;

A = false;
B = false;
std::cout<<( A && B)|| A &&  !B || A;

A = false;
B = true;
std::cout<<( A && B)|| A &&  !B || A;


A = true;
B = false;
std::cout<<( A && B)|| A &&  !B || A;


A = true;
B = true;
std::cout<<( A && B)|| A &&  !B || A;

return 0;

}