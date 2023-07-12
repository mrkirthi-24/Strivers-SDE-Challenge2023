//TC = O(8)
//SC = O(1)

#include <bits/stdc++.h>
int findMinimumCoins(int amount) 
{
  vector<int>denominations { 1000, 500, 100, 50, 20, 10, 5, 2, 1 };
  //sort(denominations.begin(), denominations.end(), greater<int>());
  int counter = 0, i = 0;
  while (i < denominations.size()) {
    if (amount >= denominations[i]) {
      int coins = amount / denominations[i];
      counter += coins;
      amount -= coins * denominations[i];
    }
    i++;
  }
    return counter;
}
