class Solution {
public:
    int reverse(int x) {
        long long result = 0;
        string str = to_string(x);
        if ( str[0] == '-'){
            std::reverse(str.begin()+1, str.end());
            result = stoll(str);
        }
        else{
            std::reverse(str.begin(), str.end());
            result = stoll(str);
        }
        
        if(result < INT_MIN || result > INT_MAX)
            return 0;
            
        return result;
       
    }
};