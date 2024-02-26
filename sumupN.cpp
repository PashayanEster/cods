// Grel minchev N tveri gumary(1-ic minchev bolor trvac drakan tveri gumary)
#include<iostream>
int gumar(int n){ 
    int sum = 0;
    if(n < 0) {
        std::cout<< "wrong number";
        return 0;
    }
    for(int i = 0; i <= n; ++i){
        sum += i;
    }
    return sum;
}

int main(){
    
    std::cout << gumar(4);
}