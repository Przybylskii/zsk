#include <iostream>
#include "add.h"
#include "test.h"



int main(int argc, char** argv) {
	setlocale(LC_ALL,"polish");
	//add(9,574)
	
	
	Dog *wskD = new Dog();
	wskD -> className();
	wskD -> speak();
	
		
	Animal *wskA = new Animal();
	wskA -> className();
	wskA -> speak();
	
	Animal zwierze;
	
	Dog *wsk;
	wsk->className();
	
	Dog pjes;
	wsk = &pjes;
	wsk->speak();
	return 0;
}
