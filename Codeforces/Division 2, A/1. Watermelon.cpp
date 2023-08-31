#include <iostream>
using namespace std;

int main()
{
    int weightOfMelon;
    cin >> weightOfMelon;

    if(weightOfMelon != 2 && weightOfMelon % 2 == 0) cout << "YES";
    else cout << "NO";
    
    return 0;
}