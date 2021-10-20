
#include <iostream>

using namespace std;

struct Date{
	int dd, mm, yyyy;
};

class Car{
	public:
	int id;
	string brand , model ,color;
	unsigned short int power;
	float price ;
	Date dateOfProduction;

	void getData();
	
	Car(){
	}

	Car(int id);
	
	Car(int id ,string brand, string model, string color);
	
	Car(int id, string brand, string model, string color, unsigned short int power, float price, Date dateOfProduction);
};

void Car::getData(){
	cout<<"\nID: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<"\nRok produkcji: "<<dateOfProduction.yyyy<<"\nMoc: "<<power<<"\nKolor: "
	<<color<<"\nCena: "<<price;
}
Car::Car(int pId){
	id=pId;
}
Car::Car(int pId, string pBrand, string pModel, string pColor){
	id=pId;
	brand=pBrand;
	model=pModel;
	color=pColor;
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
	Car maluch(8,"Maluch","Ma³y","Czerwony", 1, 5000, {19,10,1990});
  maluch.getData();
	
	Car fiat;
	fiat.getData();
	
	Car bmw(12, "BMW", "X6", "Czarny");
	bmw.getData();
	
	Car *wsk;
	wsk=&bmw;
	wsk->getData();
	wsk->brand="Jaguar";
	wsk->getData();
	
	return 0;
}

