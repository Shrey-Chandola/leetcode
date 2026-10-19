class Solution {
public:
    double myPow(double x, int n) {
    double ans=1;
    long binaryfm=n;
    if(x==0)    {return 0.0;}
    if(x==1)    {return 1.0;}
    if(n==0)    {return 1;}
    if(x==-1 && n%2==0) {return 1.0;}
    if(x==-1 && n%2!=0) {return -1.0;}

    if(n<0)      
        {x = 1/x;
         binaryfm = -binaryfm;
        }
    for(int i=0; binaryfm>0; i++)
        {if(binaryfm%2==1)
            {ans*=x;
            }
         x=x*x;
         binaryfm=binaryfm/2;
        }
    return ans;
    }
};