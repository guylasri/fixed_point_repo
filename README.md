# fixed_point_repo
The Fixed Point Repository contain Fixed Point tool for c language, which capable of doing few basic operations:

fp32_t double2fix_point(double x); // convert double to fix point
double fix_point2double(fp32_t x); // convert fix point to double
int fix_point2integer(fp32_t x);   // convert fix point to integer
long long fix_point2fractional(fp32_t x);  // convert fix point to fractional
fp32_t multi_fix_point(fp32_t x, fp32_t y); // multi operation
fp32_t div_fix_point(fp32_t x, fp32_t y); // divide operation

Settings:
#define FRACTIONAL_BITS 16  // Choose how many bits will be used for fractional part of the fixed point
#define FRACTION_DIGIT 3 // Choose how many digit for percision when printing the decimal format of the fixed point.

Note: Add and Substract operations can be used for fixed point type variable the same as other types. (By using '+' and '-' characters)
