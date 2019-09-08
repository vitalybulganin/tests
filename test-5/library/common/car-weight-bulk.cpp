#include "../car-weight-builk.h"
//-------------------------------------------------------------------------//
#include <iostream>
//-------------------------------------------------------------------------//
namespace test5
{
    namespace common
    {
//-------------------------------------------------------------------------//
        car_weight_bulk::car_weight_bulk(const size_t & weight, const size_t & bulk) : base_class(weight, bulk)
        {
        }
//-------------------------------------------------------------------------//
        auto car_weight_bulk::print() const noexcept -> void
        {
            std::cout << *this;
        }
//-------------------------------------------------------------------------//
    }; // namespace common
}; // namespace test5
