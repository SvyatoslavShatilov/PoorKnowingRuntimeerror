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
std::cout << "Супер гонки. Круг " << namberLap << "\n";
std::cout << "===================\n";
std::cout << "Шумахер ( " << namberDriver << " ) " << "\n";
std::cout << "===================\n";
std::cout << "Водитель: Шумахер\n";
std::cout << "Скорость: " << speedKm << "\n" ;
std::cout << "------------------\n";
std::cout << "Оснащение\n"; 
std::cout << "Двигатель: +" << enginePower << "\n"; 
std::cout << "Колеса: +" << wheelPower << "\n";
std::cout << "Руль: +" << rudderPower << "\n";
std::cout << "------------------\n";
std::cout << "Действия плохой погоды\n";
std::cout << "Ветер: -" << windPower << "\n";
std::cout << "Дождь: -" << rainPower << std::endl;
} 