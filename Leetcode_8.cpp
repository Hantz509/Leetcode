class Solution {
public:
    int myAtoi(string s) {
       
       int i = 0;
       int sign = 1;
       while(i < s.size() && s[i] == ' '){
        i++;
       }

       if(i < s.size() && s[i] == '-' || s[i] == '+'){
            if(s[i] == '-'){
                sign = -1;
            }
            i++;
       }

       if( i >= s.size() || !isdigit(s[i])){
            return 0;
       }
        long long  result = 0;
       while( i < s.size() && isdigit(s[i]) ){
            if ( sign == -1 && (result*sign) < INT_MIN)
                  return INT_MIN;
            else if(sign == 1 && result > INT_MAX)
                return INT_MAX;  
            result = result * 10 + (s[i] - '0') ;
            i++;
       }
        
        result *= sign;
        if(result > INT_MAX )
            return INT_MAX;
        else if(result< INT_MIN)
            return INT_MIN;
        
        else
            return result;

    }
};