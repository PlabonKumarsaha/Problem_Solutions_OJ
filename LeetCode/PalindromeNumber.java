class Solution {
    public boolean isPalindrome(int x) {
        int num = x;
        int ans=0;
        if(x<0){return false;}
        else{
            while(x !=0){
                ans = ans*10+(x%10);
                x=x/10;
            }
            if(ans == num){return true;}
            else{
                return false;
            }
        }
        
        
    }
}