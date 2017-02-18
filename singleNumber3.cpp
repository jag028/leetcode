#include <vector>
#include <unordered_set>
#include <iostream>
#include <map>

using namespace std;

class Solution {
    public:
        std::vector<int> singleNumber(std::vector<int>& nums) {
            //vector to return
            std::vector<int> vec;
            
            //create map and iterator
            std::map<int,bool> mymap;
            std::map<int, bool>::iterator itr;

            //iterating through nums vector
            for(std::vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
                if(mymap.find(*it) == mymap.end()){
                    mymap.insert(std::pair<const int, bool>( *it,true));
                }
                else{
                    mymap.erase(*it);
                }
            }

            for(itr = mymap.begin(); itr != mymap.end(); ++itr){
                    vec.push_back(itr->first);
            }
          return vec;
        }
};


int main(){

    vector<int> testVec;
    int x,y,z,a,b,c;
    x = 1;
    y = 2;
    z = 1;
    a = 3;
    b = 2;
    c = 5;
    testVec.push_back(x);
    testVec.push_back(y);
    testVec.push_back(z);
    testVec.push_back(a);
    testVec.push_back(b);
    testVec.push_back(c);
    testVec.push_back(2);
    testVec.push_back(4);
    testVec.push_back(2);
    testVec.push_back(3);

    Solution sol; //created a Solution object

    vector<int> testResponse = sol.singleNumber(testVec);
    vector<int>::iterator it;
    
    //print out elements in vector
    for(it = testResponse.begin(); it!=testResponse.end(); ++it){
        std::cout<<*it<<endl;
    }
    
    return 0;
}
