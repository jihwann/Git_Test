#include <iostream>

using namespace std;

int factorial(int x);
int factorial_iter(int x);
int main(void){
	int x, y;
	cin >> x;
	
	//y = factorial(x);
	y = factorial_iter(x);
	cout << y << endl;
	
	return 0;
}





int factorial(int x){
	if(x<=1) return 1;
	else return x*factorial(x-1);
}





int factorial_iter(int x){
	int k=x;
	for(int i=x-1; i>0; i--){
		k *= i;
	}
	return k;
}
