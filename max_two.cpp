#include <iostream>
using namespace std;

template <typename T> T maxTwo(T x, T y)
{
    int temp;
    if (x > y)
    {
        temp = x;
    } else {
        temp = y;
    }
    return temp;
}

int main(void)
{

    cout << maxTwo<int>(3, 7) << endl;
    cout << maxTwo<int>(7, 3) << endl;
}