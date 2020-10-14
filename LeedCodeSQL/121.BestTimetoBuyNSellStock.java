class Solution {
    public int maxProfit(int[] prices) {
       int psize = prices.length;
        //if not enough values return 0
        if(psize<2)return 0;


        int min =prices[0];
        int minIndex =0;
        int maxProf =0;


        for(int i = 1;i<psize;i++){
            if(prices[i]<min){ //looks for the minimum price and it's index
                min = prices[i];
                minIndex=i;
            } else if(prices[i]-prices[minIndex]>maxProf ){  //check if there is a chance to //increase profit
                maxProf = prices[i]-prices[minIndex];
            }
        }
        if(minIndex == psize){
            return 0;
        }

        return maxProf;
        
    }
}