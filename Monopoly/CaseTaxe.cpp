#include <string>
#include "Case.h"
#include "CaseTaxe.h"
using namespace std;


CaseTaxe::CaseTaxe() {

}

CaseTaxe::CaseTaxe(int position, std::string classe, int taxe) {
	Case(position,classe);
	this->taxe_ = taxe;
}

int CaseTaxe::getTaxe() {
	return this->taxe_;
}
