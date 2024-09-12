#include<bits/stdc++.h>
using namespace std;
class Solution {
    bool compare(string word,string allowed){
        unordered_map<char,bool> mp;
        for(int i=0;i<allowed.size();i++){
            mp[allowed[i]]=true;
        }
        for(int i=0;i<word.size();i++){
            if(mp[word[i]]==false) return false;
        }
        return true;
    }
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            if(compare(words[i],allowed)) count++;
        }
        return count;
    }
};
int main(){
    string allowed;
    vector<string> words;
    cin>>allowed;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        words.push_back(temp);
    }
    Solution s1;
    cout<<s1.countConsistentStrings(allowed,words);
  return 0;
}