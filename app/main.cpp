#include "app.h"
#include  <iostream>

using namespace vsite::oop::v3;

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
/*
Implementirajte klase potrebne da svi testovi prolaze.

Napišite program koji koristeći te klase radi analizu rezultata studentskog testa :

program učitava rezultate - prvo broj unosa, nakon toga za svakog studenta : ime(jedna riječ) i ocjena(cijeli broj)
prvo se unosi ocjena za koju se želi statistika - program ispisuje broj studenata sa tom ocjenom
nakon toga unosi se prvo slovo studenata za koje se želi statistika - program ispisuje broj studenata koji počinju tim slovom(neovisno malo / veliko)
*/



int main()
{	
	std::string name;
	int broj_stud;
	int grade;


	std::cout << "unesite broj studenata: ";
	std::cin >> broj_stud;
	results r(broj_stud);

	for (int i = 0; i < broj_stud; i++) {
		std::cout << "prvo unesite ime zatim ocjenu studenta: ";
		std::cin >> name >> grade;
		r.add({ name, grade });
	}

	unsigned int ocjena;
	std::cout << "unesite ocjenu za koju zelite statistiku: ";
	std::cin >> ocjena;
	std::cout << "ponavljala se " << r.has_grade(ocjena) << " puta"<< std::endl;

	char slovo;
	std::cout << "unesite slovo: ";
	std::cin >> slovo;
	std::cout << r.starts_with_letter(slovo) << " imena pocinju sa slovom " << slovo << std::endl;
	
}
