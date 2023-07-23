#include <iostream>
using namespace std;

int main()
{
    string word;
    cin >> word;
    
    int length = word.length(), i = 0;
    string output;
    
    for(; i < length; i++)
    {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'Y') continue;
        
        output += '.';
        output += (char) tolower(word[i]);
    }
    
    cout << output;
    
    return 0;
}