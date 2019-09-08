/*!==========================================================================
* \file
* - Program:       test-2
* - File:          car-weight-bulk.h
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
#ifndef __CAR_WEIGHT_BULK_H_1F376F82_0EA3_45AE_9E6B_5C69E2DF82A5__
#define __CAR_WEIGHT_BULK_H_1F376F82_0EA3_45AE_9E6B_5C69E2DF82A5__
//-------------------------------------------------------------------------//
#include "car-checkable.h"
//-------------------------------------------------------------------------//
namespace test2
{
    namespace common
    {
//-------------------------------------------------------------------------//
        class car_weight_bulk : public car_checkable
        {
            using base_class = car_checkable;

        public:
            /**
             * Constructor.
             * @param weight [in] - A weight capacity.
             */
            car_weight_bulk(const size_t & weight, const size_t & bulk);

            /**
             * Destructor.
             * @throw None.
             */
            virtual ~car_weight_bulk() noexcept = default;

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
#endif //__CAR_WEIGHT_BULK_H_1F376F82_0EA3_45AE_9E6B_5C69E2DF82A5__
