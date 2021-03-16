#include<iostream>
using namespace std;

int main(){
    int input=INT_MIN;
    while(cin>>input){
        if(input==0){}
        int quality = 0;
        while(input>=3){
            quality += input/3;
            input = input/3 + input%3;
        }
        if(input==2) quality++;
        cout<<quality<<endl;
    }
}