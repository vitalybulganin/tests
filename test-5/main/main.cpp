/*
Задание №5:
Есть класс, определяющий машину (с двумя параметрами: вместимость по весу и объему) и класс, определяющий груз
(с двумя параметрами: вес и объем), оба класса имеют метод print() для вывода значений атрибутов на консоль .
Напишите ОДИН шаблонный класс, который расширял бы свойства объекта атрибутом «название» и добавлял бы в логику печати
на консоль вывод этого названия. С помощью этого шаблонного класса надо создать объекты типа «машина с названием» и
«груз с названием» и вывести их на печать.
*/
//-------------------------------------------------------------------------//
#include <vector>
#include <algorithm>
#include <iostream>
//-------------------------------------------------------------------------//
#include "car-weight-builk.h"
#include "goods-weight-builk.h"
#include "object-name.h"
//-------------------------------------------------------------------------//
namespace
{
    using car_name_t = test5::common::object_name<test5::common::car_weight_bulk>;
    using goods_name_t = test5::common::object_name<test5::common::goods_weight_bulk>;
}; // namespace
//-------------------------------------------------------------------------//
int main(int argc, char * argv[])
{
    car_name_t car("This is a car.", 10, 15);
    goods_name_t goods("This is a goods", 30, 60);
    // Printing the content of car.
    car.print();
    // Printing the content of goods.
    goods.print();

    return 0;
}