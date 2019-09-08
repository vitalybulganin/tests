/*!==========================================================================
* \file
* - Program:       test-2
* - File:          car-weight.h
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
#ifndef __CAR_WEIGHT_H_6BB3E6D7_CF4F_4BF1_8410_632AB0A2DE12__
#define __CAR_WEIGHT_H_6BB3E6D7_CF4F_4BF1_8410_632AB0A2DE12__
//-------------------------------------------------------------------------//
#include "car-checkable.h"
//-------------------------------------------------------------------------//
namespace test2
{
    namespace common
    {
//-------------------------------------------------------------------------//
        class car_weight : public car_checkable
        {
            using base_class = car_checkable;

        public:
            /**
             * Constructor.
             * @param weight [in] - A weight capacity.
             */
            car_weight(const size_t & weight);

            /**
             * Destructor.
             * @throw None.
             */
            virtual ~car_weight() noexcept = default;

        public:
            /**
             * Checks a size on suitable.
             * @param size [in] - A size of something.
             * @return true, if the size is suitable, otherwise false.
             */
            virtual auto check(const size_t & size) const noexcept -> bool override;
        };
//-------------------------------------------------------------------------//
    }; // namespace common
}; // namespace test2
//-------------------------------------------------------------------------//
#endif //__CAR_WEIGHT_H_6BB3E6D7_CF4F_4BF1_8410_632AB0A2DE12__
