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
   public  char[] sortString(String value) {
    char arr[] = value.toCharArray();
    char temp;

    int i = 0;
    while (i < arr.length) {
      int j = i + 1;
      while (j < arr.length) {
        if (arr[j] < arr[i]) {

          // Comparing the characters one by one
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
        j += 1;
      }
      i += 1;
    }
    return arr;
  }
  public  boolean isAnagram(String s, String t) {

    if (s.length() == t.length()) {
      return Arrays.equals(sortString(s), sortString(t));

    } else {
      return false;
    }
  }
}
