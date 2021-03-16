#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    while(1){
        string input;
        cin>>input;

        unordered_map<char,int> map;
        for(auto i=input.begin();i!=input.end();i++){
            if(map.find(*i)==map.end()) 
                map.insert(make_pair(*i,1));
            else map[*i]++;
        }

        int minQua = 21;
        for(auto i=map.begin();i!=map.end();i++){
            minQua = min(minQua,i->second);
        }
        vector<char> minList;
        for(auto i=map.begin();i!=map.end();i++){
            if(i->second==minQua) minList.push_back(i->first);
        }

        auto i=minList.begin();
        while(i!=minList.end()){
            while(input.find(*i)!=input.npos){
                input.erase(input.find(*i),1);
            }
            i++;
        }
    }
}