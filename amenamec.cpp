// Grel cragir vory yndunum e  3 tiv ev voroshum drancic amenamecy:Amenamec tivy ayn e vory mec kam havasar e mnacac 2 tverin:
#include <iostream>
int max(int a, int b, int c){
    int max;
    if(a >=b && a >= c){
        max = a;
    }
    else if(b >=a && b >=c){
        max = b;
    }
    else {
        max = c;
    }
    return max;
}


int main(){
    int a;
    std::cin>> a;
    int b;
    std::cin>> b;
    int c;
    std::cin>> c;
    std::cout << max(a,b,c);
}