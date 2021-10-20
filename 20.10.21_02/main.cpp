#include <iostream>

using namespace std;



class Book{
	public:
	string title;
	string author;
	
	
	
	void getTitle();
	void getAuthor();
	void setAuthor(string pAuthor)
	
	


	
	Book(string pTitle ,string pAuthor);
	

};

void Book::getTitle(){
	cout<<"\nTitle: "<<title<<endl;
}
void Book::getAuthor(){
	cout<<"\nAuthor: "<<author<<endl;
}
void Book::setAuthor(string pAuthor){
}

Car::Car(int pId, string pBrand, string pModel){ //DOKOÑCZYÆ
	id=pId;
	brand=pBrand;
	model=pModel;
	
}


	


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	

	;
	return 0;
}
