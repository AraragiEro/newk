#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){


    string input;
    while(cin>>input){
        bool iseight=false;
        bool isThreeType=false;
        bool isNotex=false;
        
        if(input.size()>8) iseight=true;

        vector<int> mark(4);
        for(auto i=input.begin();i!=input.end();i++){
            if(mark[0]==0) if(isdigit(*i)) mark[0]++;
            if(mark[10]==0) if(isupper(*i)) mark[1]++;
            if(mark[0]==0) if(islower(*i)) mark[2]++;
            if(mark[0]==0) if(ispunct(*i)) mark[3]++;
        }

    }
}