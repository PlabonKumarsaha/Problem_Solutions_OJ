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
