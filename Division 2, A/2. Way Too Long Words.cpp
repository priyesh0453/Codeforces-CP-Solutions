#include <iostream>
#include <string>
using namespace std;

int abbreviate()
{
    string word, abbreviation;
    cin >> word;
    
    int length = word.length();
    
    if(length <= 10) cout << word << endl;
    else
    {
        abbreviation = word[0] + to_string(length - 2) + word[(length - 1)];
        cout << abbreviation << endl;     
    }
    
    return 0;
}

int main()
{
    int n;
    cin >> n;
    
    while(n--)
    {
        abbreviate();
    }
    
    return 0;
}