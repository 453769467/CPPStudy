#include <iostream>
using namespace std;

void my_func(); // 函数原型

int main(){

    cout<<"inside main func."<<endl;
    my_func();
    return 0;
}

void my_func(){
    cout<<"Inside my_func."<<endl;
}