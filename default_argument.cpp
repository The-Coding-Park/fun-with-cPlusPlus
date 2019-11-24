//Write a C++ program to display the concept of function with default argument.

#include<iostream>
using namespace std;
// function with default argument
void student(int marks, int height, int avg_age=16){
    cout<<"student marks is "<<marks<<endl;
    cout<<"student height is "<<height<<endl;
    cout<<"student age is "<<avg_age;
}
int main(){
    int marks, height;
    cout<<"enter student marks out of 100: ";
    cin>>marks;
    cout<<"\nenter student height in inch: ";
    cin>>height;
    student(marks, height);

}
