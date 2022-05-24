#include <iostream>
#include <fstream>
using namespace std;
struct football{
	string nameSurname, club;
};
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	ifstream file("plik2.txt");
	football pilkarz;
	if(file){
	getline(file, pilkarz.nameSurname);
	getline(file, pilkarz.club);
	file.close();
	
	cout<<"Dane o kierowcy:\n"<<"Imiê i nazwisko: "<<pilkarz.nameSurname<<"\nKlub: "<<pilkarz.club<<endl;

	
	}
	else{
		cout<<"Otwarcie pliku nie powiod³o siê"<<endl;
	}
	return 0;
}
