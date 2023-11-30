#include<iostream>
#define CHAR 26 
using namespace std;

// Menthod 1
// bool AnagramSearch(string txt, string path){
//     int pathSum = 0,currentTxtSum = 0,pathlen = path.length(),n = txt.length();

//     for(int i=0;i<pathlen;i++){
//         pathSum += int(path[i]);
//         currentTxtSum += int(txt[i]);
//     }

//     for(int i=pathlen;i<n;i++){
//         currentTxtSum += (int(txt[i]) - int(txt[i - pathlen]));
//         if(currentTxtSum == pathSum){
//             return true;
//         }
//     }
  
//     return false;
// }

// Method 2



bool aresame(int CT[], int PT[]) {
    for (int i = 0; i < CHAR; i++)
        if (CT[i] != PT[i])
            return false;
    return true;
}
bool AnagramSearch(string txt, string path){
    int CT[CHAR] = {0}, PT[CHAR] = {0};
    int pathLen = path.length();

    for(int i=0; i<pathLen; i++){
        PT[path[i]-'a']++;
        CT[txt[i]-'a']++;
    }

    for(int i = pathLen; i<txt.length(); i++){
        if(aresame(CT, PT)) return true;
        CT[txt[i]-'a']++;
        CT[txt[i-pathLen]-'a']--;
    }
    return aresame(CT, PT);
}

int  main(){
    string txt = "geekforgeeks",path = "frog";
    bool result = AnagramSearch(txt,path);
    cout<<result;
    return 0;
}