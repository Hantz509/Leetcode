class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1 || numRows >= s.size()){
            return s;
        }

        vector<string>zigzag(numRows);

        int ind = 0 ;
        bool goingdown = true;
        
        for (char c : s){
            zigzag[ind] += c;

             if(goingdown){
                ind++;
            }
            else{
                ind--;
            }
            
            if (ind == numRows - 1 || ind == 0){
                goingdown = !goingdown;
            }
           
        }

        string result;
        for(const string& row : zigzag){
            result += row;
        }
        return result;
    }
};