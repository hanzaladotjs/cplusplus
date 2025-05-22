#include <iostream>

using namespace std;

int main () {

    int i, j, count =5;

    for (i=0; i<5; i++){
        for(j=1; j<=5; j++){
            if(j>=count){
                cout<<"*";
            }else {
                cout<<" ";
            }
        }
        cout<<endl;
        count = count - 1;
    }
}