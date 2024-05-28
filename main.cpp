#include <iostream>
/*
#include <string>

int main() {
  std::string shopName = "Мировая обувь";
  int SizePair = 39;
  
  std::cout << " Магазин - " << shopName << ": " << std::endl;
  std::cout << " Размер пары обуви - " << SizePair << " RU. " << std::endl;
}*/  
int main() {
int namberLap = 4;
int namberDriver = 358;
int speedKm = 358;
int enginePower = 254;
int wheelPower = 93;
int rudderPower = 49;
int windPower = 21;
int rainPower = 17;

std::cout << "===================\n";
std::cout << "\nСупер гонки. Круг " << namberLap << std::endl;
std::cout << "\n===================\n";
std::cout << "\nШумахер ( " << namberDriver << " ) " << std::endl;
std::cout << "\n===================\n";
std::cout << "\nВодитель: Шумахер\n";
std::cout << "\nСкорость: " << speedKm << std::endl;
std::cout << "\n------------------\n";
std::cout << "\nОснащение\n"; 
std::cout << "\nДвигатель: + " << enginePower << std::endl; 
std::cout << "\nКолеса: + " << wheelPower << std::endl;
std::cout << "\nРуль: + " << rudderPower << std::endl;
std::cout << "\n------------------\n";
std::cout << "\nДействия плохой погоды\n";
std::cout << "\nВетер: - " << windPower << std::endl;
std::cout << "\nДождь: - " << rainPower << std::endl;
} 