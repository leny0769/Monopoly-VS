#include <string>
#include "Case.h"
#include "CaseTaxe.h"
using namespace std;


CaseTaxe::CaseTaxe();
CaseTaxe::CaseTaxe(int position, int taxe) {
	Case(position);
	this->taxe_ = taxe;
}
int CaseTaxe::getTaxe() {
	return this->taxe_;
}
