class Solution {
    public int reverse(int x) {
        boolean flag = false;
        if(x==Integer.MIN_VALUE || x==Integer.MAX_VALUE)  { return 0; }
        if(x<0)  { flag = true; x = (-x); }
        int count = 0, temp = x, rev = 0;
        while(temp!=0)  { count++; temp/=10; }  
        if(count==10 && (x%10)>2)  { return 0; }      
        for(int i=0; i<count; i++)
            {if((count==10)&& (i==(count-1)) && (rev%10)>4)  { return 0; }
             rev = (rev * 10) + (x % 10);
             x/=10;
            }
        if(flag) { return -rev; }
        return rev; 
    }
}