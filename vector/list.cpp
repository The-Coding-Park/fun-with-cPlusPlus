#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers;
    numbers.push_back(100);
    numbers.push_back(231);
    numbers.push_back(123);
    numbers.push_back(15);
    numbers.push_front(23);

    list<int>::iterator it=numbers.begin();
    cout<<"element: "<<*it<<endl;
    for(list<int>::iterator it=numbers.begin();it!=numbers.end();it++){
        cout<<*it<<endl;
    }
    //removing element
    list<int>::iterator eraseit=numbers.begin();
    cout<<"going to erase: "<<*eraseit<<endl;
    eraseit++;
    numbers.erase(eraseit);

    //to insert element before anyelement
    for(list<int>::iterator inserter=numbers.begin();inserter!=numbers.end();inserter++){
        if(*inserter==123){
            numbers.insert(inserter,42);
        }
    }
    cout<<"after inserting element before 123"<<endl;
     for(list<int>::iterator it=numbers.begin();it!=numbers.end();it++){
        cout<<*it<<endl;
    } 
    


    return 0;
}