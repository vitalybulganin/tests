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
#ifndef __CAR_WEIGHT_BULK_H_E0A7AEA7_0B59_44C5_B305_5ABEC4A45145__
#define __CAR_WEIGHT_BULK_H_E0A7AEA7_0B59_44C5_B305_5ABEC4A45145__
//-------------------------------------------------------------------------//
#include <car.h>
//-------------------------------------------------------------------------//
#include "printable.h"
//-------------------------------------------------------------------------//
namespace test5
{
    namespace common
    {
//-------------------------------------------------------------------------//
    class car_weight_bulk : public ::common::car, public printable
    {
        using base_class = ::common::car;

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
         * Prints object.
         */
        virtual auto print() const noexcept -> void override;
    };
//-------------------------------------------------------------------------//
    }; // namespace common
}; // namespace test5
//-------------------------------------------------------------------------//
#endif //__CAR_WEIGHT_BULK_H_E0A7AEA7_0B59_44C5_B305_5ABEC4A45145__
