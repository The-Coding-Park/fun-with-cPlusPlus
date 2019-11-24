#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap <int, string> lookup;
    lookup.insert(make_pair(30,"mike"));
    lookup.insert(make_pair(10,"raj"));
    lookup.insert(make_pair(30,"mimo"));
    for(multimap<int, string>::iterator it=lookup.begin();it!=lookup.end();it++){
        cout<<it->first<<": "<<it->second<<endl;

    }
    cout<<endl;
    for(multimap<int, string>::iterator it=lookup.find(10);it!=lookup.end();it++){
        cout<<it->first<<": "<<it->second<<endl;

    }
    cout<<endl;
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator>its=lookup.equal_range(30);

    for(multimap<int, string>::iterator it=its.first;it!=its.second;it++){
        cout<<it->first<<": "<<it->second<<endl;

    }

}