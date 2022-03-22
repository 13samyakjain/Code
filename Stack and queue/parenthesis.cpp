class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for(auto it:s){
            if(it=='['||it=='{'||it=='('){
                str.push(it);
            }else{
                if(str.size()==0)return false;
                char c = str.top();
                str.pop();
                if((it=='}'&&c=='{')||(it==')'&&c=='(')||it==']'&&c=='['){
                    continue;
                }else{
                    return false;
                }
            }
        }
       return str.empty(); 
    }
};