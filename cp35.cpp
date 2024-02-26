
// Mutqagrel tiv, tpel ekranin tvi tvanshanneri artadryaly:

#include <iostream>
int main (){
    int b;
    std::cin>>b;
    int mul= 1;
    while (b != 0){
        mul *= b%10;
        b /= 10;
    }
    std::cout<<mul;
}