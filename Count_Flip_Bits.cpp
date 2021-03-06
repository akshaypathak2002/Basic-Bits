#include <iostream>
using namespace std;
int countBitsFlip(int a, int b)
{
    int count = 0;
    while (a != 0 || b != 0)
    {
        if ((a & 1) != (b & 1))
        {
            count++;
        }
        a >>= 1;
        b >>= 1; // Right shifting the bit
    }
    return count;//Returning the output 
    // This is the best way 
}
int main()
{
    int a, b;
    cin >> a >> b; // Taking input
    cout << countBitsFlip(a, b) << endl;
    return 0;
}