#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long calcDel();

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        cout << calcDel() << endl;
    }
    
	return 0;
}

long long calcDel()
{
    int N, K, L, i = 0, temp, tempIndex;
    long long totalDel = 0; 
    cin >> N >> K >> L;
    
    vector <int> deliciousness(N);
    
    for(; i < N; i++)
    {
        cin >> deliciousness[i];
    }
    
    sort(deliciousness.rbegin(), deliciousness.rend());
    
    temp = N;
    tempIndex = (L - 1);
    
    while(temp > 0 && tempIndex < N)
    {
        totalDel += deliciousness[tempIndex];
        
        temp -= K;
        tempIndex += K;
    }
    
    return totalDel;
}