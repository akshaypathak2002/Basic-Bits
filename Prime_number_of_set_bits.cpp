// In this we have to count set bits and then we need to check to that it is prime or not
#include <iostream>
using namespace std;
// To check the number  is prime or not
bool isPrime(int n)
{
    if (n == 0 || n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0) // It is a multiple of 2 and 3 that why it is false
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
// To check that bits counted are prime or not
bool countPrimeOrNot(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    if (isPrime(count))
        return true;
    return false;
}
int primeSetBits(int L, int R)
{
    int res = 0; // Intializing a variable
    for (int i = L; i <= R; i++)
    {
        if (countPrimeOrNot(i))
            res++;
    }
    return res;
    //It time complexity is O(n.log(n)*sqrt(n))
}
int main()
{
    int Left, Right;
    cin >> Left >> Right;
    cout << primeSetBits(Left, Right) << endl;

    return 0;
}