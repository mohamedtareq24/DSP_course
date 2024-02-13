/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.0 and the Signal Processing Toolbox 7.2.
 * Generated on: 27-Jan-2024 19:56:52
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR Transposed
 * Filter Length     : 128
 * Stable            : Yes
 * Linear Phase      : Yes (Type 2)
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * D:\MATLAB2016\extern\include\tmwtypes.h 
 */
/*
 * Warning - Filter coefficients were truncated to fit specified data type.  
 *   The resulting response may not match generated theoretical response.
 *   Use the Filter Design & Analysis Tool to design accurate
 *   int16 filter coefficients.
 */
const int BL = 128;
const int16_T B[128] = {
       13,      2,    -13,     -9,      9,     15,     -2,    -20,     -8,
       19,     21,    -11,    -32,     -5,     36,     26,    -29,    -48,
        7,     62,     26,    -60,    -65,     34,     96,     14,   -106,
      -75,     81,    133,    -20,   -166,    -69,    154,    166,    -86,
     -239,    -34,    257,    182,   -195,   -318,     48,    395,    164,
     -367,   -396,    207,    581,     83,   -643,   -465,    512,    862,
     -136,  -1167,   -515,   1243,   1479,   -877,  -2933,   -542,   6414,
    12693,  12693,   6414,   -542,  -2933,   -877,   1479,   1243,   -515,
    -1167,   -136,    862,    512,   -465,   -643,     83,    581,    207,
     -396,   -367,    164,    395,     48,   -318,   -195,    182,    257,
      -34,   -239,    -86,    166,    154,    -69,   -166,    -20,    133,
       81,    -75,   -106,     14,     96,     34,    -65,    -60,     26,
       62,      7,    -48,    -29,     26,     36,     -5,    -32,    -11,
       21,     19,     -8,    -20,     -2,     15,      9,     -9,    -13,
        2,     13
};
