#include <iostream>
#include "snowman.hpp"
#include "string.h"

int main(){
    cout << ariel::snowman(21111111)<<endl;
    cout << ariel::snowman(21111211)<<endl;
    cout << ariel::snowman(1111)<<endl;
    cout << ariel::snowman(11111111)<<endl;
    cout << ariel::snowman(-2)<<endl;
    cout << ariel::snowman(51111111)<<endl;
    return 0;
}