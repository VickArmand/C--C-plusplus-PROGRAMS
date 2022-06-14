#include <iostream>
using namespace std;

struct abc
{
	int a;
	char value;
};
int main(int argc, char** argv)
{
	struct abc *var;
	cout<<&var->a<<endl;
	cout<<&var->value<<endl;
		struct abc obj;
		cout<<obj.a<<endl;
		cout<<obj.value<<endl;
	return 0;
}