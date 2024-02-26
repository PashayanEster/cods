
// Mutqagrel tiv, ete tivy zuyg e ,tpel 0-100 tvern  yst ajman, hakark  depqum` yst nvazman:
#include <iostream>
int main (){
    int n;
    std::cin>>n;

    if (n % 2 ==0) {
        for(int i= 0; i <= 100; ++i)
        std::cout <<i;

    }
    else { 
        for(int i=100; i >= 0; --i )
        {
            std::cout<< i;
        }
    }
    


}