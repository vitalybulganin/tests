/*!==========================================================================
* \file
* - Program:       test-5
* - File:          object-name.h
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
#ifndef __OBJECT_NAME_H_157E2C19_2765_4147_8B18_3871618F96FE__
#define __OBJECT_NAME_H_157E2C19_2765_4147_8B18_3871618F96FE__
//-------------------------------------------------------------------------//
#include <string>
#include <iostream>
//-------------------------------------------------------------------------//
namespace test5
{
    namespace common
    {
//-------------------------------------------------------------------------//
        template<typename object_t>
        class object_name
        {
            //!< Keeps a name of object.
            std::string objname;
            //!< Keeps an object.
            object_t object;

        public:
            /**
             * Constructor.
             * @param name [in] - A name.
             * @param weight [in] - A weight value.
             * @param bulk [in] - A bulk value.
             */
            object_name(const std::string & name, const size_t & weight, const size_t & bulk) : objname(name), object(weight, bulk)
            {
            }

            auto print() const noexcept
            {
                std::cout << "Name: " << this->objname << std::endl;
                std::cout << "[";
                this->object.print();
                std::cout << "]." << std::endl;
            }
        };
//-------------------------------------------------------------------------//
    }; // namespace common
}; // namespace test5
//-------------------------------------------------------------------------//
#endif // __OBJECT_NAME_H_157E2C19_2765_4147_8B18_3871618F96FE__
