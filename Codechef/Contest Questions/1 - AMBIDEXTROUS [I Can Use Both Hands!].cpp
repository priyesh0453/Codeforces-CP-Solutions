#include <iostream>
#include <cmath>
using namespace std;

int calcSatisfaction();

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        cout << calcSatisfaction() << endl;
    }
    
	return 0;
}

int calcSatisfaction()
{
    int L, R, M, satifaction = 0;
    cin >> L >> R >> M;
    
    satifaction = (ceil)(M * 1.0 / L) + (M / R);
    
    return satifaction;
}