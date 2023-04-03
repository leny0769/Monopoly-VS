#ifndef CASE_H
#define CASE_H

#include <string>

using namespace std;


class Case {
    public:
        Case();
        Case(int position);
        int getPosition();
        Case getSuivante();

    private:
        int position_;
        //PathImage image_;
};

#endif;