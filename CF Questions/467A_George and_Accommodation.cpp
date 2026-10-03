#include <iostream>

int main (){

    int n{};
    std::cin >> n;
    int total {};
    int count {};

    for(int i = 0; i < n; i++){

        int p{};
        int q{};

        std::cin >> p;
        std::cin >> q;

        total = q - p;

        if(total >= 2){
            count=count + 1;

            
        }


    }

    std::cout << count;
    return 0;
}