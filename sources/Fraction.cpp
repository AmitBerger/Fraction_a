#include "Fraction.hpp"

#include <cmath>
#include <stdexcept>
using namespace ariel;
using namespace std;
Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
  if (denom == 0) {
    throw runtime_error("divided by zero!");
  }
  reduce();
}
Fraction::Fraction(float num, float denom)
    : numerator(num), denominator(denom) {
  if (denom == 0) {
    throw runtime_error("divided by zero!");
  }
  reduce();
}

Fraction::Fraction(float num) {
  int precision = 1000; // 3 digits beyond the decimal point
  int numInt = round(num * precision);

  numerator = numInt;
  denominator = precision;
  reduce();
}

Fraction Fraction::operator+(const Fraction &other) {
 
  return *this;
}

Fraction Fraction::operator-(const Fraction &other) {
  
  return *this;
}

Fraction Fraction::operator*(const Fraction &other) {
  return *this;
}

Fraction Fraction::operator/(const Fraction &other) {

  return *this;
}

bool Fraction::operator==(const Fraction &other) const {
  return false;
}

bool Fraction::operator!=(const Fraction &other) const {
  return false;
}


bool Fraction::operator>(const Fraction &other) const {
  return false;
}

bool Fraction::operator<(const Fraction &other) const {
  return false;
}

bool Fraction::operator>=(const Fraction &other) const {
  return false;
}

bool Fraction::operator<=(const Fraction &other) const {
  return false;
}

Fraction &Fraction::operator++() {

  return *this;
}

Fraction Fraction::operator++(int) {
 
  return *this;
}
Fraction &Fraction::operator--() {
 
  return *this;
}
Fraction Fraction::operator--(int) {
  
  return *this;
}

void Fraction::reduce() {

}

int Fraction::gcd(int a, int b) {
 
  return 0;
}
int Fraction::getNumerator() { return this->numerator; }
int Fraction::getDenominator() { return this->denominator; }
