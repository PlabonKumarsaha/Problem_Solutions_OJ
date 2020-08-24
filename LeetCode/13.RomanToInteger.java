class Solution {
    
    
    
    
    public int romanToInt(String s) {
    if(s.equals("")){
            return 0;
        }
        HashMap<Character, Integer>values = new HashMap<Character, Integer>();
        values.put('I',1);
        values.put('V',5);
        values.put('X',10);
        values.put('L',50);
        values.put('C',100);
        values.put('D',500);
        values.put('M',1000);
        int pre = values.get(s.charAt(0));
        int sum =0;


        for (int i = 1; i <s.length(); i++) {
            int current = values.get(s.charAt(i));

           if(pre<current){
               pre = current - pre;
            }
           else {
               //pre = pre+current;
               sum = sum+pre;
               pre =current;
           }

       }
        if(pre!=0){
            sum+=pre;
        }
        return sum;
        //return 0;
}
}