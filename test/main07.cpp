#include <iostream>
using namespace std;

enum apple {
    Jonathan,
    Golden_Del,
    Red_Del,
    Winesap,
    Cortland,
    McIntosh
} fruit;

char name [][20] = {
    "Jonathan",
    "Golden Delicious",
    "Red Delicious",
    "Winesap",
    "Cortland",
    "McIntosh"
};

int main(){

    fruit = Jonathan;
    cout << name[fruit] << endl;

    fruit = Golden_Del;
    cout << name[fruit] << endl;

    fruit = Winesap;
    cout << name[fruit] << endl;

    return 0;
}