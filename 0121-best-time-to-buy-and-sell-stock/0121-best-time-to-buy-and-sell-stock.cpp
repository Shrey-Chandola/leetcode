class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Bestbuy=prices[0], maxpro=0;
        for(int i=0; i<prices.size(); i++)
            {if(prices[i]>maxpro)
                {maxpro=max(maxpro,prices[i]-Bestbuy);
                }
        Bestbuy=min(prices[i],Bestbuy);
            }
        return maxpro;
    }
};