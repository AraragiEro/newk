#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<string>
#include<vector>
#include<sstream>
using namespace std;



int main(){
    string input;
    unordered_map<string,int> erorrmap;
    while(getline(cin,input)){
        int mark = input.find_last_of('/');
        string fileName = input.substr(mark+1,input.size()-mark-1);
        if(erorrList.find(fileName)==erorrList.end()) 
            erorrList.insert(make_pair(fileName,1));
        else erorrList[fileName] += 1; 
    }
    for(auto i=erorrList.begin();i!=erorrList.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
}