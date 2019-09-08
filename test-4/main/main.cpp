/*
Задача №4
Есть набор целых чисел, набор машин (с двумя параметрами: вместимость по весу и объему),
набор грузов (с двумя параметрами: вес и объем).
Напишите ОДНУ шаблонную функцию увеличения всех чисел набора или всех параметров всех объектов набора на единицу.
 */
//-------------------------------------------------------------------------//
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <goods-weight-builk.h>
//-------------------------------------------------------------------------//
#include "car-weight-builk.h"
#include "goods-weight-builk.h"
//-------------------------------------------------------------------------//
namespace
{
    using cars_t = std::vector<::common::car_increment>;
    //!< Increments a value of list on 1 without any loop.
    template<typename iterator>
    auto increment(iterator begin, iterator end) -> void {
        if (begin != end) {
            // Incrementing a value on 1.
            ++(*begin);
            // Moving forward.
            increment(++begin, end);
        }
    }
    //!<
    template<typename collection>
    auto print(const collection & col) -> std::string
    {
        static bool s_newline = false;

        std::ostringstream buffer;

        for (const auto & car : col)
        {
            if (s_newline != false) { buffer << ", "; }

            buffer << "[" << car << "]";
            s_newline = true;
        }
        s_newline = false;
        return buffer.str();
    }
}; // namespace
//-------------------------------------------------------------------------//
int main(int argc, char * argv[])
{
    cars_t cars = {
        test4::common::car_weight_bulk(10, 10),
        test4::common::car_weight_bulk(10, 10),
        test4::common::goods_weight_bulk(10, 0),
        test4::common::car_weight_bulk(0, 10),
        test4::common::goods_weight_bulk(10, 12),
        test4::common::goods_weight_bulk(13, 10),
        test4::common::car_weight_bulk(15, 10),
        test4::common::car_weight_bulk(10, 1),
        test4::common::goods_weight_bulk(10, 51)
    };
    std::vector<int> numbers = {1, 2, 5, 7, 3};

    std::cout << "Before: [" << print(cars) << "]." << std::endl;
    // Incrementing the collection.
    increment(cars.begin(), cars.end());
    std::cout << "After: [" << print(cars) << "]." << std::endl;
    std::cout << "Before: [" << print(numbers) << "]." << std::endl;
    // Incrementing the collection.
    increment(numbers.begin(), numbers.end());
    std::cout << "After: [" << print(numbers) << "]." << std::endl;
    return 0;
}