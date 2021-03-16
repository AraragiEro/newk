#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <unordered_map>
#include <sstream>
using namespace std;

int main()
{
    int INum = 0;
    while (cin >> INum){
    vector<string> I;
    set<int> R;
    vector<vector<string>> output;
    unordered_map<int, int> map1;
    stringstream trainer;
        for (int i = 0; i < INum; i++)
        {
            string input;
            cin >> input;
            I.push_back(input);
        }
        int RNum = 0;
        cin >> RNum;
        for (int i = 0; i < RNum; i++)
        {
            int input;
            cin >> input;
            R.insert(input);
        }

        int mark1 = 0;
        for (auto i = 0; i < R.size(); i++)
        {
            int k = 0;
            auto Iop = R.begin();
            for (int o = 0; o < i; o++)
                Iop++;
            for (int j = 0; j < I.size(); j++)
            {
                if (I[j].find(*Iop) != I[j].npos)
                {
                    if (k == 0)
                    {
                        map1.insert(make_pair(*Iop, mark1));
                        mark1++;
                        vector<string> bak;
                        string bak1;
                        trainer<<*Iop;trainer>>bak1;trainer.clear();
                        bak.push_back(bak1);
                        output.push_back(bak);
                        k = 1;
                    }
                    string bak2;
                    trainer << j;
                    trainer >> bak2;
                    trainer.clear();
                    output[map1[*Iop]].push_back(bak2);
                    output[map1[*Iop]].push_back(I[j]);
                }
            }
        }
        int total = 0;
        for (auto i = output.begin(); i != output.end(); i++)
        {
            total += i->size() + 1;
        }

        cout << total;
        for (auto i = output.begin(); i != output.end(); i++)
        {
            int mark = 0;
            for (auto j = i->begin(); j != i->end(); j++)
            {
                if (mark == 1)
                cout << " " << ((i->size() - 1) / 2);
                cout << " " << *j;
                mark++;
            }
        }
        cout<<endl;
    }
}