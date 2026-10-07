#include <iostream>
#include <string>

int main(){

    int n {};
    std::cin >> n;
    
    std::string s;
    std::cin >> s;

    int tally {0};

    for(int i = 0; i < n - 1; i++){
        
        if(s[i] == s[i + 1]){
            
            tally=tally + 1;
        }
        

    }

   std::cout << tally;

    return 0;
}