class Solution {
    public boolean checkPerfectNumber(int num) {
        if(num%10!=6 && num%10!=8)  { return false; }
        int res = 1;
        for(int i=2; i<=num/2; i++)
            {if(num%i==0) { res = res + i; }
             else { continue; }
            }
        return (num == res);
    }
}