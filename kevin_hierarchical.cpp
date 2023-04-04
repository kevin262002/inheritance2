#include<iostream>

using namespace std;

class RBI{
	
	public:
		void roi1(){
			cout<<"RBI : 10%"<<endl;
		}
};

class SBI : public RBI{
	
	public:
		void roi2(){
			cout<<"SBI : 9%"<<endl;
		}
};

class BOB : public RBI{
	
	public:
		void roi3(){
			cout<<"BOB : 8%"<<endl;
		}
};

class ICICI : public RBI{
	
	public:	
		void roi4(){
			cout<<"ICICI : 7%"<<endl;
		}
};

int main(){
	
	SBI obj1;
	BOB obj2;
	ICICI obj3;
	
	obj1.roi1();
	obj1.roi2();
	
	obj2.roi1();
	obj2.roi3();
	
	obj3.roi1();
	obj3.roi4();
	
	
	
	return 0;
}
