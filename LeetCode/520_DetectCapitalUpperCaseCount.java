class Solution {

 public static boolean detectCapitalUse(String word) {
        if(word == null)return false;
        if(word.length()==1)return true;
        int size = word.length();
        int cnt =0; //number of uppercase charecters will be counted

       char first = word.charAt(0);
        for(int i =0;i<size;i++){
            if(Character.isUpperCase(word.charAt(i)))cnt++;
        }
        if(cnt == size){ //if all charecters are uppercase
            return true;
        }else if(cnt==1 && (first<90)){ //if only one upper case char and it is the first one then true
            return true;
        }else if(cnt==0) { //if there is no uppercase words
            return true;
        }else if(size!=cnt){ //if there is mixed chars
            return false;
        }else {return false;}
     
     
    }

}
