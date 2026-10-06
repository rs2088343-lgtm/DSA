#include <vector>
#include <iostream>

using namespace std;


    int helper(int i , vector<int>& coins ,int amount){
        cout<<"i = "<<i<<" amount = "<<amount<<endl;
        if(amount == 0) return 1;
        if(i == 0) {
            return (amount % coins[0] == 0) ? 1 : 0;
        }
        
        int notPick = helper(i-1, coins, amount);
        int pick = 0;
        if(coins[i] <= amount) {
            pick = helper(i, coins, amount - coins[i]);
        } 
        return notPick + pick;
    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        if (n == 0) return amount == 0 ? 1 : 0;
        return helper(n-1, coins, amount);
    }


int main(){
    vector<int> coins = {1,2,3};
    int amount = 5;
    int ans = change(amount, coins );
    cout<<ans<<endl;
    return 0 ;
}