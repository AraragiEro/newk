#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    while(1){
        string input;
        cin>>input;

        unordered_map<char,int> map;
        for(auto i=input.begin;i!=input.end();i++){
            if(map.find(*i)==map.end()) 
                map.insert(make_pair(*i,1));
            else map[*i]++;
        }

        int minQua =
        for(auto i)
    }
}