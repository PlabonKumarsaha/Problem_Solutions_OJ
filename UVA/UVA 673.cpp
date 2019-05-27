#include <bits/stdc++.h>
using namespace std;
stack<char>st;
bool isBalanced(string s)
{
  char x;
  //traverse the whole input
  for(int i=0;i<s.length();i++)
  {
      //first check for opening tags,if any element is starting tag then it is pushed to the stack
      if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
                //if we can push any element then no need to check the rest of the code
                continue;
            }
            //if no starting tag found then the result is false
         if(st.empty()) return false;
//now we look for balanced closing tags
//if any tag is not opening tag then it should be closing tag
       switch(s[i])
       {
           //if closing index is ')' then we check if the top value from stack is either '{' or '[' ..If any
           //are true then the input is not balanced
    case ')' :
        x=st.top();
        st.pop();
        if(x == '{' || x =='[')
        return false;
        break;

     case '}' :
        x=st.top();
        st.pop();
        if(x== '(' || x=='[')
        return false;
        break;

     case ']' :
        x=st.top();
        st.pop();
        if(x== '(' || x=='{')
        return false;
        break;
       }
  }
//after checking everything if the stack is now empty every
//opening tag has a closing tag then the function returns true
return (st.empty());
}
int main()
{
    int num;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        string s;
        cin>>s;
        if(isBalanced(s))
        {
      cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}
