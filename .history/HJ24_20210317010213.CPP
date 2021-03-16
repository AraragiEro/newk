#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<unordered_map>
#include<sstream>
using namespace std;

int main(){
    vector<string> I;
    set<string> R;
    vector<vector<string>> output;
    unordered_map<string,int> map1;
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

    int mark1=0;
    stringstream trainer;
    for(auto i=0;i<R.size();i++){
        int k=0;
        auto Iop = R.begin();
        for(int o=0;o<i;o++) Iop++;
        for(int j=0;j<I.size();j++){
            if(I[j].find(*Iop)!=I[j].npos){
                if(k==0){
                    map1.insert(make_pair(*Iop,mark1));
                    mark1++;
                    vector<string> bak;
                    bak.push_back(*Iop);
                    output.push_back(bak);
                    k=1;
                }
                string bak2;
                trainer<<j;trainer>>bak2;trainer.clear();
                output[map1[*Iop]].push_back();
                output[map1[*Iop]].push_back(I[j]);
            }
        }
    }
    int total = 0;
    for(auto i=output.begin();i!=output.end();i++){
        total += i->size()+1;
    }

    cout<<total<<" "<<endl;
    for(auto i=output.begin();i!=output.end();i++){
        for(auto j=i->begin();j!=i->end();j++){
            cout<<*j<<" "<<endl;
        }
    }
}