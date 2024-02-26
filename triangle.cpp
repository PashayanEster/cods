#include <iostream>
int main(){
int probel;
int lines;
std::cout<<"Enter the lines ";
std::cin>>lines;

for( int i = 0; i < lines; ++i){

    for(int j = 0; j < lines -1-i ; ++j){
        std::cout << ' ';
    }
    for ( int j= 0; j < i * 2 + 1; ++j){
        std::cout<< '*';
    }
    std::cout << std::endl;
}

for(int i = 1; i <= lines; ++i) {
        for(int j = 1; j <= lines; ++j) {
            std::cout << '*' << " ";
        }
        std::cout << std::endl;
    }
    

}