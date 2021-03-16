#include<iostream>
using namespace std;

int main(){
    int input=0;
    while(cin>>input){
        int quality = 0;
        while(input>=3){
            quality += input/3;
            input = input/3 + input%3;
        }
        if(input)
    }
}