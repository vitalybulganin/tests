/*
Задание №2:
Есть ОДИН набор с двумя разновидностями машин, у одних есть две характеристики: вместимость по весу и вместимость по объему,
а у других только вместимость по весу (нет ограничения по объему). Есть груз с заданным весом и объемом.
Удалите из набора те машины, в которые не влезет груз, используя в решении полиморфизм.
 */
//-------------------------------------------------------------------------//
#include <vector>
#include <algorithm>
#include <iostream>
//-------------------------------------------------------------------------//
#include "car-weight.h"
#include "car-weight-builk.h"
//-------------------------------------------------------------------------//
using cars_t = std::vector<test2::common::car_check_t>;
//-------------------------------------------------------------------------//
auto operator<<(std::ostream & stream, const cars_t & cars) -> std::ostream &
{
    static bool s_newline = false;

    for (const auto & car : cars)
    {
        if (s_newline != false) { stream << ", "; }

        stream << "[" << car;
        s_newline = true;
    }
    return stream;
}
//-------------------------------------------------------------------------//
int main(int argc, char * argv[])
{
    size_t value = 20;

    cars_t cars = {
        test2::common::car_check_t(new test2::common::car_weight(10)),
        test2::common::car_check_t(new test2::common::car_weight(25)),
        test2::common::car_check_t(new test2::common::car_weight_bulk(5, 10)),
        test2::common::car_check_t(new test2::common::car_weight_bulk(50, 60)),
        test2::common::car_check_t(new test2::common::car_weight_bulk(5, 5)),
        test2::common::car_check_t(new test2::common::car_weight(35)),
        test2::common::car_check_t(new test2::common::car_weight(1000))
    };
    std::cout << "Value: " << value << std::endl;
    std::cout << "Before: [" << cars << "]." << std::endl;
    // Removing a car which is isn't suitable.
    cars.erase(std::remove_if(cars.begin(), cars.end(), [&value](const cars_t::value_type & car) -> bool {
        return (car->check(value) != true);
    }), cars.end());
    std::cout << "After: [" << cars << "]." << std::endl;
    return 0;
}