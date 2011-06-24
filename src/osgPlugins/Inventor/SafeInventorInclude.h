//
//  A header to work around buggy versions of coin (at least 3.1.2)
//
//
//  Author: Ryan Pavlik
//
//  License: public domain
//
//
//  THIS SOFTWARE IS NOT COPYRIGHTED
//
//  This source code is offered for use in the public domain.
//  You may use, modify or distribute it freely.
//
//  This source code is distributed in the hope that it will be useful but
//  WITHOUT ANY WARRANTY.  ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
//  DISCLAIMED.  This includes but is not limited to warranties of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//
//  If you find the source code useful, authors will kindly welcome
//  if you give them credit and keep their names with their source code,
//  but you are not forced to do so.
//

#ifndef OSG_SAFE_INVENTOR_INCLUDE_H
#define OSG_SAFE_INVENTOR_INCLUDE_H

// Include the first inventor header with debug disabled, to work around
// a header order bug in coin 3.1.2 while trying to detect if we're using coin.
// -- Ryan Pavlik, June 2011
#ifndef NDEBUG
#	define COIN_WORKAROUND_DEBUG
#	define NDEBUG
#endif

#include <Inventor/SbBasic.h>

#ifdef COIN_WORKAROUND_DEBUG
#	undef NDEBUG
#	undef COIN_WORKAROUND_DEBUG
#endif

#ifdef __COIN__
#include <Inventor/C/errors/debugerror.h>
#endif

#endif // OSG_SAFE_INVENTOR_INCLUDE_H
