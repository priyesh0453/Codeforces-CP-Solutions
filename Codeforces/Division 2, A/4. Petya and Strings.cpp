#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string word1, word2;
    cin >> word1 >> word2;
    
    transform(word1.begin(), word1.end(), word1.begin(), ::tolower);
    transform(word2.begin(), word2.end(), word2. begin(), ::tolower);
    
    int i = 0, length = word1.length(), counter = 0;
    
    for(; i < length; i++)
    {
        if(word1[i] == word2[i]) continue;
        
        counter = word1[i] < word2[i] ? -1 : 1;
        break;
    }
    
    cout << counter;
    
    return 0;
}