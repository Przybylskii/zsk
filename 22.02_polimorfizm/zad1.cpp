#include <iostream>

using namespace std;
class Vehicle{
	
	public:
		void stop(){
			cout<<"Zatrzymaj pojazd!";
		}
};
class Car: public Vehicle{
	public:
		void stop(){
			cout<<"Zatrzymaj pojazd!";
		}
};
class Bike : public Vehicle{
		public:
		void stop(){
			cout<<"Zatrzymaj rower!";
		}
};
class Rolls : public Vehicle{
		public:
		void stop(){
			cout<<"Zatrzymaj rolki!";
		}
};
int main(int argc, char** argv) {
	//Vehicle pojazd = new Vehicle();
	//Vehicle pojazd;
	Vehicle *pojazd = new Vehicle();
	pojazd->stop();
	
	Rolls *rolki = new Rolls();
	rolki->stop();
	return 0;
}
