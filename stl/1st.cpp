#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // vector<string> strings;
    // strings.push_back("one");
    // strings.push_back("two");

    // strings.push_back("three");
    // // cout << strings[1] << endl;
    // // cout << strings.size() << endl;
    // //vector iteration
    // for (int i = 0; i < strings.size(); i++)
    // {
    //     cout << strings[i] << endl;
    // }
    // cout << endl;
    // // vector<string>::iterator it = strings.begin();
    // // it++;
    // // cout << *it << endl;

    // for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    vector<int> array;
    for (int i = 0; i < 10; i++)
    {
        array.push_back(i);
    }
    for (vector<int>::iterator it = array.begin(); it != array.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}
