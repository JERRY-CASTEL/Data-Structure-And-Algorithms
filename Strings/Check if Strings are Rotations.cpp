#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
         
        return ((s+s).find(goal) != string::npos);
    }
};

int main() {
    Solution solution;
    string s = "abcde";
    string goal = "cdeab";
    
    bool result = solution.rotateString(s, goal);
    
    // Print the result
    if(result) 
        cout<< "The strings can be rotated." <<endl;
    return 0;
}
