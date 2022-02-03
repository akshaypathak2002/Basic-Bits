#include <iostream>
using namespace std;
// Convert from Gray code to Binary code
int GrayToBinary(int n)
{
    if (n == 0)
        return 0;
    // For the result
    int res = 0;
    while (n) // If n is not zero then go inside the loop
    {
        res ^= n;//Doing XOR of LSB with the next bits till MSB
        n >>= 1;//Shifting by 1 
    }
    return res;
}
int main()
{
    int number;
    cin >> number;
    cout << GrayToBinary(number) << endl;
    return 0;
}