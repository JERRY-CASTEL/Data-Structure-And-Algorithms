#include<iostream>
using namespace std;


int main(){
	
	string s = "ABCDABEFABCD",pat = "ABCD";
	
	for(int i=0;i<=s.size() - pat.size();){
		int j;
		for(j=0;j<pat.size();j++){
			if(s[i+j] != pat[j]) break;
		}
		if(j == pat.size()) cout<<i<<" ";
		if(j == 0) i++;
		else i+=j;
		
	}
	
	return 0;
}