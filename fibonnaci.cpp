#include<iostream>

using namespace std;

int main () {

    // fibanacci 0 1 1 2 3 5 8

  long  int  first=0, second=1;

    for(int i=0; i<50; i++){
        cout<<first<<endl;
      
       long int sum = first + second;
        first= second;
        second=sum;

    }
    return 0;
}