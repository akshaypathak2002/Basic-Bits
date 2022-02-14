// we have to find the output of the OR gate
//  We known that output is 1 if anyone of the value is 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Orgate
{
    vector<int> arr;
    int size;

public:
    Orgate()
    {
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
    }
    int OrGate()
    {
        bool check = false; // We are checking the whole array if any value is 1 then its output is 1
        vector<int>::iterator itr;
        itr = find(arr.begin(), arr.end(), 1);
        if (itr != arr.end())
            return 1;
        return 0;
    }
    // Its time complexity is O(logn) as we are using predefined function in c++
};

int main()
{
    Orgate *o1 = new Orgate();
    cout << o1->OrGate() << endl;
}