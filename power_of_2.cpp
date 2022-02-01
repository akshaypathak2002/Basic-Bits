#include <iostream>
using namespace std;
bool checkPowerof2(long long n)
{
    if (n == 0) // If n is 0 then it will not be power of 2
        return false;
    return ((n & (n - 1)) == 0); // Using Brion Kerningam's Algorithm
}
int main()
{
    int number;
    cin >> number;
    cout << checkPowerof2(number) << endl;
    return 0;
}