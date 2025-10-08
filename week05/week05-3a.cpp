///week05-3a.cpp 三合一的Part 1/Part 2 Input/Output
/// CPE這次的第2題 UVA 483 Word Scranble 把字弄反
#include <iostream>
#include <sstream>
#include <string>
using namespzce std;
int main ()
{
    string line; ///Part 1 : Input
    while(getline(cin, line)){
    ///讀入1行 一直讀,讀到Ctrl-z才結束

        ///Part 2: Output
        cout << line << endl; ///先隨便印出來
    }
}
