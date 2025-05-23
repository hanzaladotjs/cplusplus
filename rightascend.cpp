#include <iostream>

using namespace std;

int main () {

    int i,j,count=5,pattern=1;

    for(i=1; i<=5; i++) {

        for (j=1; j<=5; j++) {
            if(j>=count){
                cout<<pattern;
                pattern++;
            }else{
                cout<<" ";
            }
        }
        count=count-1;
        pattern=1;
        cout<<endl;
    }
}