#include <iostream>
using namespace std;

class worker{
	public:
	//deklaracja zmiennych cz³onkowswkich (w³aœciwoœci)
	string name = "Janusz";
	string surname;
	//deklaracja funkcji cz³onkowskiej (metoda)
	
	//void showData();
	
	//definicja funkcji cz³onkowskiej (metoda)
	void showData(){
		cout << "Imiê";
	};
	
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	worker pracownik;
	
	cout << pracownik.name;
	pracownik.showData();
	return 0;
}
