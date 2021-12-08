#include <iostream>

using namespace std;


//klasa bazowa
class Worker{
	public:
		string name {""};
		string surname {""};
		string getData(){
			return name + " "+ surname;
		}
};

//klasa pochodna
class Teacher: public Worker{
	public:
	string classessAtSchool{""};
	string getData(){
		return name + " " + surname + " " + classessAtSchool + "\n";
	}
};

class Wychowawca: public Teacher{
	public:
	static string supervisingClass;
	string getData(){
		return name + " " + surname + " " + classessAtSchool + " " + supervisingClass + "\n";
	}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Teacher nowak;
	nowak.name="Marek";
	nowak.surname="Pawlak";
	nowak.classessAtSchool="PO";
	cout<<"Dane nauczyciela: "<<nowak.getData()<<endl;
	
	Wychowawca pawlak;
	pawlak.name="Marek";
	pawlak.surname="Pawlak";
	pawlak.classessAtSchool="PO";
	cout<<"Dane nauczyciela: "<<nowak.getData()<<endl;
	return 0;
}
