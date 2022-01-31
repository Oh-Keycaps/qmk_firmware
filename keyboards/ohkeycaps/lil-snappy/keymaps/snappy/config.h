/* Copyright 2022 Daniel Gordon
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

#pragma once

#define ENCODER_RESOLUTION 2

#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_TWINKLE+4
#define RGBLIGHT_DEFAULT_HUE 213

#undef  IGNORE_MOD_TAP_INTERRUPT
#define IGNORE_MOD_TAP_INTERRUPT

#undef  PERMISSIVE_HOLD
// #define PERMISSIVE_HOLD

#define ONESHOT_TAP_TOGGLE       2

#undef  TAPPING_TERM
#define TAPPING_TERM             200
#define COMBO_TERM               100 //by default, this term is normally the same as the tapping term.

#define FORCE_NKRO

#define TAPPING_TERM_PER_KEY

#define COMBO_COUNT 2

