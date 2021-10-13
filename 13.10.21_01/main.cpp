#include <iostream>

using namespace std;

struct Date{
	int dd, mm, yyyy;
};

class Car{
	public:
	int id ;
	string brand , model ,color;
	unsigned short int power;
	float price ;
	Date dateOfProduction;

	void getData();
	
	Car(int, string, string, string, unsigned short int, float, Date);
};

void Car::getData(){
	cout<<"\nID: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<"\nRok produkcji: "<<dateOfProduction.yyyy<<"\nMoc: "<<power<<"\nKolor: "
	<<color<<"\nCena: "<<price;
}
Car::Car(int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, float pPrice, Date pDateOfProduction){
	id=pId;
	brand=pBrand;
	model=pModel;
	color=pColor;
	power=pPower;
	price=pPrice;
	dateOfProduction=pDateOfProduction;
	
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Car maluch;
	maluch.getData();
	
	return 0;
}
