class Solution {
public:
    string longestPalindrome(string s) {

        int len = s.size();
        if (len <= 1){
            return s;
        }
        int l = 0;
        int r = 0;
        int pal_len = 1;
        int st = 0;
       
            for(int i = 0 ; i < len ; i++){
                    l = i;
                    r = i;
                while(l>=0 && r < len){
                    if(s[l] == s[r]){
                        l--;
                        r++;
                    }
                    else{
                        break;
                    }

                    int current_len = r-l-1;
                    if( current_len > pal_len){
                        pal_len = current_len;
                        st = l+1;
                    }
                    
                }

                 

            }

        
        
        
    
            for(int i = 0; i<len-1; i++){
                    l = i;
                    r = i+1;
                while(l>=0 && r<len){
                    if(s[l] == s[r]){
                        l--;
                        r++;
                    }
                    else{
                        break;
                    }
                    int current_len = r-l-1;
                    if( current_len > pal_len){
                        pal_len = current_len;
                        st = l+1;
                    }
                    
                }
                
            }
            
        
        return s.substr(st,pal_len);
    }

    
};