
#ifndef FIX_POINT_32_H_
#define FIX_POINT_32_H_

#include <stdint.h> // more types of int
#include <stdio.h>
#include <math.h>

typedef int32_t fp32_t;
typedef int64_t fp64_t;
extern const uint8_t fp32_t_bitsize;

//---------MACROS --------
#define FRACTIONAL_BITS 16
#define SCALE_FACTOR (1<<FRACTIONAL_BITS)
#define FRACTION_DIGIT 3
#define PRECISION quick_pow10(FRACTION_DIGIT)
#define FRACTIONAL_MASK (SCALE_FACTOR - 1)
#define SIGN_MASK 1<<(fp32_t_bitsize-1)
#define SIGN(x) x&SIGN_MASK
#define PRINT_FIX_POINT(x) printf("The fix point decimal format is: %c%d.%0*I64d\n",((SIGN(x))?'-':' '), fix_point2integer(x), FRACTION_DIGIT, fix_point2fractional(x));

// --- declarations ------
fp32_t double2fix_point(double x);
double fix_point2double(fp32_t x);
int fix_point2integer(fp32_t x);
long long fix_point2fractional(fp32_t x);
fp32_t multi_fix_point(fp32_t x, fp32_t y);
fp32_t div_fix_point(fp32_t x, fp32_t y);


//---utility-------
long long quick_pow10(uint8_t n);


#endif /* FIX_POINT_32_H_ */
