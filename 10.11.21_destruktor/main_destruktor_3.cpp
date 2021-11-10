#include <iostream>

using namespace std;

class Animal{
	public:
		static int s_count;
		Animal(){
			s_count++;
			cout<<"Liczba zwierz¹t wynosi: "<<s_count<<endl;
		}
		
		
		~Animal(){
			s_count--;
		cout<<"Liczba zwierz¹t wynosi: "<<s_count<<endl;
		}
		
		
};
int Animal::s_count = 0; //WA¯NE




int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Animal kun;
	
	Animal koza;

	Animal mis;
	

	
	return 0;
}
