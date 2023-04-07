#include <string>

using namespace std;


class Carte {
public:
    Carte();
    Carte(string description, int id) {
        this->description_ = description;
        this->id_ = id;
    }
    void afficherCarte();

private:
    string description_;
    int id_;
};