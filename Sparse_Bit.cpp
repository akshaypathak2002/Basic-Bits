// How to check If number is Spare or Not
// That means it has 2 or more Consecutive set bits
#include <iostream>
using namespace std;
bool sparse_Bit(int n)
{
    return ((n & (n >> 1)) == 0); // If (n&(n>>1))==0 is 0 then it is Sparse number
    /*What we are doing here
    let us take example
    n=2=0010
    n>>1=0001
    if we do &(Bitwise and ) we get zero */
    //This patter is follow in all number in which we does not have consecutive set bits 
}
int main()
{
    int num;
    cin >> num;
    cout << sparse_Bit(num) << endl;
    return 0;
}