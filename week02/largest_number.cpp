bool compare(int a, int b){
        string str1, str2;
        stringstream ss1,ss2;
        ss1<<a;
        ss1>>str1;
        ss2<<b;
        ss2>>str2;
        return str1+str2 > str2+str1;
    }
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string result;
        sort(nums.begin(),nums.end(),compare);
        for(int i = 0; i < nums.size(); i++){
            stringstream ss;
            ss<<nums[i];
            string number;
            ss>>number;
            result += number;
        }
        if(result[0] == '0'){
            return "0";
        }
        return result;
    }
};
//Time complexity: O(Nlogn + cost of comparing two item + (size of nums array * N))
//Space complexity: O(n)