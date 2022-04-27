#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL,"polish");
	ofstream File;
	File.open("C:\\Users\\student\\Desktop\\pliki\\plik2eg2.txt",ios::app);
	if(File.is_open()){
		cout<<"tekst do zapisania w pliku: ";
		string text;
		getline(cin,text);
		File << text << endl;
		File.close();
	}
	else{
		cout<<"error"<<endl;
	}
	
	ifstream FileOpen("C:\\Users\\student\\Desktop\\pliki\\plik2eg2.txt");
	if(FileOpen.is_open()){
		system("cls");
		string line;
	while(getline(FileOpen,line))
	{
		cout<<line<<endl;
	}
	FileOpen.close();
	}
	else{
		cout<<"error";
	}
	return 0;
}
