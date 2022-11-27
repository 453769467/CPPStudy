#include <iostream>

using namespace std;

int main(){

    int i = 0;
    for (;i<10;){
        cout<<"Enter a number less than 10 to continue:";
        cin >> i;
    }

    cout << "exit testing!"<<endl;

    return 0;
}