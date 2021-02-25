#include<iostream>
using namespace std;

class Math{
	public:
		int a , b;
		int sum(int num1, int num2){
			a = num1;
			b = num2;
			return a+b;
		}
		int sub(int num1, int num2){
			a = num1;
			b = num2;
			return a-b;
		}
		int mul(int num1, int num2){
			a = num1;
			b = num2;
			return a*b;
		}
		int div(int num1, int num2){
			a = num1;
			b = num2;
			return a/b;
		}
};


int main(){
	
	Math m1, m2,m3;
	cout<<	m1.sum(10,2)<<endl;
	cout<<	m1.sub(15,5)<<endl;
	cout<<	m1.mul(5,2)<<endl;
	cout<<	m1.div(20,2)<<endl;
	
	
	
	
}
