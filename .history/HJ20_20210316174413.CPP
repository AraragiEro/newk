#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){


    string input;
    while(cin>>input){
        bool iseight=false;
        bool isThreeType=false;
        bool isNotex=true;
        
        if(input.size()>8) iseight=true;

        vector<int> mark(4);
        for(auto i=input.begin();i!=input.end();i++){
            if(mark[0]==0) if(isdigit(*i)) mark[0]++;
            if(mark[1]==0) if(isupper(*i)) mark[1]++;
            if(mark[2]==0) if(islower(*i)) mark[2]++;
            if(mark[3]==0) if(ispunct(*i)) mark[3]++;
        }
        if(mark[0]+mark[1]+mark[2]+mark[3]>=3) isThreeType=true;

        for(int i=0;i<input.size()-3;i++){
            string s = input.substr(i,3);
            if(input.find(s,i+3) != input.npos){
                isNotex=false;
                break;
            }
        }

        bool output = iseight & isThreeType & isNotex;
         

    }
}