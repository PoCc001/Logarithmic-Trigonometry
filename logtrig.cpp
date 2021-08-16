/**
* Copyright Johannes Kloimböck 2021.
* Distributed under the Boost Software License, Version 1.0.
* (See accompanying file LICENSE or copy at
* https://www.boost.org/LICENSE_1_0.txt)
*/

#include "logtrig.h"
#include "logtrig.hpp"

inline float lsin(float x) noexcept { return lsinf(x); }
inline long double lsin(long double x) noexcept { return lsinl(x); }

inline float lcos(float x) noexcept { return lcosf(x); }
inline long double lcos(long double x) noexcept { return lcosl(x); }

inline float ltan(float x) noexcept { return ltanf(x); }
inline long double ltan(long double x) noexcept { return ltanl(x); }

inline float lcot(float x) noexcept { return lcotf(x); }
inline long double lcot(long double x) noexcept { return lcotl(x); }