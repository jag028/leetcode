#include <string>
#include <sstream>
#include <iostream>

using namespace std; 

class Solution {
    public:
        bool isPalindrome(int x) {
            stringstream y;
            y<<x;
            string newStr = y.str();
            if(newStr.length()==1){
                return true;
            }
            if(newStr.length() <3){
                if(newStr[0] != newStr[1]){
                    return false;
                }
                return true;
            }

            int len = (newStr.length()-1)/2;

            for(int i = 0,k=newStr.length()-1; i<=len; i++,k--){
                if(newStr[i] != newStr[k]){
                    return false;
                }
            }
            return true;
        }
};

int main(){
    Solution sol;
    int test;
    std::cout<<"Please enter a number"<<endl;
    cin >>test;
    bool res = sol.isPalindrome(test);
    std::cout<<test<<" is "<<std::boolalpha<<res<<endl;

    return 0;
}
