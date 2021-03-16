#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<sstream>
using namespace std;



int main(){
    string input;
    unordered_map<string,int> erorrmap;
    vector<int> erorrNum;
    int key=0;
    while(getline(cin,input)){
        int mark = input.find_last_of('/');
        string fileName = input.substr(mark+1,input.size()-mark-1);
        if(erorrmap.find(fileName)==erorrmap.end()){
            erorrmap.insert(make_pair(fileName,k));
        else erorrmap[fileName] += 1; 
    }
    for(auto i=erorrmap.begin();i!=erorrmap.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
}