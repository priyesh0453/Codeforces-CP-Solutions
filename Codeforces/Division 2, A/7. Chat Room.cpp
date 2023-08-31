#include <iostream>
using namespace std;

int main()
{
    string s, target = "hello";
    cin >> s;
    
    int i = 0, length = s.length(), tempIndex = 0;
    
    for(; i < length; i++)
    {
        if(s[i] == target[tempIndex]) tempIndex++;
        if(tempIndex == 5) 
        {
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
    
    return 0;
}