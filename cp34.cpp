
// Mutqagrel tiv, tpel tvi tvanshanneri gumary  ekranin: Orinak ` mutqagrvac 5479 tvi hamar tpel 25 (vorovhetev  5+4+7+9=25):
#include <iostream>
int main (){
    int b;
    std::cin>>b;
    int sum = 0;
    while (b != 0){
        sum += b%10;
        b /= 10;
    }
    std::cout<<sum;
}