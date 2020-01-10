#include <iostream>
#include "IntArray.h"
#include "Person.h"
#include "Student.h"

void ia::IntArray::ShowAllElsInC() const {
	for (uint64_t i = 0; i < this->siz; std::cout << this->GetElById(i) << ' ', ++i);
	std::cout << std::endl;
}
void IntArrayTest() {
	const int si = 2;
	ia::IntArray* iaa = new ia::IntArray(si);

	for (uint64_t i = 0; i < si; iaa->SetElById(i, i), ++i);
	iaa->ShowAllElsInC();
	const int sii = 1;
	iaa->Resize(sii);
	iaa->SetElById(sii - 1, sii - 1);
	std::cout << std::endl << iaa->GetSize() << std::endl;
	iaa->ShowAllElsInC();
	const int siii = 4;
	ia::IntArray* iab = new ia::IntArray(siii);
	for (uint64_t i = 0; i < siii; iab->SetElById(i, i), ++i);

	ia::IntArray* iac = new ia::IntArray(0); // Вот тут хочу создать объект в куче
	*iac = *iaa;


	iaa->Swap(iab);
	iaa->ShowAllElsInC();

	iaa->~IntArray();
	iab->~IntArray();
	iac->~IntArray();
}
void PStudentTest() {
	dm::Person dma("Dave", 32);
	un::Student una("Donald", 24, "KPI");
	dm::Person* dmb = static_cast<dm::Person*>(&una);
	dm::Person& dmc = una;
	dm::Person dmc = una; // ctor{}
}

int main()
{


	
	return 0;
}
