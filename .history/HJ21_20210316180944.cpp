#include<iostream>
#include<string>
#include<sstream>
#include<unordered_map>
using namespace std;

unordered_map<char,int> map{
    {'a',2},
    {'b',2},
    {'c',2},
    {'d',3},
    {'e',3},
    {'f',3},
    {'g',4},
    {'h',4},
    {'i',4},
    {'j',5},
    {'k',5},
    {'l',5},
    {'m',6},
    {'n',6},
    {'o',6},
    {'p',7},
    {'q',7},
    {'r',7},
    {'s',7},
    {'t',8},
    {'u',8},
    {'v',8},
    {'w',9},
    {'x',9},
    {'y',9},
    {'z',9},
}

int main(){
    string input;
    while(cin>>input){
        stringstream trainer;
        for(auto i=input.begin();i!=input.end();i++){
            if(isdigit(*i) || ispunct(*i)) {trainer<<*i;continue;}
            if(islower(*i)){trainer<<map[*i];continue;}
            if(isupper(*i)){
                if(*i!='Z') {trainer<<tolower(*i)+1}
                }
        }
    }
}