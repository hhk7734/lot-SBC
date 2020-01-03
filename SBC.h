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

#include "lot-API/lotdef.h"

namespace lot
{
constexpr int LAST_PHY_PIN = 40;

const int phy_to_gpio[LAST_PHY_PIN + 1] = {
    // clang-format off
     UNUSED,
     UNUSED, UNUSED,   // 1   | 2
     UNUSED, UNUSED,   // 3   | 4
     UNUSED, UNUSED,   // 5   | 6
     UNUSED, UNUSED,   // 7   | 8
     UNUSED, UNUSED,   // 9   | 10
     UNUSED, UNUSED,   // 11  | 12
     UNUSED, UNUSED,   // 13  | 14
     UNUSED, UNUSED,   // 15  | 16
     UNUSED, UNUSED,   // 17  | 18
     UNUSED, UNUSED,   // 19  | 20
     UNUSED, UNUSED,   // 21  | 22
     UNUSED, UNUSED,   // 23  | 24
     UNUSED, UNUSED,   // 25  | 26
     UNUSED, UNUSED,   // 27  | 28
     UNUSED, UNUSED,   // 29  | 30
     UNUSED, UNUSED,   // 31  | 32
     UNUSED, UNUSED,   // 33  | 34
     UNUSED, UNUSED,   // 35  | 36
     UNUSED, UNUSED,   // 37  | 38
     UNUSED, UNUSED    // 39  | 40
    // clang-format on
};

const bool is_available_phy[LAST_PHY_PIN + 1] = {
    // clang-format off
     false,
     false, false,   // 1   | 2
     false, false,   // 3   | 4
     false, false,   // 5   | 6
     false, false,   // 7   | 8
     false, false,   // 9   | 10
     false, false,   // 11  | 12
     false, false,   // 13  | 14
     false, false,   // 15  | 16
     false, false,   // 17  | 18
     false, false,   // 19  | 20
     false, false,   // 21  | 22
     false, false,   // 23  | 24
     false, false,   // 25  | 26
     false, false,   // 27  | 28
     false, false,   // 29  | 30
     false, false,   // 31  | 32
     false, false,   // 33  | 34
     false, false,   // 35  | 36
     false, false,   // 37  | 38
     false, false    // 39  | 40
    // clang-format on
};
}    // namespace lot