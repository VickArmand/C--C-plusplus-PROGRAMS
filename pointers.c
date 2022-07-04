	#include <stdio.h>
	int main(){
	int value=20;
	int *ptr= &value;
	printf("%d\n",*ptr);
	/*Print the address of the value variable*/
	printf("%d\n",ptr);
	printf("%d\n",&value);
		
	}
	