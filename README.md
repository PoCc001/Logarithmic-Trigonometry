# Logarithmic-Trigonometry
A tiny arithmetic library for calculating the natural, common and binary logarithm of trigonometric functions in C/C++.

The advantage of using this library, instead of just writing log(sin(x)) is that it will output accurate results when the trigonometric function returns a value near 1. It may be worth extending the supported argument range to all the finite floating-point numbers.

## Usage
Simply include logtrig.h, compile logtrig.c (optionally also logtrig.cpp, if you use C++) and you can use all of this library's functions.
