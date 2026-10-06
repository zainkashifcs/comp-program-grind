#include <iostream>
#include <string>

int main (){
    std::string s;
    std::cin >> s;

    if(s[0] >= 'A' && s[0] <= 'Z'){
        std::cout << s;
    }

    else{
        s[0]= s[0] - 32;
        std::cout << s;
        
    }
    



    return 0;
}