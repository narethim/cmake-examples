#include <iostream>

using namespace std;
/**
 * To configure:
 *     cmake -H. -Bbuild
 * 
 * To compile:
 *     cmake --build build -- -j3
 * 
 * To test:
 *     ./build/Hello
 */

int main() {
    cout << "Hello world!" << endl;

    return 0;
}