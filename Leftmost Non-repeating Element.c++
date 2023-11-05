#include <bits/stdc++.h>
using namespace std;


int  main(){
	string s = "geekforgeeks";
	int n = s.length();
	int character[256];
	fill(character,character+256,-1);
	for(int i=n-1;i>=0;i--){
		character[s[i]]++;
	}
	for(int i=0;i<n;i++){
		if(character[s[i]] == 0) return i;
	}
	return -1;
}