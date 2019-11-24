#include<iostream>
#include<map>
using namespace std;
class person{
        string name;
        int age;
        person(string name, int age):
            name(""),age(0){ 
            }
            void print() const{
                cout<<name<<": "<<age<<endl;

            }

        
    };
int main(){
    map<int, person> people;
    people[0]= person("mike",45);

    
}