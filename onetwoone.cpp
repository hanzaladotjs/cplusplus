#include <iostream>

using namespace std;

int main () {

    int i,j,count=1;

    for(i=1; i<=5; i++){
        
        for(j=count; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
        
        count = count +1;


        
    }

}