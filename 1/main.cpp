#include <iostream>
using namespace std;

class worker{
	public:
	//deklaracja zmiennych członkowswkich (właściwości)
	string name = "Janusz";
	string surname;
	//deklaracja funkcji członkowskiej (metoda)
	
	//void showData();
	
	//definicja funkcji członkowskiej (metoda)
	void showData(){
		cout << "Imię";
	};
	
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	worker pracownik;
	
	cout << pracownik.name;
	pracownik.showData();
	return 0;
}
