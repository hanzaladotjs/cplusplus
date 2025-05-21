#include <iostream>
using namespace std;

int main () {
    int i, j;
    char k='a';

    for(i=0; i<5; i++) {
        for(j=0; j<5; j++){
            cout<<k;
        }
        cout<<endl;
        k= k+1;
    }
}