#include <iostream>

using namespace std;

class Worker{
	public:
		string name, surname;
		
		void getData();
		
		Worker(){
			cout<<"Konstruktor domy�lny"<<endl;
		}
		
		Worker(string pName, string pSurname);
		
		~Worker(){
			cout<<"Destruktor"<<endl;
		}
};
void Worker::getData(){
	cout<<"Imi� i nazwisko: "<<name <<" "<<surname<<endl;
} 

Worker::Worker(string pName, string pSurname):
	name{pName},
	surname{pSurname}
	{
		cout<<"Konstruktor parametyczny"<<endl;
	}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker kowalski;
	Worker nowak;
	
	
	return 0;
}
