#include <iostream>

using namespace std;

class Worker{
	public:
		int id {8};
		string name {"Katarzyna"};
		string surname {"Nowak"};
	Worker();
	Worker(int pId, string pName, string pSurname);
	
	void getData();
};

Worker::Worker(){
	id=13;
	name="DOMYŒLNE IMIÊ";
	surname="DOMYŒLNE NAZWISKO";
};

Worker::Worker(int pId, string pName, string pSurname){
	id=pId;
	name=pName;
	surname=pSurname;
}
void Worker::getData(){
	cout<<"Id: "<<id<<"\nImiê: "<<name<<", nazwisko: "<<surname<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak;
	nowak.getData();
	
		Worker nowak2 = Worker();
	nowak2.getData();
	
	Worker nowak1 = Worker(10, "Katarzyna", "Nowak");
	nowak1.getData();
	
	return 0;
}
