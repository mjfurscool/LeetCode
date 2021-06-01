class Solution {
public:
    string addStrings(string num1, string num2) {
        int i1 = num1.size() - 1;
        int i2 = num2.size() - 1;
        string s = "";
        int carry = 0;
        while( i1 >= 0 || i2 >= 0 || carry != 0){
            int d1 = i1 >= 0 ? num1[i1--] - '0' : 0; 
            int d2 = i2 >= 0 ? num2[i2--] - '0' : 0;
            int sum = d1 + d2 + carry;
            carry = sum / 10;
            s += (sum % 10) + '0';
            
        }
        reverse(s.begin(), s.end());
        return s;
    }
};