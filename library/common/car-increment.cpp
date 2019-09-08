#include "../car-increment.h"
//-------------------------------------------------------------------------//
#include <ostream>
//-------------------------------------------------------------------------//
namespace common
{
//-------------------------------------------------------------------------//
    car_increment::car_increment(const size_t & weight, const size_t & bulk) : base_class(weight, bulk)
    {
    }
//-------------------------------------------------------------------------//
    auto car_increment::operator++() -> car_increment
    {
        auto tmp = *this;

        ++this->capacityWeight;
        ++this->capacityBulk;
        return tmp;
    }
//-------------------------------------------------------------------------//
    auto operator++(car_increment & car, int) -> car_increment &
    {
        ++car.capacityWeight;
        ++car.capacityBulk;
        return car;
    }
//-------------------------------------------------------------------------//
}; // namespace common
//-------------------------------------------------------------------------//
