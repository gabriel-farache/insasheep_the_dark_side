/* { dg-do run } */
/* { dg-options "-O2 -msse2" } */
/* { dg-require-effective-target sse2 } */

#ifndef CHECK_H
#define CHECK_H "sse2-check.h"
#endif

#ifndef TEST
#define TEST sse2_test
#endif

#define N 0xb

#include CHECK_H

#include <emmintrin.h>

static __m128i
__attribute__((noinline, unused))
test (__m128i s1)
{
  return _mm_slli_epi16 (s1, N); 
}

static void
TEST (void)
{
  union128i_w u, s;
  short e[8] = {0};
  int i;
 
  s.x = _mm_set_epi16 (1, 2, 3, 4, 5, 6, 0x7000, 0x9000);

  u.x = test (s.x);

  if (N < 16)
    for (i = 0; i < 8; i++)
      e[i] = s.a[i] << N; 

  if (check_union128i_w (u, e))
    abort (); 
}
