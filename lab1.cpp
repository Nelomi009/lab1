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
  double acceleration1;
  double acceleration2;
  double beta;
  double time;

  cout << "acceleration1 = ";
  cin >> acceleration1;
  cout << "acceleration2 = ";
  cin >> acceleration2;  
  cout << "time = ";
  cin >> time; 
    
  beta = sqrt(acceleration1 * acceleration2);

  speed1 = acceleration1 * time * (1.0 - ((beta *  time * beta * time) / 3.0));

  lenght1 = (acceleration1 * time * time / 2.0) * (1.0 - ((beta * time) * (beta * time) / 6.0));
    
  speed2 = sqrt(acceleration1 / acceleration2) * atan(beta * time);

  lenght2 = 1.0 / acceleration2 * (beta * time * atan(beta * time) - log(1.0 + beta * beta * time * time) / 2.0);
    
  cout << " speed1 " << speed1
       << " \tspeed2 "<< speed2
       << "\tlenght1 "<<lenght1
       << "\tlenght2 "<<lenght2;
    
    
return 0;
}
