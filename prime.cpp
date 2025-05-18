#include<iostream>
using namespace std;

// factorial of a num 5 => 5 * 4 * 3 *2 * 1

int main () {

    int num = 5, factorial=1;

    for(num; num>1; num--){
        factorial= factorial * num;
    }

    cout<< factorial;

}