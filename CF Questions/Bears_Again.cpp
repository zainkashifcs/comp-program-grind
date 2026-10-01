#include <iostream>

int main(){

    int a {};
    int b {};
    int years {};

    std::cin >> a;
    std::cin >> b;

    do{
        a=a*3;
        b=b*2;
        years++;

    } while (a<=b);

    std::cout << years;
    



    return 0;
}