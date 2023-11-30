#include<iostream>
#define CHAR 256
using namespace std;

int fact(int n){
    if(n == 0) return 1;  // Change this line
    return n * fact(n-1);
}

int LexicographicRankofaString(string s){
    int res = 1,n = s.size();
    int count[CHAR] = {0};
    int mul = fact(n);
    for(int i=0;i<n;i++){
        count[s[i]]++;
    }
    for(int i=1;i<n;i++){
        count[i]+=count[i - 1];
    }

    for(int i=0;i<n;i++){  // Change this line
        mul = mul/(n - i);
        res += count[s[i] - 1] * mul;
        for(int j=s[i];j<CHAR;j++){
            count[j]--;
        }
    }
    return res;
}

int main(){
    string s = "string";
    cout<<LexicographicRankofaString(s)<<endl;
    return 0; 
}
