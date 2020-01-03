/*
 * MIT License
 * Copyright (c) 2019 Hyeonki Hong <hhk7734@gmail.com>
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
class unsupported_error : public std::exception
{
private:
    const char *m_what_arg;

public:
    explicit unsupported_error( const std::string &what_arg )
        : m_what_arg( what_arg.c_str() )
    {
    }
    explicit unsupported_error( const char *what_arg )
        : m_what_arg( what_arg )
    {
    }
    virtual const char *what() const throw()
    {
        return m_what_arg;
    }
};

static inline int get_lot_pin_available( int pin, const char *func_name )
{
    if( pin <= MAX_PHY_PIN_COUNT )
    {
        pin = phy_to_lot[pin];
    }
    else
    {
        pin = UNUSED;
    }

    if( pin < MAX_LOT_PIN_COUNT )
    {
        if( is_available_lot[pin] )
        {
            return pin;
        }
    }

    Log::error( "Used unavailable pin %d in %s().\r\n", pin, func_name );
    throw std::invalid_argument( "Check pin number and functions." );
}

void init( void )
{
    lot_time_init();
}

int get_lot_pin_available( int pin )
{
    if( pin <= MAX_PHY_PIN_COUNT )
    {
        pin = phy_to_lot[pin];
    }
    else
    {
        return UNUSED;
    }

    if( pin < MAX_LOT_PIN_COUNT )
    {
        if( is_available_lot[pin] )
        {
            return pin;
        }
    }

    return UNUSED;
}

void set_pin_mode( int pin, pin_mode_t mode )
{
    Log::error( "%s() is not supported or not implemented yet.\r\n", __func__ );
    throw unsupported_error( __func__ );
}

pin_mode_t get_pin_mode( int pin )
{
    Log::error( "%s() is not supported or not implemented yet.\r\n", __func__ );
    throw unsupported_error( __func__ );
}

void set_pin_pull_up_down( int pin, pud_mode_t pud )
{
    Log::error( "%s() is not supported or not implemented yet.\r\n", __func__ );
    throw unsupported_error( __func__ );
}

pud_mode_t get_pin_pull_up_down( int pin )
{
    Log::error( "%s() is not supported or not implemented yet.\r\n", __func__ );
    throw unsupported_error( __func__ );
}

void set_pin_speed( int pin, uint32_t speed )
{
    Log::error( "%s() is not supported or not implemented yet.\r\n", __func__ );
    throw unsupported_error( __func__ );
}

uint32_t get_pin_speed( int pin )
{
    Log::error( "%s() is not supported or not implemented yet.\r\n", __func__ );
    throw unsupported_error( __func__ );
}

void set_pin_drive( int pin, uint32_t drive )
{
    Log::error( "%s() is not supported or not implemented yet.\r\n", __func__ );
    throw unsupported_error( __func__ );
}

uint32_t get_pin_drive( int pin )
{
    Log::error( "%s() is not supported or not implemented yet.\r\n", __func__ );
    throw unsupported_error( __func__ );
}

void digital_write( int pin, int status )
{
    Log::error( "%s() is not supported or not implemented yet.\r\n", __func__ );
    throw unsupported_error( __func__ );
}

int digital_read( int pin )
{
    Log::error( "%s() is not supported or not implemented yet.\r\n", __func__ );
    throw unsupported_error( __func__ );
}

void analog_write( int pin, int value )
{
    Log::error( "%s() is not supported or not implemented yet.\r\n", __func__ );
    throw unsupported_error( __func__ );
}

int analog_read( int pin )
{
    Log::error( "%s() is not supported or not implemented yet.\r\n", __func__ );
    throw unsupported_error( __func__ );
}
}    // namespace lot
