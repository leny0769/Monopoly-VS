#include <string>
#include "Case.h"
#include "CaseChance.h"

using namespace std;

CaseChance::CaseChance() {

}

CaseChance::CaseChance(int position, std::string classe) : Case(position, classe) {
}
