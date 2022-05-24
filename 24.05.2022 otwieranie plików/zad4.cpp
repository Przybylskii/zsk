#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	ifstream file;
	file.open("plik4.txt",ios::in);
	int tab[5];
	bool fileOpen = false;
	// good(), is_open()
	if(file.is_open()){
		//cout<<sizeof(int);
		
		for(int i=0; i<sizeof(tab)/sizeof(int);++i){
			file >> tab[i];
		}
	
	
		for(int i=0; i<sizeof(tab)/sizeof(int);++i){
			cout<< tab[i] << "\t";
		}
		file.close();
		fileOpen = true;
	}
	else{
		cout<<"Otwarcie pliku nie powiod³o siê"<<endl;
		fileOpen = false;
	}
	if(fileOpen){
			for(int i=0; i<sizeof(tab)/sizeof(int);++i){
			cout<< tab[i] << "\t";
		}
		cout<< endl;
	}
	else{
		cout<<"Pusta tablica"<<endl;
		 
	}
	return 0;
}
