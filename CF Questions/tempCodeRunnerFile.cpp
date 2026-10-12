#include <iostream>
#include <string>
#include <map>


int main(){

    std::string s;
    std::cin >> s;
    std::map<char, int> freq;

    for (int i = 0; i < s.size(); i++){

        freq[s[i]]++;
    }

    for(auto p : freq){
        
        std::cout << p.first << ": " << p.second << '\n';
    }



    return 0;
}