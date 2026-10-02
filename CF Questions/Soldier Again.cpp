#include <iostream>
int main(){

    int w {};
    int k {};
    int n {};
    int total {};

    std::cin >> k;
    std::cin >> n;
    std::cin >> w;

    total = k*w*(w+1)/2;


    if(n >= total){
        
        std::cout << 0;
    }

    else{

        total=total - n;
        std::cout << total;
    }

    return 0;
}