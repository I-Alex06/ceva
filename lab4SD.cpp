#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    vector<vector<string>> h(26);
    
    
    string cuv;
    while(true){
        cin>>cuv;
        //cout<<"Cuvantul este:"<<cuv<<endl;
        if (cuv=="/stop")
            break;
        else{
            //cout<<int(toupper(cuv[0]))<<endl;
            h[int(toupper(cuv[0]))-65].push_back(cuv);
        }
    }
    for(int i=0;i<h.size();i++){
        if(h[i].size()!=0){
            cout<<"Cuvinte care incep cu "<<char(i+65)<<" :\n";
            for(int j = 0;j< h[i].size();j++)
                cout<<h[i][j]<<endl;
        }
    }

    return 0;
}
