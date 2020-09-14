class Solution {

 public static boolean detectCapitalUse(String word) {
        if(word == null)return false;
        if(word.length()==1)return true;
        int size = word.length();
        boolean count = false;


         char first = word.charAt(0);
         char second = word.charAt(1);

         if(first<97 && second<97 ){ //if first char starts with  upper case
             for(int i =1 ;i<size;i++){
                 if(word.charAt(i)<97){count= true;}
                 else if(word.charAt(i)>=97){
                     return false;
                 }
             } }
        else if(first<97 && second>=97 ){ //if first char starts with  upper case
            for(int i =1 ;i<size;i++){
                if(word.charAt(i)>=97){count= true;}
                else if(word.charAt(i)<97){
                    return false;
                }
            } }
         else if(first>=97){ //starts with lower case
            for(int i =1 ;i<size;i++){
                if(word.charAt(i)>=97) {count= true;}
                else if(word.charAt(i)<97){
                    return false;
                   // break;
                }
            } }
         else if(first<97 && second<97){  //checking for the upper case
             for(int i =2 ;i<size;i++){
                 if(word.charAt(i)<97) count= true;
                 else {
                     count= false;
                     return false;
                 }
             }
         }
        else if(first<97 && second>=97) {
             count = true;
             for (int i = 2; i <size; i++) {
                 if (word.charAt(i) >= 97) {
                     count = true;
                 } else if (word.charAt(i) < 90) {
                     count = false;
                     //break;
                     return false;
                 }
             }
         }
return count;
    }

}
