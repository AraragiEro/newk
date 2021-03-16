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