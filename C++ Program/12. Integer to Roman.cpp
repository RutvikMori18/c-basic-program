class Solution {
public:
    string intToRoman(int num) {
       int arr[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string str[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };
        string ans = "";
        int i=12;
        while(num>0){
            int d = num/arr[i];
            while(d--){
                ans += str[i];
                num = num%arr[i];
            }
            i--;
        }
        
    return ans;
        
    }
};
