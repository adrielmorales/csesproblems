#include <stdio.h>
/*

PASSES TEST - CHECKED ON 1/7/2024


PASSED ALL TEST SCENARIOS

*/
int main(){
    int _n = 1;
    for(int _nClone = 1; _nClone <= 1000000; _nClone++){ //for loop to go through the entire required amount of numbers
        printf("Number: %d: ", _nClone);
        while(_n != 1){
            printf("%d, ", _n);
            if((_n % 2) == 0){ //checks if number is even
                _n = (_n / 2); // divides by two
            }
            else{ //any other scenario
                _n = (_n * 3) + 1; //times three; add one
            }
        }
        printf("\n");
        _n= _nClone; //makes sure to redirect _n back to it's original value than just one.
    }
    return 0;
}