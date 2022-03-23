#ifndef TEST_H
#define TEST_H
#include <iostream>
using namespace std;
class Animal{
	public:
		void className(){
			cout<<"Animal"<<endl;
		}
		virtual void speak(){
			cout<<"Zwierze wydaje d�wi�k"<<endl;
		}
};
class Dog : public Animal{
	public:
	void className(){
		cout<<"Dog"<<endl;
	}
	void speak() override{
		cout<<"Piesio szczeka"<<endl;
	}
};

#endif
