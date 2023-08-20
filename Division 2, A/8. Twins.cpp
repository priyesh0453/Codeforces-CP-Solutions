#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCoinsNeeded(vector <int> coins, int noOfCoins, int totalSum);

int main()
{
    int noOfCoins, i = 0, totalSum = 0;
    cin >> noOfCoins;
    
    vector <int> coins(noOfCoins);
    
    for(; i < noOfCoins; i++)
    {
        cin >> coins[i];
        totalSum += coins[i];
    }
    
    cout << minCoinsNeeded(coins, noOfCoins, totalSum);
    
    return 0;
}

int minCoinsNeeded(vector <int> coins, int noOfCoins, int totalSum)
{
    int minCoins = 0, temp_Sum = 0, i = 0;
    
    sort(coins.rbegin(), coins.rend());
    
    for(; i < noOfCoins; i++)
    {
        if(temp_Sum <= totalSum) 
        {
            temp_Sum += coins[i];
            totalSum -= coins[i];
            minCoins++;
        }
    }
    
    return minCoins;
}