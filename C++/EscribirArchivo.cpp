#include <iostream>
#include <fstream>
#include <math.h>

double f(double x){
 return sin(x);
}


int main(){

	std::ofstream *File; // Definimos apuntador

	File = new std::ofstream[2]; // Reservamos memoria

	File[0].open( "MisDatos.dat", std::ofstream::trunc ); // Abrir y dejar listo para escribir

	std::cout << File  << std::endl;

	for(int i = 0; i < 60; i++){
		File[0] << i << " " << f(i) << std::endl;
		//std::cout << i << std::endl; 
	}


	File[0].close();

	return 0;
}
