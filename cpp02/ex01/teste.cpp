

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x = 42.42;
    int pointBits = 8;
    int a = roundf(x * (1 << pointBits));
    float t = (float)(a) /(1 << pointBits);

    cout << t << "  -  " << a << endl;
    return 0;
}