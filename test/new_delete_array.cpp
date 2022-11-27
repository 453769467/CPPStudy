#include <iostream>
using namespace std;

int main(){

    double *p;
    p = new double[10];

    for(int i=0; i<10; i++){
        p[i] = 1000.01+i;
    }
    for(int i=0; i<10; i++){
        cout << p[i] << "\t";
    }
    cout << endl;
    delete p;

    return 0;
}