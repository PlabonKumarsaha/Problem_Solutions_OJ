class Solution {
   public static boolean isValid(String s) {
       // boolean check = false;
        Stack<Character> stack = new Stack<>();
        for(int i=0;i<s.length();i++){
            char now =s.charAt(i);
            if(now == '(' || now == '{' || now == '['){
                stack.push(now);
            } else if(stack.isEmpty()){
                return false;
            }
            else if(now == ')' && stack.pop() != '(')
            {
                return false;
            }
            else if(now == '}' && stack.pop() != '{')
            {
                return false;
            }
            else if(now == ']' && stack.pop() !='[')
            {
                return false;
            }
        }

        return stack.isEmpty();
   }

}