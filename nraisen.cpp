#include <iostream>

using namespace std;

int main () {

    int i,j, count=1;

    for (i=0; i<5; i++) {
        for(j=1; j<=count; j++){
            cout<<count;
        }
        cout << endl;
        count = count +1 ;
    }

}