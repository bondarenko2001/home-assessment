#include <iostream>
//1
  int data = 255;
  float payload = 6.153;
  bool flag = true;
  char ch = '#';

int main() {
 std::cout<<data<< std::endl; 
 std::cout<<payload<< std::endl; 
 std::cout<<flag<< std::endl;
 std::cout<<ch<< std::endl;
//2
  int x1 = 10;
   std::cout<<x1<< std::endl;
  int x2 = x1+100;
  std::cout<<x2<< std::endl;
  int x3 = x2-20;
  std::cout<<x3<< std::endl;
  int x4 = x3*3;
  std::cout<<x4<< std::endl;
  int x5 = x4/2;
  std::cout<<x5<< std::endl;

  
//3
float g = 1.21 ; // не цілі числа
float h = 1; // не потрібно 2 знаки
double q = 1.5426; // між цифрами ставимо крапку, а не кому

//4
int value = 3;
int value1 = value + 1; //змінили змінну + додали інт, бо без нього ніяк
std::cout << value1 << std::endl; // для прорахунку використали стд, змінили велику букву, бо вона не використовувалась раніше
//5
  
int userID = 0x12;
userID += 5;
userID *= 0; 
std::cout<< userID <<std::endl; //не знаю як це коментувати, довго думала

}