#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Solution {
    public:
        int reverse(int x) {
            stringstream tmp1;
            tmp1<<x;
            string tmp = tmp1.str();

            if(tmp[0] == '-'){
                int len = tmp.length()-1;

                for(int i = 1; i<tmp.length()/2; i++, len--){
                    char temp = tmp[i];
                    tmp[i]= tmp[len];
                    tmp[len] = temp;
                }
            }else{
                int len = tmp.length()-1;
                for(int i = 0; i<tmp.length()/2; i++, len--){
                    char temp = tmp[i];
                    tmp[i]= tmp[len];
                    tmp[len] = temp;
                }

                int y;
                istringstream(tmp) >> y;
                return y;
            }
        }
};

int main(int argc, char** argv){
    Solution sol;
    //int test = 456;
    //int test = 23456;
    //string test = "-456";
    int test = 123456789;
    int res = sol.reverse(test);
    std::cout<<res<<endl;
    
    return 0;
}
