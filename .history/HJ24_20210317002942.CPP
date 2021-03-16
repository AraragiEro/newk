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

    for(auto i=0;i<I.size();i++){
        int k=0;
        auto Iop = I.begin()+i;
        for(int j=0;j<I.size();j++){
            if(I[j].find(*Iop)!=I[j].npos){
                if(k==0){
                    output[i].push_back(*Iop);
                    k=1;
                }
                output[i].push_back(I[j]);
            }
        }
    }
    int total = 0;
    for(auto i=output.begin();i!=output.end();i++){
        total += i->size()+1;
    }
    total +=output.size();

    cout<<total<<" "
}