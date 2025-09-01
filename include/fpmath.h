#ifndef FPMATH_H_
#define FPMATH_H_

typedef s16 q4_12_t;
typedef u32 uq4_12_t;

#define UQ_4_12(n)  ((uq4_12_t)((n) * 4096 + 0.5))

#endif // FPMATH_H_
