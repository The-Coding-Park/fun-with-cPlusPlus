#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int> ages;
    ages["mike"]=45;
    ages["raj"]=24;
    ages["gunjan"]=20;
    cout<<ages["raj"]<<endl;
    if(ages.find("sue")!= ages.end()){
        cout<<"found sue";
    }
    else
    {
        cout<<"not found";
    }
    
    for(map<string,int>::iterator it=ages.begin();it!=ages.end();it++){
        cout<<it->first<<": "<<it->second<<endl;
        
    }
}