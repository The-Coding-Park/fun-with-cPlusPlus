#include<iostream>
#include<vector>
using namespace std;
class Test{
    int id;
    string name;
    public:
    Test(int id, string name):id(id),name(name){}
    void print(){
        cout<<id<<": "<<name<<endl;
    }
    bool operator<cost Test& other) 
};
int main(){
    vector<Test> tests;
    tests.push_back(Test(32,"Mike"));
    tests.push_back(Test(32,"Mikos"));
    tests.push_back(Test(32,"Mimo"));
    tests.push_back(Test(32,"Miky"));
    sort(tests.begin(),tests.end());

}
