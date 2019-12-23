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

namespace lot
{
lot_mode_t lot_mode;

static inline pin_size_t get_lot_pin_available( pin_size_t pin )
{
    if( lot_mode == PHY )
    {
        if( pin <= MAX_PHY_PIN_COUNT )
        {
            pin = phy_to_lot[pin];
        }
        else
        {
            pin = UNUSED;
            return pin;
        }
    }

    if( pin < MAX_LOT_PIN_COUNT )
    {
        if( is_available_lot[pin] )
        {
            return pin;
        }
    }

    pin = UNUSED;
    return pin;
}

void init( lot_mode_t mode )
{
    lot_mode = mode;
    lot_time_init();
}

void set_pin_mode( pin_size_t pin, pin_mode_t mode )
{
    pin = get_lot_pin_available( pin );
    if( pin == UNUSED )
    {
        Log::error( "Used unavailable pin in set_pin_mode()." );
        exit( EXIT_FAILURE );
    }
}

pin_mode_t get_pin_mode( pin_size_t pin )
{
    pin = get_lot_pin_available( pin );
    if( pin == UNUSED )
    {
        Log::error( "Used unavailable pin in get_pin_mode()." );
        exit( EXIT_FAILURE );
    }
}

void set_pin_pull_up_down( pin_size_t pin, pud_mode_t pud )
{
    pin = get_lot_pin_available( pin );
    if( pin == UNUSED )
    {
        Log::error( "Used unavailable pin in set_pin_pull_up_down()." );
        exit( EXIT_FAILURE );
    }
}

pud_mode_t get_pin_pull_up_down( pin_size_t pin )
{
    pin = get_lot_pin_available( pin );
    if( pin == UNUSED )
    {
        Log::error( "Used unavailable pin in get_pin_pull_up_down()." );
        exit( EXIT_FAILURE );
    }
}

void set_pin_speed( pin_size_t pin, uint32_t speed )
{
    pin = get_lot_pin_available( pin );
    if( pin == UNUSED )
    {
        Log::error( "Used unavailable pin in set_pin_speed()." );
        exit( EXIT_FAILURE );
    }
}

uint32_t get_pin_speed( pin_size_t pin )
{
    pin = get_lot_pin_available( pin );
    if( pin == UNUSED )
    {
        Log::error( "Used unavailable pin in get_pin_speed()." );
        exit( EXIT_FAILURE );
    }
}

void set_pin_drive( pin_size_t pin, uint32_t drive )
{
    pin = get_lot_pin_available( pin );
    if( pin == UNUSED )
    {
        Log::error( "Used unavailable pin in set_pin_drive()." );
        exit( EXIT_FAILURE );
    }
}

uint32_t get_pin_drive( pin_size_t pin )
{
    pin = get_lot_pin_available( pin );
    if( pin == UNUSED )
    {
        Log::error( "Used unavailable pin in get_pin_drive()." );
        exit( EXIT_FAILURE );
    }
}

void digital_write( pin_size_t pin, pin_status_t status )
{
    pin = get_lot_pin_available( pin );
    if( pin == UNUSED )
    {
        Log::error( "Used unavailable pin in digital_write()." );
        exit( EXIT_FAILURE );
    }
}

pin_status_t digital_read( pin_size_t pin )
{
    pin = get_lot_pin_available( pin );
    if( pin == UNUSED )
    {
        Log::error( "Used unavailable pin in digital_read()." );
        exit( EXIT_FAILURE );
    }
}

void analog_write( pin_size_t pin, uint32_t value )
{
    pin = get_lot_pin_available( pin );
    if( pin == UNUSED )
    {
        Log::error( "Used unavailable pin in analog_write()." );
        exit( EXIT_FAILURE );
    }
}

uint32_t analog_read( pin_size_t pin )
{
    pin = get_lot_pin_available( pin );
    if( pin == UNUSED )
    {
        Log::error( "Used unavailable pin in analog_read()." );
        exit( EXIT_FAILURE );
    }
}
}    // namespace lot
