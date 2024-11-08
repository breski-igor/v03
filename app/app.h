#pragma once
#include <string>

namespace vsite::oop::v3
{
    struct student {
        std::string name;
        int grade;
    };

    class results {
        unsigned int broj_elemenata{ 0 };
        unsigned int counter{ 0 };
        student* stud = nullptr;
        

    public:
        results(unsigned int broj_elemenata = 0);
        ~results();

        void add(const student& s);
        unsigned has_grade(unsigned ocjena) const;
        unsigned starts_with_letter(char slovo) const;
    };


    class array {
        int sie{ 0 };
        double* arr { nullptr };


    };

}
