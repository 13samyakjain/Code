class Solution {
public:
    void reverse(vector<char>& s, int start,int end){
        if(end<start) return;
        
        swap(s[start++],s[end--]);
        reverse(s,start,end);
    }
    void reverseString(vector<char>& s) {
        reverse(s,0,s.size()-1);
    }
};