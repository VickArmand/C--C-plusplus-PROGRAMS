#include <iostream>
using namespace std;

union abc
{
	int a;
	char value;
};
int main(int argc, char** argv)
{
	union abc *var;
	cout<<&var->a<<endl;
	cout<<&var->value<<endl;
	return 0;
}