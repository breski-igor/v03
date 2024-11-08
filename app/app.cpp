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
        if (counter < broj_elemenata) {  // Provjera da ne pređemo veličinu
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

    array ::array(const uint32_t size, const double value) : size(size), arr(new double[size])
    {
        for (uint32_t i = 0; i < size; i++) {
            arr[i] = value;
        }
    }

}
