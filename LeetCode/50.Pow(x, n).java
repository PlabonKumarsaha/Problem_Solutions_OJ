class Solution {
   	public  double myPow(double x, int n) {
		if(n ==0){
			return 1.000000;
		}else if(n >0) {
			double value =x;
			for(int i =0;i<n-1;i++){
				value = value*x;
			}
			return value;
			//return Math.pow(x,n);
		}else if(n<0) {
			double value =x;
			n= (n*-1);
			for(int i =0;i<n-1;i++){
				value = value*x;
			}
			return 1/value;
			//return (1*power);
		}
	return 0;
	}

}