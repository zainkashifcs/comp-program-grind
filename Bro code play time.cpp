#include <iostream>

int main(){

    int number;

    do{
       std::cout << "Enter a pos #";
       std::cin >> number;
    }while(number < 0);   

std::cout << "This # is  " << number;
return 0;

}