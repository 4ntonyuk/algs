/*
 * Антонюк Дмитрий, ПС-24. Среда: C++
 * 
 * 19. Составить программу перевода вещественного числа в форму
 * константы с плавающей точкой  в строковом формате. Целая часть
 * мантиссы должна состоять из одной цифры в диапазоне  от 1 до 9.
 * Исходное число имеет тип double, а преобразуется к типу string.
 * Число знаков после десятичной точки задается (8).
 */
#include <iostream>
#include "./lib/ScientificNotation.h"

int main() {
  ScientificNotation::convert();
  return 0;
}