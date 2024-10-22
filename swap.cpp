#include <iostream>
using namespace std;

template <class T> T swap_values(T& x, T& y)
{
    T temp = x;
    x = y;
    y = temp;    
    return 0;

}

int main(void)
{
    int a = 3;
    int b = 7;
    cout << a << " and " << b << ".\n";
    swap_values(a, b);
    cout << a << " and " << b << ".\n";


}