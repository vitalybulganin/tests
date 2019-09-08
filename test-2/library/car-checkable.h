/*!==========================================================================
* \file
* - Program:       test-2
* - File:          car-checkable.h
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
#ifndef __CAR_CHECKABLE_H_58FE8930_3D87_4727_904E_5F31FE491750__
#define __CAR_CHECKABLE_H_58FE8930_3D87_4727_904E_5F31FE491750__
//-------------------------------------------------------------------------//
#include <ostream>
//-------------------------------------------------------------------------//
#include <car.h>
//-------------------------------------------------------------------------//
namespace test2
{
    namespace common
    {
//-------------------------------------------------------------------------//
        class car_checkable : protected ::common::car
        {
        public:
            /**
             * Constructor.
             * @param weight [in] - Weight capacity.
             * @param bulk [in] - Bulk capacity.
             */
            car_checkable(const size_t & weight, const size_t & bulk);

            /**
             * Destructor.
             * @throw None.
             */
            virtual ~car_checkable() noexcept = default;

            /**
             * Gets a capacity of car by weight.
             * @return Weight capacity.
             * @throw None.
             */
            auto weight() const noexcept -> size_t { return ::common::car::weight(); }

            /**
             * Gets a capacity of car by weight.
             * @return Weight capacity.
             * @throw None.
             */
            auto bulk() const noexcept -> size_t { return ::common::car::bulk(); }

        public:
            /**
             * Checks a size on suitable.
             * @param size [in] - A size of something.
             * @return true, if the size is suitable, otherwise false.
             */
            virtual auto check(const size_t & size) const noexcept -> bool = 0;
        };
//-------------------------------------------------------------------------//
        using car_check_t = std::shared_ptr<car_checkable>;
//-------------------------------------------------------------------------//
        auto operator<<(std::ostream & stream, const car_check_t & car) -> std::ostream &;
//-------------------------------------------------------------------------//
    }; // namespace common
}; // namespace test2
//-------------------------------------------------------------------------//
#endif // __CAR_CHECKABLE_H_58FE8930_3D87_4727_904E_5F31FE491750__
