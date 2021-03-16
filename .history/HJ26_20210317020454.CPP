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
        for(int i=0;i<input.size();i++){
            string bak1;
            if(isalpha(input[i])){
                if(isupper(input[i])) bak1 = tolower(in);
                else if(islower(input[i])) bak1 = input[i];
                holding[bak1[0]-'a'].push_back(*i);
            }
            else {
                map1.insert(make_pair((&*i)-(&*input.begin()),*i))
            }
        }
    }

}