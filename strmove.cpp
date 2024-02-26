#include <iostream>
#include <cstring>
// Irakanacnel strmove(char* s, int n);funkcian, vory trvac s toxy ciklik texasharjum e depi aj  n angam : Orinak , strmove("hello",2)ktexasarji "hello"-n 2 dirqov depi aj ev kstana "lohel":
void  strmove(char* s, int n){
    int len = 0; 
    char* tmp_ptr = s;
    // std::cout << s;
    while(*tmp_ptr){
        ++len;
        ++tmp_ptr;
    }
    for (int i = 0; i < n; ++i)
    {
        char tmp = s[len-1];
        for (int j = len-1; j > 0; --j)
        {
            s[j]= s[j-1];
        }
        s[0] = tmp;

    }

}
int main (){
    char c[] = "Hello";
    // int d = 2;
    strmove(c, 2);
    std::cout << c;
}