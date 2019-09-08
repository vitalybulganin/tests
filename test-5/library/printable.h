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
#ifndef __PRINTABLE_H_33C063F4_7A3B_4CFB_89D1_153A2EA519FB__
#define __PRINTABLE_H_33C063F4_7A3B_4CFB_89D1_153A2EA519FB__
//-------------------------------------------------------------------------//
namespace test5
{
    namespace common
    {
//-------------------------------------------------------------------------//
        struct printable
        {
            /**
             * Destructor.
             * @throw None.
             */
            virtual ~printable() noexcept = default;

            /**
             * Prints object.
             */
            virtual auto print() const noexcept -> void = 0;
        };
//-------------------------------------------------------------------------//
    }; // namespace common
}; // namespace test5
//-------------------------------------------------------------------------//
#endif // __PRINTABLE_H_33C063F4_7A3B_4CFB_89D1_153A2EA519FB__
