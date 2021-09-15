#include <iostream>
using namespace std;

class rectrangle{
	public:
	float a;
  float b;
  
  
	
	
	
 
 	void showField();
 		
	 
 	 void showLenght();
 		
	 
 	 void showAllData();
 		
	 
	
};
	void rectrangle::showLenght(){
		cout << "Obwód= " << a+b << endl;
	};
	void rectrangle::showField(){
		cout << "Pole= " << a*b << endl;
	};
	void rectrangle::showAllData(){
		cout << "D³ugoœci boków= " << a << " i " << b << " Pole= "<< a*b <<  " Obwód= " << a+b <<endl;
	};
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	rectrangle liczba;
	cin >> liczba.a;
	cin >> liczba.b;
	liczba.showLenght();
	liczba.showField();
	liczba.showAllData();
	
	return 0;
}
