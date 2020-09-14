class Solution {

 public static boolean detectCapitalUse(String word) {
        if(word == null)return false;
        if(word.length()==1)return true;
        int size = word.length();
        int cnt =0;

       char first = word.charAt(0);
        for(int i =0;i<size;i++){
            if(Character.isUpperCase(word.charAt(i)))cnt++;
        }
        if(cnt == size){
            return true;
        }else if(cnt==1 && (first<90)){
            return true;
        }else if(cnt==0) {
            return true;
        }else if(size!=cnt){
            return false;
        }else {return false;}
     
     
    }

}