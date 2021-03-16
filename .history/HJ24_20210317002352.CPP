#include<iostream>
#include<vector>
#include<set>
#include<string>

using namespace std;

int main(){
    vector<string> I;
    set<string> R;
    vector<vector<string>> output;
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
        int k=0;
        for(int j=0;j<I.size();j++){
            if(I[j].find(*i)!=I[j].npos){
                if(k==0){
                    output.push_back(*i);
                    k=1;
                }
                output.push_back(I[j]);
            }
        }
    }
}