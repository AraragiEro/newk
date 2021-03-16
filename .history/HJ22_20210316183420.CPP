#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int input=-1;
    while(1){
        cin>>input;
        if(input==0){cout<<0<<endl;return 0;}
        int quality = 0;
        while(input>=3){
            quality += input/3;
            input = input/3 + input%3;
        }
        if(input==2) quality++;
        cout<<quality<<endl;
    }
}