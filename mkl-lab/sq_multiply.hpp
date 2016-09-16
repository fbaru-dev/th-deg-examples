/*
    This file is part of the example codes which have been used
    for the "Code Optmization Workshop".
    
    Copyright (C) 2016  Fabio Baruffa <fbaru-dev@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#ifndef _SQ_MATRIX_HPP
#define _SQ_MATRIX_HPP

#include <iostream>
#include "types.hpp"
#include "mkl.h"

static void sq_multiply_0(real_type* c, real_type* a, real_type* b, const int nrows_a, const int ncols_b, const int ncols_a);

static void sq_multiply_0(real_type* c, real_type* a, real_type* b, const int nrows_a, const int ncols_b, const int ncols_a)
{
	for(int i=0; i<nrows_a; ++i)
	  for(int j=0; j<ncols_b; ++j)
	    for(int k=0; k<ncols_a; ++k)
	      c[i*ncols_b + j] += a[i*ncols_a + k] * b[k*ncols_b + j];
}

#endif
