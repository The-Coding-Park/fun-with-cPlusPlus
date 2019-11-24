#include<iostream>
#include<set>
using namespace std;
class Test{
    int id;
    string name;
    public:

    Test(){

    };
    Test(int n, string a):id(n), name(a){

    }
    void print() const{
        cout<<id<<": "<<name<<endl;
    }
    bool  operator<(const Test &other) const{
        return name<other.name;
    }

};
int main(){
    set<int> num;
    num.insert(54432);
    num.insert(42);
    num.insert(894212);
    num.insert(492342);

    
    for(set<int>::iterator it=num.begin();it!=num.end();it++){
        cout<<*it<<endl;

    }
    set<int>::iterator ifFind=num.find(42);
    if(ifFind!=num.end()){
        cout<<"found: "<<*ifFind<<endl;

    }
    if(num.count(42)){
        cout<<"numebr found "<<endl;
    }
    set<Test> tests;
    tests.insert(Test(10,"Mike"));
    tests.insert(Test(20,"Joe"));
    tests.insert(Test(20,"Mimo"));
    for(set<Test>::iterator it=tests.begin();it!=tests.end();it++){
        it->print();
    }

    return 0;

}