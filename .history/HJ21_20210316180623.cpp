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
    {'g',3},
    {'h',3},
    {'i',3},
    {'j',3},
    {'k',3},
    {'l',3},
    {'m',3},
    {'n',3},
    {'o',3},
    {'p',3},
    {'q',3},
    {'r',3},
    {'s',3},
    {'t',3},
    {'u',3},
    {'v',3},
    {'w',3},
    {'x',3},
    {'d',3},
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