/*************************************************************************************************/
/**
	random.h


	Copyright (C) Rich Talbot-Watkins 2007 - 2012
	Copyright (C) Steven Flintham 2016

	This file is part of BeebAsm.

	BeebAsm is free software: you can redistribute it and/or modify it under the terms of the GNU
	General Public License as published by the Free Software Foundation, either version 3 of the
	License, or (at your option) any later version.

	BeebAsm is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without
	even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License along with BeebAsm, as
	COPYING.txt.  If not, see <http://www.gnu.org/licenses/>.
*/
/*************************************************************************************************/

#ifndef RANDOM_H_
#define RANDOM_H_

#include <stdint.h>

#define BEEBASM_RAND_MULTIPLIER static_cast<uint_least32_t>(48271)
#define BEEBASM_RAND_MODULUS static_cast<uint_least32_t>(2147483647)
#define BEEBASM_RAND_MAX (BEEBASM_RAND_MODULUS - static_cast<uint_least32_t>(2))

void beebasm_srand(uint_least32_t seed);

uint_least32_t beebasm_rand();

#endif // RANDOM_H_
