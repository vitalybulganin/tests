#include "../car-weight-builk.h"
//-------------------------------------------------------------------------//
namespace test2
{
    namespace common
    {
//-------------------------------------------------------------------------//
        car_weight_bulk::car_weight_bulk(const size_t & weight, const size_t & bulk) : base_class(weight, bulk)
        {
        }
//-------------------------------------------------------------------------//
        auto car_weight_bulk::check(const size_t & size) const noexcept -> bool
        {
            return (size <= this->weight() || size <= this->bulk());
        }
//-------------------------------------------------------------------------//
    }; // namespace common
}; // namespace test2
