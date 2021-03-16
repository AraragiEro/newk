#include<iostream>
#include<map>
#include<vector>
#include<sstream>
#include<string>
using namespace std;

int main(){
    string input;
    while(getline(cin,input)){
        map<int,char> map1;
        vector<vector<char>> holding(26);
        for(int i=0;i<input.size();i++){
            char bak1;
            if(isalpha(input[i])){
                if(isupper(input[i])) bak1 = tolower(input[i]);
                else if(islower(input[i])) bak1 = input[i];
                holding[bak1-'a'].push_back(input[i]);
            }
            else {
                map1.insert(make_pair(i,input[i]));
            }
        }

        auto mapo = map1.begin();
        string output;
        int count=0;
        for(int i=0;i<holding.size();i++){
            for(int j=0;j<holding[i].size();j++){
                if(count==mapo->first) {output += mapo->second;}
                else output += holding[i][j];
            }
        }
    }


}