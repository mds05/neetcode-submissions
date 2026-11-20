#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        for(char ch:s){
            if(ch=='[' || ch=='('||ch=='{'){
                st.push(ch);
            }
            else if(ch==']' || ch==')'||ch=='}'){
                if(st.empty()) return false;
                char ch2=st.top();
                st.pop();
                if((ch==']' && ch2=='[')||
                
                (ch=='}' && ch2=='{')|| 
                
                (ch==')' && ch2=='(')) continue;
                else return false;
            }
        }

        if(!st.empty()){
            return false;
        }
        else return true;
    }
};
