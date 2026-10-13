#include <iostream>
#include <string>
#include <vector>
#include <cctype>

int main(){
    
    std::string s1;
    std::string s2;

    std::cin >> s1;
    std::cin >> s2;


    for(int i = 0; i < s1.size(); i++){

        s1[i] = tolower(s1[i]);
    }

    for(int j = 0; j < s2.size(); j++){

        s2[j] = tolower(s2[j]);
    }

    if( s1 < s2 ){

        std::cout << -1;
    }

    else if( s1 > s2){

        std::cout << 1;
    }

    else{

        std:: cout << 0;
    }


    return 0;
}