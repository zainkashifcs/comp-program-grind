// HW4: sum of 1 to n
// x = the limit (how far to count). It never changes.
// i = the current step (1, 2, 3, ...). It changes every loop.
// sum = the running total (the "piggy bank"), starts at 0.

#include <iostream>

int main(){

    
    int sum = 0; // empty piggy bank
    int x;
    std::cin >> x;
    
    for( int i = 1 ; i <= x ; i++ ){
        
        sum = sum + i; // add the CURRENT step (i), not the limit (x)
    }                  // using x would give 3+3+3 instead of 1+2+3
    std::cout << sum;  // print once, AFTER the loop
}