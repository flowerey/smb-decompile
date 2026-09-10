#include <stdio.h>
#include <string.h>
#include <zlib.h>
#include "ghidra_types.h"
ulong adler32_ghidra(ulong a, byte *b, uint c);
int main(void) {
  const char *msgs[] = {"", "a", "hello", "The quick brown fox jumps over the lazy dog", NULL};
  static char big[8000];
  memset(big, 'x', sizeof(big) - 1);
  for (int i = 0; msgs[i]; i++) {
    ulong g = adler32_ghidra(1, (byte *)msgs[i], strlen(msgs[i]));
    uLong z = adler32(1, (const Bytef *)msgs[i], strlen(msgs[i]));
    printf("msg='%s' ghidra=%lu zlib=%lu %s\n", msgs[i], g, (ulong)z,
           g == (ulong)z ? "OK" : "MISMATCH");
    if (g != (ulong)z)
      return 1;
  }
  ulong g = adler32_ghidra(1, (byte *)big, sizeof(big) - 1);
  uLong z = adler32(1, (const Bytef *)big, sizeof(big) - 1);
  printf("big(7999) ghidra=%lu zlib=%lu %s\n", g, (ulong)z, g == (ulong)z ? "OK" : "MISMATCH");
  if (g != (ulong)z)
    return 1;
  printf("ALL OK\n");
  return 0;
}
