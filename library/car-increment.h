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
#ifndef __CAR_INCREMENT_H_E18B6AA2_6C58_4340_B2E7_A6D1719EEE6B__
#define __CAR_INCREMENT_H_E18B6AA2_6C58_4340_B2E7_A6D1719EEE6B__
//-------------------------------------------------------------------------//
#include "car.h"
//-------------------------------------------------------------------------//
namespace common
{
//-------------------------------------------------------------------------//
    class car_increment : public car
    {
        using base_class = car;
        //!<
        friend auto operator++(car_increment & car, int) -> car_increment &;

    public:
        /**
         * Constructor.
         * @param weight [in] - Weight capacity.
         * @param bulk [in] - Bulk capacity.
         */
        car_increment(const size_t & weight, const size_t & bulk);

        /**
         * Destructor.
         * @throw None.
         */
        virtual ~car_increment() noexcept = default;

    public:
        //!< Post-increment support.
        auto operator++() -> car_increment;
    };
//-------------------------------------------------------------------------//
    //!< Pre-increment support.
    auto operator++(car_increment & car, int) -> car_increment &;
//-------------------------------------------------------------------------//
}; // namespace common
//-------------------------------------------------------------------------//
#endif // __CAR_INCREMENT_H_E18B6AA2_6C58_4340_B2E7_A6D1719EEE6B__
