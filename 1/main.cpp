#include <iostream>
using namespace std;

class worker{
	public:
	//deklaracja zmiennych cz�onkowswkich (w�a�ciwo�ci)
	string name = "Janusz";
	string surname;
	//deklaracja funkcji cz�onkowskiej (metoda)
	
	//void showData();
	
	//definicja funkcji cz�onkowskiej (metoda)
	void showData(){
		cout << "Imi�";
	};
	
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	worker pracownik;
	
	cout << pracownik.name;
	pracownik.showData();
	return 0;
}
