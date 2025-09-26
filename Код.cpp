/**************************
* Автор: Черненко Никита. *
* Дата: 18.09.2025        *
* Вариант 15              *
***************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
   
  double a = 6.15;      // м/с²
  double b = 1e-4;      // м⁻¹
  double t = 18.5;      // с
    
   
  double beta = sqrt(a * b);
    
  double v1 = a * t * (1 - pow(beta * t, 2) / 3);     // Вычисление v1 по формуле
    
  double L1 = (a * t * t / 2) * (1 - pow(beta * t, 2) / 6); // Вычисление L1 по формуле
    
  double v2 = sqrt(a / b) * atan(beta * t); // Вычисление v2 по формуле

  double beta_t = beta * t;
  double arctg_beta_t = atan(beta_t);
  double L2 = (1 / b) * (beta_t * arctg_beta_t - log(1 + beta_t * beta_t) / 2);  // Вычисление L2 по формуле
    
  cout << "v1 = " << v1 << endl;
  cout << "v2 = " << v2 << endl;
  cout << "L1 = " << L1 << endl;
  cout << "L2 = " << L2 << endl;
    
  return 0;
}