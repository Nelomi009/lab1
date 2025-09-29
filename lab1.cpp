/**************************
* Автор: Черненко Никита. *
* Дата: 18.09.2025        *
* Вариант 15              *
***************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double speed1;
  double lenght1;
  double speed2;
  double lenght2;
  // a
  double acceleration1;
  // b
  double acceleration2;
  double beta;
  double time;
    
  acceleration1 = 6.15;
  acceleration2 = pow(10, -4);
  time = 18.5;
    
    
  //вычисляем бету
  beta = sqrt(acceleration1 * acceleration2);
  //вычисляем приближенную скорость
  speed1 = acceleration1 * time * (1 - ((beta *  time * beta * time) / 3));
  //вычисляем приближенную длину пробега самолета 
  lenght1 = (acceleration1 * time * time / 2) * (1 - ((beta * time) * (beta * time) / 6));
    
  //более точное значение скорости
  speed2 = sqrt(acceleration1 / acceleration2) * atan(beta * time);
  //более точное значение длины пробега самолета 
  lenght2 = 1 / acceleration2 * (beta * time * atan(beta * time) - log(1 + beta * beta * time * time) / 2);
    
  cout << " speed1 " << speed1
  << " \tspeed2 "<< speed2
  << "\tlenght1 "<<lenght1
  << "\tlenght2 "<<lenght2;
    
    
return 0;
}