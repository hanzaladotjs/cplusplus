#include <iostream>
using namespace std;

int main () {
    int i,j,star=1;
    for ( i=0; i<5; i++){
        for( j=0; j<star; j++){
            cout<<"*";
        }
        cout<<endl;
        star= star +1;
    }
}