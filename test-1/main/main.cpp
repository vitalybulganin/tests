/*
Задание №1:
Есть набор машин с двумя характеристиками: вместимость по весу и вместимость по объему.
Расставьте машины в наборе в порядке убывания (приоритет у первой характеристики).
*/
//-------------------------------------------------------------------------//
#include <vector>
#include <algorithm>
#include <iostream>
//-------------------------------------------------------------------------//
#include <car.h>
//-------------------------------------------------------------------------//
using cars_t = std::vector<common::car>;
//-------------------------------------------------------------------------//
auto operator<<(std::ostream & stream, const cars_t & cars) -> std::ostream &
{
    for (const auto & car : cars)
    {
        stream << car << ",";
    }
    return stream;
}
//-------------------------------------------------------------------------//
int main(int argc, char * argv[])
{
    cars_t cars = {
        common::car(10, 20),
        common::car(25, 5),
        common::car(5, 10),
        common::car(50, 60),
        common::car(5, 5),
        common::car(35, 30),
        common::car(5, 50)
    };
    std::cout << "Before: [" << cars << "]." << std::endl;
    // Sorting a list of cars by desc.
    std::sort(cars.begin(), cars.end(), [](const cars_t::value_type & car1, const cars_t::value_type & car2) -> int {
        return (car1.weight() >= car2.weight() && car1.bulk() > car2.bulk());
    });
    std::cout << "After: [" << cars << "]." << std::endl;
    return 0;
}