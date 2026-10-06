#include <iostream>
#include <string>

int main(){
    std::string s;
    std::cin >> s;
    int total {0};



    for(int i = 0; i < s.size(); i++){

        if(s[i] >= 'A' && s[i] <= 'Z'){
            total++;

        }

        if(total <= s.size()/2){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] = s[i] - 32;
            }
        }
        else{
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] = s[i] + 32;
            }
        }
    }

    std::cout << s;

    return 0;
}