#include <iostream>
#include <string>
#include <map>

void foo(std::string str) {
    std::map<char, int> res;
    char vowels[] = {'a', 'u', 'i', 'o', 'y', 'e'};
    for (int i = 0; i < str.size(); ++i) {
        for (int j = 0; j < 6; ++j) {
            if (str[i] == vowels[j] || str[i] == vowels[j] - 32) {
                if (res.find(str[i]) == res.end()) {
                    res[str[i]] = 1;
                }
                else{
                    ++res[str[i]];
                }
            break;
            }
        }
    }
    for (const auto& pair : res) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

}
int main() {
    foo("HEello world");
}


