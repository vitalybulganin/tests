#include "../car-weight.h"
//-------------------------------------------------------------------------//
namespace test2
{
    namespace common
    {
//-------------------------------------------------------------------------//
        car_weight::car_weight(const size_t & weight) : base_class(weight, 0)
        {
        }
//-------------------------------------------------------------------------//
        auto car_weight::check(const size_t & size) const noexcept -> bool
        {
            return (size <= this->weight());
        }
//-------------------------------------------------------------------------//
    }; // namespace common
}; // namespace test2
