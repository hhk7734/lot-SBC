/*
 * MIT License
 * Copyright (c) 2019-2020 Hyeonki Hong <hhk7734@gmail.com>
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "lot.h"

#include <stdexcept>

namespace lot
{
namespace gpio
{
    void init( void )
    {
    }

    int gpio( int pin )
    {
        if( pin <= LAST_PHY_PIN )
        {
            if( is_available_phy[pin] )
            {
                return phy_to_gpio[pin];
            }
        }

        return UNUSED;
    }

    void mode( int pin, pin_mode_t pin_mode )
    {
        Log::error( "%s() is not supported or not implemented yet.\r\n",
                    __func__ );
        throw unsupported_error( __func__ );
    }

    pin_mode_t mode( int pin )
    {
        Log::error( "%s() is not supported or not implemented yet.\r\n",
                    __func__ );
        throw unsupported_error( __func__ );
    }

    void pull_up_down( int pin, pud_mode_t pud )
    {
        Log::error( "%s() is not supported or not implemented yet.\r\n",
                    __func__ );
        throw unsupported_error( __func__ );
    }

    pud_mode_t pull_up_down( int pin )
    {
        Log::error( "%s() is not supported or not implemented yet.\r\n",
                    __func__ );
        throw unsupported_error( __func__ );
    }

    void drive( int pin, uint32_t pin_drive )
    {
        Log::error( "%s() is not supported or not implemented yet.\r\n",
                    __func__ );
        throw unsupported_error( __func__ );
    }

    uint32_t drive( int pin )
    {
        Log::error( "%s() is not supported or not implemented yet.\r\n",
                    __func__ );
        throw unsupported_error( __func__ );
    }

    void digital( int pin, int status )
    {
        Log::error( "%s() is not supported or not implemented yet.\r\n",
                    __func__ );
        throw unsupported_error( __func__ );
    }

    int digital( int pin )
    {
        Log::error( "%s() is not supported or not implemented yet.\r\n",
                    __func__ );
        throw unsupported_error( __func__ );
    }

    void analog( int pin, int value )
    {
        Log::error( "%s() is not supported or not implemented yet.\r\n",
                    __func__ );
        throw unsupported_error( __func__ );
    }

    int analog( int pin )
    {
        Log::error( "%s() is not supported or not implemented yet.\r\n",
                    __func__ );
        throw unsupported_error( __func__ );
    }
}    // namespace gpio
}    // namespace lot
