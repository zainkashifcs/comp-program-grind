#include <iostream>
#include <string>

int main(){

    int n {};
    std::cin >> n;

    for(int i = 0; i < n ; i++){
        std::string s;
        std::cin >> s;

        if(s.size() > 10 ){

            std::cout << s[0];
            std::cout << s.size() - 2 ;
            std::cout << s[s.size()-1] << '\n';

        }

        else{
            std::cout << s << '\n';
        }
   
    }



    return 0;      
}