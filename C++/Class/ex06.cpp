// Sizes of memory that each type of number occupies
#include <iostream>
using namespace std;

int main()
{
    cout << "Sizes in bytes of:" << endl;
    cout << "char: " << sizeof(char) << endl; //1
    cout << "short int: " << sizeof(short) << endl; // 2
    cout << "int: " << sizeof(int) << endl; // 4
    cout << "long int: " << sizeof(long) << endl; // 8
    cout << "float: " << sizeof(float) << endl; // 4
    cout << "double: " << sizeof(double) << endl; // 8
    cout << "long double: " << sizeof(long double) << endl; //16, it gives 8, I dont know why, review tomorrow

    return 0;
}
