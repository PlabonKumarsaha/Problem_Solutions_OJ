class Solution {
    public static boolean isPowerOfFour(int num) {
        boolean type = false;

        if(num<=0)return false;
        else if (num ==1) return true;

        int num1 =1;
       while (!(num1>=num)){

           num1 = num1*4;
           if(num1>num){ type=false;}
           else if(num1==num) { type=true;}

       }
       return type;

}
}