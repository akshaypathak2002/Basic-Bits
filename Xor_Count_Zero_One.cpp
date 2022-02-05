#include <iostream>
using namespace std;
int xorofSetandUnsetbits(int n)
{
    // Code here
    int set_bit_count = 0;
    int Unset_bit_count = 0;
    while (n != 0)
    {
        if ((n & 1) == 1)//Checking for the set bit 
        {
            set_bit_count++; // set_bit_count
        }
        else//Checking for the Unset bits 
        {
            Unset_bit_count++; // Uset_bit_count
        }
        n >>= 1;//Right shift by 1 
    }
    return (set_bit_count ^ Unset_bit_count);
}
int main()
{
    int number;
    cin >> number;//And number to get 
    cout << xorofSetandUnsetbits(number) << endl;
    return 0;
}