// 02.nameMe.cpp
// Julia Núñez  17-09-2026
// This program uses the variables "i" and "sum" inside a while loop, to sume i + sum, for i values from 1 to 100. And the with the cout code, the program shares the result when we run our code

#include <iostream>
using namespace std;

int main()
{
    // variable assign
    int sum = 0;
    int i = 1;

    // while loop, it works until the loop variable reaches the top number
    while (i<=100)
    {
        sum = sum + i;  //accumulate
        i = i + 1;  //update the loop variable (i)
    }
    cout << "The result of this is: " << sum << endl;  // to print the result (print text + print result)

    return 0;
}