#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<double> numbers(0);
    
    int capcity=numbers.size();
    cout<<"Capcity: "<<numbers.capacity()<<endl;
    for(int i=0;i<1000;i++){
        if(numbers.capacity()!=capcity){
            capcity=numbers.capacity();
            capcity=numbers.capacity();
            cout<<"capcity: "<<capcity<<endl;

        }
        numbers.push_back(i);

    }
    numbers.clear();
    cout<<"Size: "<<numbers.size()<<endl;
    cout<<"capacity: "<<numbers.capacity()<<endl;
    numbers.resize(100);
    numbers.reserve(10000);
    cout<<"Size: "<<numbers.size()<<endl;
    cout<<"capacity: "<<numbers.capacity()<<endl;


}
