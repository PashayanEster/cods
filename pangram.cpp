#include<iostream>
#include<string>
#include<map>
void line(const std::string& str){
    std::map<char,int> tmp;

    for (int i = 0; i < str.size(); ++i){
        if (str[i] >= 65 && str[i] <= 122){
            if (tmp.find(str[i]) == tmp.end()) {
                tmp[str[i]] = 1;
            }
        }
    } 
    int res = 0;
    for (const auto& pair: tmp) {
        ++res;
    }
    
    if(res == 52) {std::cout << "pangram";}
    else {std::cout << "no pagram";}
}

int main (){
    line("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM");
}