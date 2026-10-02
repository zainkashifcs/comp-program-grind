#include <iostream>

int main(){

    int x {};
    int k {};

    std::cin >> x;
    std::cin >> k;

    for(int i = 0; i < k; i++){

        if(x % 10 == 0){
            x=x/10;

        }

        else{

            x=x-1;
        }

    }
    std::cout << x ;   
  return 0;
}