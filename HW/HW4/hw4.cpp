#include <iostream>
using namespace std;

int addition(int num1, int num2){
  return num1 + num2;
};

int substraction(int num1, int num2){
  return num1 - num2;
}

int multiplication(int num1, int num2){
  return num1 * num2;
}

float division(float num1, float num2){
  return num1 / num2;
}

int main(void){
  int num1, num2;

  cout<< "Enter two numbers: " << endl;
  cin >> num1 >> num2;

  cout << "Addition of two number is: " << addition(num1, num2) << endl;
  cout << "Substraction of two number is: " << substraction(num1, num2) << endl;
  cout << "Multiplication of two number is: " << multiplication(num1, num2) << endl;
  cout << "Division of two number is: " << division(num1, num2) << endl;
  
  return 0;
}