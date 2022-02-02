#include <iostream>
using namespace std;
// Trying another method

bool CheckPowerof2(long long n)
{ // This solution is in O(n)
    if (n == 0)
        return false;
    int count = 0;
    // long long temp = n;
    while (n > 0)
    {
        if ((n & (1 << count)) == 1)
        {
            return true;
        }
        count++;
    }
    return false;
}
bool checkPOwerof2(long long n)
{ // This solution is in O(logn)
    int count = 0;
    // long long temp = n;
    while (n != 0)
    {
        count += n & 1;//If number is power of 2 then it has only 1 bit set  
        n >>= 1;
    }
    if (count == 1)//Checking if 1 is set then power of 2 otherwise not 
    {
        return true;
    }
    return false;
}
bool checkPowerof2(long long n)
{
    // This solution is in constant time
    if (n == 0) // If n is 0 then it will not be power of 2
        return false;
    return ((n & (n - 1)) == 0); // Using Brion Kerningam's Algorithm
}
int main()
{
    int number;
    cin >> number;
    // cout << checkPowerof2(number) << endl;
    cout << checkPOwerof2(number) << endl;
    return 0;
}