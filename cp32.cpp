
// Mutqagrel tiv, tpel tvi tvanshannery arandzin- arandzin  ekranin:Orinak` mutqagrvac 5479 tvi hamar tpel '5', '4', '7', '9':
#include <iostream>
int main (){
int n;
int k = 0;
std::cin >> n;
while (n != 0){
    k += k * 10 + n % 10;
    n = n / 10;
}

while (k != 0) {
    std::cout << k % 10 << " ";
    k /= 10;
} 


}
