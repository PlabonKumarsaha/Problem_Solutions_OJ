class Solution {
    
   public static String sortString(String in){
        char[] tempArray = in.toCharArray();
        Arrays.sort(tempArray);
        return new String(tempArray);
    }
    public  boolean isAnagram(String s, String t) {
        if(s.length()!= t.length()) return false;
        else if(sortString(s).equals(sortString(t))) return true;
        else return false;

    }
}


class Solution {
  public static String sortString(String value) {
   char arr [] = value.toCharArray();
   char temp ;
   for(int i =0 ; i< arr.length;i++){
    for(int j = 1;j<=arr.length -1;j++){
      if(arr[i]>arr[j]){
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
   }
   return new String(arr);
  }
  public static boolean isAnagram(String s, String t) {

    if(s.length() == t.length()){

     if(sortString(s).equals(sortString(t))){
       return true;
     }else {
       return false;
     }
    }else {
      return false;
    }
  }
}
