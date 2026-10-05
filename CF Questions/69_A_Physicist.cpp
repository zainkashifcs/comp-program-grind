#include <iostream>

int main (){

    int n{};
    int x{};
    int y{};
    int z{};

    int xf {};
    int yf {};
    int zf {};

    std::cin >> n;

    for(int i = 0; i < n; i++){

        std::cin >> x;
        std::cin >> y;
        std::cin >> z;

        xf += x;
        yf += y;
        zf += z;
    }
    

        if(xf == 0 && yf == 0 && zf == 0){
            std::cout << "YES";
        }

        else{
            std::cout << "NO";
        }


    
 return 0;
}