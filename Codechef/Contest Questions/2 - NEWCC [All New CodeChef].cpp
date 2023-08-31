#include <iostream>
using namespace std;

int main() 
{
    int X, Y;
    cin >> X >> Y;
    
    if(X > Y) cout << "New";
    else if(X < Y) cout << "Old";
    else cout << "Same";
    
	return 0;
}
