#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string equation;
    cin >> equation;
    
    int i = 0, j, length = equation.length();
    vector <int> nums;
    
    for(; i < length; i += 2)
    {
        nums.push_back((equation[i] - '0'));
    }
    
    sort(nums.begin(), nums.end());
    length /= 2;
    
    for(i = 0; i < length; i++)
    {
        cout << nums[i] << "+";
    }

    cout << nums[i];
    
    return 0;
}