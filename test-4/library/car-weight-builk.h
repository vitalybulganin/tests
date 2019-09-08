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
#include "car-increment.h"
//-------------------------------------------------------------------------//
namespace test4
{
    namespace common
    {
//-------------------------------------------------------------------------//
    class car_weight_bulk : public ::common::car_increment
    {
        using base_class = ::common::car_increment;

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
    };
//-------------------------------------------------------------------------//
    }; // namespace common
}; // namespace test4
//-------------------------------------------------------------------------//
#endif //__CAR_WEIGHT_BULK_H_1F376F82_0EA3_45AE_9E6B_5C69E2DF82A5__
