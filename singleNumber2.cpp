#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution{
    public:
        int singlenumber(vector<int> & nums){
            int temp;
            std::map<int, bool> myMap;
            std::map<int, bool>::iterator itr;

            for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
                if(myMap.find(*it) == myMap.end()){
                    myMap.insert(std::pair<const int, bool>(*it, true));
                }
                else{
                    myMap[*it] = false;
                }
            }

            for(itr = myMap.begin(); itr != myMap.end(); ++itr){
                if(itr->second){
                    temp = itr->first;
                }
            }
            return temp;
        }
};



int main(){
    vector<int> vec;
    vec.push_back(-1);
    vec.push_back(2);
    vec.push_back(-3);
    vec.push_back(-4);
    vec.push_back(5);
    vec.push_back(5);
    vec.push_back(-1);
    vec.push_back(-2);
    vec.push_back(-3);
    vec.push_back(-4);
    vec.push_back(-1);
    vec.push_back(-4);

    Solution sol;
    int temp = sol.singlenumber(vec);
    std::cout<<"The number "<<temp<< " only appeared once:"<<endl;

    return 0;
}
