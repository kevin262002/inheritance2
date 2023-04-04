#include<iostream>

using namespace std;

class A{
	
	public:
		int a = 10;
		void num1(){
			cout<<"A : "<<a<<endl;
		}
};

class B{
	
	public:
		int b = 20;
		void num2(){
			cout<<"B : "<<b<<endl;
		}
};

class C{
	
	public:
		int c = 30;
		void num3(){
			cout<<"C : "<<c<<endl;
		}
};

class D : public A , public B , public C{
	
	public:	
		int d = 40;
		void num4(){
			cout<<"D : "<<d<<endl;
			
			cout<<"sum : "<<a+b+c+d;
		}
};

int main(){
	
	D obj;
	
	obj.num1();
	obj.num2();
	obj.num3();
	obj.num4();
	
	
	
	return 0;
}
