#ifndef CASE_H
#define CASE_H

#include <string>

using namespace std;


class Case {
    public:
        Case();
        Case(int position);
        int getPosition();
        std::string getClass();

    private:
        int position_;
        std::string class_;
        //PathImage image_;
};

#endif;