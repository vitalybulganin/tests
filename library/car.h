/*!==========================================================================
* \file
* - Program:       test-common
* - File:          car.h
* - Created:       09/08/2019
* - Author:        Pavel Bulganin
* - Description:
* - Comments:
*
-----------------------------------------------------------------------------
*
* - History:
*
===========================================================================*/
#pragma once
//-------------------------------------------------------------------------//
#ifndef __CAR_H_988AE53E_9B26_425F_ABEE_4270B03549BC__
#define __CAR_H_988AE53E_9B26_425F_ABEE_4270B03549BC__
//-------------------------------------------------------------------------//
#include <cstdio>
#include <memory>
//-------------------------------------------------------------------------//
namespace common
{
//-------------------------------------------------------------------------//
    class car
    {
    protected:
        //!< Keeps a capacity.
        size_t capacityWeight = 0;
        size_t capacityBulk = 0;

    public:
        /**
         * Constructor.
         * @param weight [in] - Weight capacity.
         * @param bulk [in] - Bulk capacity.
         */
        car(const size_t & weight, const size_t & bulk);

        /**
         * Destructor.
         * @throw None.
         */
        virtual ~car() noexcept = default;

        /**
         * Gets a capacity of car by weight.
         * @return Weight capacity.
         * @throw None.
         */
        auto weight() const noexcept -> size_t { return this->capacityWeight; }

        /**
         * Gets a capacity of car by weight.
         * @return Weight capacity.
         * @throw None.
         */
        auto bulk() const noexcept -> size_t { return this->capacityBulk; }
    };
//-------------------------------------------------------------------------//
    using car_t = std::shared_ptr<car>;
//-------------------------------------------------------------------------//
    auto operator<<(std::ostream & stream, const car & c) -> std::ostream &;
//-------------------------------------------------------------------------//
}; // namespace common
//-------------------------------------------------------------------------//
#endif // __CAR_H_988AE53E_9B26_425F_ABEE_4270B03549BC__
