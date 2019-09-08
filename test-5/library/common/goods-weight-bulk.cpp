#include "../goods-weight-builk.h"
//-------------------------------------------------------------------------//
#include <iostream>
//-------------------------------------------------------------------------//
namespace test5
{
    namespace common
    {
//-------------------------------------------------------------------------//
        goods_weight_bulk::goods_weight_bulk(const size_t & weight, const size_t & bulk) : base_class(weight, bulk)
        {
        }
//-------------------------------------------------------------------------//
        auto goods_weight_bulk::print() const noexcept -> void
        {
            std::cout << *this;
        }
//-------------------------------------------------------------------------//
    }; // namespace common
}; // namespace test5
