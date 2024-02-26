// Grel cragir, vory ekranin ktpi A && B && !(B|| A)
//  Bulyan atahaytutyan jshtutyan axyusaky:
#include <iostream>
int main(){
    bool A;
    bool B ;
    A = 0;
    B = 0;
    std::cout<<A && B && !(B|| A);

    A = 1;
    B = 0;
    std::cout<<A && B && !(B|| A);

    A = 0;
    B = 1;
    std::cout<<A && B && !(B|| A);

    A = 1;
    B = 1;
    std::cout<<A && B && !(B|| A);

    return 0;


}