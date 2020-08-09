class Solution {
    public int reverse(int x) {
        int remainder =0;
        int ans = 0;
      int sign = x>0? 1:-1;
        if(x<0){x = x*-1;}
        while(x!=0){
            remainder = x%10;
            ans = (ans*10)+remainder;
            x = x/10;     
        }
        return ans*sign;    
    }
}