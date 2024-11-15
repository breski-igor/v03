#include "app.h"
#include <algorithm>
#include <cctype>

namespace vsite::oop::v3
{
    results::results(unsigned int broj_elemenata) : broj_elemenata(broj_elemenata), counter(0) {
        stud = new student[broj_elemenata];
    }

    results::~results() {
        delete[] stud;
        stud = nullptr;
    }

    void results::add(const student& s) {
        if (counter < broj_elemenata) { 
            stud[counter] = s;
            counter++;
        }
    }
    
    unsigned results::has_grade(unsigned ocjena) const {
        unsigned sadrzi = 0;
        for (int i = 0; i < counter; i++) {
            if (stud[i].grade == ocjena) {
                sadrzi++;
            }
        }
        return sadrzi;
    }

    unsigned results::starts_with_letter(char slovo) const {
        unsigned sadrzi = 0;
        for (int i = 0; i < counter; i++) {
            if (tolower(stud[i].name[0]) == tolower(slovo)) {
                sadrzi++;
            }
        }
        return sadrzi;
    }






	 


    array::array(unsigned int size, double value) : len(size) {
        arr = new double[len];
        for (unsigned int i = 0; i < len; i++) {
            arr[i] = value;
        }
    }

	unsigned int array::size() {
		return len;
	}

	double array::at(unsigned int i) {
		if (i >= 0 && i < len) {
			return arr[i];
		}
		return 0;
	}

    void array::push_back(double i) {
        unsigned int new_len = len + 1;
        double* new_array = new double[new_len];
        for (unsigned int j = 0; j < len; j++) {
            new_array[j] = arr[j];
        }
        new_array[len] = i; 
        delete[] arr;
        arr = new_array;
        len = new_len;
    }

	array::array(array&& other) : len(other.len), arr(other.arr) {
		other.len = 0;
		other.arr = nullptr;
	}


	array::array(const array& other) : len(other.len) {
		arr = new double[len];
		for (unsigned int i = 0; i < len; i++) {
			arr[i] = other.arr[i];
		}
	}

	array::~array() {
		delete[] arr;
	}

}