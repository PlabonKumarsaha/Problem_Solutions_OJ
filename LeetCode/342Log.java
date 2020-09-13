   public static boolean isPowerOfFour(int num) {

        //the solution is asking for exponent value of the number in terms of 4. Here if just find the Log4 value of the number we can find a
        //solution .. so the ans is log4 (num)..which can also be written as log(num)/log(4).
        //so if the log value is int/full number then we will return true or else it will be false
       return (Math.log(num)/Math.log(4))%1 ==0;

}