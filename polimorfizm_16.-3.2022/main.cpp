#include <iostream>

using namespace std;
class c1{
	int a,b,c;
	virtual void f(){
		cout<<"Funkcja: "<<endl;
	}
};
class c2{
	int a,b,c;
	void f(){
		cout<<"Funkcja: "<<endl;
	}
};
class c3{
	int a,b,c;
	void f1(){
		cout<<"Funkcja1: "<<endl;
	}
	void f2(){
		cout<<"Funkcja2: "<<endl;
	}
	void f3(){
		cout<<"Funkcja3: "<<endl;
	}
		
};

int main(int argc, char** argv) {
	setlocale(LC_ALL,"polish");
	c1 *wsk1 = new c1;
	cout<<sizeof(*wsk1); //24
	
	c2 *wsk2 = new c2;
	cout<<sizeof(*wsk2); //12
	
		c3 *wsk3 = new c3;
	cout<<sizeof(*wsk3); //12
	
	

	//sizeof
	cout<<"\nTyp int zajmuje: "<<sizeof(int)<<"Bajtów\n";
	cout<<"\nTyp char zajmuje: "<<sizeof(char)<<"Bajtów\n";
	cout<<"\nTyp string zajmuje: "<<sizeof(string)<<"Bajtów\n";
	cout<<"\nTyp float zajmuje: "<<sizeof(float)<<"Bajtów\n";
	cout<<"\nTyp double zajmuje: "<<sizeof(double)<<"Bajtów\n";
	cout<<"\nTyp bool zajmuje: "<<sizeof(bool)<<"Bajtów\n";
	
	return 0;
	
}
