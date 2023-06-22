#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "ooommmmmmffffffffffoooooooo";

    int freq[26];

    for (int i = 0; i < 26; i++)
        freq[i] = 0;

    for (int i = 0; i < s.size(); i++)
        freq[s[i] - 'a']++;

    char ans = 'a';
    int count = 0;

    for(int i=0; i<s.size(); i++){
       
       if(freq[i] >= count){
           count = freq[i];
           ans = i + 'a';
       }
    }

    cout << count << " " << ans;
}