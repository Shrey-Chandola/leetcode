class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int n=0, a=x;
        while(x>0)
            {n = (n*10 + x%10);
             x=x/10;
            }
        if(n==a)
            {return true;
            }
        else
            {return false;
            }
    }
};