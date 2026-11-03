class Solution {
public:
   void string (vector<char>& s,int i , int j){
    if(i>=j){
        return;
    }
    swap(s[i],s[j]);
     string(s,i+1,j-1);
   }
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size()-1;
        string(s,i,j);
    }
};