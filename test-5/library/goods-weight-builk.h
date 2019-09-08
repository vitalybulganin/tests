/*!==========================================================================
* \file
* - Program:       test-5
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
#ifndef __GOODS_WEIGHT_BULK_H_3B298D03_DEEB_4F39_B2E3_FD67CC7FE0AC__
#define __GOODS_WEIGHT_BULK_H_3B298D03_DEEB_4F39_B2E3_FD67CC7FE0AC__
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
    class goods_weight_bulk : public ::common::car, public printable
    {
        using base_class = ::common::car;

        public:
            /**
             * Constructor.
             * @param weight [in] - A weight capacity.
             */
            goods_weight_bulk(const size_t & weight, const size_t & bulk);

            /**
             * Destructor.
             * @throw None.
             */
            virtual ~goods_weight_bulk() noexcept = default;

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
#endif //__GOODS_WEIGHT_BULK_H_3B298D03_DEEB_4F39_B2E3_FD67CC7FE0AC__
