
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        for(int i=0; i<flowerbed.size(); i++)
        {
            if(n == 0)
            {
                return true;
            }

            if(flowerbed[i] == 0)
            {
                // First position
                if(i == 0)
                {
                    if(flowerbed.size() == 1 || flowerbed[i+1] == 0)
                    {
                        flowerbed[i] = 1;
                        n--;
                    }
                }

                // Last position
                else if(i == flowerbed.size()-1)
                {
                    if(flowerbed[i-1] == 0)
                    {
                        flowerbed[i] = 1;
                        n--;
                    }
                }

                // Middle positions
                else
                {
                    if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0)
                    {
                        flowerbed[i] = 1;
                        n--;
                    }
                }
            }
        }

        if(n == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};