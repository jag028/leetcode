#include <sstream>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
    public:
        string countAndSay(int n){
            if (n == 1){return "1";}
            if (n == 2){return "11";}
            //converting int to string using ostringstream
            std::ostringstream oss;
            oss<<n;
            string tmp = oss.str();
            std::stringstream ss;

            //getting length of string
            int len = tmp.length();

            //declare variables
            //int count;
            string rtn;
            string contain = "";
            char itos;
            //tools for map
            std::map<char, int> myMap;
            std::map<char, int>::iterator it;

            //Mapping key value pairs to myMap
            for(int i = 0; i< len; ++i){
                //count = 0;
                it = myMap.find(tmp.at(i));
                if(it != myMap.end()){
                    myMap[tmp.at(i)] += 1;
                }
                else{
                    myMap.insert(std::pair<char, int>(tmp.at(i), 1));
                }
            }
            std::map<char,int>::iterator itr;
            for(itr= myMap.begin(); itr != myMap.end(); ++itr){
                ss<<itr->second;
                ss>>rtn;
                itos = itr->first;
                contain += rtn + itos;
                ss.clear();
            }
            return contain;
        }
};


int main(){
    Solution sol;
    int test = 13831111;
    string temp = sol.countAndSay(test);
    std::cout<<"This is the return value of temp: "<<temp<<endl;

    return 0;
}
