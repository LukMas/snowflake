/* Copyright 2018 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SNOWFLAKE_H
#define SNOWFLAKE_H

#include "quantum.h"
// #include "rgblight.h"

#define LAYOUT( \
                k00, k01, k02,  k03, k04, k05,  \
                k10, k11, k12,  k13, k14, k15   \
               ) \
            { \
               { k00,   k01,   k02 }, \
               { k10,   k11,   k12 }, \
               { k05,   k04,   k03 }, \
               { k15,   k14,   k13 }  \
            }
#endif

