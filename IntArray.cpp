#include "IntArray.h"
#include <algorithm>

ia::IntArray::IntArray(size_t a) {
	if (a != 0) {
		this->poi = new int[a];
		this->siz = a;
	}
	else {
		this->poi = nullptr;
		this->siz = 0;
	}
}
ia::IntArray::~IntArray() {
	delete[] this->poi;
}
ia::IntArray::IntArray(IntArray const& a) : siz(a.siz), poi(new int[a.siz]) {
	int* x = a.poi;
	int* b = this->poi + this->siz;
	for (int* i = this->poi; i != b; *i = *x, ++i, ++x);
}
ia::IntArray& ia::IntArray::operator=(IntArray const& a)
{
	if(this != &a) {
		if(this->poi != nullptr) 
			delete[] this->poi;
		this->siz = a.siz;
		this->poi = new int[this->siz];
		int* b = this->poi, *c = this->poi + this->siz, *d = a.poi;
		for (; b != c; *b = *d, ++b, ++d);
	}
	return *this;
}
void ia::IntArray::Resize(size_t a) {
	int* b = new int[a];
	if (this->poi != nullptr) {
		int* c = poi;
		int* d = b;
		int* e = d + a;
		for (; d != e; ++c, ++d) {
			*d = *c;
		};
		delete[] poi;
	}
	this->poi = b;
	this->siz = a;
}
void ia::IntArray::Swap(IntArray * a)
{
	std::swap(this->siz, a->siz);
	std::swap(this->poi, a->poi);
}
size_t ia::IntArray::GetSize() const  {
	return this->siz;
};
int ia::IntArray::GetElById(size_t a) const  {
	return *(this->poi + a);
}
void ia::IntArray::SetElById(size_t b, int a) {
	*(this->poi + b) = a;
}
