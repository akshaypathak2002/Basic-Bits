#include <iostream>
#include <cmath>
using namespace std;
class Solution
{
public:
    int maximum_AND_value(int arr[], int N)
    { 
        // This is Our brute fore approach
        int ans = 0;

        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                ans = max(ans, arr[i] & arr[j]);
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n; // For the size of the number
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = s.maximum_AND_value(arr, n);
    cout << ans << endl;
    return 0;
}