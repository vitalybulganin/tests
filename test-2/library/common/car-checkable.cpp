#include "../car-checkable.h"
//-------------------------------------------------------------------------//
namespace test2
{
    namespace common
    {
//-------------------------------------------------------------------------//
        car_checkable::car_checkable(const size_t & weight, const size_t & bulk) : ::common::car(weight, bulk)
        {
        }
//-------------------------------------------------------------------------//
        auto operator<<(std::ostream & stream, const car_check_t & car) -> std::ostream &
        {
            stream << "weight: " << car->weight() << ", bulk: " << car->bulk();
            return stream;
        }
//-------------------------------------------------------------------------//
    }; // namespace common
}; // namespace test2
