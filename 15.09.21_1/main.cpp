#include <iostream>
using namespace std;

class worker{
	public:
	string name = "Janusz";
	string surname;
	string nationality;
	short unsigned int yearBirthday;
	char gender;
	
	void showName(){
		cout << "Imie: "<< name << endl;
	};
	// deklaracja (prototyp) metody
 	void showSurname();
 	string showPersonality();
 	void showAllData();
	
	
};

void worker::showSurname(){
	cout << " Nazwisko: " << surname << endl;
};
string worker::showPersonality(){ 
	return " Imiê i nazwisko: " + name + " " + surname + "\n";
};
void worker::showAllData(){
	cout << " Dane pracownika:\n " << worker::showPersonality()
	<< "Narodowoœæ: " << nationality << "\nRok urodzenia: "
	<< yearBirthday << "r." << "p³eæ";

 switch(gender){
	case 'm':
		cout << "mê¿czyzna\n";
		break;
		case 'w':
		cout << "kobieta\n";
		break;
		default:
			cout<< "-\n";
};
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	worker pracownik;
	pracownik.name= "Janusz";
	pracownik.surname= "Nazwisko";
	pracownik.nationality="Polska";
	pracownik.yearBirthday = 2006;
	pracownik.gender= 'm';
	
	pracownik.showAllData();
	
	return 0;
}
