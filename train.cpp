#include <iostream>
int calculator ( int a, int b, char x){
        if (x =='+'){
            return (a+b);
        }
        else if ( x == '-'){
            return (a-b);

        }
        else if (x == '*'){
            return (a*b);
        }
        else if ( x == '/'){
            return (a/b);

        }
        return -1;
}
int main (){
    int a = 0;
    int b = 0;
    char t;
    std::cin >> a;
    std::cin >> b;
    std::cin >> t;
    int res = calculator(a, b, t);
    std::cout << res << std::endl;
    return 0;
}