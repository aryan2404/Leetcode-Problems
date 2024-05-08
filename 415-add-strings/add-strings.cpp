class Solution {
public:
    string addStrings(std::string num1, string num2) {
        int index1 = num1.size() - 1, index2 = num2.size() - 1;
        string ans;
        int carry = 0, sum;
        while (index1 >= 0 || index2 >= 0 || carry > 0) {
            sum = carry;
            if (index1 >= 0) {
                sum += num1[index1] - '0';
                index1--;
            }
            if (index2 >= 0) {
                sum += num2[index2] - '0';
                index2--;
            }
            carry = sum / 10;
            char c = '0' + sum % 10;
            ans += c;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};