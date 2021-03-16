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
        vector<vector<char>> holding(26);
        for(auto i=input.begin();i!=input.end();i++){
            char bak1;
            if(isalpha(*i)){
                if(isupper(*i)) bak1 = tolower(*i);
                else if(islower(*i)) bak1 = *i;
                holding[bak1-'a'].inser;
            }
            else {
                map1.insert(make_pair((&*i)-(&*input.begin()),*i))
            }
        }
    }

}