#include <stdio.h>

struct Foo{

	int x;
	char a;
	double y;
};


int main(){

	struct Foo f;
		f.x = 3;
		f.a = 'a';
		f.y = 2;	

	printf("integer value of f is %d \n", f.x);

	return 0;

}


