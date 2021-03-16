#include<iostream>
#include<vector>
#include<set>
#include<string>

using namespace std;

int main(){
    vector<string> I;
    set<string> R;
    int INum=0;
    cin>>INum;
    for(int i=0; i<INum;i++){
        string input;
        cin>>input;
        I.push_back(input);
    }
    int RNum=0;
    cin>>RNum;
    for(int i=0;i<RNum;i++){
        string input;
        cin>>input;
        R.insert(input);
    }

    for(auto i=R.begin();i!=R.end();i++){
        for(int j=0;j!=I.end();j++){
            
        }
    }
}