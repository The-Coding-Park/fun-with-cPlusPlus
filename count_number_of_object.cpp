//Write a program to calculate the number of objects created by your program.
#include <iostream>
using namespace std;

class Counter
{
	private:
		static int count;

	public:
		Counter()
		{ count++; }
		static void Print()
		{
			cout<<"\nTotal objects are: "<<count;
		}
};
int Counter :: count = 0;
int main()
{
	Counter OB1,OB2, OB3,OB4;
	OB3.Print();
	
	return 0;
}
