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
#ifndef __GOODS_WEIGHT_BULK_H_1F376F82_0EA3_45AE_9E6B_5C69E2DF82A5__
#define __GOODS_WEIGHT_BULK_H_1F376F82_0EA3_45AE_9E6B_5C69E2DF82A5__
//-------------------------------------------------------------------------//
#include "weight-bulk-increment.h"
//-------------------------------------------------------------------------//
namespace test4
{
    namespace common
    {
//-------------------------------------------------------------------------//
    class goods_weight_bulk : public ::common::weight_bulk_incement
    {
        using base_class = ::common::weight_bulk_incement;

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
        };
//-------------------------------------------------------------------------//
    }; // namespace common
}; // namespace test4
//-------------------------------------------------------------------------//
#endif //__GOODS_WEIGHT_BULK_H_1F376F82_0EA3_45AE_9E6B_5C69E2DF82A5__
