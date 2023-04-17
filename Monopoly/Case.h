#ifndef CASE_H
#define CASE_H

#include <string>

using namespace std;


class Case {
    public:
        Case();
        Case(int position, string classe);
        int getPosition();
        string getClass();

    protected:
        int position_;
        string class_;
        //PathImage image_;
};

#endif;