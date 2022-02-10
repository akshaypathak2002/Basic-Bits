// We have to check a number is Bleak or not
#include <iostream>
#include <cmath>
using namespace std;
int countSetBit(int n)
{
    // To count set bits in a number
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
bool isBleakorNot(int n)
{
    for (int i = 1; i <= ceil(log2(n)); i++)
    {
        int temp = n - i; // Subtract i from n
        // It checks for all number between 1 till n using this efficient method
        if ((temp + countSetBit(temp)) == n)
            return true;
    }
    return false;
    // Its time complexity is O(logn * logn)
}
int main()
{
    int number;
    cin >> number;
    cout << isBleakorNot(number) << endl;
    return 0;
}