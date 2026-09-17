class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int max = deck[0];

        // Find maximum value
        for(int i = 1; i < deck.size(); i++)
        {
            if(deck[i] > max)
                max = deck[i];
        }

        // Count frequency
        vector<int> vec(max + 1, 0);

        for(int i = 0; i < deck.size(); i++)
        {
            vec[deck[i]]++;
        }

        int x = 0;

        // Find GCD of all frequencies
        for(int i = 0; i < vec.size(); i++)
        {
            if(vec[i] != 0)
            {
                if(x == 0)
                {
                    x = vec[i];
                }
                else
                {
                    int a = x;
                    int b = vec[i];

                    while(b != 0)
                    {
                        int temp = b;
                        b = a % b;
                        a = temp;
                    }

                    x = a;
                }
            }
        }

        if(x >= 2)
            return true;
        else
            return false;
    }
};