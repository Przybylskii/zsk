#include <iostream>

using namespace std;
class Room{
public:
	float lenght, width, height;
	
	inline float roomVolume(float lenght, float width, float height
	){
		return lenght*width*height;
	}
};
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Room kuchnia;
	kuchnia.lenght=6;
	kuchnia.width=3.5;
	kuchnia.height=2.5;
	
	cout<<"Kuchnia\nD�ugo��:"<<kuchnia.lenght<<"m\nSzeroko��:"<<kuchnia.width<<"m\nWysoko��:"<<kuchnia.height<<"m\n\n"<<"Kubatura pomieszczenia: "
	<< kuchnia.roomVolume(kuchnia.lenght, kuchnia.width, kuchnia.height)<<"m^3"<<endl;
	
	
	return 0;
}
