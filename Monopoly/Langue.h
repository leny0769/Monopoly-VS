#ifndef LANGUE_H
#define LANGUE_H

#include <string>
#include <unordered_map>

using namespace std;


class Langue {
    public:
        Langue();

    private:
        unordered_map<std::string, string[]> terrains_;
        unordered_map<std::string, string[]> gares_;
        unordered_map<std::string, string[]> servicesPublic_;
        unordered_map<std::string, string[]> cartesChance_;
        unordered_map<std::string, string[]> carteCaisseDeCommunaute_;
};

#endif;