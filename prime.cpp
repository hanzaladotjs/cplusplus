#include <iostream>
using namespace std;


int main () {
    int num =2, i;

    for(i=2; i<num; i++){

        if(num%i==0){
            cout << "not prime";
            return 0;
        }

    }

    cout<<"its prime";


}