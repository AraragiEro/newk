#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<sstream>
using namespace std;

int main(){
    string input;
    while(cin>>input){
        map<int,string> map1;
        vector<vector<string>> holding(26);
        for(auto i=input.begin();i!=input.end();i++){
            char bak1;
            if(isalpha(*i)){
                if(isupper(*i)) bak1 = tolower(*i);
                else if(islower(*i)) bak1 = *i;
                int key1 = bak1-'a';
                holding[(bak1-'a')].insert(*i);
            }
            else {
                map1.insert(make_pair((&*i)-(&*input.begin()),*i))
            }
        }
    }

}