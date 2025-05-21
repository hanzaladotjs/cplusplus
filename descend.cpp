#include <iostream> 
using namespace std;

int main () {
    int count =5;

    for(int i=0; i<5 ; i++){

        for (int j=5; j>=count; j--){
            cout<<j;
        }
        cout<<endl;
        count = count -1;
    }

}