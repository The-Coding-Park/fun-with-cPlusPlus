#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class Test{
    string name;
    public:
    Test(string name):
        name(name){}
    ~Test(){

    }
    void print(){
        cout<<name<<endl;
    }
};
int main(){
    stack<Test> testStack;
    //last in first out lifo
    testStack.push(Test("mike"));
    testStack.push(Test("mimo"));
    testStack.push(Test("sichen"));
    testStack.push(Test("doremon"));
    cout<<endl;
    // Test &test1=testStack.top();
    // testStack.pop();
    // test1.print();
    while (testStack.size()>0)
    {

        Test &test=testStack.top();
        test.print();
        testStack.pop();
    }


    //queue

stack<Test> testQueue;
Test &Test=testQueue.top();

testQueue.push(Test("mikes got married."));
testQueue.push(Test("mimo is adult now"));

    


    
    return 0;
}