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


    class array
    {
    private:
        unsigned int len;
        double* arr = nullptr;


    public:
        array() = default;
        array(const unsigned int size, const double value);
        unsigned int size();
        double at(const unsigned int i = 0);
        void push_back(double i);
        array(array&& other);
        array(const array& other);
        ~array(); 
    };
}