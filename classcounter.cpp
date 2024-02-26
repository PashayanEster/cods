#include <iostream>
class Counter{
    public:
    Counter(){++count;}
int static get_count(){
return count;
    }
    ~Counter();
    private:
    static int count;

};
int Counter::count = 0;

int main(){
    Counter ob, ob1;
    std::cout<<Counter::get_count;
}


std::ostream& operator <<(std::ostream& other,const Matrix& other1){

    for(int i =0; i < other.get_row(); ++i){
        for(int j = 0; i < other.get_colm(); ++j){
            other << other1[{i, j}] << ' ';
        }
        std::cout << std::endl;
    }
}




