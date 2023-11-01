// helloworld.cpp
// Traditional hello world program
// By Daniel Parker

#include <iostream>
using namespace std;

//This is a single line comment

/*
 This is a multi-line comment
*/

int main(int argc, char *argv[]) {
    const int numOne = 1;
    int numTwo = 2;

    // << is the insertion operator
    // >> is the extraction operator

    cout << "Hello World!\n" << numOne << "\n" << numTwo;
}