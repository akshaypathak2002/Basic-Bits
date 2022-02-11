// we have to find postion of set bit in a number that is only have 1 bit set
#include <iostream>
#include <cmath>
using namespace std;

int posSetBit(int n)
{
    if (n == 0)
        return -1;
    if ((n & (n - 1)) == 0)
        return log2(n) + 1; // We are taking advantage of that only 1 bit is set that means it is power of 2
    return -1;
    // Its time complexity is O(1)
    // Its space complexity is O(1)
}
int main()
{
    int number;
    cin >> number;
    cout << posSetBit(number) << endl;
    return 0;
}