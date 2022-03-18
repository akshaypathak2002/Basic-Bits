// IN this we have to count pairs which have Xor result 0
#include <iostream>
#include <vector>
using namespace std;

long long int countPair(vector<int> &arr, int n)
{
    long long int count = 0;
    // Here we are going to use brute-fore approach
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] ^ arr[j]) == 0)
                count++;
        }
    }
    // Its time complexity is O(n^2)
    // Its space complexity is O(1) that is constant
    return count;
}
int main()
{
    int n; // For the size of the array
    cin >> n;
    vector<int> arr;
    arr.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << countPair(arr, n) << endl;
    return 0;
}