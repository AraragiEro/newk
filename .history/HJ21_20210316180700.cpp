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
    {'s',3},
    {'t',3},
    {'u',3},
    {'v',3},
    {'w',3},
    {'x',3},
    {'y',3},
    {'z',3},
}

int main(){
    string input;
    while(cin>>input){
        stringstream trainer;
        for(auto i=input.begin();i!=input.end();i++){
            if(isdigit(*i) || ispunct(*i)) {trainer<<*i;continue;}
            if
        }
    }
}