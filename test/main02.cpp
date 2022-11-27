#include <iostream>
using namespace std;

int main(){
    double gallons, liters;
    
    cout<< "Enter number of gallons:";
    cin >> gallons;

    liters = gallons * 3.7854;
    cout << gallons << " gallons is equal to "<<liters << " liters."<<endl;

    return 0;
}