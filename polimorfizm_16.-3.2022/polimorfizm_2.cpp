#include <iostream>

using namespace std;
class Animal{
	public:
	float weight, age;
	 void look(){
		cout<<"Zwierz� patrzy "<<endl;
	}
	virtual void breathe(){
		cout<<"Zwierze oddycha"<<endl;
	}
};
class Fish : public Animal{
	public:
	virtual void breathe(){
		cout<<"Oddycha skrzelami"<<endl;
	}
	void swim(){
		cout<<"P�y�"<<endl;
	}
};
class Mammal : public Animal{
	public:
	virtual void breathe(){
		cout<<"Oddycha p�ucami"<<endl;
	}
	void run(){
		cout<<"Biegnie"<<endl;
		
	}
};
class Bird : public Animal{
	public:
	virtual void breathe(){
		cout<<"Oddycha p�ucami"<<endl;
	}
	void fly(){
		cout<<"Le�"<<endl;
	}
};
int main(int argc, char** argv) {
	setlocale(LC_ALL,"polish");
	Fish karp;
	Animal *wsk = &karp;
	wsk->breathe();
	
	Bird gawron;
	wsk = &gawron;
	
	
	return 0;
	

}
