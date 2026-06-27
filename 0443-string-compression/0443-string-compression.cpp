class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, idx = 0;
        while(i < chars.size()) {
            int j = i;
            while(j < chars.size() && chars[j] == chars[i]) j++;
            chars[idx++] = chars[i];
            int cnt = j - i;
            if(cnt > 1) {
                string num = to_string(cnt);
                for(char c : num) chars[idx++] = c;
            }
            i = j;
        }
        return idx;
    }
};
