#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> strings(5);
    strings.push_back("cat");
    strings.push_back("cow");
    strings.push_back("rat");
    strings.push_back("bat");
    cout<<strings.size() <<endl;
    for(int i=0;i<strings.size();i++){
        cout<<strings[i]<<endl;
    }
   vector<string>::iterator it=strings.begin();
   cout<<*it<<endl;


}