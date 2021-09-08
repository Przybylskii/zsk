#include <iostream>
using namespace std;

class worker{
	public:
	//deklaracja zmiennych cz3onkowswkich (w³aœciwoœci)
	string name = "Janusz";
	string surname;
	short unsigned int age;
	//deklaracja funkcji cz3onkowskiej (metoda)
	
	//void showData();
	
	//definicja funkcji cz3onkowskiej (metoda)
	void showData(){
		cout << "Imie ";
	};
	
	void showName(){
		// wyœwietliæ imiê pobrane z obiektu
		
	}
	
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	worker pracownik;
	
	cout << pracownik.name; 
	pracownik.showData();
	
	pracownik.surname = "Kowalski ";
	pracownik.name = " Andrzej ";
	cout << "\nImiê i nazwisko: " << pracownik.name << " "<< pracownik.surname << endl;
	
	
	pracownik.age= 23 ;
	cout << "\nWiek: " << pracownik.age;
	cout << pracownik.name;
	return 0;
}
