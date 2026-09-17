#include <iostream>
using namespace std;

int main()
{
    char c = 'A';
    short s = 125;
    int i = -13;
    unsigned int u = 429496729;
    long l = -229496729;
    unsigned long ul = 4147483647;
    float f = 3.1416f;
    double d = 3.1416E100;
    long double ld = 3.1416E-200;

    cout << c << ", " << s << ", " << i << ", "
        << u << ", " << l << ", " << ul << ", "
        << f << ", " << d << ", " << l << ", " << d;
    return 0;
}
