#include <iostream>
using namespace std;

template <typename T> T maxThree(T x, T y, T z)
{
    int temp;
    
    if ((x > y) && (x > z))
    {
        temp = x;
    } else if (y >= z) {
        temp = y;
    } else {
        temp = z;
    }

    return temp;
}

int main(void)
{
    int a = 3;
    int b = 7;
    int c = 10;

    cout << maxThree<int>(a, b, c) << " " << maxThree<int>(b, c, a) << " " << maxThree<int>(c, a, b) << endl;

}