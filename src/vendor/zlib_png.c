/* src/vendor/zlib_png.c — 416 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "zlib_png.h"

/* ======================================================================
 * png_set_sig_bytes  (Ghidra `png_set_sig_bytes` @ 0053f690)
 * Signature: uint8_t png_set_sig_bytes(void)
 * Calls: `png_error`
 * Called by: `gfxCreateTexture`
 */
void png_set_sig_bytes(long arg1, int arg2)

{
  uint8_t uVar1;

  if (arg1 == 0) {
    return;
  }
  if (arg2 < 9) {
    uVar1 = 0;
    if (arg2 < 0)
      goto LAB_0053f6b5;
  } else {
    png_error(arg1, "Too many bytes for PNG signature.");
  }
  uVar1 = (char)arg2;
LAB_0053f6b5:
  *(uint8_t *)(arg1 + 0x23c) = uVar1;
  return;
}

/* ======================================================================
 * png_sig_cmp  (Ghidra `png_sig_cmp` @ 0053f6e0)
 * Signature: uint8_t png_sig_cmp(void)
 * Calls: `memcmp`
 * Called by: `png_push_read_sig`, `png_read_info`
 */
int png_sig_cmp(long arg1, ulong arg2, size_t arg3)

{
  int iVar1;
  uint8_t local_18[24];

  local_18[0] = 0x89;
  local_18[1] = 0x50;
  local_18[2] = 0x4e;
  local_18[3] = 0x47;
  local_18[4] = 0xd;
  local_18[5] = 10;
  local_18[6] = 0x1a;
  local_18[7] = 10;
  if (arg3 < 9) {
    if (arg3 == 0) {
      return -1;
    }
  } else {
    arg3 = 8;
  }
  iVar1 = -1;
  if (arg2 < 8) {
    if (8 < arg3 + arg2) {
      arg3 = 8 - arg2;
    }
    iVar1 = memcmp((void *)(arg1 + arg2), local_18 + arg2, arg3);
  }
  return iVar1;
}

/* ======================================================================
 * png_check_sig  (Ghidra `png_check_sig` @ 0053f760)
 * Signature: uint8_t png_check_sig(void)
 * Calls: `memcmp`
 * Called by: `gfxCreateTexture`
 */
bool png_check_sig(void *arg1, int arg2)

{
  int iVar1;
  size_t __n;
  uint8_t local_18;
  uint8_t local_17;
  uint8_t local_16;
  uint8_t local_15;
  uint8_t local_14;
  uint8_t local_13;
  uint8_t local_12;
  uint8_t local_11;

  __n = (size_t)arg2;
  local_18 = 0x89;
  local_17 = 0x50;
  local_16 = 0x4e;
  local_15 = 0x47;
  local_14 = 0xd;
  local_13 = 10;
  local_12 = 0x1a;
  local_11 = 10;
  if (__n < 9) {
    if (__n == 0) {
      return false;
    }
  } else {
    __n = 8;
  }
  iVar1 = memcmp(arg1, &local_18, __n);
  return iVar1 == 0;
}

/* ======================================================================
 * png_zalloc  (Ghidra `png_zalloc` @ 0053f7c0)
 * Signature: uint8_t png_zalloc(void)
 * Calls: `png_malloc`, `png_warning`
 * Called by: `png_create_read_struct`, `png_create_read_struct_2`, `png_create_read_struct_2_constprop_2`, `png_read_init`, `png_read_init_2_constprop_0`, `png_read_init_3`, `png_write_IHDR`
 */
uint64_t png_zalloc(long arg1, uint arg2, uint arg3)

{
  uint uVar1;
  uint64_t uVar2;

  uVar1 = *(uint *)(arg1 + 0x118);
  if ((uint)(0xffffffff / (ulong)arg3) < arg2) {
    png_warning(arg1, "Potential overflow in png_zalloc()", 0xffffffff % (ulong)arg3);
    uVar2 = 0;
  } else {
    *(uint *)(arg1 + 0x118) = uVar1 | 0x100000;
    uVar2 = png_malloc(arg1, arg2 * arg3);
    *(uint *)(arg1 + 0x118) = uVar1;
  }
  return uVar2;
}

/* ======================================================================
 * png_zfree  (Ghidra `png_zfree` @ 0053f820)
 * Signature: uint8_t png_zfree(void)
 * Calls: `free`
 * Called by: `png_create_read_struct`, `png_create_read_struct_2`, `png_create_read_struct_2_constprop_2`, `png_read_destroy`, `png_read_init`, `png_read_init_2_constprop_0`, `png_read_init_3`, `png_write_IHDR`
 */
void png_zfree(long arg1, void *arg2)

{
  if ((arg2 != (void *)0x0) && (arg1 != 0)) {
    if (*(code **)(arg1 + 0x418) != (code *)0x0) {
      /* WARNING: Could not recover jumptable at 0x00541ec6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      (**(code **)(arg1 + 0x418))();
      return;
    }
    free(arg2);
    return;
  }
  return;
}

/* ======================================================================
 * png_reset_crc  (Ghidra `png_reset_crc` @ 0053f830)
 * Signature: uint8_t png_reset_crc(void)
 * Calls: `crc32`
 * Called by: `png_push_read_IDAT`, `png_push_read_chunk`, `png_read_end`, `png_read_finish_row`, `png_read_info`, `png_read_row`, `png_write_PLTE`, `png_write_chunk`, `png_write_chunk_start`, `png_write_hIST` (+5 more)
 */
void png_reset_crc(long arg1)

{
  uint32_t uVar1;

  uVar1 = crc32(0, 0, 0);
  *(uint32_t *)(arg1 + 0x218) = uVar1;
  return;
}

/* ======================================================================
 * png_calculate_crc  (Ghidra `png_calculate_crc` @ 0053f850)
 * Signature: uint8_t png_calculate_crc(void)
 * Calls: `crc32`
 * Called by: `png_crc_finish`, `png_crc_read`, `png_handle_IHDR`, `png_handle_PLTE`, `png_handle_bKGD`, `png_handle_cHRM`, `png_handle_gAMA`, `png_handle_hIST`, `png_handle_iCCP`, `png_handle_oFFs` (+25 more)
 */
void png_calculate_crc(long arg1)

{
  uint32_t uVar1;

  if ((*(byte *)(arg1 + 0x22c) & 0x20) == 0) {
    if ((*(byte *)(arg1 + 0x119) & 8) != 0) {
      return;
    }
  } else if ((*(uint *)(arg1 + 0x118) & 0x300) == 0x300) {
    return;
  }
  uVar1 = crc32(*(uint32_t *)(arg1 + 0x218));
  *(uint32_t *)(arg1 + 0x218) = uVar1;
  return;
}

/* ======================================================================
 * png_create_info_struct  (Ghidra `png_create_info_struct` @ 0053f8a0)
 * Signature: uint8_t png_create_info_struct(void)
 * Calls: `png_create_struct_2`
 * Called by: `gfxCreateTexture`
 */
uint64_t *png_create_info_struct(long arg1)

{
  uint64_t *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint64_t *puVar4;
  bool bVar5;
  byte bVar6;

  bVar6 = 0;
  puVar1 = (uint64_t *)0x0;
  if ((arg1 != 0) && (puVar1 = (uint64_t *)png_create_struct_2(2, *(uint64_t *)(arg1 + 0x410),
                                                               *(uint64_t *)(arg1 + 0x408)),
                      puVar1 != (uint64_t *)0x0)) {
    bVar5 = ((ulong)puVar1 & 1) != 0;
    uVar3 = 0x168;
    puVar4 = puVar1;
    if (bVar5) {
      *(uint8_t *)puVar1 = 0;
      puVar4 = (uint64_t *)((long)puVar1 + 1);
      uVar3 = 0x167;
    }
    if (((ulong)puVar4 & 2) != 0) {
      *(uint16_t *)puVar4 = 0;
      uVar3 = (ulong)((int)uVar3 - 2);
      puVar4 = (uint64_t *)((long)puVar4 + 2);
    }
    if (((ulong)puVar4 & 4) != 0) {
      *(uint32_t *)puVar4 = 0;
      uVar3 = (ulong)((int)uVar3 - 4);
      puVar4 = (uint64_t *)((long)puVar4 + 4);
    }
    for (uVar2 = uVar3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
    }
    if ((uVar3 & 4) != 0) {
      *(uint32_t *)puVar4 = 0;
      puVar4 = (uint64_t *)((long)puVar4 + 4);
    }
    if ((uVar3 & 2) != 0) {
      *(uint16_t *)puVar4 = 0;
      puVar4 = (uint64_t *)((long)puVar4 + 2);
    }
    if (bVar5) {
      *(uint8_t *)puVar4 = 0;
      return puVar1;
    }
  }
  return puVar1;
}

/* ======================================================================
 * png_info_init  (Ghidra `png_info_init` @ 0053f990)
 * Signature: uint8_t png_info_init(void)
 * Calls: `png_create_struct`, `png_destroy_struct`
 * Called by: (none)
 */
void png_info_init(long arg1)

{
  uint64_t *puVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  byte bVar5;

  bVar5 = 0;
  if (arg1 != 0) {
    png_destroy_struct();
    puVar1 = (uint64_t *)png_create_struct(2);
    bVar4 = ((ulong)puVar1 & 1) != 0;
    uVar3 = 0x168;
    if (bVar4) {
      *(uint8_t *)puVar1 = 0;
      puVar1 = (uint64_t *)((long)puVar1 + 1);
      uVar3 = 0x167;
    }
    if (((ulong)puVar1 & 2) != 0) {
      *(uint16_t *)puVar1 = 0;
      uVar3 = (ulong)((int)uVar3 - 2);
      puVar1 = (uint64_t *)((long)puVar1 + 2);
    }
    if (((ulong)puVar1 & 4) != 0) {
      *(uint32_t *)puVar1 = 0;
      uVar3 = (ulong)((int)uVar3 - 4);
      puVar1 = (uint64_t *)((long)puVar1 + 4);
    }
    for (uVar2 = uVar3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + (ulong)bVar5 * -2 + 1;
    }
    if ((uVar3 & 4) != 0) {
      *(uint32_t *)puVar1 = 0;
      puVar1 = (uint64_t *)((long)puVar1 + 4);
    }
    if ((uVar3 & 2) != 0) {
      *(uint16_t *)puVar1 = 0;
      puVar1 = (uint64_t *)((long)puVar1 + 2);
    }
    if (bVar4) {
      *(uint8_t *)puVar1 = 0;
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_info_init_3  (Ghidra `png_info_init_3` @ 0053fa60)
 * Signature: uint8_t png_info_init_3(void)
 * Calls: `png_create_struct`, `png_destroy_struct`
 * Called by: (none)
 */
void png_info_init_3(uint64_t *arg1, ulong arg2)

{
  ulong uVar1;
  ulong uVar2;
  uint64_t *puVar3;
  bool bVar4;
  byte bVar5;

  bVar5 = 0;
  puVar3 = (uint64_t *)*arg1;
  if (puVar3 != (uint64_t *)0x0) {
    if (arg2 < 0x168) {
      png_destroy_struct();
      puVar3 = (uint64_t *)png_create_struct(2);
      *arg1 = puVar3;
    }
    bVar4 = ((ulong)puVar3 & 1) != 0;
    uVar2 = 0x168;
    if (bVar4) {
      *(uint8_t *)puVar3 = 0;
      uVar2 = 0x167;
      puVar3 = (uint64_t *)((long)puVar3 + 1);
    }
    if (((ulong)puVar3 & 2) != 0) {
      *(uint16_t *)puVar3 = 0;
      uVar2 = (ulong)((int)uVar2 - 2);
      puVar3 = (uint64_t *)((long)puVar3 + 2);
    }
    if (((ulong)puVar3 & 4) != 0) {
      *(uint32_t *)puVar3 = 0;
      uVar2 = (ulong)((int)uVar2 - 4);
      puVar3 = (uint64_t *)((long)puVar3 + 4);
    }
    for (uVar1 = uVar2 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
    }
    if ((uVar2 & 4) != 0) {
      *(uint32_t *)puVar3 = 0;
      puVar3 = (uint64_t *)((long)puVar3 + 4);
    }
    if ((uVar2 & 2) != 0) {
      *(uint16_t *)puVar3 = 0;
      puVar3 = (uint64_t *)((long)puVar3 + 2);
    }
    if (bVar4) {
      *(uint8_t *)puVar3 = 0;
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_data_freer  (Ghidra `png_data_freer` @ 0053fb50)
 * Signature: uint8_t png_data_freer(void)
 * Calls: `png_warning`
 * Called by: (none)
 */
void png_data_freer(long arg1, long arg2, int arg3, uint arg4)

{
  if ((arg2 == 0) || (arg1 == 0)) {
    return;
  }
  if (arg3 == 1) {
    *(uint *)(arg2 + 0xdc) = *(uint *)(arg2 + 0xdc) | arg4;
    return;
  }
  if (arg3 != 2) {
    png_warning(arg1, "Unknown freer parameter in png_data_freer.");
    return;
  }
  *(uint *)(arg2 + 0xdc) = *(uint *)(arg2 + 0xdc) & ~arg4;
  return;
}

/* ======================================================================
 * png_free_data  (Ghidra `png_free_data` @ 0053fb90)
 * Signature: uint8_t png_free_data(void)
 * Calls: `png_free`
 * Called by: `png_destroy_info_struct`, `png_destroy_read_struct`, `png_destroy_write_struct`, `png_info_destroy`, `png_read_png`, `png_set_PLTE`, `png_set_hIST`, `png_set_iCCP`, `png_set_rows`, `png_set_tRNS`
 */
/* WARNING: Type propagation algorithm not settling */

void png_free_data(long arg1, long arg2, uint arg3, int arg4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;

  if (arg2 == 0) {
    return;
  }
  if (arg1 != 0) {
    uVar2 = *(uint *)(arg2 + 0xdc);
    if ((uVar2 & 0x4000 & arg3) != 0) {
      if (arg4 == -1) {
        iVar6 = 0;
        if (0 < *(int *)(arg2 + 0x34)) {
          do {
            iVar3 = iVar6 + 1;
            png_free_data(arg1, arg2, 0x4000, iVar6);
            iVar6 = iVar3;
          } while (iVar3 < *(int *)(arg2 + 0x34));
        }
        png_free(arg1, *(uint64_t *)(arg2 + 0x40));
        *(uint64_t *)(arg2 + 0x40) = 0;
        *(uint32_t *)(arg2 + 0x34) = 0;
        uVar2 = *(uint *)(arg2 + 0xdc);
      } else if ((*(long *)(arg2 + 0x40) != 0) &&
                 (*(long *)(*(long *)(arg2 + 0x40) + 8 + (long)arg4 * 0x20) != 0)) {
        png_free();
        *(uint64_t *)(*(long *)(arg2 + 0x40) + 8 + (long)arg4 * 0x20) = 0;
        uVar2 = *(uint *)(arg2 + 0xdc);
      }
    }
    if ((arg3 & 0x2000 & uVar2) != 0) {
      png_free(arg1, *(uint64_t *)(arg2 + 0x58));
      uVar2 = *(uint *)(arg2 + 0xdc);
      *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) & 0xffffffef;
      *(uint64_t *)(arg2 + 0x58) = 0;
    }
    if ((uVar2 & arg3 & 0x100) != 0) {
      *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) & 0xffffbfff;
    }
    if ((uVar2 & arg3 & 0x80) == 0) {
      uVar1 = arg3 & 0x10 & uVar2;
    } else {
      png_free(arg1, *(uint64_t *)(arg2 + 0xb8));
      png_free(arg1, *(uint64_t *)(arg2 + 200));
      lVar4 = *(long *)(arg2 + 0xd0);
      *(uint64_t *)(arg2 + 0xb8) = 0;
      *(uint64_t *)(arg2 + 200) = 0;
      if (lVar4 != 0) {
        if (*(char *)(arg2 + 0xd9) != '\0') {
          lVar5 = 0;
          iVar6 = 0;
          do {
            iVar6 = iVar6 + 1;
            png_free(arg1, *(uint64_t *)(lVar4 + lVar5));
            *(uint64_t *)(*(long *)(arg2 + 0xd0) + lVar5) = 0;
            lVar5 = lVar5 + 8;
            lVar4 = *(long *)(arg2 + 0xd0);
          } while (iVar6 < (int)(uint) * (byte *)(arg2 + 0xd9));
        }
        png_free(arg1);
        *(uint64_t *)(arg2 + 0xd0) = 0;
      }
      uVar2 = *(uint *)(arg2 + 0xdc);
      *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) & 0xfffffbff;
      uVar1 = arg3 & 0x10 & uVar2;
    }
    if (uVar1 == 0) {
      uVar2 = arg3 & 0x20 & uVar2;
    } else {
      png_free(arg1, *(uint64_t *)(arg2 + 0xf0));
      png_free(arg1, *(uint64_t *)(arg2 + 0xf8));
      *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) & 0xffffefff;
      *(uint64_t *)(arg2 + 0xf0) = 0;
      *(uint64_t *)(arg2 + 0xf8) = 0;
      uVar2 = arg3 & 0x20 & *(uint *)(arg2 + 0xdc);
    }
    if (uVar2 != 0) {
      if (arg4 == -1) {
        if (*(int *)(arg2 + 0x110) != 0) {
          if (0 < *(int *)(arg2 + 0x110)) {
            iVar6 = 0;
            do {
              iVar3 = iVar6 + 1;
              png_free_data(arg1, arg2, 0x20, iVar6);
              iVar6 = iVar3;
            } while (iVar3 < *(int *)(arg2 + 0x110));
          }
          png_free(arg1, *(uint64_t *)(arg2 + 0x108));
          *(uint64_t *)(arg2 + 0x108) = 0;
          *(uint32_t *)(arg2 + 0x110) = 0;
        }
        *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) & 0xffffdfff;
      } else if (*(long *)(arg2 + 0x108) != 0) {
        lVar4 = (long)arg4 * 0x20;
        png_free(arg1, *(uint64_t *)(*(long *)(arg2 + 0x108) + lVar4));
        png_free(arg1, *(uint64_t *)(*(long *)(arg2 + 0x108) + 0x10 + lVar4));
        *(uint64_t *)(*(long *)(arg2 + 0x108) + lVar4) = 0;
        *(uint64_t *)(*(long *)(arg2 + 0x108) + 0x10 + lVar4) = 0;
      }
    }
    if (*(long *)(arg1 + 0x458) != 0) {
      png_free(arg1);
      *(uint64_t *)(arg1 + 0x458) = 0;
    }
    uVar2 = *(uint *)(arg2 + 0xdc);
    if ((uVar2 & 0x200 & arg3) != 0) {
      if (arg4 == -1) {
        if (*(long *)(arg2 + 0xe8) != 0) {
          if (0 < (int)*(long *)(arg2 + 0xe8)) {
            iVar6 = 0;
            do {
              iVar3 = iVar6 + 1;
              png_free_data(arg1, arg2, 0x200, iVar6);
              iVar6 = iVar3;
            } while (iVar3 < *(int *)(arg2 + 0xe8));
          }
          png_free(arg1, *(uint64_t *)(arg2 + 0xe0));
          *(uint64_t *)(arg2 + 0xe0) = 0;
          *(uint64_t *)(arg2 + 0xe8) = 0;
          uVar2 = *(uint *)(arg2 + 0xdc);
        }
      } else if (*(long *)(arg2 + 0xe0) != 0) {
        png_free(arg1, *(uint64_t *)(*(long *)(arg2 + 0xe0) + 8 + (long)arg4 * 0x20));
        *(uint64_t *)(*(long *)(arg2 + 0xe0) + 8 + (long)arg4 * 0x20) = 0;
        uVar2 = *(uint *)(arg2 + 0xdc);
      }
    }
    if ((arg3 & 8 & uVar2) == 0) {
      uVar1 = arg3 & 0x1000 & uVar2;
    } else {
      png_free(arg1, *(uint64_t *)(arg2 + 0x90));
      uVar2 = *(uint *)(arg2 + 0xdc);
      *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) & 0xffffffbf;
      *(uint64_t *)(arg2 + 0x90) = 0;
      uVar1 = arg3 & 0x1000 & uVar2;
    }
    if (uVar1 == 0) {
      uVar1 = arg3 & 0x40 & uVar2;
    } else {
      png_free(arg1, *(uint64_t *)(arg2 + 0x10));
      uVar2 = *(uint *)(arg2 + 0xdc);
      *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) & 0xfffffff7;
      *(uint64_t *)(arg2 + 0x10) = 0;
      *(uint16_t *)(arg2 + 0x18) = 0;
      uVar1 = arg3 & 0x40 & uVar2;
    }
    if (uVar1 != 0) {
      lVar4 = *(long *)(arg2 + 0x138);
      if (lVar4 != 0) {
        if (0 < *(int *)(arg2 + 4)) {
          lVar5 = 0;
          iVar6 = 0;
          do {
            iVar6 = iVar6 + 1;
            png_free(arg1, *(uint64_t *)(lVar4 + lVar5));
            *(uint64_t *)(*(long *)(arg2 + 0x138) + lVar5) = 0;
            lVar5 = lVar5 + 8;
            lVar4 = *(long *)(arg2 + 0x138);
          } while (iVar6 < *(int *)(arg2 + 4));
        }
        png_free(arg1);
        uVar2 = *(uint *)(arg2 + 0xdc);
        *(uint64_t *)(arg2 + 0x138) = 0;
      }
      *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) & 0xffff7fff;
    }
    if (arg4 != -1) {
      arg3 = arg3 & 0xffffbddf;
    }
    *(uint *)(arg2 + 0xdc) = ~arg3 & uVar2;
    return;
  }
  return;
}

/* ======================================================================
 * png_destroy_info_struct  (Ghidra `png_destroy_info_struct` @ 005400d0)
 * Signature: uint8_t png_destroy_info_struct(void)
 * Calls: `png_destroy_struct_2`, `png_free`, `png_free_data`
 * Called by: (none)
 */
void png_destroy_info_struct(long arg1, uint64_t *arg2)

{
  uint64_t *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint64_t *puVar4;
  bool bVar5;
  byte bVar6;

  bVar6 = 0;
  if (((arg1 != 0) && (arg2 != (uint64_t *)0x0)) &&
      (puVar1 = (uint64_t *)*arg2, puVar1 != (uint64_t *)0x0)) {
    png_free_data(arg1, puVar1, 0x7fff, 0xffffffff);
    if (*(int *)(arg1 + 0x3d8) != 0) {
      png_free(arg1, *(uint64_t *)(arg1 + 0x3e0));
      *(uint64_t *)(arg1 + 0x3e0) = 0;
      *(uint32_t *)(arg1 + 0x3d8) = 0;
    }
    bVar5 = ((ulong)puVar1 & 1) != 0;
    uVar3 = 0x168;
    puVar4 = puVar1;
    if (bVar5) {
      *(uint8_t *)puVar1 = 0;
      puVar4 = (uint64_t *)((long)puVar1 + 1);
      uVar3 = 0x167;
    }
    if (((ulong)puVar4 & 2) != 0) {
      *(uint16_t *)puVar4 = 0;
      uVar3 = (ulong)((int)uVar3 - 2);
      puVar4 = (uint64_t *)((long)puVar4 + 2);
    }
    if (((ulong)puVar4 & 4) != 0) {
      *(uint32_t *)puVar4 = 0;
      uVar3 = (ulong)((int)uVar3 - 4);
      puVar4 = (uint64_t *)((long)puVar4 + 4);
    }
    for (uVar2 = uVar3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
    }
    if ((uVar3 & 4) != 0) {
      *(uint32_t *)puVar4 = 0;
      puVar4 = (uint64_t *)((long)puVar4 + 4);
    }
    if ((uVar3 & 2) != 0) {
      *(uint16_t *)puVar4 = 0;
      puVar4 = (uint64_t *)((long)puVar4 + 2);
    }
    if (bVar5) {
      *(uint8_t *)puVar4 = 0;
    }
    png_destroy_struct_2(puVar1, *(uint64_t *)(arg1 + 0x418), *(uint64_t *)(arg1 + 0x408));
    *arg2 = 0;
  }
  return;
}

/* ======================================================================
 * png_info_destroy  (Ghidra `png_info_destroy` @ 00540240)
 * Signature: uint8_t png_info_destroy(void)
 * Calls: `png_free`, `png_free_data`
 * Called by: `png_read_destroy`
 */
void png_info_destroy(long arg1, uint64_t *arg2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;

  bVar4 = 0;
  png_free_data(arg1, arg2, 0x7fff, 0xffffffff);
  if (*(int *)(arg1 + 0x3d8) != 0) {
    png_free(arg1, *(uint64_t *)(arg1 + 0x3e0));
    *(uint64_t *)(arg1 + 0x3e0) = 0;
    *(uint32_t *)(arg1 + 0x3d8) = 0;
  }
  if (arg2 != (uint64_t *)0x0) {
    bVar3 = ((ulong)arg2 & 1) != 0;
    uVar2 = 0x168;
    if (bVar3) {
      *(uint8_t *)arg2 = 0;
      arg2 = (uint64_t *)((long)arg2 + 1);
      uVar2 = 0x167;
    }
    if (((ulong)arg2 & 2) != 0) {
      *(uint16_t *)arg2 = 0;
      uVar2 = (ulong)((int)uVar2 - 2);
      arg2 = (uint64_t *)((long)arg2 + 2);
    }
    if (((ulong)arg2 & 4) != 0) {
      *(uint32_t *)arg2 = 0;
      uVar2 = (ulong)((int)uVar2 - 4);
      arg2 = (uint64_t *)((long)arg2 + 4);
    }
    for (uVar1 = uVar2 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *arg2 = 0;
      arg2 = arg2 + (ulong)bVar4 * -2 + 1;
    }
    if ((uVar2 & 4) != 0) {
      *(uint32_t *)arg2 = 0;
      arg2 = (uint64_t *)((long)arg2 + 4);
    }
    if ((uVar2 & 2) != 0) {
      *(uint16_t *)arg2 = 0;
      arg2 = (uint64_t *)((long)arg2 + 2);
    }
    if (bVar3) {
      *(uint8_t *)arg2 = 0;
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_get_io_ptr  (Ghidra `png_get_io_ptr` @ 00540350)
 * Signature: uint8_t png_get_io_ptr(void)
 * Calls: (none)
 * Called by: `PngIoRead`
 */
uint64_t png_get_io_ptr(long arg1)

{
  if (arg1 != 0) {
    return *(uint64_t *)(arg1 + 0xf0);
  }
  return 0;
}

/* ======================================================================
 * png_init_io  (Ghidra `png_init_io` @ 00540370)
 * Signature: uint8_t png_init_io(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_init_io(long arg1, uint64_t arg2)

{
  if (arg1 != 0) {
    *(uint64_t *)(arg1 + 0xf0) = arg2;
  }
  return;
}

/* ======================================================================
 * png_convert_to_rfc1123  (Ghidra `png_convert_to_rfc1123` @ 00540380)
 * Signature: uint8_t png_convert_to_rfc1123(void)
 * Calls: `png_malloc`, `snprintf`
 * Called by: (none)
 */
uint64_t png_convert_to_rfc1123(long arg1, ushort *arg2)

{
  char *__s;
  uint64_t uVar1;

  if (arg1 == 0) {
    uVar1 = 0;
  } else {
    __s = *(char **)(arg1 + 0x3b8);
    if (__s == (char *)0x0) {
      __s = (char *)png_malloc(arg1, 0x1d);
      *(char **)(arg1 + 0x3b8) = __s;
    }
    snprintf(__s, 0x1d, "%d %s %d %02d:%02d:%02d +0000", (ulong)(*(byte *)((long)arg2 + 3) & 0x1f),
             short_months_6416 + (long)((int)((byte)arg2[1] - 1) % 0xc) * 4, (ulong)*arg2,
             (uint)(byte)((byte)arg2[2] % 0x18), (uint)(*(byte *)((long)arg2 + 5) % 0x3c),
             (uint)(byte)((byte)arg2[3] % 0x3d));
    uVar1 = *(uint64_t *)(arg1 + 0x3b8);
  }
  return uVar1;
}

/* ======================================================================
 * png_get_copyright  (Ghidra `png_get_copyright` @ 005404c0)
 * Signature: uint8_t png_get_copyright(void)
 * Calls: (none)
 * Called by: (none)
 */
char *png_get_copyright(void)

{
  return "\n libpng version 1.2.25 - February 18, 2008\n   Copyright (c) 1998-2008 Glenn "
         "Randers-Pehrson\n   Copyright (c) 1996-1997 Andreas Dilger\n   Copyright (c) 1995-1996 "
         "Guy Eric Schalnat, Group 42, Inc.\n";
}

/* ======================================================================
 * png_get_libpng_ver  (Ghidra `png_get_libpng_ver` @ 005404d0)
 * Signature: uint8_t png_get_libpng_ver(void)
 * Calls: (none)
 * Called by: (none)
 */
char *png_get_libpng_ver(void)

{
  return "1.2.25";
}

/* ======================================================================
 * png_get_header_ver  (Ghidra `png_get_header_ver` @ 005404e0)
 * Signature: uint8_t png_get_header_ver(void)
 * Calls: (none)
 * Called by: (none)
 */
char *png_get_header_ver(void)

{
  return "1.2.25";
}

/* ======================================================================
 * png_get_header_version  (Ghidra `png_get_header_version` @ 005404f0)
 * Signature: uint8_t png_get_header_version(void)
 * Calls: (none)
 * Called by: (none)
 */
char *png_get_header_version(void)

{
  return " libpng version 1.2.25 - February 18, 2008\n\n";
}

/* ======================================================================
 * png_handle_as_unknown  (Ghidra `png_handle_as_unknown` @ 00540500)
 * Signature: uint8_t png_handle_as_unknown(void)
 * Calls: `memcmp`
 * Called by: `png_handle_unknown`, `png_push_handle_unknown`, `png_push_read_chunk`, `png_read_end`, `png_read_info`, `png_write_end`, `png_write_info`, `png_write_info_before_PLTE`
 */
uint8_t png_handle_as_unknown(long arg1, void *arg2)

{
  int iVar1;
  int iVar2;
  void *__s2;

  if (((arg2 != (void *)0x0) && (arg1 != 0)) && (iVar2 = *(int *)(arg1 + 0x3d8), 0 < iVar2)) {
    __s2 = (void *)((long)(iVar2 * 5) + -5 + *(long *)(arg1 + 0x3e0));
    do {
      iVar1 = memcmp(arg2, __s2, 4);
      if (iVar1 == 0) {
        return *(uint8_t *)((long)__s2 + 4);
      }
      __s2 = (void *)((long)__s2 + -5);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ======================================================================
 * png_reset_zstream  (Ghidra `png_reset_zstream` @ 00540570)
 * Signature: uint8_t png_reset_zstream(void)
 * Calls: `inflateReset`
 * Called by: (none)
 */
uint64_t png_reset_zstream(long arg1)

{
  uint64_t uVar1;

  if (arg1 != 0) {
    uVar1 = inflateReset(arg1 + 0x120);
    return uVar1;
  }
  return 0xfffffffe;
}

/* ======================================================================
 * png_access_version_number  (Ghidra `png_access_version_number` @ 00540590)
 * Signature: uint8_t png_access_version_number(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_access_version_number(void)

{
  return 0x27f1;
}

/* ======================================================================
 * png_mmx_support  (Ghidra `png_mmx_support` @ 005405a0)
 * Signature: uint8_t png_mmx_support(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_mmx_support(void)

{
  return 0xffffffff;
}

/* ======================================================================
 * png_format_buffer  (Ghidra `png_format_buffer` @ 005405b0)
 * Signature: uint8_t png_format_buffer(void)
 * Calls: (none)
 * Called by: `png_chunk_error`, `png_chunk_warning`
 */
void png_format_buffer(long arg1, byte *arg2, uint64_t *arg3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;

  bVar1 = *(byte *)(arg1 + 0x22c);
  if ((bVar1 - 0x5b < 6) || (0x39 < bVar1 - 0x41)) {
    *arg2 = 0x5b;
    bVar2 = "0123456789ABCDEFInvalid bit depth"[bVar1 & 0xf];
    arg2[3] = 0x5d;
    bVar1 = "0123456789ABCDEFInvalid bit depth"[(int)(uint)(bVar1 >> 4)];
    arg2[2] = bVar2;
    iVar4 = 4;
    arg2[1] = bVar1;
  } else {
    *arg2 = bVar1;
    iVar4 = 1;
  }
  bVar1 = *(byte *)(arg1 + 0x22d);
  if ((bVar1 - 0x5b < 6) || (0x39 < bVar1 - 0x41)) {
    arg2[iVar4] = 0x5b;
    bVar2 = "0123456789ABCDEFInvalid bit depth"[bVar1 & 0xf];
    arg2[iVar4 + 1] = "0123456789ABCDEFInvalid bit depth"[(int)(uint)(bVar1 >> 4)];
    arg2[iVar4 + 2] = bVar2;
    iVar3 = iVar4 + 4;
    arg2[iVar4 + 3] = 0x5d;
  } else {
    iVar3 = iVar4 + 1;
    arg2[iVar4] = bVar1;
  }
  bVar1 = *(byte *)(arg1 + 0x22e);
  if ((bVar1 - 0x5b < 6) || (0x39 < bVar1 - 0x41)) {
    arg2[iVar3] = 0x5b;
    bVar2 = "0123456789ABCDEFInvalid bit depth"[bVar1 & 0xf];
    arg2[iVar3 + 1] = "0123456789ABCDEFInvalid bit depth"[(int)(uint)(bVar1 >> 4)];
    arg2[iVar3 + 2] = bVar2;
    iVar4 = iVar3 + 4;
    arg2[iVar3 + 3] = 0x5d;
  } else {
    iVar4 = iVar3 + 1;
    arg2[iVar3] = bVar1;
  }
  bVar1 = *(byte *)(arg1 + 0x22f);
  if ((bVar1 - 0x5b < 6) || (0x39 < bVar1 - 0x41)) {
    arg2[iVar4] = 0x5b;
    bVar2 = "0123456789ABCDEFInvalid bit depth"[bVar1 & 0xf];
    arg2[iVar4 + 1] = "0123456789ABCDEFInvalid bit depth"[(int)(uint)(bVar1 >> 4)];
    arg2[iVar4 + 2] = bVar2;
    arg2[iVar4 + 3] = 0x5d;
    iVar4 = iVar4 + 4;
  } else {
    arg2[iVar4] = bVar1;
    iVar4 = iVar4 + 1;
  }
  if (arg3 != (uint64_t *)0x0) {
    arg2[iVar4] = 0x3a;
    arg2[iVar4 + 1] = 0x20;
    pbVar5 = arg2 + (iVar4 + 2);
    *(uint64_t *)pbVar5 = *arg3;
    *(uint64_t *)(pbVar5 + 8) = arg3[1];
    *(uint64_t *)(pbVar5 + 0x10) = arg3[2];
    *(uint64_t *)(pbVar5 + 0x18) = arg3[3];
    *(uint64_t *)(pbVar5 + 0x20) = arg3[4];
    *(uint64_t *)(pbVar5 + 0x28) = arg3[5];
    *(uint64_t *)(pbVar5 + 0x30) = arg3[6];
    *(uint64_t *)(pbVar5 + 0x38) = arg3[7];
    arg2[(long)(iVar4 + 0x42) + -1] = 0;
    return;
  }
  arg2[iVar4] = 0;
  return;
}

/* ======================================================================
 * png_default_warning_isra_0  (Ghidra `png_default_warning.isra.0` @ 005407f0)
 * Signature: uint8_t png_default_warning.isra.0(void)
 * Calls: `fprintf`
 * Called by: `png_chunk_warning`, `png_warning`
 */
void png_default_warning_isra_0(char *arg1, uint64_t arg2, uint64_t arg3, char *arg4)

{
  int iVar1;
  char local_18[14];
  char local_a;

  if (*arg1 == '#') {
    local_18[0] = arg1[1];
    local_18[1] = arg1[2];
    arg4 = arg1 + 2;
    if (local_18[0] != ' ') {
      local_18[2] = arg1[3];
      if (local_18[1] == ' ') {
        iVar1 = 2;
      } else {
        local_18[3] = arg1[4];
        if (local_18[2] == ' ') {
          iVar1 = 3;
          arg4 = arg1 + 3;
        } else {
          local_18[4] = arg1[5];
          if (local_18[3] == ' ') {
            iVar1 = 4;
            arg4 = arg1 + 4;
          } else {
            local_18[5] = arg1[6];
            if (local_18[4] == ' ') {
              iVar1 = 5;
              arg4 = arg1 + 5;
            } else {
              local_18[6] = arg1[7];
              if (local_18[5] == ' ') {
                iVar1 = 6;
                arg4 = arg1 + 6;
              } else {
                local_18[7] = arg1[8];
                if (local_18[6] == ' ') {
                  iVar1 = 7;
                  arg4 = arg1 + 7;
                } else {
                  local_18[8] = arg1[9];
                  if (local_18[7] == ' ') {
                    iVar1 = 8;
                    arg4 = arg1 + 8;
                  } else {
                    local_18[9] = arg1[10];
                    if (local_18[8] == ' ') {
                      iVar1 = 9;
                      arg4 = arg1 + 9;
                    } else {
                      local_18[10] = arg1[0xb];
                      if (local_18[9] == ' ') {
                        iVar1 = 10;
                        arg4 = arg1 + 10;
                      } else {
                        local_18[0xb] = arg1[0xc];
                        if (local_18[10] == ' ') {
                          iVar1 = 0xb;
                          arg4 = arg1 + 0xb;
                        } else {
                          local_18[0xc] = arg1[0xd];
                          if (local_18[0xb] == ' ') {
                            iVar1 = 0xc;
                            arg4 = arg1 + 0xc;
                          } else {
                            local_18[0xd] = arg1[0xe];
                            arg4 = arg1 + 0xe;
                            if (local_18[0xc] == ' ') {
                              iVar1 = 0xd;
                              arg4 = arg1 + 0xd;
                            } else {
                              local_a = arg1[0xf];
                              iVar1 = 0xe;
                              if (local_18[0xd] != ' ')
                                goto LAB_005407f9;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_18[iVar1 + -1] = '\0';
      fprintf(stderr, "libpng warning no. %s: %s\n", local_18, arg4);
      return;
    }
  }
LAB_005407f9:
  fprintf(stderr, "libpng warning: %s\n", arg1, arg4);
  return;
}

/* ======================================================================
 * png_error  (Ghidra `png_error` @ 00540a20)
 * Signature: uint8_t png_error(void)
 * Calls: `fprintf`, `longjmp`
 * Called by: `PngIoRead`, `png_chunk_error`, `png_create_read_struct`, `png_create_read_struct_2`, `png_create_read_struct_2_constprop_2`, `png_create_write_struct`, `png_create_write_struct_2`, `png_create_write_struct_2_constprop_3`, `png_decompress_chunk`, `png_default_read_data` (+62 more)
 */
void png_error(__jmp_buf_tag *arg1, char *arg2)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  uint64_t uVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  char local_38[16];
  char local_28[14];
  char local_1a;

  pcVar6 = arg2;
  if (arg1 != (__jmp_buf_tag *)0x0) {
    uVar1 = arg1[1].__saved_mask.__val[1];
    if ((uVar1 & 0xc0000) != 0) {
      if (*arg2 == '#') {
        lVar5 = 1;
        iVar7 = 1;
        if (arg2[1] != ' ') {
          iVar7 = 2;
          lVar5 = 2;
          if (arg2[2] != ' ') {
            iVar7 = 3;
            lVar5 = 3;
            if (arg2[3] != ' ') {
              iVar7 = 4;
              lVar5 = 4;
              if (arg2[4] != ' ') {
                iVar7 = 5;
                lVar5 = 5;
                if (arg2[5] != ' ') {
                  iVar7 = 6;
                  lVar5 = 6;
                  if (arg2[6] != ' ') {
                    iVar7 = 7;
                    lVar5 = 7;
                    if (arg2[7] != ' ') {
                      iVar7 = 8;
                      lVar5 = 8;
                      if (arg2[8] != ' ') {
                        iVar7 = 9;
                        lVar5 = 9;
                        if (arg2[9] != ' ') {
                          iVar7 = 10;
                          lVar5 = 10;
                          if (arg2[10] != ' ') {
                            iVar7 = 0xb;
                            lVar5 = 0xb;
                            if (arg2[0xb] != ' ') {
                              iVar7 = 0xc;
                              lVar5 = 0xc;
                              if (arg2[0xc] != ' ') {
                                iVar7 = 0xd;
                                lVar5 = 0xd;
                                if (arg2[0xd] != ' ') {
                                  iVar7 = (arg2[0xe] != ' ') + 0xe;
                                  lVar5 = (ulong)(arg2[0xe] != ' ') + 0xe;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        pcVar6 = arg2 + lVar5;
        if ((uVar1 & 0x80000) != 0) {
          iVar7 = iVar7 + -1;
          if (iVar7 != 0) {
            iVar2 = 0;
            do {
              arg2 = arg2 + 1;
              lVar5 = (long)iVar2;
              iVar2 = iVar2 + 1;
              local_38[lVar5] = *arg2;
            } while (iVar2 < iVar7);
          }
          local_38[iVar7] = '\0';
          pcVar6 = local_38;
        }
      } else if ((uVar1 & 0x80000) != 0) {
        local_38[0] = '0';
        local_38[1] = 0;
        pcVar6 = local_38;
      }
    }
    if ((code *)arg1[1].__jmpbuf[0] != (code *)0x0) {
      (*(code *)arg1[1].__jmpbuf[0])(arg1, pcVar6);
    }
  }
  if (*pcVar6 != '#') {
    fprintf(stderr, "libpng error: %s\n", pcVar6);
    goto LAB_00540a6e;
  }
  pcVar3 = pcVar6 + 2;
  local_28[0] = pcVar6[1];
  local_28[1] = pcVar6[2];
  if (pcVar6[1] == ' ') {
    uVar4 = 1;
  LAB_00540bd6:
    fprintf(stderr, "libpng error: %s, offset=%d\n", pcVar6, uVar4);
  } else {
    local_28[2] = pcVar6[3];
    if (pcVar6[2] == ' ') {
      iVar7 = 2;
    } else {
      local_28[3] = pcVar6[4];
      if (pcVar6[3] == ' ') {
        iVar7 = 3;
        pcVar3 = pcVar6 + 3;
      } else {
        local_28[4] = pcVar6[5];
        if (pcVar6[4] == ' ') {
          iVar7 = 4;
          pcVar3 = pcVar6 + 4;
        } else {
          local_28[5] = pcVar6[6];
          if (pcVar6[5] == ' ') {
            iVar7 = 5;
            pcVar3 = pcVar6 + 5;
          } else {
            local_28[6] = pcVar6[7];
            if (pcVar6[6] == ' ') {
              iVar7 = 6;
              pcVar3 = pcVar6 + 6;
            } else {
              local_28[7] = pcVar6[8];
              if (pcVar6[7] == ' ') {
                iVar7 = 7;
                pcVar3 = pcVar6 + 7;
              } else {
                local_28[8] = pcVar6[9];
                if (pcVar6[8] == ' ') {
                  iVar7 = 8;
                  pcVar3 = pcVar6 + 8;
                } else {
                  local_28[9] = pcVar6[10];
                  if (pcVar6[9] == ' ') {
                    iVar7 = 9;
                    pcVar3 = pcVar6 + 9;
                  } else {
                    local_28[10] = pcVar6[0xb];
                    if (pcVar6[10] == ' ') {
                      iVar7 = 10;
                      pcVar3 = pcVar6 + 10;
                    } else {
                      local_28[0xb] = pcVar6[0xc];
                      if (pcVar6[0xb] == ' ') {
                        iVar7 = 0xb;
                        pcVar3 = pcVar6 + 0xb;
                      } else {
                        local_28[0xc] = pcVar6[0xd];
                        if (pcVar6[0xc] == ' ') {
                          iVar7 = 0xc;
                          pcVar3 = pcVar6 + 0xc;
                        } else {
                          local_28[0xd] = pcVar6[0xe];
                          if (pcVar6[0xd] == ' ') {
                            iVar7 = 0xd;
                            pcVar3 = pcVar6 + 0xd;
                          } else {
                            local_1a = pcVar6[0xf];
                            uVar4 = 0xf;
                            iVar7 = 0xe;
                            pcVar3 = pcVar6 + 0xe;
                            if (pcVar6[0xe] != ' ')
                              goto LAB_00540bd6;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_28[iVar7 + -1] = '\0';
    fprintf(stderr, "libpng error no. %s: %s\n", local_28, pcVar3);
  }
LAB_00540a6e:
  if (arg1 == (__jmp_buf_tag *)0x0) {
    return;
  }
  /* WARNING: Subroutine does not return */
  longjmp(arg1, 1);
}

/* ======================================================================
 * png_warning  (Ghidra `png_warning` @ 00540e00)
 * Signature: uint8_t png_warning(void)
 * Calls: `png_default_warning_isra_0`
 * Called by: `png_check_keyword`, `png_create_read_struct`, `png_create_read_struct_2`, `png_create_read_struct_2_constprop_2`, `png_create_write_struct`, `png_create_write_struct_2`, `png_create_write_struct_2_constprop_3`, `png_data_freer`, `png_decompress_chunk`, `png_do_read_transformations` (+77 more)
 */
void png_warning(long arg1, char *arg2)

{
  long lVar1;

  if (arg1 == 0) {
    png_default_warning_isra_0(arg2);
    return;
  }
  lVar1 = 0;
  if ((((((*(uint *)(arg1 + 0x118) & 0xc0000) != 0) && (*arg2 == '#')) &&
        (lVar1 = 1, arg2[1] != ' ')) &&
       (((lVar1 = 2, arg2[2] != ' ' && (lVar1 = 3, arg2[3] != ' ')) &&
         ((lVar1 = 4,
           arg2[4] != ' ' && ((lVar1 = 5, arg2[5] != ' ' && (lVar1 = 6, arg2[6] != ' ')))))))) &&
      ((lVar1 = 7, arg2[7] != ' ' &&
                       (((((lVar1 = 8, arg2[8] != ' ' && (lVar1 = 9, arg2[9] != ' ')) &&
                           (lVar1 = 10, arg2[10] != ' ')) &&
                          ((lVar1 = 0xb, arg2[0xb] != ' ' && (lVar1 = 0xc, arg2[0xc] != ' ')))) &&
                         (lVar1 = 0xd, arg2[0xd] != ' ')))))) {
    lVar1 = (ulong)(arg2[0xe] != ' ') + 0xe;
  }
  if (*(code **)(arg1 + 0xd0) != (code *)0x0) {
    /* WARNING: Could not recover jumptable at 0x00540e2b. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(arg1 + 0xd0))(arg1, arg2 + lVar1);
    return;
  }
  return;
}

/* ======================================================================
 * png_chunk_error  (Ghidra `png_chunk_error` @ 00540ed0)
 * Signature: uint8_t png_chunk_error(void)
 * Calls: `png_error`, `png_format_buffer`
 * Called by: `png_check_chunk_name`, `png_crc_finish`, `png_handle_unknown`, `png_push_handle_unknown`
 */
void png_chunk_error(long arg1, uint64_t arg2)

{
  uint8_t auStack_68[96];

  if (arg1 != 0) {
    png_format_buffer(arg1, auStack_68, arg2);
    png_error(arg1, auStack_68);
    return;
  }
  png_error(0);
  return;
}

/* ======================================================================
 * png_chunk_warning  (Ghidra `png_chunk_warning` @ 00540f10)
 * Signature: uint8_t png_chunk_warning(void)
 * Calls: `png_default_warning_isra_0`, `png_format_buffer`
 * Called by: `png_crc_finish`
 */
void png_chunk_warning(long arg1, uint64_t arg2)

{
  long lVar1;
  char local_68[4];
  char local_64;
  char local_63;
  char local_62;
  char local_61;
  char local_60;
  char local_5f;
  char local_5e;
  char local_5d;
  char local_5c;
  char local_5b;
  char local_5a;

  if (arg1 == 0) {
    png_default_warning_isra_0(arg2);
  } else {
    png_format_buffer(arg1, local_68, arg2);
    lVar1 = 0;
    if ((((((*(uint *)(arg1 + 0x118) & 0xc0000) != 0) && (local_68[0] == '#')) &&
          (lVar1 = 1, local_68[1] != ' ')) &&
         (((lVar1 = 2, local_68[2] != ' ' && (lVar1 = 3, local_68[3] != ' ')) &&
           ((lVar1 = 4, local_64 != ' ' &&
                            ((lVar1 = 5, local_63 != ' ' && (lVar1 = 6, local_62 != ' ')))))))) &&
        ((lVar1 = 7, local_61 != ' ' &&
                         (((((lVar1 = 8, local_60 != ' ' && (lVar1 = 9, local_5f != ' ')) &&
                             (lVar1 = 10, local_5e != ' ')) &&
                            ((lVar1 = 0xb, local_5d != ' ' && (lVar1 = 0xc, local_5c != ' ')))) &&
                           (lVar1 = 0xd, local_5b != ' ')))))) {
      lVar1 = (ulong)(local_5a != ' ') + 0xe;
    }
    if (*(code **)(arg1 + 0xd0) != (code *)0x0) {
      (**(code **)(arg1 + 0xd0))(arg1, local_68 + lVar1);
    }
  }
  return;
}

/* ======================================================================
 * png_set_error_fn  (Ghidra `png_set_error_fn` @ 00541020)
 * Signature: uint8_t png_set_error_fn(void)
 * Calls: (none)
 * Called by: `png_create_read_struct`, `png_create_read_struct_2`, `png_create_read_struct_2_constprop_2`, `png_create_write_struct`, `png_create_write_struct_2`, `png_create_write_struct_2_constprop_3`
 */
void png_set_error_fn(long arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)

{
  if (arg1 != 0) {
    *(uint64_t *)(arg1 + 0xd8) = arg2;
    *(uint64_t *)(arg1 + 200) = arg3;
    *(uint64_t *)(arg1 + 0xd0) = arg4;
  }
  return;
}

/* ======================================================================
 * png_get_error_ptr  (Ghidra `png_get_error_ptr` @ 00541040)
 * Signature: uint8_t png_get_error_ptr(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_error_ptr(long arg1)

{
  if (arg1 != 0) {
    return *(uint64_t *)(arg1 + 0xd8);
  }
  return 0;
}

/* ======================================================================
 * png_set_strip_error_numbers  (Ghidra `png_set_strip_error_numbers` @ 00541060)
 * Signature: uint8_t png_set_strip_error_numbers(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_strip_error_numbers(long arg1, uint arg2)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x118) = arg2 & *(uint *)(arg1 + 0x118) & 0xfff3ffff;
  }
  return;
}

/* ======================================================================
 * png_get_valid  (Ghidra `png_get_valid` @ 00541080)
 * Signature: uint8_t png_get_valid(void)
 * Calls: (none)
 * Called by: `png_read_png`
 */
uint png_get_valid(long arg1, long arg2, uint arg3)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    return *(uint *)(arg2 + 8) & arg3;
  }
  return 0;
}

/* ======================================================================
 * png_get_rowbytes  (Ghidra `png_get_rowbytes` @ 005410a0)
 * Signature: uint8_t png_get_rowbytes(void)
 * Calls: (none)
 * Called by: `gfxCreateTexture`, `png_read_png`
 */
uint32_t png_get_rowbytes(long arg1, long arg2)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    return *(uint32_t *)(arg2 + 0xc);
  }
  return 0;
}

/* ======================================================================
 * png_get_rows  (Ghidra `png_get_rows` @ 005410c0)
 * Signature: uint8_t png_get_rows(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_rows(long arg1, long arg2)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    return *(uint64_t *)(arg2 + 0x138);
  }
  return 0;
}

/* ======================================================================
 * png_get_image_width  (Ghidra `png_get_image_width` @ 005410e0)
 * Signature: uint8_t png_get_image_width(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t png_get_image_width(long arg1, uint32_t *arg2)

{
  if ((arg2 != (uint32_t *)0x0) && (arg1 != 0)) {
    return *arg2;
  }
  return 0;
}

/* ======================================================================
 * png_get_image_height  (Ghidra `png_get_image_height` @ 00541100)
 * Signature: uint8_t png_get_image_height(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t png_get_image_height(long arg1, long arg2)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    return *(uint32_t *)(arg2 + 4);
  }
  return 0;
}

/* ======================================================================
 * png_get_bit_depth  (Ghidra `png_get_bit_depth` @ 00541120)
 * Signature: uint8_t png_get_bit_depth(void)
 * Calls: (none)
 * Called by: (none)
 */
uint8_t png_get_bit_depth(long arg1, long arg2)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    return *(uint8_t *)(arg2 + 0x1c);
  }
  return 0;
}

/* ======================================================================
 * png_get_color_type  (Ghidra `png_get_color_type` @ 00541140)
 * Signature: uint8_t png_get_color_type(void)
 * Calls: (none)
 * Called by: (none)
 */
uint8_t png_get_color_type(long arg1, long arg2)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    return *(uint8_t *)(arg2 + 0x1d);
  }
  return 0;
}

/* ======================================================================
 * png_get_filter_type  (Ghidra `png_get_filter_type` @ 00541160)
 * Signature: uint8_t png_get_filter_type(void)
 * Calls: (none)
 * Called by: (none)
 */
uint8_t png_get_filter_type(long arg1, long arg2)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    return *(uint8_t *)(arg2 + 0x1f);
  }
  return 0;
}

/* ======================================================================
 * png_get_interlace_type  (Ghidra `png_get_interlace_type` @ 00541180)
 * Signature: uint8_t png_get_interlace_type(void)
 * Calls: (none)
 * Called by: (none)
 */
uint8_t png_get_interlace_type(long arg1, long arg2)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    return *(uint8_t *)(arg2 + 0x20);
  }
  return 0;
}

/* ======================================================================
 * png_get_compression_type  (Ghidra `png_get_compression_type` @ 005411a0)
 * Signature: uint8_t png_get_compression_type(void)
 * Calls: (none)
 * Called by: (none)
 */
uint8_t png_get_compression_type(long arg1, long arg2)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    return *(uint8_t *)(arg2 + 0x1e);
  }
  return 0;
}

/* ======================================================================
 * png_get_x_pixels_per_meter  (Ghidra `png_get_x_pixels_per_meter` @ 005411c0)
 * Signature: uint8_t png_get_x_pixels_per_meter(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t png_get_x_pixels_per_meter(long arg1, long arg2)

{
  if ((((arg2 != 0) && (arg1 != 0)) && ((*(byte *)(arg2 + 8) & 0x80) != 0)) &&
      (*(char *)(arg2 + 0x88) == '\x01')) {
    return *(uint32_t *)(arg2 + 0x80);
  }
  return 0;
}

/* ======================================================================
 * png_get_y_pixels_per_meter  (Ghidra `png_get_y_pixels_per_meter` @ 005411f0)
 * Signature: uint8_t png_get_y_pixels_per_meter(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t png_get_y_pixels_per_meter(long arg1, long arg2)

{
  if ((((arg2 != 0) && (arg1 != 0)) && ((*(byte *)(arg2 + 8) & 0x80) != 0)) &&
      (*(char *)(arg2 + 0x88) == '\x01')) {
    return *(uint32_t *)(arg2 + 0x84);
  }
  return 0;
}

/* ======================================================================
 * png_get_pixels_per_meter  (Ghidra `png_get_pixels_per_meter` @ 00541220)
 * Signature: uint8_t png_get_pixels_per_meter(void)
 * Calls: (none)
 * Called by: (none)
 */
int png_get_pixels_per_meter(long arg1, long arg2)

{
  int iVar1;

  if ((((arg2 != 0) && (arg1 != 0)) && ((*(byte *)(arg2 + 8) & 0x80) != 0)) &&
      (*(char *)(arg2 + 0x88) == '\x01')) {
    iVar1 = *(int *)(arg2 + 0x80);
    if (iVar1 != *(int *)(arg2 + 0x84)) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}

/* ======================================================================
 * png_get_pixel_aspect_ratio  (Ghidra `png_get_pixel_aspect_ratio` @ 00541260)
 * Signature: uint8_t png_get_pixel_aspect_ratio(void)
 * Calls: (none)
 * Called by: (none)
 */
float png_get_pixel_aspect_ratio(long arg1, long arg2)

{
  if ((((arg2 != 0) && (arg1 != 0)) && ((*(byte *)(arg2 + 8) & 0x80) != 0)) &&
      (*(uint *)(arg2 + 0x80) != 0)) {
    return (float)*(uint *)(arg2 + 0x84) / (float)*(uint *)(arg2 + 0x80);
  }
  return 0.0;
}

/* ======================================================================
 * png_get_x_offset_microns  (Ghidra `png_get_x_offset_microns` @ 005412a0)
 * Signature: uint8_t png_get_x_offset_microns(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t png_get_x_offset_microns(long arg1, long arg2)

{
  if ((((arg2 != 0) && (arg1 != 0)) && ((*(byte *)(arg2 + 9) & 1) != 0)) &&
      (*(char *)(arg2 + 0x7c) == '\x01')) {
    return *(uint32_t *)(arg2 + 0x74);
  }
  return 0;
}

/* ======================================================================
 * png_get_y_offset_microns  (Ghidra `png_get_y_offset_microns` @ 005412d0)
 * Signature: uint8_t png_get_y_offset_microns(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t png_get_y_offset_microns(long arg1, long arg2)

{
  if ((((arg2 != 0) && (arg1 != 0)) && ((*(byte *)(arg2 + 9) & 1) != 0)) &&
      (*(char *)(arg2 + 0x7c) == '\x01')) {
    return *(uint32_t *)(arg2 + 0x78);
  }
  return 0;
}

/* ======================================================================
 * png_get_x_offset_pixels  (Ghidra `png_get_x_offset_pixels` @ 00541300)
 * Signature: uint8_t png_get_x_offset_pixels(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t png_get_x_offset_pixels(long arg1, long arg2)

{
  if ((((arg2 != 0) && (arg1 != 0)) && ((*(byte *)(arg2 + 9) & 1) != 0)) &&
      (*(char *)(arg2 + 0x7c) == '\0')) {
    return *(uint32_t *)(arg2 + 0x74);
  }
  return 0;
}

/* ======================================================================
 * png_get_y_offset_pixels  (Ghidra `png_get_y_offset_pixels` @ 00541330)
 * Signature: uint8_t png_get_y_offset_pixels(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t png_get_y_offset_pixels(long arg1, long arg2)

{
  if ((((arg2 != 0) && (arg1 != 0)) && ((*(byte *)(arg2 + 9) & 1) != 0)) &&
      (*(char *)(arg2 + 0x7c) == '\0')) {
    return *(uint32_t *)(arg2 + 0x78);
  }
  return 0;
}

/* ======================================================================
 * png_get_channels  (Ghidra `png_get_channels` @ 00541360)
 * Signature: uint8_t png_get_channels(void)
 * Calls: (none)
 * Called by: (none)
 */
uint8_t png_get_channels(long arg1, long arg2)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    return *(uint8_t *)(arg2 + 0x21);
  }
  return 0;
}

/* ======================================================================
 * png_get_signature  (Ghidra `png_get_signature` @ 00541380)
 * Signature: uint8_t png_get_signature(void)
 * Calls: (none)
 * Called by: (none)
 */
long png_get_signature(long arg1, long arg2)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    return arg2 + 0x24;
  }
  return 0;
}

/* ======================================================================
 * png_get_bKGD  (Ghidra `png_get_bKGD` @ 005413a0)
 * Signature: uint8_t png_get_bKGD(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_bKGD(long arg1, long arg2, long *arg3)

{
  if ((arg2 == 0) || (arg1 == 0)) {
    return 0;
  }
  if ((arg3 != (long *)0x0) && ((*(byte *)(arg2 + 8) & 0x20) != 0)) {
    *arg3 = arg2 + 0x6a;
    return 0x20;
  }
  return 0;
}

/* ======================================================================
 * png_get_cHRM  (Ghidra `png_get_cHRM` @ 005413e0)
 * Signature: uint8_t png_get_cHRM(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_cHRM(long arg1, long arg2, double *arg3, double *arg4, double *arg5, double *arg6,
                      double *arg7, double *arg8, double *arg9, double *arg10)

{
  uint64_t uVar1;

  uVar1 = 0;
  if (((arg2 != 0) && (arg1 != 0)) && ((*(byte *)(arg2 + 8) & 4) != 0)) {
    if (arg3 != (double *)0x0) {
      *arg3 = (double)*(float *)(arg2 + 0x98);
    }
    if (arg4 != (double *)0x0) {
      *arg4 = (double)*(float *)(arg2 + 0x9c);
    }
    if (arg5 != (double *)0x0) {
      *arg5 = (double)*(float *)(arg2 + 0xa0);
    }
    if (arg6 != (double *)0x0) {
      *arg6 = (double)*(float *)(arg2 + 0xa4);
    }
    if (arg7 != (double *)0x0) {
      *arg7 = (double)*(float *)(arg2 + 0xa8);
    }
    if (arg8 != (double *)0x0) {
      *arg8 = (double)*(float *)(arg2 + 0xac);
    }
    if (arg9 != (double *)0x0) {
      *arg9 = (double)*(float *)(arg2 + 0xb0);
    }
    uVar1 = 4;
    if (arg10 != (double *)0x0) {
      *arg10 = (double)*(float *)(arg2 + 0xb4);
    }
  }
  return uVar1;
}

/* ======================================================================
 * png_get_cHRM_fixed  (Ghidra `png_get_cHRM_fixed` @ 005414d0)
 * Signature: uint8_t png_get_cHRM_fixed(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_cHRM_fixed(long arg1, long arg2, uint32_t *arg3, uint32_t *arg4, uint32_t *arg5,
                            uint32_t *arg6, uint32_t *arg7, uint32_t *arg8, uint32_t *arg9,
                            uint32_t *arg10)

{
  uint64_t uVar1;

  uVar1 = 0;
  if (((arg2 != 0) && (arg1 != 0)) && ((*(byte *)(arg2 + 8) & 4) != 0)) {
    if (arg3 != (uint32_t *)0x0) {
      *arg3 = *(uint32_t *)(arg2 + 0x144);
    }
    if (arg4 != (uint32_t *)0x0) {
      *arg4 = *(uint32_t *)(arg2 + 0x148);
    }
    if (arg5 != (uint32_t *)0x0) {
      *arg5 = *(uint32_t *)(arg2 + 0x14c);
    }
    if (arg6 != (uint32_t *)0x0) {
      *arg6 = *(uint32_t *)(arg2 + 0x150);
    }
    if (arg7 != (uint32_t *)0x0) {
      *arg7 = *(uint32_t *)(arg2 + 0x154);
    }
    if (arg8 != (uint32_t *)0x0) {
      *arg8 = *(uint32_t *)(arg2 + 0x158);
    }
    if (arg9 != (uint32_t *)0x0) {
      *arg9 = *(uint32_t *)(arg2 + 0x15c);
    }
    uVar1 = 4;
    if (arg10 != (uint32_t *)0x0) {
      *arg10 = *(uint32_t *)(arg2 + 0x160);
    }
  }
  return uVar1;
}

/* ======================================================================
 * png_get_gAMA  (Ghidra `png_get_gAMA` @ 00541570)
 * Signature: uint8_t png_get_gAMA(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_gAMA(long arg1, long arg2, double *arg3)

{
  if ((arg2 == 0) || (arg1 == 0)) {
    return 0;
  }
  if ((arg3 != (double *)0x0) && ((*(byte *)(arg2 + 8) & 1) != 0)) {
    *arg3 = (double)*(float *)(arg2 + 0x2c);
    return 1;
  }
  return 0;
}

/* ======================================================================
 * png_get_gAMA_fixed  (Ghidra `png_get_gAMA_fixed` @ 005415b0)
 * Signature: uint8_t png_get_gAMA_fixed(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_gAMA_fixed(long arg1, long arg2, uint32_t *arg3)

{
  if ((arg2 == 0) || (arg1 == 0)) {
    return 0;
  }
  if ((arg3 != (uint32_t *)0x0) && ((*(byte *)(arg2 + 8) & 1) != 0)) {
    *arg3 = *(uint32_t *)(arg2 + 0x140);
    return 1;
  }
  return 0;
}

/* ======================================================================
 * png_get_sRGB  (Ghidra `png_get_sRGB` @ 005415f0)
 * Signature: uint8_t png_get_sRGB(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_sRGB(long arg1, long arg2, uint *arg3)

{
  if ((arg2 == 0) || (arg1 == 0)) {
    return 0;
  }
  if ((arg3 != (uint *)0x0) && ((*(byte *)(arg2 + 9) & 8) != 0)) {
    *arg3 = (uint) * (byte *)(arg2 + 0x30);
    return 0x800;
  }
  return 0;
}

/* ======================================================================
 * png_get_iCCP  (Ghidra `png_get_iCCP` @ 00541630)
 * Signature: uint8_t png_get_iCCP(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_iCCP(long arg1, long arg2, uint64_t *arg3, uint *arg4, uint64_t *arg5,
                      uint32_t *arg6)

{
  if ((((arg2 != 0) && (arg1 != 0)) && (arg3 != (uint64_t *)0x0)) &&
      ((*(byte *)(arg2 + 9) & 0x10) != 0)) {
    if ((arg6 != (uint32_t *)0x0) && (arg5 != (uint64_t *)0x0)) {
      *arg3 = *(uint64_t *)(arg2 + 0xf0);
      *arg5 = *(uint64_t *)(arg2 + 0xf8);
      *arg6 = *(uint32_t *)(arg2 + 0x100);
      *arg4 = (uint) * (byte *)(arg2 + 0x104);
      return 0x1000;
    }
    return 0;
  }
  return 0;
}

/* ======================================================================
 * png_get_sPLT  (Ghidra `png_get_sPLT` @ 00541690)
 * Signature: uint8_t png_get_sPLT(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t png_get_sPLT(long arg1, long arg2, uint64_t *arg3)

{
  if (((arg2 != 0) && (arg1 != 0)) && (arg3 != (uint64_t *)0x0)) {
    *arg3 = *(uint64_t *)(arg2 + 0x108);
    return *(uint32_t *)(arg2 + 0x110);
  }
  return 0;
}

/* ======================================================================
 * png_get_hIST  (Ghidra `png_get_hIST` @ 005416c0)
 * Signature: uint8_t png_get_hIST(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_hIST(long arg1, long arg2, uint64_t *arg3)

{
  if ((arg2 == 0) || (arg1 == 0)) {
    return 0;
  }
  if ((arg3 != (uint64_t *)0x0) && ((*(byte *)(arg2 + 8) & 0x40) != 0)) {
    *arg3 = *(uint64_t *)(arg2 + 0x90);
    return 0x40;
  }
  return 0;
}

/* ======================================================================
 * png_get_IHDR  (Ghidra `png_get_IHDR` @ 00541700)
 * Signature: uint8_t png_get_IHDR(void)
 * Calls: `png_error`, `png_warning`
 * Called by: `gfxCreateTexture`
 */
uint64_t png_get_IHDR(long arg1, uint *arg2, uint *arg3, uint *arg4, uint *arg5, uint *arg6,
                      uint *arg7, uint *arg8, uint *arg9)

{
  uint64_t uVar1;

  if ((((arg2 == (uint *)0x0) || (arg1 == 0)) || (arg4 == (uint *)0x0)) ||
      (((arg3 == (uint *)0x0 || (arg6 == (uint *)0x0)) || (arg5 == (uint *)0x0)))) {
    uVar1 = 0;
  } else {
    *arg3 = *arg2;
    *arg4 = arg2[1];
    *arg5 = (uint)(byte)arg2[7];
    if (0xf < (byte)((char)arg2[7] - 1U)) {
      png_error(arg1, "Invalid bit depth");
    }
    *arg6 = (uint) * (byte *)((long)arg2 + 0x1d);
    if (6 < *(byte *)((long)arg2 + 0x1d)) {
      png_error(arg1, "Invalid color type");
    }
    if (arg8 != (uint *)0x0) {
      *arg8 = (uint) * (byte *)((long)arg2 + 0x1e);
    }
    if (arg9 != (uint *)0x0) {
      *arg9 = (uint) * (byte *)((long)arg2 + 0x1f);
    }
    if (arg7 != (uint *)0x0) {
      *arg7 = (uint)(byte)arg2[8];
    }
    if ((int)*arg3 < 1) {
      png_error(arg1, "Invalid image width");
    }
    if ((int)*arg4 < 1) {
      png_error(arg1, "Invalid image height");
    }
    uVar1 = 1;
    if (0x1fffff7e < *arg2) {
      png_warning(arg1, "Width too large for libpng to process image data.");
      uVar1 = 1;
    }
  }
  return uVar1;
}

/* ======================================================================
 * png_get_oFFs  (Ghidra `png_get_oFFs` @ 005418c0)
 * Signature: uint8_t png_get_oFFs(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_oFFs(long arg1, long arg2, uint32_t *arg3, uint32_t *arg4, uint *arg5)

{
  if ((((arg2 != 0) && (arg1 != 0)) && (arg3 != (uint32_t *)0x0)) &&
      ((*(byte *)(arg2 + 9) & 1) != 0)) {
    if ((arg5 != (uint *)0x0) && (arg4 != (uint32_t *)0x0)) {
      *arg3 = *(uint32_t *)(arg2 + 0x74);
      *arg4 = *(uint32_t *)(arg2 + 0x78);
      *arg5 = (uint) * (byte *)(arg2 + 0x7c);
      return 0x100;
    }
    return 0;
  }
  return 0;
}

/* ======================================================================
 * png_get_pCAL  (Ghidra `png_get_pCAL` @ 00541910)
 * Signature: uint8_t png_get_pCAL(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_pCAL(long arg1, long arg2, uint64_t *arg3, uint32_t *arg4, uint32_t *arg5,
                      uint *arg6, uint *arg7, uint64_t *arg8, uint64_t *arg9)

{
  if (((((arg2 != 0) && (arg1 != 0)) && (arg3 != (uint64_t *)0x0)) &&
       (((*(byte *)(arg2 + 9) & 4) != 0 && (arg5 != (uint32_t *)0x0)))) &&
      ((arg4 != (uint32_t *)0x0 && ((arg7 != (uint *)0x0 && (arg6 != (uint *)0x0)))))) {
    if ((arg9 != (uint64_t *)0x0) && (arg8 != (uint64_t *)0x0)) {
      *arg3 = *(uint64_t *)(arg2 + 0xb8);
      *arg4 = *(uint32_t *)(arg2 + 0xc0);
      *arg5 = *(uint32_t *)(arg2 + 0xc4);
      *arg6 = (uint) * (byte *)(arg2 + 0xd8);
      *arg7 = (uint) * (byte *)(arg2 + 0xd9);
      *arg8 = *(uint64_t *)(arg2 + 200);
      *arg9 = *(uint64_t *)(arg2 + 0xd0);
      return 0x400;
    }
    return 0;
  }
  return 0;
}

/* ======================================================================
 * png_get_sCAL  (Ghidra `png_get_sCAL` @ 005419b0)
 * Signature: uint8_t png_get_sCAL(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_sCAL(long arg1, long arg2, uint *arg3, uint64_t *arg4, uint64_t *arg5)

{
  if (((arg2 != 0) && (arg1 != 0)) && ((*(byte *)(arg2 + 9) & 0x40) != 0)) {
    *arg3 = (uint) * (byte *)(arg2 + 0x114);
    *arg4 = *(uint64_t *)(arg2 + 0x118);
    *arg5 = *(uint64_t *)(arg2 + 0x120);
    return 0x4000;
  }
  return 0;
}

/* ======================================================================
 * png_get_pHYs  (Ghidra `png_get_pHYs` @ 005419f0)
 * Signature: uint8_t png_get_pHYs(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_pHYs(long arg1, long arg2, uint32_t *arg3, uint32_t *arg4, uint *arg5)

{
  uint64_t uVar1;

  uVar1 = 0;
  if (((arg2 != 0) && (arg1 != 0)) && ((*(byte *)(arg2 + 8) & 0x80) != 0)) {
    if (arg3 != (uint32_t *)0x0) {
      *arg3 = *(uint32_t *)(arg2 + 0x80);
      uVar1 = 0x80;
    }
    if (arg4 != (uint32_t *)0x0) {
      *arg4 = *(uint32_t *)(arg2 + 0x84);
      uVar1 = 0x80;
    }
    if (arg5 != (uint *)0x0) {
      *arg5 = (uint) * (byte *)(arg2 + 0x88);
      return 0x80;
    }
  }
  return uVar1;
}

/* ======================================================================
 * png_get_PLTE  (Ghidra `png_get_PLTE` @ 00541a50)
 * Signature: uint8_t png_get_PLTE(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_PLTE(long arg1, long arg2, uint64_t *arg3, uint *arg4)

{
  if ((arg2 == 0) || (arg1 == 0)) {
    return 0;
  }
  if ((arg3 != (uint64_t *)0x0) && ((*(byte *)(arg2 + 8) & 8) != 0)) {
    *arg3 = *(uint64_t *)(arg2 + 0x10);
    *arg4 = (uint) * (ushort *)(arg2 + 0x18);
    return 8;
  }
  return 0;
}

/* ======================================================================
 * png_get_sBIT  (Ghidra `png_get_sBIT` @ 00541a90)
 * Signature: uint8_t png_get_sBIT(void)
 * Calls: (none)
 * Called by: `png_read_png`
 */
uint64_t png_get_sBIT(long arg1, long arg2, long *arg3)

{
  if ((arg2 == 0) || (arg1 == 0)) {
    return 0;
  }
  if ((arg3 != (long *)0x0) && ((*(byte *)(arg2 + 8) & 2) != 0)) {
    *arg3 = arg2 + 0x50;
    return 2;
  }
  return 0;
}

/* ======================================================================
 * png_get_text  (Ghidra `png_get_text` @ 00541ad0)
 * Signature: uint8_t png_get_text(void)
 * Calls: (none)
 * Called by: (none)
 */
int png_get_text(long arg1, long arg2, uint64_t *arg3, int *arg4)

{
  int iVar1;

  if (((arg2 == 0) || (arg1 == 0)) || (iVar1 = *(int *)(arg2 + 0x34), iVar1 < 1)) {
    iVar1 = 0;
    if (arg4 != (int *)0x0) {
      *arg4 = 0;
    }
  } else {
    if (arg3 != (uint64_t *)0x0) {
      *arg3 = *(uint64_t *)(arg2 + 0x40);
      iVar1 = *(int *)(arg2 + 0x34);
    }
    if (arg4 != (int *)0x0) {
      *arg4 = iVar1;
      return *(int *)(arg2 + 0x34);
    }
  }
  return iVar1;
}

/* ======================================================================
 * png_get_tIME  (Ghidra `png_get_tIME` @ 00541b20)
 * Signature: uint8_t png_get_tIME(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_tIME(long arg1, long arg2, long *arg3)

{
  if ((arg2 == 0) || (arg1 == 0)) {
    return 0;
  }
  if ((arg3 != (long *)0x0) && ((*(byte *)(arg2 + 9) & 2) != 0)) {
    *arg3 = arg2 + 0x48;
    return 0x200;
  }
  return 0;
}

/* ======================================================================
 * png_get_tRNS  (Ghidra `png_get_tRNS` @ 00541b60)
 * Signature: uint8_t png_get_tRNS(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_tRNS(long arg1, long arg2, uint64_t *arg3, uint *arg4, long *arg5)

{
  uint64_t uVar1;

  uVar1 = 0;
  if (((arg2 != 0) && (arg1 != 0)) && ((*(byte *)(arg2 + 8) & 0x10) != 0)) {
    if (*(char *)(arg2 + 0x1d) == '\x03') {
      if (arg3 != (uint64_t *)0x0) {
        *arg3 = *(uint64_t *)(arg2 + 0x58);
        uVar1 = 0x10;
      }
      if (arg5 != (long *)0x0) {
        *arg5 = arg2 + 0x60;
      }
    } else {
      if (arg5 != (long *)0x0) {
        *arg5 = arg2 + 0x60;
        uVar1 = 0x10;
      }
      if (arg3 != (uint64_t *)0x0) {
        *arg3 = 0;
      }
    }
    if (arg4 != (uint *)0x0) {
      *arg4 = (uint) * (ushort *)(arg2 + 0x1a);
      return 0x10;
    }
  }
  return uVar1;
}

/* ======================================================================
 * png_get_unknown_chunks  (Ghidra `png_get_unknown_chunks` @ 00541be0)
 * Signature: uint8_t png_get_unknown_chunks(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t png_get_unknown_chunks(long arg1, long arg2, uint64_t *arg3)

{
  if (((arg2 != 0) && (arg1 != 0)) && (arg3 != (uint64_t *)0x0)) {
    *arg3 = *(uint64_t *)(arg2 + 0xe0);
    return *(uint32_t *)(arg2 + 0xe8);
  }
  return 0;
}

/* ======================================================================
 * png_get_rgb_to_gray_status  (Ghidra `png_get_rgb_to_gray_status` @ 00541c10)
 * Signature: uint8_t png_get_rgb_to_gray_status(void)
 * Calls: (none)
 * Called by: (none)
 */
uint8_t png_get_rgb_to_gray_status(long arg1)

{
  uint8_t uVar1;

  uVar1 = 0;
  if (arg1 != 0) {
    uVar1 = *(uint8_t *)(arg1 + 1000);
  }
  return uVar1;
}

/* ======================================================================
 * png_get_user_chunk_ptr  (Ghidra `png_get_user_chunk_ptr` @ 00541c20)
 * Signature: uint8_t png_get_user_chunk_ptr(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_user_chunk_ptr(long arg1)

{
  if (arg1 != 0) {
    return *(uint64_t *)(arg1 + 0x3c8);
  }
  return 0;
}

/* ======================================================================
 * png_get_compression_buffer_size  (Ghidra `png_get_compression_buffer_size` @ 00541c40)
 * Signature: uint8_t png_get_compression_buffer_size(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t png_get_compression_buffer_size(long arg1)

{
  uint32_t uVar1;

  uVar1 = 0;
  if (arg1 != 0) {
    uVar1 = *(uint32_t *)(arg1 + 0x198);
  }
  return uVar1;
}

/* ======================================================================
 * png_get_asm_flags  (Ghidra `png_get_asm_flags` @ 00541c50)
 * Signature: uint8_t png_get_asm_flags(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_asm_flags(void)

{
  return 0;
}

/* ======================================================================
 * png_get_asm_flagmask  (Ghidra `png_get_asm_flagmask` @ 00541c60)
 * Signature: uint8_t png_get_asm_flagmask(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_asm_flagmask(void)

{
  return 0;
}

/* ======================================================================
 * png_get_mmx_flagmask  (Ghidra `png_get_mmx_flagmask` @ 00541c70)
 * Signature: uint8_t png_get_mmx_flagmask(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_mmx_flagmask(uint64_t arg1, uint32_t *arg2)

{
  *arg2 = 0xffffffff;
  return 0;
}

/* ======================================================================
 * png_get_mmx_bitdepth_threshold  (Ghidra `png_get_mmx_bitdepth_threshold` @ 00541c80)
 * Signature: uint8_t png_get_mmx_bitdepth_threshold(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_mmx_bitdepth_threshold(void)

{
  return 0;
}

/* ======================================================================
 * png_get_mmx_rowbytes_threshold  (Ghidra `png_get_mmx_rowbytes_threshold` @ 00541c90)
 * Signature: uint8_t png_get_mmx_rowbytes_threshold(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_mmx_rowbytes_threshold(void)

{
  return 0;
}

/* ======================================================================
 * png_get_user_width_max  (Ghidra `png_get_user_width_max` @ 00541ca0)
 * Signature: uint8_t png_get_user_width_max(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t png_get_user_width_max(long arg1)

{
  uint32_t uVar1;

  uVar1 = 0;
  if (arg1 != 0) {
    uVar1 = *(uint32_t *)(arg1 + 0x444);
  }
  return uVar1;
}

/* ======================================================================
 * png_get_user_height_max  (Ghidra `png_get_user_height_max` @ 00541cb0)
 * Signature: uint8_t png_get_user_height_max(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t png_get_user_height_max(long arg1)

{
  uint32_t uVar1;

  uVar1 = 0;
  if (arg1 != 0) {
    uVar1 = *(uint32_t *)(arg1 + 0x448);
  }
  return uVar1;
}

/* ======================================================================
 * png_destroy_struct_2_constprop_0  (Ghidra `png_destroy_struct_2.constprop.0` @ 00541cc0)
 * Signature: uint8_t png_destroy_struct_2.constprop.0(void)
 * Calls: `free`
 * Called by: (none)
 */
void png_destroy_struct_2_constprop_0(void *arg1)

{
  if (arg1 != (void *)0x0) {
    free(arg1);
    return;
  }
  return;
}

/* ======================================================================
 * png_create_struct_2_constprop_1  (Ghidra `png_create_struct_2.constprop.1` @ 00541ce0)
 * Signature: uint8_t png_create_struct_2.constprop.1(void)
 * Calls: `malloc`, `memset`
 * Called by: (none)
 */
void *png_create_struct_2_constprop_1(int arg1)

{
  void *__s;
  size_t __size;

  if (arg1 == 2) {
    __size = 0x168;
  } else {
    __size = 0x470;
    if (arg1 != 1) {
      return (void *)0x0;
    }
  }
  __s = malloc(__size);
  if (__s != (void *)0x0) {
    memset(__s, 0, __size);
  }
  return __s;
}

/* ======================================================================
 * png_create_struct  (Ghidra `png_create_struct` @ 00541d40)
 * Signature: uint8_t png_create_struct(void)
 * Calls: `malloc`, `memset`
 * Called by: `png_info_init`, `png_info_init_3`, `png_read_init`, `png_read_init_2_constprop_0`, `png_read_init_3`, `png_write_init`, `png_write_init_2_constprop_0`, `png_write_init_3`
 */
void *png_create_struct(int arg1)

{
  void *__s;
  size_t __size;

  if (arg1 == 2) {
    __size = 0x168;
  } else {
    __size = 0x470;
    if (arg1 != 1) {
      return (void *)0x0;
    }
  }
  __s = malloc(__size);
  if (__s != (void *)0x0) {
    memset(__s, 0, __size);
  }
  return __s;
}

/* ======================================================================
 * png_create_struct_2  (Ghidra `png_create_struct_2` @ 00541d50)
 * Signature: uint8_t png_create_struct_2(void)
 * Calls: `malloc`, `memset`
 * Called by: `png_create_info_struct`, `png_create_read_struct`, `png_create_read_struct_2`, `png_create_read_struct_2_constprop_2`, `png_create_write_struct`, `png_create_write_struct_2`, `png_create_write_struct_2_constprop_3`
 */
void *png_create_struct_2(int arg1, code *arg2, uint64_t arg3)

{
  void *__s;
  size_t __size;
  uint8_t auStack_488[1032];
  uint64_t local_80;

  if (arg1 == 2) {
    __size = 0x168;
  } else {
    __size = 0x470;
    if (arg1 != 1) {
      return (void *)0x0;
    }
  }
  if (arg2 == (code *)0x0) {
    __s = malloc(__size);
  } else {
    local_80 = arg3;
    __s = (void *)(*arg2)(auStack_488);
  }
  if (__s != (void *)0x0) {
    memset(__s, 0, __size);
  }
  return __s;
}

/* ======================================================================
 * png_destroy_struct  (Ghidra `png_destroy_struct` @ 00541dd0)
 * Signature: uint8_t png_destroy_struct(void)
 * Calls: `free`
 * Called by: `png_create_write_struct`, `png_create_write_struct_2`, `png_create_write_struct_2_constprop_3`, `png_info_init`, `png_info_init_3`, `png_read_init`, `png_read_init_2_constprop_0`, `png_read_init_3`, `png_write_init`, `png_write_init_2_constprop_0` (+1 more)
 */
void png_destroy_struct(void *arg1)

{
  if (arg1 != (void *)0x0) {
    free(arg1);
    return;
  }
  return;
}

/* ======================================================================
 * png_destroy_struct_2  (Ghidra `png_destroy_struct_2` @ 00541de0)
 * Signature: uint8_t png_destroy_struct_2(void)
 * Calls: `free`
 * Called by: `png_create_read_struct`, `png_create_read_struct_2`, `png_create_read_struct_2_constprop_2`, `png_destroy_info_struct`, `png_destroy_read_struct`, `png_destroy_write_struct`
 */
void png_destroy_struct_2(void *arg1, code *arg2, uint64_t arg3)

{
  uint8_t auStack_478[1032];
  uint64_t local_70;

  if (arg1 != (void *)0x0) {
    if (arg2 == (code *)0x0) {
      free(arg1);
      return;
    }
    local_70 = arg3;
    (*arg2)(auStack_478, arg1);
  }
  return;
}

/* ======================================================================
 * png_malloc  (Ghidra `png_malloc` @ 00541e20)
 * Signature: uint8_t png_malloc(void)
 * Calls: `malloc`, `png_error`
 * Called by: `png_build_gamma_table`, `png_convert_to_rfc1123`, `png_create_read_struct`, `png_create_read_struct_2`, `png_create_read_struct_2_constprop_2`, `png_create_write_struct`, `png_create_write_struct_2`, `png_create_write_struct_2_constprop_3`, `png_handle_iCCP`, `png_handle_sPLT` (+27 more)
 */
void *png_malloc(long arg1, uint arg2)

{
  void *pvVar1;

  if ((arg2 != 0) && (arg1 != 0)) {
    if (*(code **)(arg1 + 0x410) == (code *)0x0) {
      pvVar1 = malloc((ulong)arg2);
    } else {
      pvVar1 = (void *)(**(code **)(arg1 + 0x410))(arg1, arg2);
    }
    if ((pvVar1 == (void *)0x0) && ((*(byte *)(arg1 + 0x11a) & 0x10) == 0)) {
      png_error(arg1, "Out of Memory!");
    }
    return pvVar1;
  }
  return (void *)0x0;
}

/* ======================================================================
 * png_malloc_default  (Ghidra `png_malloc_default` @ 00541e90)
 * Signature: uint8_t png_malloc_default(void)
 * Calls: `malloc`
 * Called by: (none)
 */
void *png_malloc_default(long arg1, uint arg2)

{
  void *pvVar1;

  if ((arg2 != 0) && (arg1 != 0)) {
    pvVar1 = malloc((ulong)arg2);
    return pvVar1;
  }
  return (void *)0x0;
}

/* ======================================================================
 * png_free  (Ghidra `png_free` @ 00541eb0)
 * Signature: uint8_t png_free(void)
 * Calls: `free`
 * Called by: `png_check_keyword`, `png_create_read_struct`, `png_create_read_struct_2`, `png_create_read_struct_2_constprop_2`, `png_create_write_struct`, `png_create_write_struct_2`, `png_create_write_struct_2_constprop_3`, `png_decompress_chunk`, `png_destroy_info_struct`, `png_destroy_write_struct` (+29 more)
 */
void png_free(long arg1, void *arg2)

{
  if ((arg2 != (void *)0x0) && (arg1 != 0)) {
    if (*(code **)(arg1 + 0x418) != (code *)0x0) {
      /* WARNING: Could not recover jumptable at 0x00541ec6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      (**(code **)(arg1 + 0x418))();
      return;
    }
    free(arg2);
    return;
  }
  return;
}

/* ======================================================================
 * png_free_default  (Ghidra `png_free_default` @ 00541ef0)
 * Signature: uint8_t png_free_default(void)
 * Calls: `free`
 * Called by: (none)
 */
void png_free_default(long arg1, void *arg2)

{
  if ((arg2 != (void *)0x0) && (arg1 != 0)) {
    free(arg2);
    return;
  }
  return;
}

/* ======================================================================
 * png_malloc_warn  (Ghidra `png_malloc_warn` @ 00541f10)
 * Signature: uint8_t png_malloc_warn(void)
 * Calls: `malloc`, `png_error`
 * Called by: `png_check_keyword`, `png_decompress_chunk`, `png_handle_pCAL`, `png_handle_sCAL`, `png_handle_sPLT`, `png_handle_tEXt`, `png_handle_zTXt`, `png_set_dither`, `png_set_hIST`, `png_set_iCCP` (+4 more)
 */
void *png_malloc_warn(long arg1, uint arg2)

{
  uint uVar1;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (arg1 != 0) {
    uVar1 = *(uint *)(arg1 + 0x118);
    *(uint *)(arg1 + 0x118) = uVar1 | 0x100000;
    if (arg2 != 0) {
      if (*(code **)(arg1 + 0x410) == (code *)0x0) {
        pvVar2 = malloc((ulong)arg2);
      } else {
        pvVar2 = (void *)(**(code **)(arg1 + 0x410))(arg1, arg2);
      }
      if ((pvVar2 == (void *)0x0) && ((*(byte *)(arg1 + 0x11a) & 0x10) == 0)) {
        png_error(arg1, "Out of Memory!");
      }
    }
    *(uint *)(arg1 + 0x118) = uVar1;
  }
  return pvVar2;
}

/* ======================================================================
 * png_memcpy_check  (Ghidra `png_memcpy_check` @ 00541fa0)
 * Signature: uint8_t png_memcpy_check(void)
 * Calls: `memcpy`
 * Called by: `png_push_process_row`, `png_read_row`, `png_write_row`
 */
void png_memcpy_check(uint64_t arg1, void *arg2, void *arg3, uint arg4)

{
  memcpy(arg2, arg3, (ulong)arg4);
  return;
}

/* ======================================================================
 * png_memset_check  (Ghidra `png_memset_check` @ 00541fb0)
 * Signature: uint8_t png_memset_check(void)
 * Calls: `memset`
 * Called by: `png_read_finish_row`, `png_read_push_finish_row_part_0`, `png_read_start_row`
 */
void png_memset_check(uint64_t arg1, void *arg2, int arg3, uint arg4)

{
  memset(arg2, arg3, (ulong)arg4);
  return;
}

/* ======================================================================
 * png_set_mem_fn  (Ghidra `png_set_mem_fn` @ 00541fc0)
 * Signature: uint8_t png_set_mem_fn(void)
 * Calls: (none)
 * Called by: `png_create_read_struct`, `png_create_read_struct_2`, `png_create_read_struct_2_constprop_2`, `png_create_write_struct`, `png_create_write_struct_2`, `png_create_write_struct_2_constprop_3`
 */
void png_set_mem_fn(long arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)

{
  if (arg1 != 0) {
    *(uint64_t *)(arg1 + 0x408) = arg2;
    *(uint64_t *)(arg1 + 0x410) = arg3;
    *(uint64_t *)(arg1 + 0x418) = arg4;
  }
  return;
}

/* ======================================================================
 * png_get_mem_ptr  (Ghidra `png_get_mem_ptr` @ 00541fe0)
 * Signature: uint8_t png_get_mem_ptr(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_mem_ptr(long arg1)

{
  if (arg1 != 0) {
    return *(uint64_t *)(arg1 + 0x408);
  }
  return 0;
}

/* ======================================================================
 * png_push_fill_buffer  (Ghidra `png_push_fill_buffer` @ 00542000)
 * Signature: uint8_t png_push_fill_buffer(void)
 * Calls: `memcpy`
 * Called by: `png_push_read_IDAT`, `png_push_read_chunk`, `png_push_read_sig`, `png_set_progressive_read_fn`
 */
void png_push_fill_buffer(long arg1, void *arg2, ulong arg3)

{
  ulong uVar1;
  void *__dest;

  if (arg1 != 0) {
    uVar1 = *(ulong *)(arg1 + 0x328);
    __dest = arg2;
    if (uVar1 != 0) {
      if (arg3 <= uVar1) {
        uVar1 = arg3;
      }
      arg3 = arg3 - uVar1;
      __dest = (void *)((long)arg2 + uVar1);
      memcpy(arg2, *(void **)(arg1 + 0x300), uVar1);
      *(long *)(arg1 + 0x338) = *(long *)(arg1 + 0x338) - uVar1;
      *(long *)(arg1 + 0x328) = *(long *)(arg1 + 0x328) - uVar1;
      *(long *)(arg1 + 0x300) = *(long *)(arg1 + 0x300) + uVar1;
    }
    if ((arg3 != 0) && (uVar1 = *(ulong *)(arg1 + 0x340), uVar1 != 0)) {
      if (uVar1 < arg3) {
        arg3 = uVar1;
      }
      memcpy(__dest, *(void **)(arg1 + 0x310), arg3);
      *(long *)(arg1 + 0x338) = *(long *)(arg1 + 0x338) - arg3;
      *(long *)(arg1 + 0x340) = *(long *)(arg1 + 0x340) - arg3;
      *(long *)(arg1 + 0x310) = *(long *)(arg1 + 0x310) + arg3;
    }
  }
  return;
}

/* ======================================================================
 * png_read_push_finish_row_part_0  (Ghidra `png_read_push_finish_row.part.0` @ 005420d0)
 * Signature: uint8_t png_read_push_finish_row.part.0(void)
 * Calls: `png_memset_check`
 * Called by: `png_push_process_row`, `png_read_push_finish_row`
 */
void png_read_push_finish_row_part_0(long arg1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;

  *(uint32_t *)(arg1 + 0x1d0) = 0;
  png_memset_check(arg1, *(uint64_t *)(arg1 + 0x1d8), 0, *(int *)(arg1 + 0x1c4) + 1);
  do {
    uVar3 = *(byte *)(arg1 + 0x234) + 1;
    if (uVar3 == 1) {
      if (*(uint *)(arg1 + 0x1b4) < 5) {
      LAB_005421e8:
        uVar3 = *(byte *)(arg1 + 0x234) + 2;
      LAB_00542119:
        if (7 < uVar3) {
          *(char *)(arg1 + 0x234) = (char)uVar3 + -1;
          return;
        }
      }
      *(char *)(arg1 + 0x234) = (char)uVar3;
      if (uVar3 == 7) {
        return;
      }
    LAB_00542148:
      uVar2 = *(uint *)(arg1 + 0x1b4);
    } else {
      if (uVar3 == 3) {
        if (*(uint *)(arg1 + 0x1b4) < 3)
          goto LAB_005421e8;
        *(uint8_t *)(arg1 + 0x234) = 3;
        goto LAB_00542148;
      }
      if (uVar3 != 5)
        goto LAB_00542119;
      uVar2 = *(uint *)(arg1 + 0x1b4);
      if (uVar2 < 2)
        goto LAB_005421e8;
      *(uint8_t *)(arg1 + 0x234) = 5;
    }
    lVar4 = (long)(int)uVar3;
    uVar3 = ((((&png_pass_inc)[lVar4] - 1) + uVar2) - *(int *)(png_pass_start + lVar4 * 4)) /
            (uint)(&png_pass_inc)[lVar4];
    *(uint *)(arg1 + 0x1cc) = uVar3;
    bVar1 = *(byte *)(arg1 + 0x239);
    if (bVar1 < 8) {
      uVar2 = bVar1 * uVar3 + 7 >> 3;
    } else {
      uVar2 = (bVar1 >> 3) * uVar3;
    }
    *(uint *)(arg1 + 0x1c8) = uVar2 + 1;
    if ((*(byte *)(arg1 + 0x11c) & 2) != 0) {
      return;
    }
    uVar2 = ((((&png_pass_yinc)[lVar4] - 1) + *(int *)(arg1 + 0x1b8)) -
             *(int *)(png_pass_ystart + lVar4 * 4)) /
            (uint)(&png_pass_yinc)[lVar4];
    *(uint *)(arg1 + 0x1bc) = uVar2;
    if ((uVar3 != 0) && (uVar2 != 0)) {
      return;
    }
  } while (true);
}

/* ======================================================================
 * png_push_read_sig  (Ghidra `png_push_read_sig` @ 00542220)
 * Signature: uint8_t png_push_read_sig(void)
 * Calls: `png_error`, `png_push_fill_buffer`, `png_sig_cmp`
 * Called by: `png_process_data`, `png_process_some_data`
 */
void png_push_read_sig(long arg1, long arg2)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;

  uVar2 = (ulong) * (byte *)(arg1 + 0x23c);
  uVar4 = *(ulong *)(arg1 + 0x338);
  if (8 - uVar2 <= *(ulong *)(arg1 + 0x338)) {
    uVar4 = 8 - uVar2;
  }
  png_push_fill_buffer(arg1, arg2 + 0x24 + uVar2, uVar4);
  *(char *)(arg1 + 0x23c) = *(char *)(arg1 + 0x23c) + (char)uVar4;
  iVar1 = png_sig_cmp(arg2 + 0x24, uVar2, uVar4);
  if (iVar1 == 0) {
    if (7 < *(byte *)(arg1 + 0x23c)) {
      *(uint32_t *)(arg1 + 0x348) = 1;
    }
    return;
  }
  if (uVar2 < 4) {
    iVar1 = png_sig_cmp(arg2 + 0x24, uVar2, uVar4 - 4);
    pcVar3 = "Not a PNG file";
    if (iVar1 != 0)
      goto LAB_005422a9;
  }
  pcVar3 = "PNG file corrupted by ASCII conversion";
LAB_005422a9:
  png_error(arg1, pcVar3);
  return;
}

/* ======================================================================
 * png_push_crc_skip  (Ghidra `png_push_crc_skip` @ 00542300)
 * Signature: uint8_t png_push_crc_skip(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_push_crc_skip(long arg1, uint32_t arg2)

{
  *(uint32_t *)(arg1 + 0x348) = 3;
  *(uint32_t *)(arg1 + 0x324) = arg2;
  return;
}

/* ======================================================================
 * png_push_save_buffer  (Ghidra `png_push_save_buffer` @ 00542320)
 * Signature: uint8_t png_push_save_buffer(void)
 * Calls: `memcpy`, `png_error`, `png_free`, `png_malloc`
 * Called by: `png_push_crc_finish`, `png_push_read_IDAT`, `png_push_read_chunk`, `png_push_read_tEXt`, `png_push_read_zTXt`
 */
void png_push_save_buffer(long arg1)

{
  void *__src;
  uint64_t uVar1;
  ulong uVar2;
  void *__dest;
  ulong uVar3;
  long lVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  uVar5 = *(ulong *)(arg1 + 0x328);
  if (uVar5 == 0)
    goto LAB_005423d8;
  uVar7 = *(ulong *)(arg1 + 0x300);
  uVar6 = *(ulong *)(arg1 + 0x308);
  if (uVar7 == uVar6)
    goto LAB_005423d8;
  uVar8 = uVar5 >> 4;
  uVar2 = uVar8 * 0x10;
  if ((uVar8 == 0) || (uVar5 < 0x10 || uVar6 <= uVar7 + 0x10 && uVar7 <= uVar6 + 0x10)) {
    uVar2 = 0;
  LAB_005423b3:
    lVar4 = -uVar2;
    do {
      *(uint8_t *)(uVar6 + lVar4 + uVar2) = *(uint8_t *)(uVar7 + lVar4 + uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar5);
  } else {
    lVar4 = 0;
    uVar3 = 0;
    do {
      uVar1 = ((uint64_t *)(uVar7 + lVar4))[1];
      uVar3 = uVar3 + 1;
      *(uint64_t *)(uVar6 + lVar4) = *(uint64_t *)(uVar7 + lVar4);
      ((uint64_t *)(uVar6 + lVar4))[1] = uVar1;
      lVar4 = lVar4 + 0x10;
    } while (uVar3 < uVar8);
    uVar7 = uVar7 + uVar2;
    uVar6 = uVar6 + uVar2;
    if (uVar5 != uVar2)
      goto LAB_005423b3;
  }
  uVar5 = *(ulong *)(arg1 + 0x328);
LAB_005423d8:
  __n = *(size_t *)(arg1 + 0x340);
  uVar7 = uVar5 + __n;
  if (*(ulong *)(arg1 + 0x330) < uVar7) {
    if (~(__n + 0x100) < uVar5) {
      png_error(arg1, "Potential overflow of save_buffer");
      uVar7 = *(long *)(arg1 + 0x340) + *(long *)(arg1 + 0x328);
    }
    __src = *(void **)(arg1 + 0x308);
    __dest = (void *)png_malloc(arg1, uVar7 + 0x100 & 0xffffffff);
    *(void **)(arg1 + 0x308) = __dest;
    memcpy(__dest, __src, *(size_t *)(arg1 + 0x328));
    png_free(arg1, __src);
    __n = *(size_t *)(arg1 + 0x340);
    *(ulong *)(arg1 + 0x330) = uVar7 + 0x100;
  }
  if (__n != 0) {
    memcpy((void *)(*(long *)(arg1 + 0x308) + *(long *)(arg1 + 0x328)), *(void **)(arg1 + 0x310),
           __n);
    *(long *)(arg1 + 0x328) = *(long *)(arg1 + 0x328) + *(long *)(arg1 + 0x340);
    *(uint64_t *)(arg1 + 0x340) = 0;
  }
  *(uint64_t *)(arg1 + 0x338) = 0;
  *(uint64_t *)(arg1 + 0x300) = *(uint64_t *)(arg1 + 0x308);
  return;
}

/* ======================================================================
 * png_push_crc_finish  (Ghidra `png_push_crc_finish` @ 005424d0)
 * Signature: uint8_t png_push_crc_finish(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_push_save_buffer`
 * Called by: `png_process_data`, `png_process_some_data`, `png_push_read_tEXt`, `png_push_read_zTXt`
 */
void png_push_crc_finish(long arg1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;

  uVar1 = *(uint *)(arg1 + 0x324);
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(arg1 + 0x328);
    if (uVar2 != 0) {
      if (uVar1 < (uint)uVar2) {
        uVar2 = (ulong)uVar1;
      }
      png_calculate_crc(arg1, *(uint64_t *)(arg1 + 0x300), uVar2);
      *(long *)(arg1 + 0x338) = *(long *)(arg1 + 0x338) - uVar2;
      *(long *)(arg1 + 0x328) = *(long *)(arg1 + 0x328) - uVar2;
      *(long *)(arg1 + 0x300) = *(long *)(arg1 + 0x300) + uVar2;
      uVar1 = *(int *)(arg1 + 0x324) - (int)uVar2;
      *(uint *)(arg1 + 0x324) = uVar1;
      if (uVar1 == 0)
        goto LAB_00542590;
    }
    uVar2 = *(ulong *)(arg1 + 0x340);
    if (uVar2 != 0) {
      if (uVar1 < (uint)uVar2) {
        uVar2 = (ulong)uVar1;
      }
      png_calculate_crc(arg1, *(uint64_t *)(arg1 + 0x310), uVar2);
      *(long *)(arg1 + 0x340) = *(long *)(arg1 + 0x340) - uVar2;
      *(long *)(arg1 + 0x310) = *(long *)(arg1 + 0x310) + uVar2;
      iVar3 = *(int *)(arg1 + 0x324) - (int)uVar2;
      uVar2 = *(long *)(arg1 + 0x338) - uVar2;
      *(int *)(arg1 + 0x324) = iVar3;
      *(ulong *)(arg1 + 0x338) = uVar2;
      if (iVar3 == 0)
        goto LAB_00542597;
    }
    return;
  }
LAB_00542590:
  uVar2 = *(ulong *)(arg1 + 0x338);
LAB_00542597:
  if (3 < uVar2) {
    png_crc_finish(arg1, 0);
    *(uint32_t *)(arg1 + 0x348) = 1;
    return;
  }
  png_push_save_buffer(arg1);
  return;
}

/* ======================================================================
 * png_push_restore_buffer  (Ghidra `png_push_restore_buffer` @ 005425d0)
 * Signature: uint8_t png_push_restore_buffer(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_push_restore_buffer(long arg1, uint64_t arg2, long arg3)

{
  *(long *)(arg1 + 0x340) = arg3;
  *(uint64_t *)(arg1 + 0x318) = arg2;
  *(uint64_t *)(arg1 + 0x310) = arg2;
  *(long *)(arg1 + 0x338) = arg3 + *(long *)(arg1 + 0x328);
  return;
}

/* ======================================================================
 * png_push_process_row  (Ghidra `png_push_process_row` @ 00542600)
 * Signature: uint8_t png_push_process_row(void)
 * Calls: `png_do_read_interlace`, `png_do_read_transformations`, `png_memcpy_check`, `png_read_filter_row`, `png_read_push_finish_row_part_0`
 * Called by: `png_process_IDAT_data`
 */
void png_push_process_row(long arg1)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;

  iVar1 = *(int *)(arg1 + 0x1cc);
  *(uint8_t *)(arg1 + 0x210) = *(uint8_t *)(arg1 + 0x236);
  *(int *)(arg1 + 0x208) = iVar1;
  *(uint8_t *)(arg1 + 0x212) = *(uint8_t *)(arg1 + 0x23a);
  *(uint8_t *)(arg1 + 0x211) = *(uint8_t *)(arg1 + 0x237);
  bVar3 = *(byte *)(arg1 + 0x239);
  *(byte *)(arg1 + 0x213) = bVar3;
  if (bVar3 < 8) {
    uVar5 = (uint)bVar3 * iVar1 + 7 >> 3;
  } else {
    uVar5 = (uint)(bVar3 >> 3) * iVar1;
  }
  *(uint *)(arg1 + 0x20c) = uVar5;
  png_read_filter_row(arg1, arg1 + 0x208, *(uint8_t **)(arg1 + 0x1e0) + 1,
                      *(long *)(arg1 + 0x1d8) + 1, **(uint8_t **)(arg1 + 0x1e0));
  png_memcpy_check(arg1, *(uint64_t *)(arg1 + 0x1d8), *(uint64_t *)(arg1 + 0x1e0),
                   *(int *)(arg1 + 0x1c4) + 1);
  if ((*(int *)(arg1 + 0x11c) != 0) || ((*(byte *)(arg1 + 0x11a) & 0x40) != 0)) {
    png_do_read_transformations(arg1);
  }
  if ((*(char *)(arg1 + 0x233) == '\0') || ((*(byte *)(arg1 + 0x11c) & 2) == 0)) {
    if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1, *(uint32_t *)(arg1 + 0x1d0),
                                  *(uint8_t *)(arg1 + 0x234));
    }
    goto LAB_005426f1;
  }
  bVar3 = *(byte *)(arg1 + 0x234);
  if (bVar3 < 6) {
    png_do_read_interlace(arg1);
    bVar3 = *(byte *)(arg1 + 0x234);
  }
  if (6 < bVar3) {
    return;
  }
  lVar2 = *(long *)(arg1 + 0x1e0);
  switch (bVar3) {
  case 0:
    if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f0))(arg1, lVar2 + 1, *(uint32_t *)(arg1 + 0x1d0), 0);
    }
    uVar5 = *(int *)(arg1 + 0x1d0) + 1;
    *(uint *)(arg1 + 0x1d0) = uVar5;
    if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
      png_read_push_finish_row_part_0(arg1);
    }
    cVar4 = *(char *)(arg1 + 0x234);
    if (cVar4 == '\0') {
      if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
        (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1, *(uint32_t *)(arg1 + 0x1d0),
                                    0);
      }
      uVar5 = *(int *)(arg1 + 0x1d0) + 1;
      *(uint *)(arg1 + 0x1d0) = uVar5;
      if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
        png_read_push_finish_row_part_0(arg1);
      }
      cVar4 = *(char *)(arg1 + 0x234);
      if (cVar4 == '\0') {
        if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
          (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                      *(uint32_t *)(arg1 + 0x1d0), 0);
        }
        uVar5 = *(int *)(arg1 + 0x1d0) + 1;
        *(uint *)(arg1 + 0x1d0) = uVar5;
        if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
          png_read_push_finish_row_part_0(arg1);
        }
        cVar4 = *(char *)(arg1 + 0x234);
        if (cVar4 == '\0') {
          if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
            (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                        *(uint32_t *)(arg1 + 0x1d0), 0);
          }
          uVar5 = *(int *)(arg1 + 0x1d0) + 1;
          *(uint *)(arg1 + 0x1d0) = uVar5;
          if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
            png_read_push_finish_row_part_0(arg1);
          }
          cVar4 = *(char *)(arg1 + 0x234);
          if (cVar4 == '\0') {
            if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
              (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                          *(uint32_t *)(arg1 + 0x1d0), 0);
            }
            uVar5 = *(int *)(arg1 + 0x1d0) + 1;
            *(uint *)(arg1 + 0x1d0) = uVar5;
            if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
              png_read_push_finish_row_part_0(arg1);
            }
            cVar4 = *(char *)(arg1 + 0x234);
            if (cVar4 == '\0') {
              if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
                (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                            *(uint32_t *)(arg1 + 0x1d0), 0);
              }
              uVar5 = *(int *)(arg1 + 0x1d0) + 1;
              *(uint *)(arg1 + 0x1d0) = uVar5;
              if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
                png_read_push_finish_row_part_0(arg1);
              }
              cVar4 = *(char *)(arg1 + 0x234);
              if (cVar4 == '\0') {
                if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
                  (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                              *(uint32_t *)(arg1 + 0x1d0), 0);
                }
                uVar5 = *(int *)(arg1 + 0x1d0) + 1;
                *(uint *)(arg1 + 0x1d0) = uVar5;
                if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
                  png_read_push_finish_row_part_0(arg1);
                }
                cVar4 = *(char *)(arg1 + 0x234);
                if (cVar4 == '\0') {
                  if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
                    (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                                *(uint32_t *)(arg1 + 0x1d0), 0);
                  }
                  uVar5 = *(int *)(arg1 + 0x1d0) + 1;
                  *(uint *)(arg1 + 0x1d0) = uVar5;
                  if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
                    png_read_push_finish_row_part_0(arg1);
                  }
                  cVar4 = *(char *)(arg1 + 0x234);
                }
              }
            }
          }
        }
      }
    }
    if (cVar4 == '\x02') {
      if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
        (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 2);
      }
      uVar5 = *(int *)(arg1 + 0x1d0) + 1;
      *(uint *)(arg1 + 0x1d0) = uVar5;
      if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
        png_read_push_finish_row_part_0(arg1);
      }
      cVar4 = *(char *)(arg1 + 0x234);
      if (cVar4 == '\x02') {
        if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
          (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 2);
        }
        uVar5 = *(int *)(arg1 + 0x1d0) + 1;
        *(uint *)(arg1 + 0x1d0) = uVar5;
        if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
          png_read_push_finish_row_part_0(arg1);
        }
        cVar4 = *(char *)(arg1 + 0x234);
        if (cVar4 == '\x02') {
          if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
            (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 2);
          }
          uVar5 = *(int *)(arg1 + 0x1d0) + 1;
          *(uint *)(arg1 + 0x1d0) = uVar5;
          if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
            png_read_push_finish_row_part_0(arg1);
          }
          cVar4 = *(char *)(arg1 + 0x234);
          if (cVar4 == '\x02') {
            if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
              (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 2);
            }
            uVar5 = *(int *)(arg1 + 0x1d0) + 1;
            *(uint *)(arg1 + 0x1d0) = uVar5;
            if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
              png_read_push_finish_row_part_0(arg1);
            }
            cVar4 = *(char *)(arg1 + 0x234);
          }
        }
      }
    }
    if (cVar4 == '\x04') {
      if (4 < *(uint *)(arg1 + 0x1b8)) {
        return;
      }
      if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
        (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 4);
      }
      uVar5 = *(int *)(arg1 + 0x1d0) + 1;
      *(uint *)(arg1 + 0x1d0) = uVar5;
      if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
        png_read_push_finish_row_part_0(arg1);
      }
      cVar4 = *(char *)(arg1 + 0x234);
      if (cVar4 == '\x04') {
        if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
          (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 4);
        }
        uVar5 = *(int *)(arg1 + 0x1d0) + 1;
        *(uint *)(arg1 + 0x1d0) = uVar5;
        if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
          png_read_push_finish_row_part_0(arg1);
        }
        cVar4 = *(char *)(arg1 + 0x234);
      }
    }
    if (cVar4 != '\x06') {
      return;
    }
    if (4 < *(uint *)(arg1 + 0x1b8)) {
      return;
    }
    break;
  case 1:
    if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f0))(arg1, lVar2 + 1, *(uint32_t *)(arg1 + 0x1d0), 1);
    }
    uVar5 = *(int *)(arg1 + 0x1d0) + 1;
    *(uint *)(arg1 + 0x1d0) = uVar5;
    if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
      png_read_push_finish_row_part_0(arg1);
    }
    cVar4 = *(char *)(arg1 + 0x234);
    if (cVar4 == '\x01') {
      if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
        (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1, *(uint32_t *)(arg1 + 0x1d0),
                                    1);
      }
      uVar5 = *(int *)(arg1 + 0x1d0) + 1;
      *(uint *)(arg1 + 0x1d0) = uVar5;
      if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
        png_read_push_finish_row_part_0(arg1);
      }
      cVar4 = *(char *)(arg1 + 0x234);
      if (cVar4 == '\x01') {
        if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
          (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                      *(uint32_t *)(arg1 + 0x1d0), 1);
        }
        uVar5 = *(int *)(arg1 + 0x1d0) + 1;
        *(uint *)(arg1 + 0x1d0) = uVar5;
        if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
          png_read_push_finish_row_part_0(arg1);
        }
        cVar4 = *(char *)(arg1 + 0x234);
        if (cVar4 == '\x01') {
          if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
            (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                        *(uint32_t *)(arg1 + 0x1d0), 1);
          }
          uVar5 = *(int *)(arg1 + 0x1d0) + 1;
          *(uint *)(arg1 + 0x1d0) = uVar5;
          if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
            png_read_push_finish_row_part_0(arg1);
          }
          cVar4 = *(char *)(arg1 + 0x234);
          if (cVar4 == '\x01') {
            if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
              (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                          *(uint32_t *)(arg1 + 0x1d0), 1);
            }
            uVar5 = *(int *)(arg1 + 0x1d0) + 1;
            *(uint *)(arg1 + 0x1d0) = uVar5;
            if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
              png_read_push_finish_row_part_0(arg1);
            }
            cVar4 = *(char *)(arg1 + 0x234);
            if (cVar4 == '\x01') {
              if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
                (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                            *(uint32_t *)(arg1 + 0x1d0), 1);
              }
              uVar5 = *(int *)(arg1 + 0x1d0) + 1;
              *(uint *)(arg1 + 0x1d0) = uVar5;
              if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
                png_read_push_finish_row_part_0(arg1);
              }
              cVar4 = *(char *)(arg1 + 0x234);
              if (cVar4 == '\x01') {
                if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
                  (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                              *(uint32_t *)(arg1 + 0x1d0), 1);
                }
                uVar5 = *(int *)(arg1 + 0x1d0) + 1;
                *(uint *)(arg1 + 0x1d0) = uVar5;
                if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
                  png_read_push_finish_row_part_0(arg1);
                }
                cVar4 = *(char *)(arg1 + 0x234);
                if (cVar4 == '\x01') {
                  if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
                    (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                                *(uint32_t *)(arg1 + 0x1d0), 1);
                  }
                  uVar5 = *(int *)(arg1 + 0x1d0) + 1;
                  *(uint *)(arg1 + 0x1d0) = uVar5;
                  if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
                    png_read_push_finish_row_part_0(arg1);
                  }
                  cVar4 = *(char *)(arg1 + 0x234);
                }
              }
            }
          }
        }
      }
    }
    if (cVar4 != '\x02') {
      return;
    }
    if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 2);
    }
    uVar5 = *(int *)(arg1 + 0x1d0) + 1;
    *(uint *)(arg1 + 0x1d0) = uVar5;
    if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
      png_read_push_finish_row_part_0(arg1);
    }
    if (*(char *)(arg1 + 0x234) != '\x02') {
      return;
    }
    if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 2);
    }
    uVar5 = *(int *)(arg1 + 0x1d0) + 1;
    *(uint *)(arg1 + 0x1d0) = uVar5;
    if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
      png_read_push_finish_row_part_0(arg1);
    }
    if (*(char *)(arg1 + 0x234) != '\x02') {
      return;
    }
    if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 2);
    }
    uVar5 = *(int *)(arg1 + 0x1d0) + 1;
    *(uint *)(arg1 + 0x1d0) = uVar5;
    if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
      png_read_push_finish_row_part_0(arg1);
    }
    if (*(char *)(arg1 + 0x234) != '\x02') {
      return;
    }
    if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 2);
    }
    goto LAB_005426f1;
  case 2:
    if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f0))(arg1, lVar2 + 1, *(uint32_t *)(arg1 + 0x1d0), 2);
    }
    uVar5 = *(int *)(arg1 + 0x1d0) + 1;
    *(uint *)(arg1 + 0x1d0) = uVar5;
    if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
      png_read_push_finish_row_part_0(arg1);
    }
    cVar4 = *(char *)(arg1 + 0x234);
    if (cVar4 == '\x02') {
      if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
        (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1, *(uint32_t *)(arg1 + 0x1d0),
                                    2);
      }
      uVar5 = *(int *)(arg1 + 0x1d0) + 1;
      *(uint *)(arg1 + 0x1d0) = uVar5;
      if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
        png_read_push_finish_row_part_0(arg1);
      }
      cVar4 = *(char *)(arg1 + 0x234);
      if (cVar4 == '\x02') {
        if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
          (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                      *(uint32_t *)(arg1 + 0x1d0), 2);
        }
        uVar5 = *(int *)(arg1 + 0x1d0) + 1;
        *(uint *)(arg1 + 0x1d0) = uVar5;
        if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
          png_read_push_finish_row_part_0(arg1);
        }
        cVar4 = *(char *)(arg1 + 0x234);
        if (cVar4 == '\x02') {
          if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
            (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                        *(uint32_t *)(arg1 + 0x1d0), 2);
          }
          uVar5 = *(int *)(arg1 + 0x1d0) + 1;
          *(uint *)(arg1 + 0x1d0) = uVar5;
          if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
            png_read_push_finish_row_part_0(arg1);
          }
          cVar4 = *(char *)(arg1 + 0x234);
          if (cVar4 == '\x02') {
            if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
              (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 2);
            }
            uVar5 = *(int *)(arg1 + 0x1d0) + 1;
            *(uint *)(arg1 + 0x1d0) = uVar5;
            if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
              png_read_push_finish_row_part_0(arg1);
            }
            cVar4 = *(char *)(arg1 + 0x234);
            if (cVar4 == '\x02') {
              if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
                (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 2);
              }
              uVar5 = *(int *)(arg1 + 0x1d0) + 1;
              *(uint *)(arg1 + 0x1d0) = uVar5;
              if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
                png_read_push_finish_row_part_0(arg1);
              }
              cVar4 = *(char *)(arg1 + 0x234);
              if (cVar4 == '\x02') {
                if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
                  (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 2);
                }
                uVar5 = *(int *)(arg1 + 0x1d0) + 1;
                *(uint *)(arg1 + 0x1d0) = uVar5;
                if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
                  png_read_push_finish_row_part_0(arg1);
                }
                cVar4 = *(char *)(arg1 + 0x234);
                if (cVar4 == '\x02') {
                  if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
                    (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 2);
                  }
                  goto LAB_00542ace;
                }
              }
            }
          }
        }
      }
    }
    goto LAB_00542afd;
  case 3:
    if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f0))(arg1, lVar2 + 1, *(uint32_t *)(arg1 + 0x1d0), 3);
    }
    uVar5 = *(int *)(arg1 + 0x1d0) + 1;
    *(uint *)(arg1 + 0x1d0) = uVar5;
    if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
      png_read_push_finish_row_part_0(arg1);
    }
    cVar4 = *(char *)(arg1 + 0x234);
    if (cVar4 == '\x03') {
      if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
        (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1, *(uint32_t *)(arg1 + 0x1d0),
                                    3);
      }
      uVar5 = *(int *)(arg1 + 0x1d0) + 1;
      *(uint *)(arg1 + 0x1d0) = uVar5;
      if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
        png_read_push_finish_row_part_0(arg1);
      }
      cVar4 = *(char *)(arg1 + 0x234);
      if (cVar4 == '\x03') {
        if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
          (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                      *(uint32_t *)(arg1 + 0x1d0), 3);
        }
        uVar5 = *(int *)(arg1 + 0x1d0) + 1;
        *(uint *)(arg1 + 0x1d0) = uVar5;
        if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
          png_read_push_finish_row_part_0(arg1);
        }
        cVar4 = *(char *)(arg1 + 0x234);
        if (cVar4 == '\x03') {
          if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
            (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1,
                                        *(uint32_t *)(arg1 + 0x1d0), 3);
          }
        LAB_00542ace:
          uVar5 = *(int *)(arg1 + 0x1d0) + 1;
          *(uint *)(arg1 + 0x1d0) = uVar5;
          if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
            png_read_push_finish_row_part_0(arg1);
          }
          cVar4 = *(char *)(arg1 + 0x234);
        }
      }
    }
  LAB_00542afd:
    if (cVar4 != '\x04') {
      return;
    }
    if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 4);
    }
    uVar5 = *(int *)(arg1 + 0x1d0) + 1;
    *(uint *)(arg1 + 0x1d0) = uVar5;
    if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
      png_read_push_finish_row_part_0(arg1);
    }
    if (*(char *)(arg1 + 0x234) != '\x04') {
      return;
    }
    if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 4);
    }
    goto LAB_005426f1;
  case 4:
    if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f0))(arg1, lVar2 + 1, *(uint32_t *)(arg1 + 0x1d0), 4);
    }
    uVar5 = *(int *)(arg1 + 0x1d0) + 1;
    *(uint *)(arg1 + 0x1d0) = uVar5;
    if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
      png_read_push_finish_row_part_0(arg1);
    }
    cVar4 = *(char *)(arg1 + 0x234);
    if (cVar4 == '\x04') {
      if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
        (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1, *(uint32_t *)(arg1 + 0x1d0),
                                    4);
      }
      uVar5 = *(int *)(arg1 + 0x1d0) + 1;
      *(uint *)(arg1 + 0x1d0) = uVar5;
      if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
        png_read_push_finish_row_part_0(arg1);
      }
      cVar4 = *(char *)(arg1 + 0x234);
      if (cVar4 == '\x04') {
        if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
          (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 4);
        }
        uVar5 = *(int *)(arg1 + 0x1d0) + 1;
        *(uint *)(arg1 + 0x1d0) = uVar5;
        if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
          png_read_push_finish_row_part_0(arg1);
        }
        cVar4 = *(char *)(arg1 + 0x234);
        if (cVar4 == '\x04') {
          if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
            (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 4);
          }
          goto LAB_00542802;
        }
      }
    }
    goto LAB_00542831;
  case 5:
    if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f0))(arg1, lVar2 + 1, *(uint32_t *)(arg1 + 0x1d0), 5);
    }
    uVar5 = *(int *)(arg1 + 0x1d0) + 1;
    *(uint *)(arg1 + 0x1d0) = uVar5;
    if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
      png_read_push_finish_row_part_0(arg1);
    }
    cVar4 = *(char *)(arg1 + 0x234);
    if (cVar4 == '\x05') {
      if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
        (**(code **)(arg1 + 0x2f0))(arg1, *(long *)(arg1 + 0x1e0) + 1, *(uint32_t *)(arg1 + 0x1d0),
                                    5);
      }
    LAB_00542802:
      uVar5 = *(int *)(arg1 + 0x1d0) + 1;
      *(uint *)(arg1 + 0x1d0) = uVar5;
      if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
        png_read_push_finish_row_part_0(arg1);
      }
      cVar4 = *(char *)(arg1 + 0x234);
    }
  LAB_00542831:
    if (cVar4 != '\x06') {
      return;
    }
    break;
  case 6:
    if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f0))(arg1, lVar2 + 1, *(uint32_t *)(arg1 + 0x1d0), 6);
    }
    uVar5 = *(int *)(arg1 + 0x1d0) + 1;
    *(uint *)(arg1 + 0x1d0) = uVar5;
    if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
      png_read_push_finish_row_part_0(arg1);
    }
    if (*(char *)(arg1 + 0x234) != '\x06') {
      return;
    }
  }
  if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
    (**(code **)(arg1 + 0x2f0))(arg1, 0, *(uint32_t *)(arg1 + 0x1d0), 6);
  }
LAB_005426f1:
  uVar5 = *(int *)(arg1 + 0x1d0) + 1;
  *(uint *)(arg1 + 0x1d0) = uVar5;
  if ((*(uint *)(arg1 + 0x1bc) <= uVar5) && (*(char *)(arg1 + 0x233) != '\0')) {
    png_read_push_finish_row_part_0(arg1);
    return;
  }
  return;
}

/* ======================================================================
 * png_process_IDAT_data  (Ghidra `png_process_IDAT_data` @ 00543780)
 * Signature: uint8_t png_process_IDAT_data(void)
 * Calls: `inflate`, `png_error`, `png_push_process_row`, `png_warning`
 * Called by: `png_push_read_IDAT`
 */
void png_process_IDAT_data(long arg1, uint64_t arg2, long arg3)

{
  int iVar1;

  if ((arg3 != 0) && ((*(byte *)(arg1 + 0x118) & 0x20) != 0)) {
    png_error(arg1, "Extra compression data");
  }
  *(uint64_t *)(arg1 + 0x120) = arg2;
  *(int *)(arg1 + 0x128) = (int)arg3;
  do {
    iVar1 = inflate(arg1 + 0x120, 1);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        if (*(int *)(arg1 + 0x128) != 0) {
          png_error(arg1, "Extra compressed data");
        }
        if (*(int *)(arg1 + 0x140) == 0) {
          png_push_process_row(arg1);
        }
        *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 8;
        *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 0x20;
        return;
      }
      if (iVar1 == -5) {
        return;
      }
      png_error(arg1, "Decompression Error");
    }
    if (*(int *)(arg1 + 0x140) != 0) {
      return;
    }
    if (*(char *)(arg1 + 0x233) == '\0') {
      if (*(int *)(arg1 + 0x1d0) == *(int *)(arg1 + 0x1bc))
        goto LAB_00543828;
    } else if (6 < *(byte *)(arg1 + 0x234)) {
    LAB_00543828:
      if (*(int *)(arg1 + 0x128) != 0) {
        png_warning(arg1, "Too much data in IDAT chunks");
      }
      *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 0x20;
      return;
    }
    png_push_process_row(arg1);
    *(uint32_t *)(arg1 + 0x140) = *(uint32_t *)(arg1 + 0x1c8);
    *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 0x1e0);
  } while (true);
}

/* ======================================================================
 * png_push_read_IDAT  (Ghidra `png_push_read_IDAT` @ 005438c0)
 * Signature: uint8_t png_push_read_IDAT(void)
 * Calls: `memcmp`, `png_calculate_crc`, `png_crc_finish`, `png_crc_read`, `png_error`, `png_get_uint_31`, `png_process_IDAT_data`, `png_push_fill_buffer`, `png_push_save_buffer`, `png_reset_crc`
 * Called by: `png_process_data`, `png_process_some_data`
 */
void png_push_read_IDAT(long arg1)

{
  uint32_t uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  uint8_t local_28[24];

  if ((*(byte *)(arg1 + 0x115) & 1) == 0) {
    if (*(ulong *)(arg1 + 0x338) < 8)
      goto LAB_00543aa0;
    png_push_fill_buffer(arg1, local_28, 4);
    uVar1 = png_get_uint_31(arg1, local_28);
    *(uint32_t *)(arg1 + 800) = uVar1;
    png_reset_crc(arg1);
    png_crc_read(arg1, (void *)(arg1 + 0x22c), 4);
    *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 0x100;
    iVar4 = memcmp((void *)(arg1 + 0x22c), &png_IDAT, 4);
    if (iVar4 != 0) {
      *(uint32_t *)(arg1 + 0x348) = 1;
      if ((*(byte *)(arg1 + 0x118) & 0x20) != 0) {
        return;
      }
      png_error(arg1, "Not enough compressed data");
      return;
    }
    uVar2 = *(uint *)(arg1 + 800);
    *(uint *)(arg1 + 0x214) = uVar2;
  } else {
    uVar2 = *(uint *)(arg1 + 0x214);
  }
  if (uVar2 == 0) {
  LAB_005438e0:
    uVar3 = *(ulong *)(arg1 + 0x338);
  } else {
    uVar5 = *(ulong *)(arg1 + 0x328);
    if (uVar5 != 0) {
      if (uVar2 < (uint)uVar5) {
        uVar5 = (ulong)uVar2;
      }
      png_calculate_crc(arg1, *(uint64_t *)(arg1 + 0x300), uVar5);
      if ((*(byte *)(arg1 + 0x118) & 0x20) == 0) {
        png_process_IDAT_data(arg1, *(uint64_t *)(arg1 + 0x300), uVar5);
      }
      *(long *)(arg1 + 0x338) = *(long *)(arg1 + 0x338) - uVar5;
      *(long *)(arg1 + 0x328) = *(long *)(arg1 + 0x328) - uVar5;
      *(long *)(arg1 + 0x300) = *(long *)(arg1 + 0x300) + uVar5;
      uVar2 = *(int *)(arg1 + 0x214) - (int)uVar5;
      *(uint *)(arg1 + 0x214) = uVar2;
      if (uVar2 == 0)
        goto LAB_005438e0;
    }
    uVar5 = *(ulong *)(arg1 + 0x340);
    if (uVar5 == 0) {
      return;
    }
    if (uVar2 < (uint)uVar5) {
      uVar5 = (ulong)uVar2;
    }
    png_calculate_crc(arg1, *(uint64_t *)(arg1 + 0x310), uVar5);
    if ((*(byte *)(arg1 + 0x118) & 0x20) == 0) {
      png_process_IDAT_data(arg1, *(uint64_t *)(arg1 + 0x310), uVar5);
    }
    *(long *)(arg1 + 0x310) = *(long *)(arg1 + 0x310) + uVar5;
    iVar4 = *(int *)(arg1 + 0x214) - (int)uVar5;
    uVar3 = *(long *)(arg1 + 0x338) - uVar5;
    *(int *)(arg1 + 0x214) = iVar4;
    *(ulong *)(arg1 + 0x338) = *(long *)(arg1 + 0x338) - uVar5;
    *(ulong *)(arg1 + 0x340) = *(long *)(arg1 + 0x340) - uVar5;
    if (iVar4 != 0) {
      return;
    }
  }
  if (3 < uVar3) {
    png_crc_finish(arg1, 0);
    *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) & 0xfffffeff | 8;
    return;
  }
LAB_00543aa0:
  png_push_save_buffer(arg1);
  return;
}

/* ======================================================================
 * png_read_push_finish_row  (Ghidra `png_read_push_finish_row` @ 00543b00)
 * Signature: uint8_t png_read_push_finish_row(void)
 * Calls: `png_read_push_finish_row_part_0`
 * Called by: (none)
 */
void png_read_push_finish_row(long arg1)

{
  uint uVar1;

  uVar1 = *(int *)(arg1 + 0x1d0) + 1;
  *(uint *)(arg1 + 0x1d0) = uVar1;
  if ((*(uint *)(arg1 + 0x1bc) <= uVar1) && (*(char *)(arg1 + 0x233) != '\0')) {
    png_read_push_finish_row_part_0();
    return;
  }
  return;
}

/* ======================================================================
 * png_push_handle_tEXt  (Ghidra `png_push_handle_tEXt` @ 00543b30)
 * Signature: uint8_t png_push_handle_tEXt(void)
 * Calls: `png_error`, `png_malloc`
 * Called by: `png_push_read_chunk`
 */
void png_push_handle_tEXt(long arg1, uint64_t arg2, uint arg3)

{
  long lVar1;
  ulong uVar2;

  uVar2 = (ulong)arg3;
  if ((*(uint *)(arg1 + 0x114) & 0x11) != 1) {
    png_error(arg1, "Out of place tEXt");
  }
  lVar1 = png_malloc(arg1, arg3 + 1);
  *(long *)(arg1 + 0x360) = lVar1;
  *(uint8_t *)(lVar1 + uVar2) = 0;
  *(ulong *)(arg1 + 0x350) = uVar2;
  *(ulong *)(arg1 + 0x358) = uVar2;
  *(uint32_t *)(arg1 + 0x348) = 4;
  *(uint64_t *)(arg1 + 0x368) = *(uint64_t *)(arg1 + 0x360);
  return;
}

/* ======================================================================
 * png_push_read_tEXt  (Ghidra `png_push_read_tEXt` @ 00543ba0)
 * Signature: uint8_t png_push_read_tEXt(void)
 * Calls: `png_crc_read`, `png_free`, `png_malloc`, `png_push_crc_finish`, `png_push_save_buffer`, `png_set_text_2`, `png_warning`
 * Called by: `png_process_data`, `png_process_some_data`
 */
void png_push_read_tEXt(long arg1, uint64_t arg2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint32_t *puVar6;
  ulong uVar7;
  char *pcVar8;

  uVar5 = *(ulong *)(arg1 + 0x338);
  if (uVar5 == 0) {
    lVar4 = *(long *)(arg1 + 0x358);
  } else {
    uVar7 = *(ulong *)(arg1 + 0x358);
    if (uVar7 == 0)
      goto LAB_00543c46;
    if (uVar5 < uVar7) {
      uVar7 = uVar5;
    }
    png_crc_read(arg1, *(uint64_t *)(arg1 + 0x368), uVar7);
    *(long *)(arg1 + 0x368) = *(long *)(arg1 + 0x368) + uVar7;
    lVar4 = *(long *)(arg1 + 0x358) - uVar7;
    *(long *)(arg1 + 0x358) = lVar4;
  }
  if (lVar4 != 0) {
    return;
  }
  uVar5 = *(ulong *)(arg1 + 0x338);
LAB_00543c46:
  if (uVar5 < 4) {
    png_push_save_buffer(arg1);
    return;
  }
  png_push_crc_finish();
  pcVar2 = *(char **)(arg1 + 0x360);
  cVar1 = *pcVar2;
  pcVar8 = pcVar2;
  while (cVar1 != '\0') {
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
  }
  lVar4 = *(long *)(arg1 + 0x350);
  puVar6 = (uint32_t *)png_malloc(arg1, 0x20);
  *puVar6 = 0xffffffff;
  *(char **)(puVar6 + 2) = pcVar2;
  *(char **)(puVar6 + 4) = pcVar8 + (pcVar8 < pcVar2 + lVar4);
  iVar3 = png_set_text_2(arg1, arg2, puVar6, 1);
  png_free(arg1, pcVar2);
  png_free(arg1, puVar6);
  *(uint64_t *)(arg1 + 0x360) = 0;
  if (iVar3 == 0) {
    return;
  }
  png_warning(arg1, "Insufficient memory to store text chunk.");
  return;
}

/* ======================================================================
 * png_push_handle_zTXt  (Ghidra `png_push_handle_zTXt` @ 00543d40)
 * Signature: uint8_t png_push_handle_zTXt(void)
 * Calls: `png_error`, `png_malloc`
 * Called by: `png_push_read_chunk`
 */
void png_push_handle_zTXt(long arg1, uint64_t arg2, uint arg3)

{
  long lVar1;
  ulong uVar2;

  uVar2 = (ulong)arg3;
  if ((*(uint *)(arg1 + 0x114) & 0x11) != 1) {
    png_error(arg1, "Out of place zTXt");
  }
  lVar1 = png_malloc(arg1, arg3 + 1);
  *(long *)(arg1 + 0x360) = lVar1;
  *(uint8_t *)(lVar1 + uVar2) = 0;
  *(ulong *)(arg1 + 0x350) = uVar2;
  *(ulong *)(arg1 + 0x358) = uVar2;
  *(uint32_t *)(arg1 + 0x348) = 5;
  *(uint64_t *)(arg1 + 0x368) = *(uint64_t *)(arg1 + 0x360);
  return;
}

/* ======================================================================
 * png_push_read_zTXt  (Ghidra `png_push_read_zTXt` @ 00543db0)
 * Signature: uint8_t png_push_read_zTXt(void)
 * Calls: `inflate`, `inflateReset`, `memcpy`, `png_crc_read`, `png_free`, `png_malloc`, `png_push_crc_finish`, `png_push_save_buffer`, `png_set_text_2`, `png_warning`
 * Called by: `png_process_data`, `png_process_some_data`
 */
void png_push_read_zTXt(long arg1, uint64_t arg2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  size_t __n;
  char *__dest;
  uint32_t *puVar6;
  int iVar7;
  ulong uVar8;
  char *__src;
  size_t __n_00;

  uVar8 = *(ulong *)(arg1 + 0x338);
  uVar4 = *(ulong *)(arg1 + 0x358);
  if (uVar8 != 0) {
    if (uVar4 == 0)
      goto LAB_00543e57;
    if ((uVar4 & 0xffffffff) <= uVar8) {
      uVar8 = uVar4;
    }
    png_crc_read(arg1, *(uint64_t *)(arg1 + 0x368), uVar8);
    *(long *)(arg1 + 0x368) = *(long *)(arg1 + 0x368) + uVar8;
    uVar4 = *(long *)(arg1 + 0x358) - uVar8;
    *(ulong *)(arg1 + 0x358) = uVar4;
  }
  if (uVar4 != 0) {
    return;
  }
  uVar8 = *(ulong *)(arg1 + 0x338);
LAB_00543e57:
  if (uVar8 < 4) {
    png_push_save_buffer(arg1);
    return;
  }
  png_push_crc_finish();
  __src = *(char **)(arg1 + 0x360);
  cVar2 = *__src;
  pcVar5 = __src;
  while (cVar2 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar5;
  }
  if ((pcVar5 < __src + *(long *)(arg1 + 0x350)) && (pcVar5[1] == '\0')) {
    *(char **)(arg1 + 0x120) = pcVar5 + 2;
    __n = (long)(pcVar5 + 2) - (long)__src;
    iVar7 = (int)*(long *)(arg1 + 0x350) - (int)__n;
    *(int *)(arg1 + 0x128) = iVar7;
    *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 400);
    *(int *)(arg1 + 0x140) = (int)*(uint64_t *)(arg1 + 0x198);
    if (iVar7 == 0) {
      pcVar5 = (char *)0x0;
      inflateReset(arg1 + 0x120);
      *(uint32_t *)(arg1 + 0x128) = 0;
    LAB_005440d4:
      *(uint64_t *)(arg1 + 0x360) = 0;
      png_free(arg1, __src);
      puVar6 = (uint32_t *)png_malloc(arg1, 0x20);
      *puVar6 = 0;
      *(char **)(puVar6 + 4) = pcVar5 + __n;
      *(char **)(puVar6 + 2) = pcVar5;
      iVar7 = png_set_text_2(arg1, arg2, puVar6, 1);
      png_free(arg1, pcVar5);
      png_free(arg1, puVar6);
      if (iVar7 == 0) {
        return;
      }
      png_warning(arg1, "Insufficient memory to store text chunk.");
      return;
    }
    lVar1 = arg1 + 0x120;
    __n_00 = 0;
    pcVar5 = (char *)0x0;
    do {
      uVar3 = inflate(lVar1, 1);
      if ((1 < uVar3) || (((char)uVar3 == '\0' && (*(int *)(arg1 + 0x140) != 0))))
        break;
      iVar7 = (int)*(uint64_t *)(arg1 + 0x198) - *(int *)(arg1 + 0x140);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)png_malloc(arg1, iVar7 + 1 + (int)__n);
        memcpy(pcVar5 + __n, *(void **)(arg1 + 400),
               *(long *)(arg1 + 0x198) - (ulong) * (uint *)(arg1 + 0x140));
        memcpy(pcVar5, __src, __n);
        __n_00 = (__n - *(uint *)(arg1 + 0x140)) + *(long *)(arg1 + 0x198);
        pcVar5[__n_00] = '\0';
      } else {
        __dest = (char *)png_malloc(arg1, iVar7 + 1 + (int)__n_00);
        memcpy(__dest, pcVar5, __n_00);
        png_free(arg1, pcVar5);
        memcpy(__dest + __n_00, *(void **)(arg1 + 400),
               *(long *)(arg1 + 0x198) - (ulong) * (uint *)(arg1 + 0x140));
        __n_00 = (__n_00 - *(uint *)(arg1 + 0x140)) + *(long *)(arg1 + 0x198);
        __dest[__n_00] = '\0';
        pcVar5 = __dest;
      }
      if (uVar3 == 1) {
        inflateReset(lVar1);
        *(uint32_t *)(arg1 + 0x128) = 0;
        goto LAB_005440d4;
      }
      *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 400);
      *(int *)(arg1 + 0x140) = (int)*(uint64_t *)(arg1 + 0x198);
    } while (*(int *)(arg1 + 0x128) != 0);
    inflateReset(lVar1);
    *(uint32_t *)(arg1 + 0x128) = 0;
    *(uint64_t *)(arg1 + 0x360) = 0;
    png_free(arg1, __src);
    __src = pcVar5;
  } else {
    *(uint64_t *)(arg1 + 0x360) = 0;
  }
  png_free(arg1, __src);
  return;
}

/* ======================================================================
 * png_push_handle_unknown  (Ghidra `png_push_handle_unknown` @ 005441c0)
 * Signature: uint8_t png_push_handle_unknown(void)
 * Calls: `png_check_chunk_name`, `png_chunk_error`, `png_crc_read`, `png_free`, `png_handle_as_unknown`, `png_malloc`, `png_set_unknown_chunks`
 * Called by: `png_push_read_chunk`
 */
void png_push_handle_unknown(long arg1, uint64_t arg2, uint arg3)

{
  long lVar1;
  int iVar2;
  uint64_t uVar3;

  lVar1 = arg1 + 0x22c;
  png_check_chunk_name(arg1, lVar1);
  if ((*(byte *)(arg1 + 0x22c) & 0x20) == 0) {
    iVar2 = png_handle_as_unknown(arg1, lVar1);
    if ((iVar2 != 3) && (*(long *)(arg1 + 0x3d0) == 0)) {
      png_chunk_error(arg1, "unknown critical chunk");
    }
  }
  if ((*(byte *)(arg1 + 0x119) & 0x80) == 0)
    goto LAB_0054420e;
  *(uint8_t *)(arg1 + 0x454) = 0;
  *(uint32_t *)(arg1 + 0x450) = *(uint32_t *)(arg1 + 0x22c);
  uVar3 = png_malloc(arg1, arg3);
  *(uint64_t *)(arg1 + 0x458) = uVar3;
  *(ulong *)(arg1 + 0x460) = (ulong)arg3;
  png_crc_read(arg1, uVar3);
  if (*(code **)(arg1 + 0x3d0) == (code *)0x0) {
  LAB_005442ab:
    png_set_unknown_chunks(arg1, arg2, arg1 + 0x450, 1);
  } else {
    iVar2 = (**(code **)(arg1 + 0x3d0))(arg1, arg1 + 0x450);
    if (iVar2 < 0) {
      png_chunk_error(arg1, "error in user chunk");
    } else if (iVar2 == 0) {
      if ((*(byte *)(arg1 + 0x22c) & 0x20) == 0) {
        iVar2 = png_handle_as_unknown(arg1, lVar1);
        if (iVar2 != 3) {
          png_chunk_error(arg1, "unknown critical chunk");
        }
      }
      goto LAB_005442ab;
    }
  }
  png_free(arg1, *(uint64_t *)(arg1 + 0x458));
  *(uint64_t *)(arg1 + 0x458) = 0;
  arg3 = 0;
LAB_0054420e:
  *(uint32_t *)(arg1 + 0x348) = 3;
  *(uint *)(arg1 + 0x324) = arg3;
  return;
}

/* ======================================================================
 * png_push_read_chunk  (Ghidra `png_push_read_chunk` @ 00544360)
 * Signature: uint8_t png_push_read_chunk(void)
 * Calls: `memcmp`, `png_crc_read`, `png_error`, `png_get_uint_31`, `png_handle_IEND`, `png_handle_IHDR`, `png_handle_PLTE`, `png_handle_as_unknown`, `png_handle_bKGD`, `png_handle_cHRM` (+19 more)
 * Called by: `png_process_data`, `png_process_some_data`
 */
void png_push_read_chunk(long arg1, uint64_t arg2)

{
  void *__s1;
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint8_t auStack_38[24];

  uVar5 = *(uint *)(arg1 + 0x114);
  __s1 = (void *)(arg1 + 0x22c);
  if ((uVar5 & 0x100) == 0) {
    if (*(ulong *)(arg1 + 0x338) < 8)
      goto LAB_005444f8;
    png_push_fill_buffer(arg1, auStack_38, 4);
    uVar1 = png_get_uint_31(arg1, auStack_38);
    *(uint32_t *)(arg1 + 800) = uVar1;
    png_reset_crc(arg1);
    png_crc_read(arg1, __s1, 4);
    uVar5 = *(uint *)(arg1 + 0x114) | 0x100;
    *(uint *)(arg1 + 0x114) = uVar5;
  }
  iVar2 = memcmp(__s1, &png_IDAT, 4);
  if ((iVar2 == 0) && ((uVar5 & 8) != 0)) {
    *(uint *)(arg1 + 0x114) = uVar5 | 0x2000;
  }
  iVar2 = memcmp(__s1, &png_IHDR, 4);
  if (iVar2 == 0) {
    if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
      png_handle_IHDR(arg1, arg2);
      uVar5 = *(uint *)(arg1 + 0x114);
      goto LAB_0054444e;
    }
    goto LAB_005444f8;
  }
  iVar2 = memcmp(__s1, &png_IEND, 4);
  if (iVar2 == 0) {
    if (*(ulong *)(arg1 + 0x338) < (ulong)(*(int *)(arg1 + 800) + 4))
      goto LAB_005444f8;
    png_handle_IEND(arg1, arg2);
    *(uint32_t *)(arg1 + 0x348) = 6;
    if (*(code **)(arg1 + 0x2f8) != (code *)0x0) {
      (**(code **)(arg1 + 0x2f8))(arg1, arg2);
      uVar5 = *(uint *)(arg1 + 0x114);
      goto LAB_0054444e;
    }
  } else {
    iVar2 = png_handle_as_unknown(arg1, __s1);
    if (iVar2 != 0) {
      iVar2 = *(int *)(arg1 + 800);
      if (*(ulong *)(arg1 + 0x338) < (ulong)(iVar2 + 4))
        goto LAB_005444f8;
      iVar3 = memcmp(__s1, &png_IDAT, 4);
      if (iVar3 == 0) {
        *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 4;
      }
      png_handle_unknown(arg1, arg2, iVar2);
      iVar2 = memcmp(__s1, &png_PLTE, 4);
      if (iVar2 == 0) {
        uVar5 = *(uint *)(arg1 + 0x114) | 2;
      } else {
        iVar2 = memcmp(__s1, &png_IDAT, 4);
        uVar5 = *(uint *)(arg1 + 0x114);
        if (iVar2 == 0) {
          if ((uVar5 & 1) == 0) {
            png_error(arg1, "Missing IHDR before IDAT");
            uVar5 = *(uint *)(arg1 + 0x114);
          } else if ((*(char *)(arg1 + 0x236) == '\x03') && ((uVar5 & 2) == 0)) {
            png_error(arg1, "Missing PLTE before IDAT");
            uVar5 = *(uint *)(arg1 + 0x114);
          }
        }
      }
      goto LAB_0054444e;
    }
    iVar2 = memcmp(__s1, &png_PLTE, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_PLTE(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
    LAB_005444f8:
      png_push_save_buffer(arg1);
      return;
    }
    iVar2 = memcmp(__s1, &png_IDAT, 4);
    if (iVar2 == 0) {
      uVar5 = *(uint *)(arg1 + 0x114);
      if ((uVar5 & 1) == 0) {
        png_error(arg1, "Missing IHDR before IDAT");
        uVar5 = *(uint *)(arg1 + 0x114);
      } else if ((*(char *)(arg1 + 0x236) == '\x03') && ((uVar5 & 2) == 0)) {
        png_error(arg1, "Missing PLTE before IDAT");
        uVar5 = *(uint *)(arg1 + 0x114);
      }
      if ((uVar5 & 4) != 0) {
        if (((uVar5 & 0x2000) == 0) && (*(int *)(arg1 + 800) == 0)) {
          return;
        }
        if ((uVar5 & 8) != 0) {
          png_error(arg1, "Too many IDAT\'s found");
          uVar5 = *(uint *)(arg1 + 0x114);
        }
      }
      *(uint32_t *)(arg1 + 0x348) = 2;
      *(uint *)(arg1 + 0x114) = uVar5 | 4;
      *(uint32_t *)(arg1 + 0x214) = *(uint32_t *)(arg1 + 800);
      if (*(code **)(arg1 + 0x2e8) != (code *)0x0) {
        (**(code **)(arg1 + 0x2e8))(arg1, arg2);
      }
      *(uint32_t *)(arg1 + 0x140) = *(uint32_t *)(arg1 + 0x1c8);
      *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 0x1e0);
      return;
    }
    iVar2 = memcmp(__s1, &png_gAMA, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_gAMA(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_sBIT, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_sBIT(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_cHRM, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_cHRM(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_sRGB, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_sRGB(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_iCCP, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_iCCP(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_sPLT, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_sPLT(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_tRNS, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_tRNS(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_bKGD, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_bKGD(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_hIST, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_hIST(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_pHYs, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_pHYs(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_oFFs, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_oFFs(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_pCAL, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_pCAL(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_sCAL, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_sCAL(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_tIME, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_handle_tIME(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_tEXt, 4);
    if (iVar2 == 0) {
      if ((ulong)(*(int *)(arg1 + 800) + 4) <= *(ulong *)(arg1 + 0x338)) {
        png_push_handle_tEXt(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    iVar2 = memcmp(__s1, &png_zTXt, 4);
    uVar4 = (ulong)(*(int *)(arg1 + 800) + 4);
    if (iVar2 == 0) {
      if (uVar4 <= *(ulong *)(arg1 + 0x338)) {
        png_push_handle_zTXt(arg1, arg2);
        uVar5 = *(uint *)(arg1 + 0x114);
        goto LAB_0054444e;
      }
      goto LAB_005444f8;
    }
    if (*(ulong *)(arg1 + 0x338) < uVar4)
      goto LAB_005444f8;
    png_push_handle_unknown(arg1, arg2);
  }
  uVar5 = *(uint *)(arg1 + 0x114);
LAB_0054444e:
  *(uint *)(arg1 + 0x114) = uVar5 & 0xfffffeff;
  return;
}

/* ======================================================================
 * png_process_some_data  (Ghidra `png_process_some_data` @ 00544b70)
 * Signature: uint8_t png_process_some_data(void)
 * Calls: `png_push_crc_finish`, `png_push_read_IDAT`, `png_push_read_chunk`, `png_push_read_sig`, `png_push_read_tEXt`, `png_push_read_zTXt`
 * Called by: (none)
 */
void png_process_some_data(long arg1)

{
  if (arg1 != 0) {
    switch (*(uint32_t *)(arg1 + 0x348)) {
    case 0:
      png_push_read_sig();
      return;
    case 1:
      png_push_read_chunk();
      return;
    case 2:
      png_push_read_IDAT();
      return;
    case 3:
      png_push_crc_finish();
      return;
    case 4:
      png_push_read_tEXt();
      return;
    case 5:
      png_push_read_zTXt();
      return;
    default:
      *(uint64_t *)(arg1 + 0x338) = 0;
    }
  }
  return;
}

/* ======================================================================
 * png_process_data  (Ghidra `png_process_data` @ 00544bd0)
 * Signature: uint8_t png_process_data(void)
 * Calls: `png_push_crc_finish`, `png_push_read_IDAT`, `png_push_read_chunk`, `png_push_read_sig`, `png_push_read_tEXt`, `png_push_read_zTXt`
 * Called by: (none)
 */
void png_process_data(long arg1, long arg2, uint64_t arg3, long arg4)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    *(long *)(arg1 + 0x340) = arg4;
    arg4 = arg4 + *(long *)(arg1 + 0x328);
    *(uint64_t *)(arg1 + 0x318) = arg3;
    *(uint64_t *)(arg1 + 0x310) = arg3;
    *(long *)(arg1 + 0x338) = arg4;
    while (arg4 != 0) {
      switch (*(uint32_t *)(arg1 + 0x348)) {
      case 0:
        png_push_read_sig(arg1, arg2);
        arg4 = *(long *)(arg1 + 0x338);
        break;
      case 1:
        png_push_read_chunk(arg1, arg2);
        arg4 = *(long *)(arg1 + 0x338);
        break;
      case 2:
        png_push_read_IDAT(arg1);
        arg4 = *(long *)(arg1 + 0x338);
        break;
      case 3:
        png_push_crc_finish(arg1);
        arg4 = *(long *)(arg1 + 0x338);
        break;
      case 4:
        png_push_read_tEXt(arg1, arg2);
        arg4 = *(long *)(arg1 + 0x338);
        break;
      case 5:
        png_push_read_zTXt(arg1, arg2);
        arg4 = *(long *)(arg1 + 0x338);
        break;
      default:
        *(uint64_t *)(arg1 + 0x338) = 0;
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * png_push_have_info  (Ghidra `png_push_have_info` @ 00544ce0)
 * Signature: uint8_t png_push_have_info(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_push_have_info(long arg1)

{
  if (*(code **)(arg1 + 0x2e8) != (code *)0x0) {
    /* WARNING: Could not recover jumptable at 0x00544cec. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(arg1 + 0x2e8))();
    return;
  }
  return;
}

/* ======================================================================
 * png_push_have_end  (Ghidra `png_push_have_end` @ 00544d00)
 * Signature: uint8_t png_push_have_end(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_push_have_end(long arg1)

{
  if (*(code **)(arg1 + 0x2f8) != (code *)0x0) {
    /* WARNING: Could not recover jumptable at 0x00544d0c. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(arg1 + 0x2f8))();
    return;
  }
  return;
}

/* ======================================================================
 * png_push_have_row  (Ghidra `png_push_have_row` @ 00544d20)
 * Signature: uint8_t png_push_have_row(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_push_have_row(long arg1, uint64_t arg2)

{
  if (*(code **)(arg1 + 0x2f0) != (code *)0x0) {
    /* WARNING: Could not recover jumptable at 0x00544d39. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(arg1 + 0x2f0))(arg1, arg2, *(uint32_t *)(arg1 + 0x1d0),
                                *(uint8_t *)(arg1 + 0x234));
    return;
  }
  return;
}

/* ======================================================================
 * png_progressive_combine_row  (Ghidra `png_progressive_combine_row` @ 00544d50)
 * Signature: uint8_t png_progressive_combine_row(void)
 * Calls: `png_combine_row`
 * Called by: (none)
 */
void png_progressive_combine_row(long arg1, uint64_t arg2, long arg3)

{
  if ((arg1 != 0) && (arg3 != 0)) {
    png_combine_row(arg1, arg2, (&png_pass_dsp_mask)[*(byte *)(arg1 + 0x234)]);
    return;
  }
  return;
}

/* ======================================================================
 * png_set_progressive_read_fn  (Ghidra `png_set_progressive_read_fn` @ 00544d80)
 * Signature: uint8_t png_set_progressive_read_fn(void)
 * Calls: `png_push_fill_buffer`, `png_set_read_fn`
 * Called by: (none)
 */
void png_set_progressive_read_fn(long arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4,
                                 uint64_t arg5)

{
  if (arg1 != 0) {
    *(uint64_t *)(arg1 + 0x2e8) = arg3;
    *(uint64_t *)(arg1 + 0x2f0) = arg4;
    *(uint64_t *)(arg1 + 0x2f8) = arg5;
    png_set_read_fn(arg1, arg2, png_push_fill_buffer);
    return;
  }
  return;
}

/* ======================================================================
 * png_get_progressive_ptr  (Ghidra `png_get_progressive_ptr` @ 00544db0)
 * Signature: uint8_t png_get_progressive_ptr(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_progressive_ptr(long arg1)

{
  if (arg1 != 0) {
    return *(uint64_t *)(arg1 + 0xf0);
  }
  return 0;
}

/* ======================================================================
 * png_read_init_2_constprop_0  (Ghidra `png_read_init_2.constprop.0` @ 00544dd0)
 * Signature: uint8_t png_read_init_2.constprop.0(void)
 * Calls: `png_create_struct`, `png_destroy_struct`, `png_error`, `png_malloc`, `png_set_read_fn`, `png_warning`, `png_zalloc`, `png_zfree`, `snprintf`
 * Called by: (none)
 */
void png_read_init_2_constprop_0(uint64_t *arg1)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  ulong uVar7;
  char *pcVar8;
  uint64_t *puVar9;
  bool bVar10;
  byte bVar11;
  char acStack_e8[216];

  bVar11 = 0;
  if (arg1 == (uint64_t *)0x0) {
    return;
  }
  arg1[0x1a] = 0;
  snprintf(acStack_e8, 0x50, "Application was compiled with png.h from libpng-%.20s",
           "1.0.6 or earlier");
  png_warning(arg1, acStack_e8);
  snprintf(acStack_e8, 0x50, "Application  is  running with png.c from libpng-%.20s",
           &png_libpng_ver);
  png_warning(arg1, acStack_e8);
  arg1[0x19] = 0;
  *(uint32_t *)(arg1 + 0x23) = 0;
  png_error(arg1, "The png struct allocated by the application for reading is too small.");
  arg1[0x19] = 0;
  *(uint32_t *)(arg1 + 0x23) = 0;
  png_error(arg1, "The info struct allocated by application for reading is too small.");
  lVar4 = 0;
  cVar6 = s_1_0_6_or_earlier_005d20c8[0];
  if (s_1_0_6_or_earlier_005d20c8[0] == png_libpng_ver) {
    do {
      if (cVar6 == '\0')
        goto LAB_00544ebf;
      cVar6 = "1.0.6 or earlier"[lVar4 + 1];
      pcVar8 = &DAT_005d1d11 /* R:1.0139542538922797e-08f */ + lVar4;
      lVar4 = lVar4 + 1;
    } while (cVar6 == *pcVar8);
  }
  arg1[0x1a] = 0;
  png_warning(arg1, "Application uses deprecated png_read_init() and should be recompiled.");
LAB_00544ebf:
  puVar9 = arg1;
  pcVar8 = acStack_e8;
  for (lVar4 = 0x19; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(uint64_t *)pcVar8 = *puVar9;
    puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
    pcVar8 = (char *)((long)pcVar8 + ((ulong)bVar11 * -2 + 1) * 8);
  }
  png_destroy_struct(arg1);
  puVar2 = (uint64_t *)png_create_struct(1);
  bVar10 = ((ulong)puVar2 & 1) != 0;
  uVar7 = 0x470;
  puVar9 = puVar2;
  if (bVar10) {
    *(uint8_t *)puVar2 = 0;
    puVar9 = (uint64_t *)((long)puVar2 + 1);
    uVar7 = 0x46f;
  }
  if (((ulong)puVar9 & 2) != 0) {
    *(uint16_t *)puVar9 = 0;
    uVar7 = (ulong)((int)uVar7 - 2);
    puVar9 = (uint64_t *)((long)puVar9 + 2);
  }
  if (((ulong)puVar9 & 4) != 0) {
    *(uint32_t *)puVar9 = 0;
    uVar7 = (ulong)((int)uVar7 - 4);
    puVar9 = (uint64_t *)((long)puVar9 + 4);
  }
  for (uVar5 = uVar7 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
  }
  if ((uVar7 & 4) != 0) {
    *(uint32_t *)puVar9 = 0;
    puVar9 = (uint64_t *)((long)puVar9 + 4);
  }
  if ((uVar7 & 2) != 0) {
    *(uint16_t *)puVar9 = 0;
    puVar9 = (uint64_t *)((long)puVar9 + 2);
  }
  if (bVar10) {
    *(uint8_t *)puVar9 = 0;
  }
  pcVar8 = acStack_e8;
  puVar9 = puVar2;
  for (lVar4 = 0x19; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar9 = *(uint64_t *)pcVar8;
    pcVar8 = (char *)((long)pcVar8 + ((ulong)bVar11 * -2 + 1) * 8);
    puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
  }
  *(uint32_t *)((long)puVar2 + 0x444) = 1000000;
  *(uint32_t *)(puVar2 + 0x89) = 1000000;
  puVar2[0x33] = 0x2000;
  uVar3 = png_malloc(puVar2, 0x2000);
  puVar2[0x32] = uVar3;
  puVar2[0x2c] = png_zalloc;
  puVar2[0x2d] = png_zfree;
  puVar2[0x2e] = puVar2;
  iVar1 = inflateInit_(puVar2 + 0x24, "1.2.3", 0x70);
  if (iVar1 == -4) {
  LAB_00545050:
    png_error(puVar2, "zlib memory");
  } else {
    if (iVar1 < -3) {
      if (iVar1 == -6) {
        png_error(puVar2, "zlib version");
        goto LAB_00544fc4;
      }
    } else {
      if (iVar1 == -2)
        goto LAB_00545050;
      if (iVar1 == 0)
        goto LAB_00544fc4;
    }
    png_error(puVar2, "Unknown zlib error");
  }
LAB_00544fc4:
  puVar2[0x27] = puVar2[0x32];
  *(int *)(puVar2 + 0x28) = (int)puVar2[0x33];
  png_set_read_fn(puVar2, 0, 0);
  return;
}

/* ======================================================================
 * png_create_read_struct_2_constprop_2  (Ghidra `png_create_read_struct_2.constprop.2` @ 005450a0)
 * Signature: uint8_t png_create_read_struct_2.constprop.2(void)
 * Calls: `abort`, `png_create_struct_2`, `png_destroy_struct_2`, `png_error`, `png_free`, `png_malloc`, `png_set_error_fn`, `png_set_mem_fn`, `png_set_read_fn`, `png_warning` (+3 more)
 * Called by: (none)
 */
__jmp_buf_tag *png_create_read_struct_2_constprop_2(char *arg1, uint64_t arg2, uint64_t arg3,
                                                    uint64_t arg4)

{
  char cVar1;
  int iVar2;
  __jmp_buf_tag *__env;
  long lVar3;
  uint uVar4;
  char local_58[88];

  __env = (__jmp_buf_tag *)png_create_struct_2(1, 0, 0);
  if (__env == (__jmp_buf_tag *)0x0) {
    return (__jmp_buf_tag *)0x0;
  }
  *(uint32_t *)((long)__env[5].__saved_mask.__val + 0x14) = 1000000;
  *(uint32_t *)(__env[5].__saved_mask.__val + 3) = 1000000;
  iVar2 = _setjmp(__env);
  if (iVar2 != 0) {
    png_free(__env, __env[2].__jmpbuf[0]);
    __env[2].__jmpbuf[0] = 0;
    png_destroy_struct_2(__env, 0, 0);
    return (__jmp_buf_tag *)0x0;
  }
  png_set_mem_fn(__env, 0, 0, 0);
  png_set_error_fn(__env, arg2, arg3, arg4);
  uVar4 = (uint)__env[1].__saved_mask.__val[1];
  if (arg1 != (char *)0x0) {
    lVar3 = 0;
    do {
      cVar1 = (&png_libpng_ver)[lVar3];
      if (arg1[lVar3] != cVar1) {
        uVar4 = uVar4 | 0x20000;
        *(uint *)(__env[1].__saved_mask.__val + 1) = uVar4;
      }
      lVar3 = lVar3 + 1;
    } while (cVar1 != '\0');
    if ((uVar4 & 0x20000) != 0)
      goto LAB_00545175;
    goto LAB_005451fe;
  }
  *(uint *)(__env[1].__saved_mask.__val + 1) = uVar4 | 0x20000;
LAB_00545175:
  if (arg1 == (char *)0x0) {
  LAB_005451ba:
    snprintf(local_58, 0x50, "Application  is  running with png.c from libpng-%.20s",
             &png_libpng_ver);
    png_warning(__env, local_58);
    *(uint32_t *)(__env[1].__saved_mask.__val + 1) = 0;
    png_error(__env, "Incompatible libpng version in application and library");
  } else {
    cVar1 = *arg1;
    if (cVar1 != png_libpng_ver) {
    LAB_00545191:
      snprintf(local_58, 0x50, "Application was compiled with png.h from libpng-%.20s", arg1);
      png_warning(__env, local_58);
      goto LAB_005451ba;
    }
    if (cVar1 == '1') {
      if (arg1[2] != DAT_005d1d12 /* R:6.637739033976686e-07f */)
        goto LAB_00545191;
    } else if ((cVar1 == '0') && (arg1[2] < '9'))
      goto LAB_00545191;
  }
LAB_005451fe:
  __env[2].__jmpbuf[1] = 0x2000;
  lVar3 = png_malloc(__env, 0x2000);
  __env[2].__jmpbuf[0] = lVar3;
  __env[1].__saved_mask.__val[10] = (ulong)png_zalloc;
  __env[1].__saved_mask.__val[0xb] = (ulong)png_zfree;
  __env[1].__saved_mask.__val[0xc] = (ulong)__env;
  iVar2 = inflateInit_(__env[1].__saved_mask.__val + 2, "1.2.3", 0x70);
  if (iVar2 == -4) {
  LAB_005452d0:
    png_error(__env, "zlib memory error");
  } else {
    if (iVar2 < -3) {
      if (iVar2 == -6) {
        png_error(__env, "zlib version error");
        goto LAB_00545275;
      }
    } else {
      if (iVar2 == -2)
        goto LAB_005452d0;
      if (iVar2 == 0)
        goto LAB_00545275;
    }
    png_error(__env, "Unknown zlib error");
  }
LAB_00545275:
  __env[1].__saved_mask.__val[5] = __env[2].__jmpbuf[0];
  *(int *)(__env[1].__saved_mask.__val + 6) = (int)__env[2].__jmpbuf[1];
  png_set_read_fn(__env, 0, 0);
  iVar2 = _setjmp(__env);
  if (iVar2 == 0) {
    return __env;
  }
  /* WARNING: Subroutine does not return */
  abort();
}

/* ======================================================================
 * png_create_read_struct  (Ghidra `png_create_read_struct` @ 00545390)
 * Signature: uint8_t png_create_read_struct(void)
 * Calls: `abort`, `png_create_struct_2`, `png_destroy_struct_2`, `png_error`, `png_free`, `png_malloc`, `png_set_error_fn`, `png_set_mem_fn`, `png_set_read_fn`, `png_warning` (+3 more)
 * Called by: `gfxCreateTexture`
 */
__jmp_buf_tag *png_create_read_struct(char *arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)

{
  char cVar1;
  int iVar2;
  __jmp_buf_tag *__env;
  long lVar3;
  uint uVar4;
  char acStack_58[88];

  __env = (__jmp_buf_tag *)png_create_struct_2(1, 0, 0);
  if (__env == (__jmp_buf_tag *)0x0) {
    return (__jmp_buf_tag *)0x0;
  }
  *(uint32_t *)((long)__env[5].__saved_mask.__val + 0x14) = 1000000;
  *(uint32_t *)(__env[5].__saved_mask.__val + 3) = 1000000;
  iVar2 = _setjmp(__env);
  if (iVar2 != 0) {
    png_free(__env, __env[2].__jmpbuf[0]);
    __env[2].__jmpbuf[0] = 0;
    png_destroy_struct_2(__env, 0, 0);
    return (__jmp_buf_tag *)0x0;
  }
  png_set_mem_fn(__env, 0, 0, 0);
  png_set_error_fn(__env, arg2, arg3, arg4);
  uVar4 = (uint)__env[1].__saved_mask.__val[1];
  if (arg1 != (char *)0x0) {
    lVar3 = 0;
    do {
      cVar1 = (&png_libpng_ver)[lVar3];
      if (arg1[lVar3] != cVar1) {
        uVar4 = uVar4 | 0x20000;
        *(uint *)(__env[1].__saved_mask.__val + 1) = uVar4;
      }
      lVar3 = lVar3 + 1;
    } while (cVar1 != '\0');
    if ((uVar4 & 0x20000) != 0)
      goto LAB_00545175;
    goto LAB_005451fe;
  }
  *(uint *)(__env[1].__saved_mask.__val + 1) = uVar4 | 0x20000;
LAB_00545175:
  if (arg1 == (char *)0x0) {
  LAB_005451ba:
    snprintf(acStack_58, 0x50, "Application  is  running with png.c from libpng-%.20s",
             &png_libpng_ver);
    png_warning(__env, acStack_58);
    *(uint32_t *)(__env[1].__saved_mask.__val + 1) = 0;
    png_error(__env, "Incompatible libpng version in application and library");
  } else {
    cVar1 = *arg1;
    if (cVar1 != png_libpng_ver) {
    LAB_00545191:
      snprintf(acStack_58, 0x50, "Application was compiled with png.h from libpng-%.20s", arg1);
      png_warning(__env, acStack_58);
      goto LAB_005451ba;
    }
    if (cVar1 == '1') {
      if (arg1[2] != DAT_005d1d12 /* R:6.637739033976686e-07f */)
        goto LAB_00545191;
    } else if ((cVar1 == '0') && (arg1[2] < '9'))
      goto LAB_00545191;
  }
LAB_005451fe:
  __env[2].__jmpbuf[1] = 0x2000;
  lVar3 = png_malloc(__env, 0x2000);
  __env[2].__jmpbuf[0] = lVar3;
  __env[1].__saved_mask.__val[10] = (ulong)png_zalloc;
  __env[1].__saved_mask.__val[0xb] = (ulong)png_zfree;
  __env[1].__saved_mask.__val[0xc] = (ulong)__env;
  iVar2 = inflateInit_(__env[1].__saved_mask.__val + 2, "1.2.3", 0x70);
  if (iVar2 == -4) {
  LAB_005452d0:
    png_error(__env, "zlib memory error");
  } else {
    if (iVar2 < -3) {
      if (iVar2 == -6) {
        png_error(__env, "zlib version error");
        goto LAB_00545275;
      }
    } else {
      if (iVar2 == -2)
        goto LAB_005452d0;
      if (iVar2 == 0)
        goto LAB_00545275;
    }
    png_error(__env, "Unknown zlib error");
  }
LAB_00545275:
  __env[1].__saved_mask.__val[5] = __env[2].__jmpbuf[0];
  *(int *)(__env[1].__saved_mask.__val + 6) = (int)__env[2].__jmpbuf[1];
  png_set_read_fn(__env, 0, 0);
  iVar2 = _setjmp(__env);
  if (iVar2 == 0) {
    return __env;
  }
  /* WARNING: Subroutine does not return */
  abort();
}

/* ======================================================================
 * png_create_read_struct_2  (Ghidra `png_create_read_struct_2` @ 005453a0)
 * Signature: uint8_t png_create_read_struct_2(void)
 * Calls: `abort`, `png_create_struct_2`, `png_destroy_struct_2`, `png_error`, `png_free`, `png_malloc`, `png_set_error_fn`, `png_set_mem_fn`, `png_set_read_fn`, `png_warning` (+3 more)
 * Called by: (none)
 */
__jmp_buf_tag *png_create_read_struct_2(char *arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4,
                                        uint64_t arg5, uint64_t arg6, uint64_t arg7)

{
  char cVar1;
  int iVar2;
  __jmp_buf_tag *__env;
  long lVar3;
  uint uVar4;
  char local_58[88];

  __env = (__jmp_buf_tag *)png_create_struct_2(1, arg6, arg5);
  if (__env == (__jmp_buf_tag *)0x0) {
    return (__jmp_buf_tag *)0x0;
  }
  *(uint32_t *)((long)__env[5].__saved_mask.__val + 0x14) = 1000000;
  *(uint32_t *)(__env[5].__saved_mask.__val + 3) = 1000000;
  iVar2 = _setjmp(__env);
  if (iVar2 != 0) {
    png_free(__env, __env[2].__jmpbuf[0]);
    __env[2].__jmpbuf[0] = 0;
    png_destroy_struct_2(__env, arg7, arg5);
    return (__jmp_buf_tag *)0x0;
  }
  png_set_mem_fn(__env, arg5, arg6, arg7);
  png_set_error_fn(__env, arg2, arg3, arg4);
  uVar4 = (uint)__env[1].__saved_mask.__val[1];
  if (arg1 != (char *)0x0) {
    lVar3 = 0;
    do {
      cVar1 = (&png_libpng_ver)[lVar3];
      if (arg1[lVar3] != cVar1) {
        uVar4 = uVar4 | 0x20000;
        *(uint *)(__env[1].__saved_mask.__val + 1) = uVar4;
      }
      lVar3 = lVar3 + 1;
    } while (cVar1 != '\0');
    if ((uVar4 & 0x20000) != 0)
      goto LAB_00545495;
    goto LAB_0054551e;
  }
  *(uint *)(__env[1].__saved_mask.__val + 1) = uVar4 | 0x20000;
LAB_00545495:
  if (arg1 == (char *)0x0) {
  LAB_005454da:
    snprintf(local_58, 0x50, "Application  is  running with png.c from libpng-%.20s",
             &png_libpng_ver);
    png_warning(__env, local_58);
    *(uint32_t *)(__env[1].__saved_mask.__val + 1) = 0;
    png_error(__env, "Incompatible libpng version in application and library");
  } else {
    cVar1 = *arg1;
    if (cVar1 != png_libpng_ver) {
    LAB_005454b1:
      snprintf(local_58, 0x50, "Application was compiled with png.h from libpng-%.20s", arg1);
      png_warning(__env, local_58);
      goto LAB_005454da;
    }
    if (cVar1 == '1') {
      if (arg1[2] != DAT_005d1d12 /* R:6.637739033976686e-07f */)
        goto LAB_005454b1;
    } else if ((cVar1 == '0') && (arg1[2] < '9'))
      goto LAB_005454b1;
  }
LAB_0054551e:
  __env[2].__jmpbuf[1] = 0x2000;
  lVar3 = png_malloc(__env, 0x2000);
  __env[2].__jmpbuf[0] = lVar3;
  __env[1].__saved_mask.__val[10] = (ulong)png_zalloc;
  __env[1].__saved_mask.__val[0xb] = (ulong)png_zfree;
  __env[1].__saved_mask.__val[0xc] = (ulong)__env;
  iVar2 = inflateInit_(__env[1].__saved_mask.__val + 2, "1.2.3", 0x70);
  if (iVar2 == -4) {
  LAB_005455f0:
    png_error(__env, "zlib memory error");
  } else {
    if (iVar2 < -3) {
      if (iVar2 == -6) {
        png_error(__env, "zlib version error");
        goto LAB_00545595;
      }
    } else {
      if (iVar2 == -2)
        goto LAB_005455f0;
      if (iVar2 == 0)
        goto LAB_00545595;
    }
    png_error(__env, "Unknown zlib error");
  }
LAB_00545595:
  __env[1].__saved_mask.__val[5] = __env[2].__jmpbuf[0];
  *(int *)(__env[1].__saved_mask.__val + 6) = (int)__env[2].__jmpbuf[1];
  png_set_read_fn(__env, 0, 0);
  iVar2 = _setjmp(__env);
  if (iVar2 == 0) {
    return __env;
  }
  /* WARNING: Subroutine does not return */
  abort();
}

/* ======================================================================
 * png_read_init  (Ghidra `png_read_init` @ 005456b0)
 * Signature: uint8_t png_read_init(void)
 * Calls: `png_create_struct`, `png_destroy_struct`, `png_error`, `png_malloc`, `png_set_read_fn`, `png_warning`, `png_zalloc`, `png_zfree`, `snprintf`
 * Called by: (none)
 */
void png_read_init(uint64_t *arg1)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  ulong uVar7;
  char *pcVar8;
  uint64_t *puVar9;
  bool bVar10;
  byte bVar11;
  char acStack_e8[216];

  bVar11 = 0;
  if (arg1 == (uint64_t *)0x0) {
    return;
  }
  arg1[0x1a] = 0;
  snprintf(acStack_e8, 0x50, "Application was compiled with png.h from libpng-%.20s",
           "1.0.6 or earlier");
  png_warning(arg1, acStack_e8);
  snprintf(acStack_e8, 0x50, "Application  is  running with png.c from libpng-%.20s",
           &png_libpng_ver);
  png_warning(arg1, acStack_e8);
  arg1[0x19] = 0;
  *(uint32_t *)(arg1 + 0x23) = 0;
  png_error(arg1, "The png struct allocated by the application for reading is too small.");
  arg1[0x19] = 0;
  *(uint32_t *)(arg1 + 0x23) = 0;
  png_error(arg1, "The info struct allocated by application for reading is too small.");
  lVar4 = 0;
  cVar6 = s_1_0_6_or_earlier_005d20c8[0];
  if (s_1_0_6_or_earlier_005d20c8[0] == png_libpng_ver) {
    do {
      if (cVar6 == '\0')
        goto LAB_00544ebf;
      cVar6 = "1.0.6 or earlier"[lVar4 + 1];
      pcVar8 = &DAT_005d1d11 /* R:1.0139542538922797e-08f */ + lVar4;
      lVar4 = lVar4 + 1;
    } while (cVar6 == *pcVar8);
  }
  arg1[0x1a] = 0;
  png_warning(arg1, "Application uses deprecated png_read_init() and should be recompiled.");
LAB_00544ebf:
  puVar9 = arg1;
  pcVar8 = acStack_e8;
  for (lVar4 = 0x19; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(uint64_t *)pcVar8 = *puVar9;
    puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
    pcVar8 = (char *)((long)pcVar8 + ((ulong)bVar11 * -2 + 1) * 8);
  }
  png_destroy_struct(arg1);
  puVar2 = (uint64_t *)png_create_struct(1);
  bVar10 = ((ulong)puVar2 & 1) != 0;
  uVar7 = 0x470;
  puVar9 = puVar2;
  if (bVar10) {
    *(uint8_t *)puVar2 = 0;
    puVar9 = (uint64_t *)((long)puVar2 + 1);
    uVar7 = 0x46f;
  }
  if (((ulong)puVar9 & 2) != 0) {
    *(uint16_t *)puVar9 = 0;
    uVar7 = (ulong)((int)uVar7 - 2);
    puVar9 = (uint64_t *)((long)puVar9 + 2);
  }
  if (((ulong)puVar9 & 4) != 0) {
    *(uint32_t *)puVar9 = 0;
    uVar7 = (ulong)((int)uVar7 - 4);
    puVar9 = (uint64_t *)((long)puVar9 + 4);
  }
  for (uVar5 = uVar7 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
  }
  if ((uVar7 & 4) != 0) {
    *(uint32_t *)puVar9 = 0;
    puVar9 = (uint64_t *)((long)puVar9 + 4);
  }
  if ((uVar7 & 2) != 0) {
    *(uint16_t *)puVar9 = 0;
    puVar9 = (uint64_t *)((long)puVar9 + 2);
  }
  if (bVar10) {
    *(uint8_t *)puVar9 = 0;
  }
  pcVar8 = acStack_e8;
  puVar9 = puVar2;
  for (lVar4 = 0x19; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar9 = *(uint64_t *)pcVar8;
    pcVar8 = (char *)((long)pcVar8 + ((ulong)bVar11 * -2 + 1) * 8);
    puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
  }
  *(uint32_t *)((long)puVar2 + 0x444) = 1000000;
  *(uint32_t *)(puVar2 + 0x89) = 1000000;
  puVar2[0x33] = 0x2000;
  uVar3 = png_malloc(puVar2, 0x2000);
  puVar2[0x32] = uVar3;
  puVar2[0x2c] = png_zalloc;
  puVar2[0x2d] = png_zfree;
  puVar2[0x2e] = puVar2;
  iVar1 = inflateInit_(puVar2 + 0x24, "1.2.3", 0x70);
  if (iVar1 == -4) {
  LAB_00545050:
    png_error(puVar2, "zlib memory");
  } else {
    if (iVar1 < -3) {
      if (iVar1 == -6) {
        png_error(puVar2, "zlib version");
        goto LAB_00544fc4;
      }
    } else {
      if (iVar1 == -2)
        goto LAB_00545050;
      if (iVar1 == 0)
        goto LAB_00544fc4;
    }
    png_error(puVar2, "Unknown zlib error");
  }
LAB_00544fc4:
  puVar2[0x27] = puVar2[0x32];
  *(int *)(puVar2 + 0x28) = (int)puVar2[0x33];
  png_set_read_fn(puVar2, 0, 0);
  return;
}

/* ======================================================================
 * png_read_init_3  (Ghidra `png_read_init_3` @ 005456c0)
 * Signature: uint8_t png_read_init_3(void)
 * Calls: `png_create_struct`, `png_destroy_struct`, `png_error`, `png_malloc`, `png_set_read_fn`, `png_warning`, `png_zalloc`, `png_zfree`
 * Called by: `png_read_init_2`
 */
void png_read_init_3(uint64_t *arg1, long arg2, ulong arg3)

{
  char *pcVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  bool bVar10;
  byte bVar11;
  uint64_t auStack_f8[27];

  bVar11 = 0;
  puVar4 = (uint64_t *)*arg1;
  if (puVar4 == (uint64_t *)0x0) {
    return;
  }
  lVar5 = 0;
  do {
    pcVar1 = (char *)(arg2 + lVar5);
    if (*pcVar1 != (&png_libpng_ver)[lVar5]) {
      puVar4[0x1a] = 0;
      png_warning(puVar4, "Application uses deprecated png_read_init() and should be recompiled.");
      break;
    }
    lVar5 = lVar5 + 1;
  } while (*pcVar1 != '\0');
  puVar9 = puVar4;
  puVar8 = auStack_f8;
  for (lVar5 = 0x19; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
    puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
  }
  if (arg3 < 0x470) {
    png_destroy_struct(puVar4);
    puVar4 = (uint64_t *)png_create_struct(1);
    *arg1 = puVar4;
  }
  bVar10 = ((ulong)puVar4 & 1) != 0;
  uVar7 = 0x470;
  puVar9 = puVar4;
  if (bVar10) {
    *(uint8_t *)puVar4 = 0;
    puVar9 = (uint64_t *)((long)puVar4 + 1);
    uVar7 = 0x46f;
  }
  if (((ulong)puVar9 & 2) != 0) {
    *(uint16_t *)puVar9 = 0;
    uVar7 = (ulong)((int)uVar7 - 2);
    puVar9 = (uint64_t *)((long)puVar9 + 2);
  }
  if (((ulong)puVar9 & 4) != 0) {
    *(uint32_t *)puVar9 = 0;
    uVar7 = (ulong)((int)uVar7 - 4);
    puVar9 = (uint64_t *)((long)puVar9 + 4);
  }
  for (uVar6 = uVar7 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
  }
  if ((uVar7 & 4) != 0) {
    *(uint32_t *)puVar9 = 0;
    puVar9 = (uint64_t *)((long)puVar9 + 4);
  }
  if ((uVar7 & 2) != 0) {
    *(uint16_t *)puVar9 = 0;
    puVar9 = (uint64_t *)((long)puVar9 + 2);
  }
  if (bVar10) {
    *(uint8_t *)puVar9 = 0;
  }
  puVar9 = auStack_f8;
  puVar8 = puVar4;
  for (lVar5 = 0x19; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
    puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
  }
  *(uint32_t *)((long)puVar4 + 0x444) = 1000000;
  *(uint32_t *)(puVar4 + 0x89) = 1000000;
  puVar4[0x33] = 0x2000;
  uVar3 = png_malloc(puVar4, 0x2000);
  puVar4[0x32] = uVar3;
  puVar4[0x2c] = png_zalloc;
  puVar4[0x2d] = png_zfree;
  puVar4[0x2e] = puVar4;
  iVar2 = inflateInit_(puVar4 + 0x24, "1.2.3", 0x70);
  if (iVar2 == -4) {
  LAB_005458d0:
    png_error(puVar4, "zlib memory");
  } else {
    if (iVar2 < -3) {
      if (iVar2 == -6) {
        png_error(puVar4, "zlib version");
        goto LAB_00545815;
      }
    } else {
      if (iVar2 == -2)
        goto LAB_005458d0;
      if (iVar2 == 0)
        goto LAB_00545815;
    }
    png_error(puVar4, "Unknown zlib error");
  }
LAB_00545815:
  puVar4[0x27] = puVar4[0x32];
  *(int *)(puVar4 + 0x28) = (int)puVar4[0x33];
  png_set_read_fn(puVar4, 0, 0);
  return;
}

/* ======================================================================
 * png_read_init_2  (Ghidra `png_read_init_2` @ 00545940)
 * Signature: uint8_t png_read_init_2(void)
 * Calls: `png_error`, `png_read_init_3`, `png_warning`, `snprintf`
 * Called by: (none)
 */
void png_read_init_2(long arg1, long arg2, ulong arg3, ulong arg4)

{
  long local_80;
  char local_78[88];

  if (arg1 != 0) {
    local_80 = arg1;
    if ((arg4 < 0x168) || (arg3 < 0x470)) {
      *(uint64_t *)(arg1 + 0xd0) = 0;
      if (arg2 != 0) {
        snprintf(local_78, 0x50, "Application was compiled with png.h from libpng-%.20s", arg2);
        png_warning(local_80, local_78);
      }
      snprintf(local_78, 0x50, "Application  is  running with png.c from libpng-%.20s",
               &png_libpng_ver);
      png_warning(local_80, local_78);
      if (arg3 < 0x470) {
        *(uint64_t *)(local_80 + 200) = 0;
        *(uint32_t *)(local_80 + 0x118) = 0;
        png_error(local_80,
                  "The png struct allocated by the application for reading is too small.");
      }
      if (arg4 < 0x168) {
        *(uint64_t *)(local_80 + 200) = 0;
        *(uint32_t *)(local_80 + 0x118) = 0;
        png_error(local_80, "The info struct allocated by application for reading is too small.");
      }
    }
    png_read_init_3(&local_80, arg2, arg3);
  }
  return;
}

/* ======================================================================
 * png_read_info  (Ghidra `png_read_info` @ 00545a80)
 * Signature: uint8_t png_read_info(void)
 * Calls: `memcmp`, `png_crc_read`, `png_error`, `png_get_uint_31`, `png_handle_IEND`, `png_handle_IHDR`, `png_handle_PLTE`, `png_handle_as_unknown`, `png_handle_bKGD`, `png_handle_cHRM` (+18 more)
 * Called by: `gfxCreateTexture`, `png_read_png`
 */
void png_read_info(long arg1, long arg2)

{
  uint32_t uVar1;
  int iVar2;
  void *__s1;
  ulong uVar3;
  uint8_t auStack_38[16];

  if (arg2 == 0) {
    return;
  }
  if (arg1 != 0) {
    if (*(byte *)(arg1 + 0x23c) < 8) {
      uVar3 = (ulong) * (byte *)(arg1 + 0x23c);
      png_read_data(arg1, arg2 + 0x24 + uVar3, 8 - uVar3);
      *(uint8_t *)(arg1 + 0x23c) = 8;
      iVar2 = png_sig_cmp(arg2 + 0x24, uVar3, 8 - uVar3);
      if (iVar2 != 0) {
        if ((uVar3 < 4) && (iVar2 = png_sig_cmp(arg2 + 0x24, uVar3, 4 - uVar3), iVar2 != 0)) {
          png_error(arg1, "Not a PNG file");
        } else {
          png_error(arg1, "PNG file corrupted by ASCII conversion");
        }
      }
      if (uVar3 < 3) {
        *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 0x1000;
      }
    }
    while (true) {
      while (true) {
        while (true) {
          while (true) {
            while (true) {
              __s1 = (void *)(arg1 + 0x22c);
              png_read_data(arg1, auStack_38, 4);
              uVar1 = png_get_uint_31(arg1, auStack_38);
              png_reset_crc(arg1);
              png_crc_read(arg1, __s1, 4);
              iVar2 = memcmp(__s1, &png_IDAT, 4);
              if ((iVar2 == 0) && ((*(uint *)(arg1 + 0x114) & 8) != 0)) {
                *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 0x2000;
              }
              iVar2 = memcmp(__s1, &png_IHDR, 4);
              if (iVar2 != 0)
                break;
              png_handle_IHDR(arg1, arg2, uVar1);
            }
            iVar2 = memcmp(__s1, &png_IEND, 4);
            if (iVar2 != 0)
              break;
            png_handle_IEND(arg1, arg2, uVar1);
          }
          iVar2 = png_handle_as_unknown(arg1, __s1);
          if (iVar2 == 0)
            break;
          iVar2 = memcmp(__s1, &png_IDAT, 4);
          if (iVar2 == 0) {
            *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 4;
          }
          png_handle_unknown(arg1, arg2, uVar1);
          iVar2 = memcmp(__s1, &png_PLTE, 4);
          if (iVar2 == 0) {
            *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 2;
          } else {
            iVar2 = memcmp(__s1, &png_IDAT, 4);
            if (iVar2 == 0) {
              if ((*(uint *)(arg1 + 0x114) & 1) == 0) {
                png_error(arg1, "Missing IHDR before IDAT");
              } else if ((*(char *)(arg1 + 0x236) == '\x03') &&
                         ((*(uint *)(arg1 + 0x114) & 2) == 0)) {
                png_error(arg1, "Missing PLTE before IDAT");
              }
              return;
            }
          }
        }
        iVar2 = memcmp(__s1, &png_PLTE, 4);
        if (iVar2 != 0)
          break;
        png_handle_PLTE(arg1, arg2, uVar1);
      }
      iVar2 = memcmp(__s1, &png_IDAT, 4);
      if (iVar2 == 0)
        break;
      iVar2 = memcmp(__s1, &png_bKGD, 4);
      if (iVar2 == 0) {
        png_handle_bKGD(arg1, arg2, uVar1);
      } else {
        iVar2 = memcmp(__s1, &png_cHRM, 4);
        if (iVar2 == 0) {
          png_handle_cHRM(arg1, arg2, uVar1);
        } else {
          iVar2 = memcmp(__s1, &png_gAMA, 4);
          if (iVar2 == 0) {
            png_handle_gAMA(arg1, arg2, uVar1);
          } else {
            iVar2 = memcmp(__s1, &png_hIST, 4);
            if (iVar2 == 0) {
              png_handle_hIST(arg1, arg2, uVar1);
            } else {
              iVar2 = memcmp(__s1, &png_oFFs, 4);
              if (iVar2 == 0) {
                png_handle_oFFs(arg1, arg2, uVar1);
              } else {
                iVar2 = memcmp(__s1, &png_pCAL, 4);
                if (iVar2 == 0) {
                  png_handle_pCAL(arg1, arg2, uVar1);
                } else {
                  iVar2 = memcmp(__s1, &png_sCAL, 4);
                  if (iVar2 == 0) {
                    png_handle_sCAL(arg1, arg2, uVar1);
                  } else {
                    iVar2 = memcmp(__s1, &png_pHYs, 4);
                    if (iVar2 == 0) {
                      png_handle_pHYs(arg1, arg2, uVar1);
                    } else {
                      iVar2 = memcmp(__s1, &png_sBIT, 4);
                      if (iVar2 == 0) {
                        png_handle_sBIT(arg1, arg2, uVar1);
                      } else {
                        iVar2 = memcmp(__s1, &png_sRGB, 4);
                        if (iVar2 == 0) {
                          png_handle_sRGB(arg1, arg2, uVar1);
                        } else {
                          iVar2 = memcmp(__s1, &png_iCCP, 4);
                          if (iVar2 == 0) {
                            png_handle_iCCP(arg1, arg2, uVar1);
                          } else {
                            iVar2 = memcmp(__s1, &png_sPLT, 4);
                            if (iVar2 == 0) {
                              png_handle_sPLT(arg1, arg2, uVar1);
                            } else {
                              iVar2 = memcmp(__s1, &png_tEXt, 4);
                              if (iVar2 == 0) {
                                png_handle_tEXt(arg1, arg2, uVar1);
                              } else {
                                iVar2 = memcmp(__s1, &png_tIME, 4);
                                if (iVar2 == 0) {
                                  png_handle_tIME(arg1, arg2, uVar1);
                                } else {
                                  iVar2 = memcmp(__s1, &png_tRNS, 4);
                                  if (iVar2 == 0) {
                                    png_handle_tRNS(arg1, arg2, uVar1);
                                  } else {
                                    iVar2 = memcmp(__s1, &png_zTXt, 4);
                                    if (iVar2 == 0) {
                                      png_handle_zTXt();
                                    } else {
                                      png_handle_unknown(arg1, arg2, uVar1);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if ((*(uint *)(arg1 + 0x114) & 1) == 0) {
      png_error(arg1, "Missing IHDR before IDAT");
      *(uint32_t *)(arg1 + 0x214) = uVar1;
      *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 4;
    } else {
      if ((*(char *)(arg1 + 0x236) == '\x03') && ((*(uint *)(arg1 + 0x114) & 2) == 0)) {
        png_error(arg1, "Missing PLTE before IDAT");
      }
      *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 4;
      *(uint32_t *)(arg1 + 0x214) = uVar1;
    }
    return;
  }
  return;
}

/* ======================================================================
 * png_read_update_info  (Ghidra `png_read_update_info` @ 005460a0)
 * Signature: uint8_t png_read_update_info(void)
 * Calls: `png_read_start_row`, `png_read_transform_info`, `png_warning`
 * Called by: `gfxCreateTexture`
 */
void png_read_update_info(long arg1, uint64_t arg2)

{
  if (arg1 != 0) {
    if ((*(byte *)(arg1 + 0x118) & 0x40) == 0) {
      png_read_start_row();
    } else {
      png_warning(arg1, "Ignoring extra png_read_update_info() call; row buffer not reallocated");
    }
    png_read_transform_info(arg1, arg2);
    return;
  }
  return;
}

/* ======================================================================
 * png_start_read_image  (Ghidra `png_start_read_image` @ 00546100)
 * Signature: uint8_t png_start_read_image(void)
 * Calls: `png_read_start_row`
 * Called by: (none)
 */
void png_start_read_image(long arg1)

{
  if ((arg1 != 0) && ((*(byte *)(arg1 + 0x118) & 0x40) == 0)) {
    png_read_start_row();
    return;
  }
  return;
}

/* ======================================================================
 * png_read_row  (Ghidra `png_read_row` @ 00546120)
 * Signature: uint8_t png_read_row(void)
 * Calls: `inflate`, `memcmp`, `png_combine_row`, `png_crc_finish`, `png_crc_read`, `png_do_read_interlace`, `png_do_read_intrapixel`, `png_do_read_transformations`, `png_error`, `png_get_uint_31` (+6 more)
 * Called by: `png_read_image`, `png_read_png`, `png_read_rows`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_read_row(long arg1, long arg2, long arg3)

{
  byte bVar1;
  ulong uVar2;
  uint32_t uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  uint8_t auStack_48[24];

  if (arg1 != 0) {
    if ((*(byte *)(arg1 + 0x118) & 0x40) == 0) {
      png_read_start_row();
    }
    if ((*(char *)(arg1 + 0x233) != '\0') && ((*(byte *)(arg1 + 0x11c) & 2) != 0)) {
      switch (*(uint8_t *)(arg1 + 0x234)) {
      case 0:
        if ((*(byte *)(arg1 + 0x1d0) & 7) != 0) {
          if (arg3 != 0) {
            png_combine_row(arg1, arg3, png_pass_dsp_mask);
          }
        LAB_0054653d:
          png_read_finish_row(arg1);
          return;
        }
        break;
      case 1:
        if (((*(byte *)(arg1 + 0x1d0) & 7) != 0) || (*(uint *)(arg1 + 0x1b4) < 5)) {
          if (arg3 != 0) {
            png_combine_row(arg1, arg3, _DAT_005d1c44 /* R:2.1019476964872256e-44f */);
          }
          goto LAB_0054653d;
        }
        break;
      case 2:
        if ((*(uint *)(arg1 + 0x1d0) & 7) != 4) {
          if ((arg3 != 0) && ((*(uint *)(arg1 + 0x1d0) & 4) != 0)) {
            png_combine_row(arg1, arg3, _DAT_005d1c48 /* R:3.5733110840282835e-43f */);
          }
          goto LAB_0054653d;
        }
        break;
      case 3:
        if (((*(byte *)(arg1 + 0x1d0) & 3) != 0) || (*(uint *)(arg1 + 0x1b4) < 3)) {
          if (arg3 != 0) {
            png_combine_row(arg1, arg3, _DAT_005d1c4c /* R:7.146622168056567e-44f */);
          }
          goto LAB_0054653d;
        }
        break;
      case 4:
        if ((*(uint *)(arg1 + 0x1d0) & 3) != 2) {
          if ((arg3 != 0) && ((*(uint *)(arg1 + 0x1d0) & 2) != 0)) {
            png_combine_row(arg1, arg3, _DAT_005d1c50 /* R:3.5733110840282835e-43f */);
          }
          goto LAB_0054653d;
        }
        break;
      case 5:
        if (((*(byte *)(arg1 + 0x1d0) & 1) != 0) || (*(uint *)(arg1 + 0x1b4) < 2)) {
          if (arg3 != 0) {
            png_combine_row(arg1, arg3, _DAT_005d1c54 /* R:1.1911036946760945e-43f */);
          }
          goto LAB_0054653d;
        }
        break;
      case 6:
        if ((*(byte *)(arg1 + 0x1d0) & 1) == 0)
          goto LAB_0054653d;
      }
    }
    if ((*(byte *)(arg1 + 0x114) & 4) == 0) {
      png_error(arg1, "Invalid attempt to read row data");
    }
    *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 0x1e0);
    *(uint32_t *)(arg1 + 0x140) = *(uint32_t *)(arg1 + 0x1c8);
    do {
      if (*(int *)(arg1 + 0x128) == 0) {
        while (uVar5 = *(uint *)(arg1 + 0x214), uVar5 == 0) {
          while (true) {
            png_crc_finish(arg1, 0);
            png_read_data(arg1, auStack_48, 4);
            uVar3 = png_get_uint_31(arg1, auStack_48);
            *(uint32_t *)(arg1 + 0x214) = uVar3;
            png_reset_crc(arg1);
            png_crc_read(arg1, (void *)(arg1 + 0x22c), 4);
            iVar4 = memcmp((void *)(arg1 + 0x22c), &png_IDAT, 4);
            if (iVar4 == 0)
              break;
            png_error(arg1);
            uVar5 = *(uint *)(arg1 + 0x214);
            if (uVar5 != 0)
              goto LAB_00546270;
          }
        }
      LAB_00546270:
        uVar2 = *(ulong *)(arg1 + 0x198);
        uVar6 = (ulong)uVar5;
        *(int *)(arg1 + 0x128) = (int)uVar2;
        *(uint64_t *)(arg1 + 0x120) = *(uint64_t *)(arg1 + 400);
        if (uVar6 < uVar2) {
          *(uint *)(arg1 + 0x128) = uVar5;
        } else {
          uVar6 = uVar2 & 0xffffffff;
        }
        png_crc_read(arg1, *(uint64_t *)(arg1 + 400), uVar6);
        *(int *)(arg1 + 0x214) = *(int *)(arg1 + 0x214) - *(int *)(arg1 + 0x128);
      }
      iVar4 = inflate(arg1 + 0x120);
      if (iVar4 == 1) {
        if (((*(int *)(arg1 + 0x140) != 0) || (*(int *)(arg1 + 0x128) != 0)) ||
            (*(int *)(arg1 + 0x214) != 0)) {
          png_error(arg1, "Extra compressed data");
        }
        *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 8;
        *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 0x20;
        break;
      }
      if (iVar4 != 0) {
        png_error(arg1);
      }
    } while (*(int *)(arg1 + 0x140) != 0);
    iVar4 = *(int *)(arg1 + 0x1cc);
    *(int *)(arg1 + 0x208) = iVar4;
    *(uint8_t *)(arg1 + 0x210) = *(uint8_t *)(arg1 + 0x236);
    *(uint8_t *)(arg1 + 0x212) = *(uint8_t *)(arg1 + 0x23a);
    *(uint8_t *)(arg1 + 0x211) = *(uint8_t *)(arg1 + 0x237);
    bVar1 = *(byte *)(arg1 + 0x239);
    *(byte *)(arg1 + 0x213) = bVar1;
    if (bVar1 < 8) {
      uVar5 = (uint)bVar1 * iVar4 + 7 >> 3;
    } else {
      uVar5 = (uint)(bVar1 >> 3) * iVar4;
    }
    pcVar7 = *(char **)(arg1 + 0x1e0);
    *(uint *)(arg1 + 0x20c) = uVar5;
    if (*pcVar7 != '\0') {
      png_read_filter_row(arg1, arg1 + 0x208, pcVar7 + 1, *(long *)(arg1 + 0x1d8) + 1, *pcVar7);
      pcVar7 = *(char **)(arg1 + 0x1e0);
    }
    png_memcpy_check(arg1, *(uint64_t *)(arg1 + 0x1d8), pcVar7, *(int *)(arg1 + 0x1c4) + 1);
    if (((*(byte *)(arg1 + 0x3f0) & 4) != 0) && (*(char *)(arg1 + 0x3f8) == '@')) {
      png_do_read_intrapixel(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
    }
    if ((*(int *)(arg1 + 0x11c) != 0) || ((*(byte *)(arg1 + 0x11a) & 0x40) != 0)) {
      png_do_read_transformations(arg1);
    }
    if ((*(char *)(arg1 + 0x233) == '\0') || ((*(byte *)(arg1 + 0x11c) & 2) == 0)) {
      if (arg2 != 0) {
        png_combine_row(arg1, arg2, 0xff);
      }
      if (arg3 != 0) {
        png_combine_row(arg1, arg3, 0xff);
      }
    } else {
      if (*(byte *)(arg1 + 0x234) < 6) {
        png_do_read_interlace(arg1);
      }
      if (arg3 != 0) {
        png_combine_row(arg1, arg3, (&png_pass_dsp_mask)[*(byte *)(arg1 + 0x234)]);
      }
      if (arg2 != 0) {
        png_combine_row(arg1, arg2,
                        *(uint32_t *)(png_pass_mask + (ulong) * (byte *)(arg1 + 0x234) * 4));
      }
    }
    png_read_finish_row(arg1);
    if (*(code **)(arg1 + 0x2d8) != (code *)0x0) {
      (**(code **)(arg1 + 0x2d8))(arg1, *(uint32_t *)(arg1 + 0x1d0), *(uint8_t *)(arg1 + 0x234));
    }
  }
  return;
}

/* ======================================================================
 * png_read_rows  (Ghidra `png_read_rows` @ 00546660)
 * Signature: uint8_t png_read_rows(void)
 * Calls: `png_read_row`
 * Called by: (none)
 */
void png_read_rows(long arg1, long arg2, long arg3, uint arg4)

{
  long lVar1;
  long lVar2;
  long lVar3;

  if (arg1 != 0) {
    if (arg3 == 0) {
      if ((arg2 != 0) && (arg4 != 0)) {
        lVar3 = 0;
        do {
          lVar1 = lVar3 * 8;
          lVar3 = lVar3 + 1;
          png_read_row(arg1, *(uint64_t *)(arg2 + lVar1), 0);
        } while ((uint)lVar3 < arg4);
      }
    } else if (arg2 != 0) {
      if (arg4 != 0) {
        lVar3 = 0;
        do {
          lVar1 = lVar3 * 8;
          lVar2 = lVar3 * 8;
          lVar3 = lVar3 + 1;
          png_read_row(arg1, *(uint64_t *)(arg2 + lVar2), *(uint64_t *)(arg3 + lVar1));
        } while ((uint)lVar3 < arg4);
        return;
      }
    } else if (arg4 != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 * 8;
        lVar3 = lVar3 + 1;
        png_read_row(arg1, 0, *(uint64_t *)(arg3 + lVar1));
      } while ((uint)lVar3 < arg4);
    }
  }
  return;
}

/* ======================================================================
 * png_read_image  (Ghidra `png_read_image` @ 00546720)
 * Signature: uint8_t png_read_image(void)
 * Calls: `png_read_row`, `png_set_interlace_handling`
 * Called by: `gfxCreateTexture`
 */
void png_read_image(long arg1, long arg2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;

  if (arg1 != 0) {
    iVar3 = png_set_interlace_handling();
    uVar2 = *(uint *)(arg1 + 0x1b8);
    iVar5 = 0;
    *(uint *)(arg1 + 0x1bc) = uVar2;
    if (0 < iVar3) {
      do {
        lVar4 = 0;
        if (uVar2 != 0) {
          do {
            lVar1 = lVar4 * 8;
            lVar4 = lVar4 + 1;
            png_read_row(arg1, *(uint64_t *)(arg2 + lVar1), 0);
          } while ((uint)lVar4 < uVar2);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != iVar3);
    }
  }
  return;
}

/* ======================================================================
 * png_read_end  (Ghidra `png_read_end` @ 005467a0)
 * Signature: uint8_t png_read_end(void)
 * Calls: `memcmp`, `png_crc_finish`, `png_crc_read`, `png_error`, `png_get_uint_31`, `png_handle_IEND`, `png_handle_IHDR`, `png_handle_PLTE`, `png_handle_as_unknown`, `png_handle_bKGD` (+18 more)
 * Called by: `png_read_png`
 */
void png_read_end(long arg1, uint64_t arg2)

{
  void *__s1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint8_t auStack_38[24];

  if (arg1 != 0) {
    __s1 = (void *)(arg1 + 0x22c);
    png_crc_finish(arg1, 0);
    do {
      while (true) {
        png_read_data(arg1, auStack_38, 4);
        iVar2 = png_get_uint_31(arg1, auStack_38);
        png_reset_crc(arg1);
        png_crc_read(arg1, __s1, 4);
        iVar3 = memcmp(__s1, &png_IHDR, 4);
        if (iVar3 != 0)
          break;
        png_handle_IHDR(arg1, arg2, iVar2);
        uVar1 = *(uint *)(arg1 + 0x114);
      LAB_005467e4:
        if ((uVar1 & 0x10) != 0) {
          return;
        }
      }
      iVar3 = memcmp(__s1, &png_IEND, 4);
      if (iVar3 == 0) {
        png_handle_IEND(arg1, arg2, iVar2);
        uVar1 = *(uint *)(arg1 + 0x114);
        goto LAB_005467e4;
      }
      iVar3 = png_handle_as_unknown(arg1, __s1);
      if (iVar3 == 0) {
        iVar3 = memcmp(__s1, &png_IDAT, 4);
        if (iVar3 == 0) {
          if ((iVar2 != 0) || ((*(byte *)(arg1 + 0x115) & 0x20) != 0)) {
            png_error(arg1, "Too many IDAT\'s found");
          }
          png_crc_finish(arg1, iVar2);
          uVar1 = *(uint *)(arg1 + 0x114);
        } else {
          iVar3 = memcmp(__s1, &png_PLTE, 4);
          if (iVar3 == 0) {
            png_handle_PLTE(arg1, arg2, iVar2);
            uVar1 = *(uint *)(arg1 + 0x114);
          } else {
            iVar3 = memcmp(__s1, &png_bKGD, 4);
            if (iVar3 == 0) {
              png_handle_bKGD(arg1, arg2, iVar2);
              uVar1 = *(uint *)(arg1 + 0x114);
            } else {
              iVar3 = memcmp(__s1, &png_cHRM, 4);
              if (iVar3 == 0) {
                png_handle_cHRM(arg1, arg2, iVar2);
                uVar1 = *(uint *)(arg1 + 0x114);
              } else {
                iVar3 = memcmp(__s1, &png_gAMA, 4);
                if (iVar3 == 0) {
                  png_handle_gAMA(arg1, arg2, iVar2);
                  uVar1 = *(uint *)(arg1 + 0x114);
                } else {
                  iVar3 = memcmp(__s1, &png_hIST, 4);
                  if (iVar3 == 0) {
                    png_handle_hIST(arg1, arg2, iVar2);
                    uVar1 = *(uint *)(arg1 + 0x114);
                  } else {
                    iVar3 = memcmp(__s1, &png_oFFs, 4);
                    if (iVar3 == 0) {
                      png_handle_oFFs(arg1, arg2, iVar2);
                      uVar1 = *(uint *)(arg1 + 0x114);
                    } else {
                      iVar3 = memcmp(__s1, &png_pCAL, 4);
                      if (iVar3 == 0) {
                        png_handle_pCAL(arg1, arg2, iVar2);
                        uVar1 = *(uint *)(arg1 + 0x114);
                      } else {
                        iVar3 = memcmp(__s1, &png_sCAL, 4);
                        if (iVar3 == 0) {
                          png_handle_sCAL(arg1, arg2, iVar2);
                          uVar1 = *(uint *)(arg1 + 0x114);
                        } else {
                          iVar3 = memcmp(__s1, &png_pHYs, 4);
                          if (iVar3 == 0) {
                            png_handle_pHYs(arg1, arg2, iVar2);
                            uVar1 = *(uint *)(arg1 + 0x114);
                          } else {
                            iVar3 = memcmp(__s1, &png_sBIT, 4);
                            if (iVar3 == 0) {
                              png_handle_sBIT(arg1, arg2, iVar2);
                              uVar1 = *(uint *)(arg1 + 0x114);
                            } else {
                              iVar3 = memcmp(__s1, &png_sRGB, 4);
                              if (iVar3 == 0) {
                                png_handle_sRGB(arg1, arg2, iVar2);
                                uVar1 = *(uint *)(arg1 + 0x114);
                              } else {
                                iVar3 = memcmp(__s1, &png_iCCP, 4);
                                if (iVar3 == 0) {
                                  png_handle_iCCP(arg1, arg2, iVar2);
                                  uVar1 = *(uint *)(arg1 + 0x114);
                                } else {
                                  iVar3 = memcmp(__s1, &png_sPLT, 4);
                                  if (iVar3 == 0) {
                                    png_handle_sPLT(arg1, arg2, iVar2);
                                    uVar1 = *(uint *)(arg1 + 0x114);
                                  } else {
                                    iVar3 = memcmp(__s1, &png_tEXt, 4);
                                    if (iVar3 == 0) {
                                      png_handle_tEXt(arg1, arg2, iVar2);
                                      uVar1 = *(uint *)(arg1 + 0x114);
                                    } else {
                                      iVar3 = memcmp(__s1, &png_tIME, 4);
                                      if (iVar3 == 0) {
                                        png_handle_tIME(arg1, arg2, iVar2);
                                        uVar1 = *(uint *)(arg1 + 0x114);
                                      } else {
                                        iVar3 = memcmp(__s1, &png_tRNS, 4);
                                        if (iVar3 == 0) {
                                          png_handle_tRNS(arg1, arg2, iVar2);
                                          uVar1 = *(uint *)(arg1 + 0x114);
                                        } else {
                                          iVar3 = memcmp(__s1, &png_zTXt, 4);
                                          if (iVar3 == 0) {
                                            png_handle_zTXt();
                                            uVar1 = *(uint *)(arg1 + 0x114);
                                          } else {
                                            png_handle_unknown(arg1, arg2, iVar2);
                                            uVar1 = *(uint *)(arg1 + 0x114);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_005467e4;
      }
      iVar3 = memcmp(__s1, &png_IDAT, 4);
      if ((iVar3 == 0) && ((iVar2 != 0 || ((*(byte *)(arg1 + 0x115) & 0x20) != 0)))) {
        png_error(arg1, "Too many IDAT\'s found");
      }
      png_handle_unknown(arg1, arg2, iVar2);
      iVar2 = memcmp(__s1, &png_PLTE, 4);
      uVar1 = *(uint *)(arg1 + 0x114);
      if (iVar2 != 0)
        goto LAB_005467e4;
      *(uint *)(arg1 + 0x114) = uVar1 | 2;
    } while ((uVar1 & 0x10) == 0);
  }
  return;
}

/* ======================================================================
 * png_read_destroy  (Ghidra `png_read_destroy` @ 00546cf0)
 * Signature: uint8_t png_read_destroy(void)
 * Calls: `inflateEnd`, `png_free`, `png_info_destroy`, `png_zfree`
 * Called by: `png_destroy_read_struct`
 */
void png_read_destroy(uint64_t *arg1, long arg2, long arg3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  bool bVar14;
  byte bVar15;
  uint64_t auStack_e8[26];

  bVar15 = 0;
  if (arg2 != 0) {
    png_info_destroy();
  }
  if (arg3 != 0) {
    png_info_destroy(arg1, arg3);
  }
  png_free(arg1, arg1[0x32]);
  png_free(arg1, arg1[0x84]);
  png_free(arg1, arg1[0x3b]);
  png_free(arg1, arg1[0x6e]);
  png_free(arg1, arg1[0x6f]);
  png_free(arg1, arg1[0x50]);
  png_free(arg1, arg1[0x51]);
  png_free(arg1, arg1[0x52]);
  uVar9 = *(uint *)(arg1 + 0x78);
  if ((uVar9 & 0x1000) == 0) {
    uVar5 = uVar9 & 0xffffefff;
    *(uint *)(arg1 + 0x78) = uVar5;
  } else {
    png_zfree(arg1, arg1[0x44]);
    uVar9 = *(uint *)(arg1 + 0x78);
    uVar5 = uVar9 & 0xffffefff;
    *(uint *)(arg1 + 0x78) = uVar5;
  }
  if ((uVar9 & 0x2000) == 0) {
    uVar9 = uVar5 & 0xffffdfff;
    *(uint *)(arg1 + 0x78) = uVar9;
  } else {
    png_free(arg1, arg1[0x58]);
    uVar5 = *(uint *)(arg1 + 0x78);
    uVar9 = uVar5 & 0xffffdfff;
    *(uint *)(arg1 + 0x78) = uVar9;
  }
  if ((uVar5 & 8) != 0) {
    png_free(arg1, arg1[0x70]);
    uVar9 = *(uint *)(arg1 + 0x78);
  }
  lVar7 = arg1[0x53];
  *(uint *)(arg1 + 0x78) = uVar9 & 0xfffffff7;
  if (lVar7 != 0) {
    iVar6 = 1 << (8U - (char)*(uint32_t *)(arg1 + 0x4e) & 0x1f);
    if (0 < iVar6) {
      lVar10 = 0;
      do {
        puVar13 = (uint64_t *)(lVar7 + lVar10);
        lVar10 = lVar10 + 8;
        png_free(arg1, *puVar13);
        lVar7 = arg1[0x53];
      } while (lVar10 != (ulong)(iVar6 - 1) * 8 + 8);
    }
    png_free(arg1);
  }
  lVar7 = arg1[0x54];
  if (lVar7 != 0) {
    iVar6 = 1 << (8U - (char)*(uint32_t *)(arg1 + 0x4e) & 0x1f);
    if (0 < iVar6) {
      lVar10 = 0;
      do {
        puVar13 = (uint64_t *)(lVar7 + lVar10);
        lVar10 = lVar10 + 8;
        png_free(arg1, *puVar13);
        lVar7 = arg1[0x54];
      } while (lVar10 != (ulong)(iVar6 - 1) * 8 + 8);
    }
    png_free(arg1);
  }
  lVar7 = arg1[0x55];
  if (lVar7 != 0) {
    iVar6 = 1 << (8U - (char)*(uint32_t *)(arg1 + 0x4e) & 0x1f);
    if (0 < iVar6) {
      lVar10 = 0;
      do {
        puVar13 = (uint64_t *)(lVar7 + lVar10);
        lVar10 = lVar10 + 8;
        png_free(arg1, *puVar13);
        lVar7 = arg1[0x55];
      } while (lVar10 != (ulong)(iVar6 - 1) * 8 + 8);
    }
    png_free(arg1);
  }
  png_free(arg1, arg1[0x77]);
  inflateEnd(arg1 + 0x24);
  png_free(arg1, arg1[0x61]);
  png_free(arg1, arg1[0x6c]);
  puVar13 = arg1;
  puVar12 = auStack_e8;
  for (lVar7 = 0x19; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar12 = *puVar13;
    puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
    puVar12 = puVar12 + (ulong)bVar15 * -2 + 1;
  }
  bVar14 = ((ulong)arg1 & 1) != 0;
  uVar11 = 0x470;
  iVar6 = 0x470;
  uVar1 = arg1[0x19];
  uVar2 = arg1[0x1a];
  uVar3 = arg1[0x1b];
  uVar4 = arg1[0x83];
  puVar13 = arg1;
  if (bVar14) {
    *(uint8_t *)arg1 = 0;
    uVar11 = 0x46f;
    iVar6 = 0x46f;
    puVar13 = (uint64_t *)((long)arg1 + 1);
  }
  if (((ulong)puVar13 & 2) != 0) {
    *(uint16_t *)puVar13 = 0;
    uVar11 = (ulong)(iVar6 - 2);
    puVar13 = (uint64_t *)((long)puVar13 + 2);
  }
  if (((ulong)puVar13 & 4) != 0) {
    *(uint32_t *)puVar13 = 0;
    uVar11 = (ulong)((int)uVar11 - 4);
    puVar13 = (uint64_t *)((long)puVar13 + 4);
  }
  for (uVar8 = uVar11 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
  }
  if ((uVar11 & 4) != 0) {
    *(uint32_t *)puVar13 = 0;
    puVar13 = (uint64_t *)((long)puVar13 + 4);
  }
  if ((uVar11 & 2) != 0) {
    *(uint16_t *)puVar13 = 0;
    puVar13 = (uint64_t *)((long)puVar13 + 2);
  }
  if (bVar14) {
    *(uint8_t *)puVar13 = 0;
  }
  arg1[0x19] = uVar1;
  arg1[0x1a] = uVar2;
  arg1[0x1b] = uVar3;
  arg1[0x83] = uVar4;
  puVar13 = auStack_e8;
  for (lVar7 = 0x19; lVar7 != 0; lVar7 = lVar7 + -1) {
    *arg1 = *puVar13;
    puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
    arg1 = arg1 + (ulong)bVar15 * -2 + 1;
  }
  return;
}

/* ======================================================================
 * png_destroy_read_struct  (Ghidra `png_destroy_read_struct` @ 00547090)
 * Signature: uint8_t png_destroy_read_struct(void)
 * Calls: `png_destroy_struct_2`, `png_free_data`, `png_read_destroy`
 * Called by: `gfxCreateTexture`
 */
void png_destroy_read_struct(long *arg1, long *arg2, long *arg3)

{
  long lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  long lVar4;
  long lVar5;

  if ((arg1 != (long *)0x0) && (lVar1 = *arg1, lVar1 != 0)) {
    uVar2 = *(uint64_t *)(lVar1 + 0x418);
    lVar5 = 0;
    uVar3 = *(uint64_t *)(lVar1 + 0x408);
    if (arg2 != (long *)0x0) {
      lVar5 = *arg2;
    }
    lVar4 = 0;
    if (arg3 != (long *)0x0) {
      lVar4 = *arg3;
    }
    png_read_destroy(lVar1, lVar5, lVar4);
    if (lVar5 != 0) {
      png_free_data(lVar1, lVar5, 0x4000, 0xffffffff);
      png_destroy_struct_2(lVar5, uVar2, uVar3);
      *arg2 = 0;
    }
    if (lVar4 != 0) {
      png_free_data(lVar1, lVar4, 0x4000, 0xffffffff);
      png_destroy_struct_2(lVar4, uVar2, uVar3);
      *arg3 = 0;
    }
    png_destroy_struct_2(lVar1, uVar2, uVar3);
    *arg1 = 0;
  }
  return;
}

/* ======================================================================
 * png_set_read_status_fn  (Ghidra `png_set_read_status_fn` @ 005471b0)
 * Signature: uint8_t png_set_read_status_fn(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_read_status_fn(long arg1, uint64_t arg2)

{
  if (arg1 != 0) {
    *(uint64_t *)(arg1 + 0x2d8) = arg2;
  }
  return;
}

/* ======================================================================
 * png_read_png  (Ghidra `png_read_png` @ 005471c0)
 * Signature: uint8_t png_read_png(void)
 * Calls: `png_error`, `png_free_data`, `png_get_rowbytes`, `png_get_sBIT`, `png_get_valid`, `png_malloc`, `png_read_end`, `png_read_info`, `png_read_row`, `png_read_start_row` (+13 more)
 * Called by: (none)
 */
void png_read_png(long arg1, long arg2, ulong arg3)

{
  long lVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  uint32_t uVar5;
  long lVar6;
  uint64_t *puVar7;
  long lVar8;
  int iVar9;
  uint64_t local_40[2];

  if (arg1 != 0) {
    if ((arg3 & 0x400) != 0) {
      png_set_invert_alpha();
    }
    png_read_info(arg1, arg2);
    if (0x1fffffff < *(uint *)(arg2 + 4)) {
      png_error(arg1, "Image is too high to process with png_read_png()");
    }
    if ((arg3 & 1) != 0) {
      png_set_strip_16(arg1);
    }
    if ((arg3 & 2) != 0) {
      png_set_strip_alpha(arg1);
    }
    if ((arg3 & 8) != 0) {
      png_set_packswap(arg1);
    }
    if (((arg3 & 0x10) != 0) &&
        (((*(byte *)(arg1 + 0x237) < 8 || (*(char *)(arg1 + 0x236) == '\x03')) ||
          (iVar4 = png_get_valid(arg1, arg2, 0x10), iVar4 != 0)))) {
      png_set_expand(arg1);
    }
    if ((arg3 & 0x20) != 0) {
      png_set_invert_mono(arg1);
    }
    if (((arg3 & 0x40) != 0) && (iVar4 = png_get_valid(arg1, arg2, 2), iVar4 != 0)) {
      png_get_sBIT(arg1, arg2, local_40);
      png_set_shift(arg1, local_40[0]);
    }
    if ((arg3 & 0x80) != 0) {
      png_set_bgr(arg1);
    }
    if ((arg3 & 0x100) != 0) {
      png_set_swap_alpha(arg1);
    }
    if ((arg3 & 0x200) != 0) {
      png_set_swap(arg1);
    }
    if ((*(byte *)(arg1 + 0x118) & 0x40) == 0) {
      png_read_start_row(arg1);
    } else {
      png_warning(arg1, "Ignoring extra png_read_update_info() call; row buffer not reallocated");
    }
    png_read_transform_info(arg1, arg2);
    png_free_data(arg1, arg2, 0x40, 0);
    lVar6 = *(long *)(arg2 + 0x138);
    if (lVar6 == 0) {
      lVar6 = png_malloc(arg1, *(int *)(arg2 + 4) << 3);
      *(uint *)(arg2 + 0xdc) = *(uint *)(arg2 + 0xdc) | 0x40;
      *(long *)(arg2 + 0x138) = lVar6;
      if (0 < *(int *)(arg2 + 4)) {
        lVar8 = 0;
        iVar4 = 0;
        do {
          puVar7 = (uint64_t *)(lVar6 + lVar8);
          uVar5 = png_get_rowbytes(arg1, arg2);
          iVar4 = iVar4 + 1;
          uVar3 = png_malloc(arg1, uVar5);
          lVar8 = lVar8 + 8;
          *puVar7 = uVar3;
          lVar6 = *(long *)(arg2 + 0x138);
        } while (iVar4 < *(int *)(arg2 + 4));
      }
    }
    iVar9 = 0;
    iVar4 = png_set_interlace_handling(arg1);
    uVar2 = *(uint *)(arg1 + 0x1b8);
    *(uint *)(arg1 + 0x1bc) = uVar2;
    if (0 < iVar4) {
      do {
        lVar8 = 0;
        if (uVar2 != 0) {
          do {
            lVar1 = lVar8 * 8;
            lVar8 = lVar8 + 1;
            png_read_row(arg1, *(uint64_t *)(lVar6 + lVar1), 0);
          } while ((uint)lVar8 < uVar2);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != iVar4);
    }
    *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 0x8000;
    png_read_end(arg1, arg2);
  }
  return;
}

/* ======================================================================
 * png_default_read_data  (Ghidra `png_default_read_data` @ 005474a0)
 * Signature: uint8_t png_default_read_data(void)
 * Calls: `fread`, `png_error`
 * Called by: `png_set_read_fn`
 */
void png_default_read_data(long arg1, void *arg2, size_t arg3)

{
  size_t sVar1;

  if (arg1 != 0) {
    sVar1 = fread(arg2, 1, arg3, *(FILE **)(arg1 + 0xf0));
    if (sVar1 != arg3) {
      png_error(arg1, "Read Error");
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_read_data  (Ghidra `png_read_data` @ 00547500)
 * Signature: uint8_t png_read_data(void)
 * Calls: `png_error`
 * Called by: `png_crc_error`, `png_crc_finish`, `png_crc_read`, `png_handle_IHDR`, `png_handle_PLTE`, `png_handle_bKGD`, `png_handle_cHRM`, `png_handle_gAMA`, `png_handle_hIST`, `png_handle_iCCP` (+16 more)
 */
void png_read_data(long arg1)

{
  if (*(code **)(arg1 + 0xe8) != (code *)0x0) {
    /* WARNING: Could not recover jumptable at 0x0054750c. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(arg1 + 0xe8))();
    return;
  }
  png_error(arg1, "Call to NULL read function");
  return;
}

/* ======================================================================
 * png_set_read_fn  (Ghidra `png_set_read_fn` @ 00547520)
 * Signature: uint8_t png_set_read_fn(void)
 * Calls: `png_default_read_data`, `png_warning`
 * Called by: `gfxCreateTexture`, `png_create_read_struct`, `png_create_read_struct_2`, `png_create_read_struct_2_constprop_2`, `png_read_init`, `png_read_init_2_constprop_0`, `png_read_init_3`, `png_set_progressive_read_fn`
 */
void png_set_read_fn(long arg1, uint64_t arg2, code *arg3)

{
  if (arg1 != 0) {
    *(uint64_t *)(arg1 + 0xf0) = arg2;
    if (arg3 == (code *)0x0) {
      arg3 = png_default_read_data;
    }
    *(code **)(arg1 + 0xe8) = arg3;
    if (*(long *)(arg1 + 0xe0) != 0) {
      *(uint64_t *)(arg1 + 0xe0) = 0;
      png_warning(arg1, "It\'s an error to set both read_data_fn and write_data_fn in the ");
      png_warning(arg1, "same structure.  Resetting write_data_fn to NULL.");
    }
    *(uint64_t *)(arg1 + 0x260) = 0;
  }
  return;
}

/* ======================================================================
 * png_set_crc_action  (Ghidra `png_set_crc_action` @ 00547580)
 * Signature: uint8_t png_set_crc_action(void)
 * Calls: `png_warning`
 * Called by: (none)
 */
void png_set_crc_action(long arg1, int arg2, int arg3)

{
  if (arg1 == 0) {
    return;
  }
  if (arg2 == 3) {
    *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) & 0xfffff3ff | 0x400;
    goto joined_r0x005475b4;
  }
  if (arg2 < 4) {
    if (arg2 == 2) {
      png_warning(arg1, "Can\'t discard critical data on CRC error.");
    }
  } else {
    if (arg2 == 4) {
      *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 0xc00;
      goto joined_r0x005475b4;
    }
    if (arg2 == 5)
      goto joined_r0x005475b4;
  }
  *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) & 0xfffff3ff;
joined_r0x005475b4:
  if (arg3 == 3) {
    *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) & 0xfffffcff | 0x100;
    return;
  }
  if (arg3 < 4) {
    if (arg3 == 1) {
      *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) & 0xfffffcff | 0x200;
      return;
    }
  } else {
    if (arg3 == 4) {
      *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 0x300;
      return;
    }
    if (arg3 == 5) {
      return;
    }
  }
  *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) & 0xfffffcff;
  return;
}

/* ======================================================================
 * png_set_background  (Ghidra `png_set_background` @ 00547690)
 * Signature: uint8_t png_set_background(void)
 * Calls: `png_warning`
 * Called by: (none)
 */
void png_set_background(double arg1, long arg2, uint64_t *arg3, int arg4, int arg5)

{
  uint16_t uVar1;

  if (arg2 != 0) {
    if (arg4 == 0) {
      png_warning(arg2, "Application must supply a known background gamma");
      return;
    }
    *(uint *)(arg2 + 0x11c) = *(uint *)(arg2 + 0x11c) | 0x80;
    *(uint64_t *)(arg2 + 0x248) = *arg3;
    uVar1 = *(uint16_t *)(arg3 + 1);
    *(char *)(arg2 + 0x240) = (char)arg4;
    *(uint16_t *)(arg2 + 0x250) = uVar1;
    *(uint *)(arg2 + 0x11c) = *(uint *)(arg2 + 0x11c) | ~-(uint)(arg5 == 0) & 0x100;
    *(float *)(arg2 + 0x244) = (float)arg1;
  }
  return;
}

/* ======================================================================
 * png_set_strip_16  (Ghidra `png_set_strip_16` @ 00547700)
 * Signature: uint8_t png_set_strip_16(void)
 * Calls: (none)
 * Called by: `gfxCreateTexture`, `png_read_png`
 */
void png_set_strip_16(long arg1)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x400;
  }
  return;
}

/* ======================================================================
 * png_set_strip_alpha  (Ghidra `png_set_strip_alpha` @ 00547720)
 * Signature: uint8_t png_set_strip_alpha(void)
 * Calls: (none)
 * Called by: `png_read_png`
 */
void png_set_strip_alpha(long arg1)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 0x400000;
  }
  return;
}

/* ======================================================================
 * png_set_dither  (Ghidra `png_set_dither` @ 00547740)
 * Signature: uint8_t png_set_dither(void)
 * Calls: `memset`, `png_free`, `png_malloc`, `png_malloc_warn`
 * Called by: (none)
 */
void png_set_dither(long arg1, byte *arg2, uint arg3, uint arg4, long arg5, int arg6)

{
  byte bVar1;
  uint64_t *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  void *pvVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  long lVar17;
  uint uVar18;
  uint8_t (*pauVar19)[16];
  uint8_t uVar20;
  long lVar21;
  byte bVar22;
  uint uVar23;
  byte *pbVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  uint uVar34;
  int local_68;
  byte *local_50;
  uint local_48;

  if (arg1 != 0) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x40;
    if (arg6 == 0) {
      lVar10 = png_malloc(arg1, arg3);
      *(long *)(arg1 + 0x378) = lVar10;
      if (0 < (int)arg3) {
        lVar21 = 0;
        while (true) {
          *(char *)(lVar10 + lVar21) = (char)lVar21;
          lVar21 = lVar21 + 1;
          if ((int)arg3 <= (int)lVar21)
            break;
          lVar10 = *(long *)(arg1 + 0x378);
        }
      }
    }
    local_48 = arg3;
    if ((int)arg4 < (int)arg3) {
      local_48 = arg4;
      if (arg5 == 0) {
        uVar14 = png_malloc(arg1, arg3);
        *(uint64_t *)(arg1 + 0x430) = uVar14;
        uVar14 = png_malloc(arg1, arg3);
        *(uint64_t *)(arg1 + 0x438) = uVar14;
        if (0 < (int)arg3) {
          lVar10 = 0;
          do {
            *(char *)(*(long *)(arg1 + 0x430) + lVar10) = (char)lVar10;
            *(char *)(*(long *)(arg1 + 0x438) + lVar10) = (char)lVar10;
            lVar10 = lVar10 + 1;
          } while ((int)lVar10 < (int)arg3);
        }
        puVar15 = (uint64_t *)png_malloc(arg1, 0x1808);
        uVar26 = (uint)(((long)puVar15 << 0x3c) >> 0x3f);
        uVar7 = uVar26 & 1;
        if (uVar7 == 0) {
          iVar6 = 0x301;
        } else {
          *puVar15 = 0;
          iVar6 = 0x300;
        }
        pauVar19 = (uint8_t (*)[16])(puVar15 + (uVar26 & 1));
        uVar26 = 0;
        do {
          uVar26 = uVar26 + 1;
          *pauVar19 = (uint8_t[16])0x0;
          pauVar19 = pauVar19 + 1;
        } while (uVar26 < 0x180);
        if (uVar7 != 1) {
          lVar10 = 0;
          do {
            *(uint64_t *)((long)puVar15 + lVar10 + (long)(int)((uVar7 != 0) + 0x300) * 8) = 0;
            lVar10 = lVar10 + 8;
          } while (lVar10 != (ulong)(iVar6 - 0x301) * 8 + 8);
        }
        local_68 = 0x60;
        puVar16 = (uint64_t *)0x0;
        uVar26 = arg3;
        do {
          uVar7 = 0;
          pbVar11 = arg2;
          do {
            if ((int)(uVar26 - 1) <= (int)uVar7) {
              if (puVar16 != (uint64_t *)0x0) {
                lVar10 = 0;
                do {
                  for (puVar2 = (uint64_t *)puVar15[lVar10]; puVar2 != (uint64_t *)0x0;
                       puVar2 = (uint64_t *)*puVar2) {
                    bVar22 = *(byte *)(puVar2 + 1);
                    lVar21 = *(long *)(arg1 + 0x430);
                    if (((int)(uint) * (byte *)(lVar21 + (ulong)bVar22) < (int)uVar26) &&
                        (bVar25 = *(byte *)((long)puVar2 + 9),
                         (int)(uint) * (byte *)(lVar21 + (ulong)bVar25) < (int)uVar26)) {
                      bVar1 = bVar22;
                      if ((uVar26 & 1) != 0) {
                        bVar1 = bVar25;
                        bVar25 = bVar22;
                      }
                      uVar26 = uVar26 - 1;
                      lVar17 = (long)(int)(uint)bVar25;
                      lVar31 = (long)(int)uVar26;
                      bVar22 = *(byte *)(lVar21 + lVar17);
                      *(uint16_t *)(arg2 + (ulong)bVar22 * 3) = *(uint16_t *)(arg2 + lVar31 * 3);
                      (arg2 + (ulong)bVar22 * 3)[2] = (arg2 + lVar31 * 3)[2];
                      lVar21 = *(long *)(arg1 + 0x430);
                      bVar22 = *(byte *)(lVar21 + lVar17);
                      if ((arg6 == 0) && (0 < (int)arg3)) {
                        lVar32 = 0;
                        do {
                          while (true) {
                            pbVar11 = (byte *)(lVar32 + *(long *)(arg1 + 0x378));
                            if (*pbVar11 == bVar22)
                              break;
                            if (*pbVar11 != uVar26)
                              goto LAB_00548009;
                          LAB_00548051:
                            lVar32 = lVar32 + 1;
                            *pbVar11 = bVar22;
                            lVar21 = *(long *)(arg1 + 0x430);
                            bVar22 = *(byte *)(lVar21 + lVar17);
                            if ((int)arg3 <= (int)lVar32)
                              goto LAB_0054806a;
                          }
                          *pbVar11 = *(byte *)(lVar21 + (int)(uint)bVar1);
                          pbVar11 = (byte *)(lVar32 + *(long *)(arg1 + 0x378));
                          lVar21 = *(long *)(arg1 + 0x430);
                          bVar22 = *(byte *)(lVar21 + lVar17);
                          if (*pbVar11 == uVar26)
                            goto LAB_00548051;
                        LAB_00548009:
                          lVar32 = lVar32 + 1;
                        } while ((int)lVar32 < (int)arg3);
                      }
                    LAB_0054806a:
                      *(byte *)(lVar21 + (ulong) * (byte *)(*(long *)(arg1 + 0x438) + lVar31)) =
                          bVar22;
                      *(uint8_t *)(*(long *)(arg1 + 0x438) +
                                   (ulong) * (byte *)(*(long *)(arg1 + 0x430) + lVar17)) =
                          *(uint8_t *)(*(long *)(arg1 + 0x438) + lVar31);
                      *(char *)(*(long *)(arg1 + 0x430) + lVar17) = (char)uVar26;
                      *(byte *)(*(long *)(arg1 + 0x438) + lVar31) = bVar25;
                    }
                    if ((int)uVar26 <= (int)arg4)
                      goto LAB_005477e2;
                  }
                  lVar10 = lVar10 + 1;
                } while ((int)lVar10 <= local_68);
              }
              goto LAB_005477e2;
            }
            uVar9 = uVar7 + 1;
            pbVar24 = pbVar11 + 3;
            uVar8 = uVar9;
            if ((int)uVar9 < (int)uVar26) {
              do {
                uVar18 = (int)((uint)*pbVar11 - (uint)*pbVar24) >> 0x1f;
                uVar27 = (int)((uint)pbVar11[1] - (uint)pbVar24[1]) >> 0x1f;
                uVar23 = (int)((uint)pbVar11[2] - (uint)pbVar24[2]) >> 0x1f;
                iVar6 = (((uint)*pbVar11 - (uint)*pbVar24 ^ uVar18) - uVar18) +
                        (((uint)pbVar11[1] - (uint)pbVar24[1] ^ uVar27) - uVar27) +
                        (((uint)pbVar11[2] - (uint)pbVar24[2] ^ uVar23) - uVar23);
                if (iVar6 <= local_68) {
                  uVar20 = (uint8_t)uVar7;
                  puVar16 = (uint64_t *)png_malloc_warn(arg1, 0x10);
                  uVar7 = uVar7 & 0xff;
                  if (puVar16 == (uint64_t *)0x0)
                    goto LAB_005477dd;
                  uVar14 = puVar15[iVar6];
                  *(uint8_t *)(puVar16 + 1) = uVar20;
                  *(char *)((long)puVar16 + 9) = (char)uVar8;
                  *puVar16 = uVar14;
                  puVar15[iVar6] = puVar16;
                }
                uVar8 = uVar8 + 1;
                pbVar24 = pbVar24 + 3;
              } while (uVar8 != uVar26);
            }
            uVar7 = uVar9;
            pbVar11 = pbVar11 + 3;
          } while (puVar16 != (uint64_t *)0x0);
        LAB_005477dd:
          puVar16 = (uint64_t *)0x0;
        LAB_005477e2:
          lVar10 = 0;
          do {
            puVar2 = *(uint64_t **)((long)puVar15 + lVar10);
            while (puVar2 != (uint64_t *)0x0) {
              puVar2 = (uint64_t *)*puVar2;
              png_free(arg1);
              puVar16 = puVar2;
            }
            *(uint64_t *)((long)puVar15 + lVar10) = 0;
            lVar10 = lVar10 + 8;
          } while (lVar10 != 0x1808);
          local_68 = local_68 + 0x60;
        } while ((int)arg4 < (int)uVar26);
        png_free(arg1, puVar15);
        png_free(arg1, *(uint64_t *)(arg1 + 0x438));
        png_free(arg1, *(uint64_t *)(arg1 + 0x430));
        *(uint64_t *)(arg1 + 0x438) = 0;
        *(uint64_t *)(arg1 + 0x430) = 0;
      } else {
        lVar10 = png_malloc(arg1, arg3);
        *(long *)(arg1 + 0x428) = lVar10;
        if (0 < (int)arg3) {
          lVar21 = 0;
          while (true) {
            *(char *)(lVar10 + lVar21) = (char)lVar21;
            lVar21 = lVar21 + 1;
            if ((int)arg3 <= (int)lVar21)
              break;
            lVar10 = *(long *)(arg1 + 0x428);
          }
        }
        iVar6 = arg3 - 1;
        if ((int)arg4 <= iVar6) {
          while (0 < iVar6) {
            lVar10 = 0;
            bVar5 = true;
            do {
              pbVar11 = (byte *)(*(long *)(arg1 + 0x428) + lVar10);
              lVar10 = lVar10 + 1;
              bVar22 = *(byte *)(*(long *)(arg1 + 0x428) + lVar10);
              bVar25 = *pbVar11;
              if (*(ushort *)(arg5 + (ulong)bVar25 * 2) < *(ushort *)(arg5 + (ulong)bVar22 * 2)) {
                *pbVar11 = bVar22;
                *(byte *)(*(long *)(arg1 + 0x428) + lVar10) = bVar25;
                bVar5 = false;
              }
            } while ((int)lVar10 < iVar6);
            if ((bVar5) || (iVar6 = iVar6 + -1, iVar6 < (int)arg4))
              break;
          }
        }
        if (arg6 == 0) {
          if (0 < (int)arg4) {
            lVar10 = 0;
            pbVar11 = arg2;
            uVar26 = arg3;
            do {
              if ((int)arg4 <= (int)(uint) * (byte *)(*(long *)(arg1 + 0x428) + lVar10)) {
                lVar21 = (long)(int)uVar26;
                do {
                  lVar21 = lVar21 + -1;
                  uVar26 = uVar26 - 1;
                } while ((int)arg4 <= (int)(uint) * (byte *)(*(long *)(arg1 + 0x428) + lVar21));
                pbVar24 = arg2 + lVar21 * 3;
                bVar22 = *pbVar24;
                bVar25 = pbVar24[1];
                bVar1 = pbVar24[2];
                *(uint16_t *)pbVar24 = *(uint16_t *)pbVar11;
                pbVar24[2] = pbVar11[2];
                *pbVar11 = bVar22;
                pbVar11[1] = bVar25;
                pbVar11[2] = bVar1;
                *(char *)(*(long *)(arg1 + 0x378) + lVar21) = (char)lVar10;
                *(char *)(*(long *)(arg1 + 0x378) + lVar10) = (char)uVar26;
              }
              lVar10 = lVar10 + 1;
              pbVar11 = pbVar11 + 3;
            } while ((int)lVar10 < (int)arg4);
          }
          lVar10 = 0;
          if (0 < (int)arg3) {
            do {
              pbVar11 = (byte *)(lVar10 + *(long *)(arg1 + 0x378));
              bVar22 = *pbVar11;
              if ((int)arg4 <= (int)(uint)bVar22) {
                bVar25 = 0;
                pbVar24 = arg2 + (long)(int)(uint)bVar22 * 3;
                if (1 < (int)arg4) {
                  uVar18 = (uint)*pbVar24 - (uint)*arg2;
                  uVar7 = (int)uVar18 >> 0x1f;
                  uVar8 = (uint)pbVar24[1] - (uint)arg2[1];
                  uVar23 = (int)uVar8 >> 0x1f;
                  uVar9 = (uint)pbVar24[2] - (uint)arg2[2];
                  uVar27 = (int)uVar9 >> 0x1f;
                  uVar26 = 0;
                  iVar6 = ((uVar18 ^ uVar7) - uVar7) + ((uVar8 ^ uVar23) - uVar23) +
                          ((uVar9 ^ uVar27) - uVar27);
                  uVar7 = 1;
                  pbVar12 = arg2;
                  do {
                    uVar9 = (uint)*pbVar24 - (uint)pbVar12[3];
                    uVar8 = (int)uVar9 >> 0x1f;
                    uVar18 = (uint)pbVar24[1] - (uint)pbVar12[4];
                    uVar23 = (int)uVar18 >> 0x1f;
                    uVar27 = (uint)pbVar24[2] - (uint)pbVar12[5];
                    uVar34 = (int)uVar27 >> 0x1f;
                    iVar30 = ((uVar27 ^ uVar34) - uVar34) + ((uVar9 ^ uVar8) - uVar8) +
                             ((uVar18 ^ uVar23) - uVar23);
                    if (iVar30 < iVar6) {
                      iVar6 = iVar30;
                      uVar26 = uVar7;
                    }
                    bVar25 = (byte)uVar26;
                    uVar7 = uVar7 + 1;
                    pbVar12 = pbVar12 + 3;
                  } while (uVar7 != arg4);
                }
                *pbVar11 = bVar25;
              }
              lVar10 = lVar10 + 1;
            } while ((int)lVar10 < (int)arg3);
          }
          lVar10 = *(long *)(arg1 + 0x428);
        } else {
          lVar10 = *(long *)(arg1 + 0x428);
          if (0 < (int)arg4) {
            lVar21 = 0;
            pbVar11 = arg2;
            do {
              if ((int)arg4 <= (int)(uint) * (byte *)(lVar10 + lVar21)) {
                lVar17 = (long)(int)arg3;
                do {
                  lVar17 = lVar17 + -1;
                  arg3 = arg3 - 1;
                } while ((int)arg4 <= (int)(uint) * (byte *)(lVar10 + lVar17));
                *(uint16_t *)pbVar11 = *(uint16_t *)(arg2 + lVar17 * 3);
                pbVar11[2] = (arg2 + lVar17 * 3)[2];
                lVar10 = *(long *)(arg1 + 0x428);
              }
              lVar21 = lVar21 + 1;
              pbVar11 = pbVar11 + 3;
            } while ((int)lVar21 < (int)arg4);
          }
        }
        png_free(arg1, lVar10);
        *(uint64_t *)(arg1 + 0x428) = 0;
      }
    }
    if (*(long *)(arg1 + 0x220) == 0) {
      *(byte **)(arg1 + 0x220) = arg2;
    }
    *(uint16_t *)(arg1 + 0x228) = (uint16_t)local_48;
    if (arg6 != 0) {
      pvVar13 = (void *)png_malloc(arg1);
      *(void **)(arg1 + 0x370) = pvVar13;
      memset(pvVar13, 0, 0x8000);
      pvVar13 = (void *)png_malloc(arg1, 0x8000);
      memset(pvVar13, 0xff, 0x8000);
      if (0 < (int)local_48) {
        uVar26 = 0;
        local_50 = arg2;
        do {
          iVar6 = 0;
          bVar22 = local_50[2];
          uVar9 = (uint)(bVar22 >> 3);
          uVar7 = (uint)(*local_50 >> 3);
          uVar8 = (uint)(local_50[1] >> 3);
          do {
            iVar30 = iVar6 - uVar7;
            if (iVar6 <= (int)uVar7) {
              iVar30 = uVar7 - iVar6;
            }
            iVar33 = 0;
            do {
              iVar3 = iVar33 - uVar8;
              if (iVar33 <= (int)uVar8) {
                iVar3 = uVar8 - iVar33;
              }
              iVar4 = iVar3;
              if (iVar3 < iVar30) {
                iVar4 = iVar30;
              }
              uVar18 = 0;
              do {
                lVar10 = (long)(int)(uVar18 | iVar33 << 5 | iVar6 << 10);
                iVar29 = uVar18 - uVar9;
                if (uVar18 == uVar9 || (int)uVar18 < (int)(uint)(bVar22 >> 3)) {
                  iVar29 = uVar9 - uVar18;
                }
                iVar28 = iVar4;
                if (iVar4 <= iVar29) {
                  iVar28 = iVar29;
                }
                iVar29 = iVar28 + iVar30 + iVar3 + iVar29;
                pbVar11 = (byte *)((long)pvVar13 + lVar10);
                if (iVar29 < (int)(uint)*pbVar11) {
                  *pbVar11 = (byte)iVar29;
                  *(char *)(*(long *)(arg1 + 0x370) + lVar10) = (char)uVar26;
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 != 0x20);
              iVar33 = iVar33 + 1;
            } while (iVar33 != 0x20);
            iVar6 = iVar6 + 1;
          } while (iVar6 != 0x20);
          uVar26 = uVar26 + 1;
          local_50 = local_50 + 3;
        } while (uVar26 != local_48);
      }
      png_free(arg1, pvVar13);
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_set_gamma  (Ghidra `png_set_gamma` @ 005480e0)
 * Signature: uint8_t png_set_gamma(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_gamma(double arg1, double arg2, long arg3)

{
  if (arg3 != 0) {
    if (((DAT_005d2718 /* R:-1.5881868392106856e-23f */ <
          (double)((ulong)(arg2 * arg1 - DAT_005c7318 /* R:0.0f */) &
                   DAT_005c72e0 /* R:u32=4294967295 */)) ||
         ((*(byte *)(arg3 + 0x236) & 4) != 0)) ||
        (*(byte *)(arg3 + 0x236) == 3)) {
      *(uint *)(arg3 + 0x11c) = *(uint *)(arg3 + 0x11c) | 0x2000;
    }
    *(float *)(arg3 + 0x274) = (float)arg2;
    *(float *)(arg3 + 0x278) = (float)arg1;
  }
  return;
}

/* ======================================================================
 * png_set_expand  (Ghidra `png_set_expand` @ 00548160)
 * Signature: uint8_t png_set_expand(void)
 * Calls: (none)
 * Called by: `png_read_png`
 */
void png_set_expand(long arg1)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x2001000;
    *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) & 0xffffffbf;
  }
  return;
}

/* ======================================================================
 * png_set_palette_to_rgb  (Ghidra `png_set_palette_to_rgb` @ 00548180)
 * Signature: uint8_t png_set_palette_to_rgb(void)
 * Calls: (none)
 * Called by: `gfxCreateTexture`
 */
void png_set_palette_to_rgb(long arg1)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x2001000;
    *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) & 0xffffffbf;
  }
  return;
}

/* ======================================================================
 * png_set_expand_gray_1_2_4_to_8  (Ghidra `png_set_expand_gray_1_2_4_to_8` @ 005481a0)
 * Signature: uint8_t png_set_expand_gray_1_2_4_to_8(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_expand_gray_1_2_4_to_8(long arg1)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x1000;
    *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) & 0xffffffbf;
  }
  return;
}

/* ======================================================================
 * png_set_gray_1_2_4_to_8  (Ghidra `png_set_gray_1_2_4_to_8` @ 005481c0)
 * Signature: uint8_t png_set_gray_1_2_4_to_8(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_gray_1_2_4_to_8(long arg1)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x2001000;
  }
  return;
}

/* ======================================================================
 * png_set_tRNS_to_alpha  (Ghidra `png_set_tRNS_to_alpha` @ 005481e0)
 * Signature: uint8_t png_set_tRNS_to_alpha(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_tRNS_to_alpha(long arg1)

{
  *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x2001000;
  *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) & 0xffffffbf;
  return;
}

/* ======================================================================
 * png_set_gray_to_rgb  (Ghidra `png_set_gray_to_rgb` @ 00548200)
 * Signature: uint8_t png_set_gray_to_rgb(void)
 * Calls: (none)
 * Called by: `gfxCreateTexture`
 */
void png_set_gray_to_rgb(long arg1)

{
  *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x4000;
  *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) & 0xffffffbf;
  return;
}

/* ======================================================================
 * png_set_rgb_to_gray_fixed  (Ghidra `png_set_rgb_to_gray_fixed` @ 00548220)
 * Signature: uint8_t png_set_rgb_to_gray_fixed(void)
 * Calls: `png_warning`
 * Called by: `png_set_rgb_to_gray`
 */
void png_set_rgb_to_gray_fixed(long arg1, int arg2, ulong arg3, ulong arg4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;

  if (arg1 == 0) {
    return;
  }
  if (arg2 == 2) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x400000;
  } else {
    if (arg2 == 3) {
      *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x200000;
      cVar1 = *(char *)(arg1 + 0x236);
      goto joined_r0x00548255;
    }
    if (arg2 == 1) {
      *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x600000;
    }
  }
  cVar1 = *(char *)(arg1 + 0x236);
joined_r0x00548255:
  if (cVar1 == '\x03') {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x1000;
  }
  if (((arg4 >> 0x1f & 1) == 0) && ((arg3 >> 0x1f & 1) == 0)) {
    if ((int)arg3 + (int)arg4 < 100000) {
      sVar4 =
          (short)(SUB168(SEXT816((long)((arg3 & 0xffffffff) << 0xf)) * SEXT816(0x29f16b11c6d1e109),
                         8) >>
                  0xe);
      sVar3 =
          (short)(SUB168(SEXT816((long)((arg4 & 0xffffffff) << 0xf)) * SEXT816(0x29f16b11c6d1e109),
                         8) >>
                  0xe);
      sVar2 = (-0x8000 - sVar4) - sVar3;
    } else {
      png_warning(arg1, "ignoring out of range rgb_to_gray coefficients");
      sVar2 = 0x93e;
      sVar3 = 0x5b8a;
      sVar4 = 0x1b38;
    }
  } else {
    sVar2 = 0x93e;
    sVar3 = 0x5b8a;
    sVar4 = 0x1b38;
  }
  *(short *)(arg1 + 0x3ea) = sVar4;
  *(short *)(arg1 + 0x3ec) = sVar3;
  *(short *)(arg1 + 0x3ee) = sVar2;
  return;
}

/* ======================================================================
 * png_set_rgb_to_gray  (Ghidra `png_set_rgb_to_gray` @ 00548370)
 * Signature: uint8_t png_set_rgb_to_gray(void)
 * Calls: `png_set_rgb_to_gray_fixed`
 * Called by: (none)
 */
void png_set_rgb_to_gray(double arg1, double arg2, long arg3, uint64_t arg4)

{
  if (arg3 != 0) {
    png_set_rgb_to_gray_fixed(
        arg3, arg4,
        (int)((double)(float)arg1 * DAT_005d2720 /* R:0.0f */ + DAT_005d2728 /* R:0.0f */),
        (int)((double)(float)arg2 * DAT_005d2720 /* R:0.0f */ + DAT_005d2728 /* R:0.0f */));
    return;
  }
  return;
}

/* ======================================================================
 * png_set_read_user_transform_fn  (Ghidra `png_set_read_user_transform_fn` @ 005483d0)
 * Signature: uint8_t png_set_read_user_transform_fn(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_read_user_transform_fn(long arg1, uint64_t arg2)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x100000;
    *(uint64_t *)(arg1 + 0xf8) = arg2;
  }
  return;
}

/* ======================================================================
 * png_read_transform_info  (Ghidra `png_read_transform_info` @ 005483f0)
 * Signature: uint8_t png_read_transform_info(void)
 * Calls: (none)
 * Called by: `png_read_png`, `png_read_update_info`
 */
void png_read_transform_info(long arg1, int *arg2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;

  uVar3 = *(uint *)(arg1 + 0x11c);
  if ((uVar3 & 0x1000) != 0) {
    bVar2 = *(byte *)((long)arg2 + 0x1d);
    if (bVar2 == 3) {
      cVar5 = '\x02';
      if (*(short *)(arg1 + 0x22a) != 0) {
        cVar5 = (-((uVar3 & 0x2000000) == 0) & 0xfcU) + 6;
      }
      *(char *)((long)arg2 + 0x1d) = cVar5;
      *(uint8_t *)(arg2 + 7) = 8;
      *(uint16_t *)((long)arg2 + 0x1a) = 0;
      uVar3 = *(uint *)(arg1 + 0x11c);
    } else {
      if (*(short *)(arg1 + 0x22a) != 0) {
        if ((uVar3 & 0x2000000) == 0) {
          *(byte *)((long)arg2 + 0x1d) = bVar2 | 2;
        } else {
          *(byte *)((long)arg2 + 0x1d) = bVar2 | 4;
        }
      }
      if (*(byte *)(arg2 + 7) < 8) {
        *(uint8_t *)(arg2 + 7) = 8;
      }
      *(uint16_t *)((long)arg2 + 0x1a) = 0;
      uVar3 = *(uint *)(arg1 + 0x11c);
    }
  }
  if ((uVar3 & 0x80) != 0) {
    *(byte *)((long)arg2 + 0x1d) = *(byte *)((long)arg2 + 0x1d) & 0xfb;
    *(uint16_t *)((long)arg2 + 0x1a) = 0;
    *(uint64_t *)((long)arg2 + 0x6a) = *(uint64_t *)(arg1 + 0x248);
    *(uint16_t *)((long)arg2 + 0x72) = *(uint16_t *)(arg1 + 0x250);
    uVar3 = *(uint *)(arg1 + 0x11c);
  }
  if ((uVar3 & 0x2000) != 0) {
    arg2[0xb] = *(int *)(arg1 + 0x274);
    arg2[0x50] = *(int *)(arg1 + 0x3f4);
    uVar3 = *(uint *)(arg1 + 0x11c);
  }
  if (((uVar3 & 0x400) != 0) && ((char)arg2[7] == '\x10')) {
    *(uint8_t *)(arg2 + 7) = 8;
    uVar3 = *(uint *)(arg1 + 0x11c);
  }
  if ((uVar3 & 0x4000) != 0) {
    *(byte *)((long)arg2 + 0x1d) = *(byte *)((long)arg2 + 0x1d) | 2;
    uVar3 = *(uint *)(arg1 + 0x11c);
  }
  if ((uVar3 & 0x600000) != 0) {
    *(byte *)((long)arg2 + 0x1d) = *(byte *)((long)arg2 + 0x1d) & 0xfd;
    uVar3 = *(uint *)(arg1 + 0x11c);
  }
  bVar2 = *(byte *)((long)arg2 + 0x1d);
  if (((uVar3 & 0x40) != 0) && ((((bVar2 == 6 || (bVar2 == 2)) && (*(long *)(arg1 + 0x370) != 0)) &&
                                 ((char)arg2[7] == '\b')))) {
    *(uint8_t *)((long)arg2 + 0x1d) = 3;
    bVar2 = 3;
    uVar3 = *(uint *)(arg1 + 0x11c);
  }
  if (((uVar3 & 4) == 0) || (7 < *(byte *)(arg2 + 7))) {
    if (bVar2 != 3)
      goto LAB_005484f9;
  LAB_005485df:
    *(uint8_t *)((long)arg2 + 0x21) = 1;
  } else {
    *(uint8_t *)(arg2 + 7) = 8;
    if (bVar2 == 3)
      goto LAB_005485df;
  LAB_005484f9:
    *(byte *)((long)arg2 + 0x21) = (-((bVar2 & 2) == 0) & 0xfeU) + 3;
  }
  if ((*(byte *)(arg1 + 0x11a) & 0x40) != 0) {
    bVar2 = bVar2 & 0xfb;
    *(byte *)((long)arg2 + 0x1d) = bVar2;
  }
  bVar4 = *(byte *)((long)arg2 + 0x21);
  if ((bVar2 & 4) != 0) {
    bVar4 = bVar4 + 1;
    *(byte *)((long)arg2 + 0x21) = bVar4;
  }
  uVar3 = *(uint *)(arg1 + 0x11c);
  if (((uVar3 & 0x8000) != 0) && ((bVar2 == 0 || (bVar2 == 2)))) {
    bVar4 = bVar4 + 1;
    *(byte *)((long)arg2 + 0x21) = bVar4;
    uVar3 = *(uint *)(arg1 + 0x11c);
    if ((uVar3 & 0x1000000) != 0) {
      *(byte *)((long)arg2 + 0x1d) = bVar2 | 4;
      uVar3 = *(uint *)(arg1 + 0x11c);
    }
  }
  bVar2 = *(byte *)(arg2 + 7);
  if ((uVar3 & 0x100000) != 0) {
    bVar1 = *(byte *)(arg1 + 0x110);
    if (bVar2 < bVar1) {
      *(byte *)(arg2 + 7) = bVar1;
      bVar2 = bVar1;
    }
    bVar1 = *(byte *)(arg1 + 0x111);
    if (bVar4 < bVar1) {
      *(byte *)((long)arg2 + 0x21) = bVar1;
      bVar2 = (char)arg2[7] * bVar1;
      *(byte *)((long)arg2 + 0x22) = bVar2;
      goto joined_r0x005485b1;
    }
  }
  bVar2 = bVar2 * bVar4;
  *(byte *)((long)arg2 + 0x22) = bVar2;
joined_r0x005485b1:
  if (7 < bVar2) {
    arg2[3] = (uint)(bVar2 >> 3) * *arg2;
    return;
  }
  arg2[3] = (uint)bVar2 * *arg2 + 7 >> 3;
  return;
}

/* ======================================================================
 * png_do_unpack  (Ghidra `png_do_unpack` @ 00548690)
 * Signature: uint8_t png_do_unpack(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`
 */
void png_do_unpack(uint *arg1, long arg2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;

  bVar5 = *(byte *)((long)arg1 + 9);
  if (bVar5 < 8) {
    uVar3 = *arg1;
    if (bVar5 == 2) {
      if (uVar3 != 0) {
        pbVar4 = (byte *)(arg2 + -1 + (ulong)uVar3);
        pbVar9 = pbVar4 + ~(ulong)(uVar3 - 1);
        pbVar8 = (byte *)((ulong)(uVar3 - 1 >> 2) + arg2);
        iVar6 = (~(uVar3 + 3) & 3) * 2;
        do {
          bVar10 = iVar6 == 6;
          *pbVar4 = (byte)((int)(uint)*pbVar8 >> ((byte)iVar6 & 0x1f)) & 3;
          iVar1 = iVar6 + 2;
          if (bVar10) {
            pbVar8 = pbVar8 + -1;
          }
          iVar6 = 0;
          if (!bVar10) {
            iVar6 = iVar1;
          }
          pbVar4 = pbVar4 + -1;
        } while (pbVar4 != pbVar9);
      }
    } else if (bVar5 == 4) {
      bVar5 = -((uVar3 + 1 & 1) == 0) & 4;
      if (uVar3 != 0) {
        pbVar4 = (byte *)(arg2 + -1 + (ulong)uVar3);
        pbVar9 = pbVar4 + ~(ulong)(uVar3 - 1);
        pbVar8 = (byte *)((ulong)(uVar3 - 1 >> 1) + arg2);
        do {
          *pbVar4 = (byte)((int)(uint)*pbVar8 >> bVar5) & 0xf;
          if (bVar5 == 4) {
            pbVar8 = pbVar8 + -1;
          }
          pbVar4 = pbVar4 + -1;
          bVar5 = (bVar5 != 4) << 2;
        } while (pbVar4 != pbVar9);
      }
    } else if ((bVar5 == 1) && (uVar3 != 0)) {
      pbVar4 = (byte *)(arg2 + -1 + (ulong)uVar3);
      uVar7 = ~(uVar3 + 7) & 7;
      pbVar9 = pbVar4 + ~(ulong)(uVar3 - 1);
      pbVar8 = (byte *)((ulong)(uVar3 - 1 >> 3) + arg2);
      do {
        bVar10 = uVar7 == 7;
        *pbVar4 = (byte)((int)(uint)*pbVar8 >> ((byte)uVar7 & 0x1f)) & 1;
        uVar2 = uVar7 + 1;
        if (bVar10) {
          pbVar8 = pbVar8 + -1;
        }
        uVar7 = 0;
        if (!bVar10) {
          uVar7 = uVar2;
        }
        pbVar4 = pbVar4 + -1;
      } while (pbVar4 != pbVar9);
    }
    *(uint8_t *)((long)arg1 + 9) = 8;
    *(byte *)((long)arg1 + 0xb) = *(byte *)((long)arg1 + 10) * '\b';
    arg1[1] = *(byte *)((long)arg1 + 10) * uVar3;
  }
  return;
}

/* ======================================================================
 * png_do_unshift  (Ghidra `png_do_unshift` @ 00548800)
 * Signature: uint8_t png_do_unshift(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`
 */
byte *png_do_unshift(int *arg1, byte *arg2, byte *arg3)

{
  byte *pbVar1;
  byte bVar2;
  uint8_t auVar3[15];
  uint8_t auVar4[14];
  uint8_t auVar5[15];
  uint8_t auVar6[15];
  uint8_t auVar7[13];
  uint8_t auVar8[13];
  uint8_t auVar9[13];
  uint uVar10;
  uint8_t auVar11[15];
  uint8_t auVar12[15];
  uint8_t auVar13[15];
  uint8_t auVar14[15];
  bool bVar15;
  uint8_t auVar16[15];
  unkuint9 Var17;
  uint8_t auVar18[11];
  uint8_t auVar19[13];
  uint8_t auVar20[14];
  uint8_t auVar21[16];
  uint8_t auVar22[16];
  uint8_t auVar23[13];
  uint8_t auVar24[16];
  uint8_t auVar25[16];
  uint8_t auVar26[16];
  uint8_t auVar27[16];
  uint8_t auVar28[16];
  uint8_t auVar29[16];
  uint8_t auVar30[16];
  uint8_t auVar31[16];
  uint8_t auVar32[16];
  uint8_t auVar33[16];
  uint8_t auVar34[16];
  uint8_t auVar35[16];
  uint8_t auVar36[16];
  uint8_t auVar37[16];
  uint8_t auVar38[16];
  uint8_t auVar39[16];
  uint8_t auVar40[15];
  uint8_t auVar41[15];
  uint6 uVar42;
  uint uVar43;
  uint uVar44;
  byte *pbVar45;
  byte bVar46;
  long lVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  int iVar52;
  uint uVar53;
  uint8_t uVar54;
  uint8_t uVar55;
  uint8_t uVar56;
  uint8_t uVar58;
  uint8_t uVar59;
  int iVar57;
  uint8_t uVar61;
  uint8_t uVar62;
  int iVar60;
  uint8_t uVar63;
  int iVar64;
  int iVar65;
  int iVar111;
  int iVar113;
  uint8_t auVar67[16];
  uint8_t auVar71[16];
  uint8_t auVar75[16];
  uint8_t auVar79[16];
  uint8_t auVar87[16];
  uint8_t auVar95[16];
  uint8_t auVar103[16];
  ushort uVar114;
  int iVar115;
  uint16_t uVar116;
  int iVar117;
  int iVar118;
  int iVar119;
  uint uVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  uint8_t auVar124[16];
  int local_28[6];
  uint8_t auVar66[12];
  uint8_t auVar68[16];
  uint8_t auVar72[16];
  uint8_t auVar76[16];
  uint8_t auVar80[16];
  uint8_t auVar88[16];
  uint8_t auVar96[16];
  uint8_t auVar104[16];
  uint8_t auVar81[16];
  uint8_t auVar89[16];
  uint8_t auVar97[16];
  uint8_t auVar105[16];
  uint8_t auVar69[16];
  uint8_t auVar73[16];
  uint8_t auVar77[16];
  uint8_t auVar82[16];
  uint8_t auVar90[16];
  uint8_t auVar98[16];
  uint8_t auVar106[16];
  uint8_t auVar83[16];
  uint8_t auVar91[16];
  uint8_t auVar99[16];
  uint8_t auVar107[16];
  uint8_t auVar70[16];
  uint8_t auVar74[16];
  uint8_t auVar78[16];
  uint8_t auVar84[16];
  uint8_t auVar92[16];
  uint8_t auVar100[16];
  uint8_t auVar108[16];
  uint8_t auVar85[16];
  uint8_t auVar93[16];
  uint8_t auVar101[16];
  uint8_t auVar109[16];
  uint8_t auVar86[16];
  uint8_t auVar94[16];
  uint8_t auVar102[16];
  uint8_t auVar110[16];
  uint8_t uVar112;

  bVar2 = *(byte *)(arg1 + 2);
  pbVar45 = (byte *)(ulong)bVar2;
  if (bVar2 != 3) {
    bVar46 = *(byte *)((long)arg1 + 9);
    iVar52 = *arg1;
    uVar43 = (uint)bVar46;
    if ((bVar2 & 2) == 0) {
      uVar48 = 2;
      iVar60 = 2;
      iVar57 = 1;
      local_28[0] = uVar43 - arg3[3];
      uVar44 = 1;
    } else {
      uVar48 = 4;
      iVar60 = 4;
      local_28[0] = uVar43 - *arg3;
      local_28[1] = uVar43 - arg3[1];
      iVar57 = 3;
      local_28[2] = uVar43 - arg3[2];
      uVar44 = 3;
    }
    if ((bVar2 & 4) != 0) {
      local_28[iVar57] = uVar43 - arg3[4];
      iVar57 = iVar60;
      uVar44 = uVar48;
    }
    pbVar45 = (byte *)0x0;
    bVar15 = false;
    do {
      if (local_28[(long)pbVar45] < 1) {
        local_28[(long)pbVar45] = 0;
      } else {
        bVar15 = true;
      }
      pbVar45 = pbVar45 + 1;
    } while ((int)pbVar45 < iVar57);
    if (bVar15) {
      if (bVar46 == 4) {
        uVar43 = arg1[1];
        bVar46 = (byte)local_28[0];
        uVar44 = 0xf >> (bVar46 & 0x1f);
        pbVar45 = (byte *)(ulong)uVar44;
        bVar2 = (byte)(0xf0 >> (bVar46 & 0x1f)) & 0xf0 | (byte)uVar44;
        if (uVar43 != 0) {
          uVar44 = -(int)arg2 & 0xf;
          if (uVar43 < uVar44) {
            uVar44 = uVar43;
          }
          uVar48 = 0;
          pbVar45 = arg2;
          if (uVar44 != 0) {
            do {
              uVar48 = uVar48 + 1;
              *pbVar45 = (byte)((int)(uint)*pbVar45 >> (bVar46 & 0x1f)) & bVar2;
              pbVar45 = pbVar45 + 1;
            } while (uVar48 < uVar44);
            if (uVar44 == uVar43) {
              return pbVar45;
            }
          }
          uVar53 = uVar43 - uVar44 >> 4;
          uVar49 = uVar53 * 0x10;
          if (uVar53 != 0) {
            lVar47 = 0;
            uVar50 = 0;
            auVar124._0_4_ = CONCAT22(CONCAT11(bVar2, bVar2), CONCAT11(bVar2, bVar2));
            auVar124._4_4_ = auVar124._0_4_;
            auVar124._8_4_ = auVar124._0_4_;
            auVar124._12_4_ = auVar124._0_4_;
            do {
              auVar104 = *(uint8_t (*)[16])(arg2 + lVar47 + (ulong)uVar44);
              uVar50 = uVar50 + 1;
              uVar120 = CONCAT13(0, CONCAT12(auVar104[9], (ushort)auVar104[8]));
              auVar3[0xd] = 0;
              auVar3._0_13_ = auVar104._0_13_;
              auVar3[0xe] = auVar104[7];
              auVar5[0xc] = auVar104[6];
              auVar5._0_12_ = auVar104._0_12_;
              auVar5._13_2_ = auVar3._13_2_;
              auVar6[0xb] = 0;
              auVar6._0_11_ = auVar104._0_11_;
              auVar6._12_3_ = auVar5._12_3_;
              uVar10 = auVar6._11_4_;
              auVar11[10] = auVar104[5];
              auVar11._0_10_ = auVar104._0_10_;
              auVar11._11_4_ = uVar10;
              auVar12[9] = 0;
              auVar12._0_9_ = auVar104._0_9_;
              auVar12._10_5_ = auVar11._10_5_;
              auVar13[8] = auVar104[4];
              auVar13._0_8_ = auVar104._0_8_;
              auVar13._9_6_ = auVar12._9_6_;
              auVar16._7_8_ = 0;
              auVar16._0_7_ = auVar13._8_7_;
              Var17 = CONCAT81(SUB158(auVar16 << 0x40, 7), auVar104[3]);
              auVar40._9_6_ = 0;
              auVar40._0_9_ = Var17;
              auVar18._1_10_ = SUB1510(auVar40 << 0x30, 5);
              auVar18[0] = auVar104[2];
              auVar41._11_4_ = 0;
              auVar41._0_11_ = auVar18;
              auVar19._1_12_ = SUB1512(auVar41 << 0x20, 3);
              auVar19[0] = auVar104[1];
              uVar114 = CONCAT11(0, auVar104[0]);
              auVar14._2_13_ = auVar19;
              auVar14._0_2_ = uVar114;
              auVar4._10_2_ = 0;
              auVar4._0_10_ = auVar14._0_10_;
              auVar4._12_2_ = (short)Var17;
              uVar42 = CONCAT42(auVar4._10_4_, auVar18._0_2_);
              auVar20._6_8_ = 0;
              auVar20._0_6_ = uVar42;
              iVar115 = (int)(uint)auVar13._8_2_ >> local_28[0];
              iVar117 = (int)(uint)auVar11._10_2_ >> local_28[0];
              iVar118 = (int)(uVar10 >> 8 & 0xffff) >> local_28[0];
              iVar119 = (int)(uVar10 >> 0x18) >> local_28[0];
              iVar65 = (int)(uint)uVar114 >> local_28[0];
              iVar111 = (int)CONCAT82(SUB148(auVar20 << 0x40, 6), auVar19._0_2_) >> local_28[0];
              auVar66._0_8_ = CONCAT44(iVar111, iVar65);
              auVar66._8_4_ = (int)uVar42 >> local_28[0];
              iVar113 = (int)(auVar4._10_4_ >> 0x10) >> local_28[0];
              auVar70._12_2_ = (short)((uint)iVar111 >> 0x10);
              auVar70._0_12_ = auVar66;
              auVar70._14_2_ = (short)((uint)iVar117 >> 0x10);
              auVar69._12_4_ = auVar70._12_4_;
              auVar69._0_10_ = auVar66._0_10_;
              auVar69._10_2_ = (short)iVar117;
              auVar68._10_6_ = auVar69._10_6_;
              auVar68._8_2_ = (short)iVar111;
              auVar68._0_8_ = auVar66._0_8_;
              uVar116 = (uint16_t)((uint)iVar115 >> 0x10);
              auVar21._2_8_ = auVar68._8_8_;
              auVar21._0_2_ = uVar116;
              auVar21._10_6_ = 0;
              auVar67._12_4_ = 0;
              auVar67._0_12_ = SUB1612(auVar21 << 0x30, 4);
              auVar67 = auVar67 << 0x20;
              auVar74._0_12_ = auVar67._0_12_;
              auVar74._12_2_ = uVar116;
              auVar74._14_2_ = (short)((uint)iVar118 >> 0x10);
              auVar73._12_4_ = auVar74._12_4_;
              auVar73._0_10_ = auVar67._0_10_;
              auVar73._10_2_ = (short)((uint)auVar66._8_4_ >> 0x10);
              auVar72._10_6_ = auVar73._10_6_;
              auVar72._0_8_ = auVar67._0_8_;
              auVar72._8_2_ = (short)((uint)iVar65 >> 0x10);
              auVar22._2_8_ = auVar72._8_8_;
              auVar22._0_2_ = (short)iVar118;
              auVar22._10_6_ = 0;
              auVar71._12_4_ = 0;
              auVar71._0_12_ = SUB1612(auVar22 << 0x30, 4);
              auVar71 = auVar71 << 0x20;
              auVar7[0xc] = auVar104[0xb];
              auVar7._0_12_ = ZEXT112(auVar104[0xc]) << 0x40;
              auVar8._10_3_ = auVar7._10_3_;
              auVar8._0_10_ = (unkuint10)auVar104[10] << 0x40;
              auVar23._5_8_ = 0;
              auVar23._0_5_ = auVar8._8_5_;
              auVar9[4] = auVar104[9];
              auVar9._0_4_ = uVar120;
              auVar9[5] = 0;
              auVar9._6_7_ = SUB137(auVar23 << 0x40, 6);
              auVar78._0_12_ = auVar71._0_12_;
              auVar78._12_2_ = (short)iVar118;
              auVar78._14_2_ = (short)iVar119;
              auVar77._12_4_ = auVar78._12_4_;
              auVar77._0_10_ = auVar71._0_10_;
              auVar77._10_2_ = (short)iVar117;
              auVar76._10_6_ = auVar77._10_6_;
              auVar76._0_8_ = auVar71._0_8_;
              auVar76._8_2_ = (short)iVar115;
              auVar24._2_8_ = auVar76._8_8_;
              auVar24._0_2_ = (short)iVar113;
              auVar24._10_6_ = 0;
              auVar75._12_4_ = 0;
              auVar75._0_12_ = SUB1612(auVar24 << 0x30, 4);
              auVar75 = auVar75 << 0x20;
              iVar121 = (int)(uint)auVar104[0xc] >> local_28[0];
              iVar122 = (int)(uint)auVar104[0xd] >> local_28[0];
              iVar123 = (int)(uint)auVar104[0xe] >> local_28[0];
              iVar52 = (int)(uVar120 & 0xffff) >> local_28[0];
              iVar57 = auVar9._4_4_ >> local_28[0];
              iVar60 = auVar8._8_4_ >> local_28[0];
              iVar64 = (int)(uint)(uint3)(auVar7._10_3_ >> 0x10) >> local_28[0];
              uVar61 = (uint8_t)((uint)iVar121 >> 8);
              uVar62 = (uint8_t)iVar122;
              uVar63 = (uint8_t)iVar123;
              auVar86._0_14_ = auVar75._0_14_;
              auVar86[0xe] = (char)((uint)iVar113 >> 8);
              auVar86[0xf] = (char)((uint)iVar64 >> 8);
              uVar59 = (uint8_t)iVar64;
              auVar85._14_2_ = auVar86._14_2_;
              auVar85._0_13_ = auVar75._0_13_;
              auVar85[0xd] = uVar59;
              auVar84._13_3_ = auVar85._13_3_;
              auVar84._0_12_ = auVar75._0_12_;
              auVar84[0xc] = (char)iVar113;
              uVar58 = (uint8_t)((uint)iVar60 >> 8);
              auVar83._12_4_ = auVar84._12_4_;
              auVar83._0_11_ = auVar75._0_11_;
              auVar83[0xb] = uVar58;
              uVar112 = (uint8_t)((uint)auVar66._8_4_ >> 8);
              auVar82._11_5_ = auVar83._11_5_;
              auVar82._0_10_ = auVar75._0_10_;
              auVar82[10] = uVar112;
              uVar56 = (uint8_t)iVar60;
              auVar81._10_6_ = auVar82._10_6_;
              auVar81._0_9_ = auVar75._0_9_;
              auVar81[9] = uVar56;
              auVar80._9_7_ = auVar81._9_7_;
              auVar80._0_8_ = auVar75._0_8_;
              auVar80[8] = (char)auVar66._8_4_;
              uVar55 = (uint8_t)((uint)iVar57 >> 8);
              auVar29._1_8_ = auVar80._8_8_;
              auVar29[0] = uVar55;
              auVar29._9_7_ = 0;
              uVar54 = (uint8_t)iVar57;
              auVar28._10_6_ = 0;
              auVar28._0_10_ = SUB1610(auVar29 << 0x38, 6);
              auVar27._11_5_ = 0;
              auVar27._0_11_ = SUB1611(auVar28 << 0x30, 5);
              auVar26._12_4_ = 0;
              auVar26._0_12_ = SUB1612(auVar27 << 0x28, 4);
              auVar25._13_3_ = 0;
              auVar25._0_13_ = SUB1613(auVar26 << 0x20, 3);
              auVar103[0] = (uint8_t)iVar65;
              auVar79._14_2_ = 0;
              auVar79._0_14_ = SUB1614(auVar25 << 0x18, 2);
              auVar79 = auVar79 << 0x10;
              auVar94._0_14_ = auVar79._0_14_;
              auVar94[0xe] = uVar55;
              auVar94[0xf] = (char)((uint)iVar122 >> 8);
              auVar93._14_2_ = auVar94._14_2_;
              auVar93._0_13_ = auVar79._0_13_;
              auVar93[0xd] = (char)((uint)iVar117 >> 8);
              auVar92._13_3_ = auVar93._13_3_;
              auVar92._0_12_ = auVar79._0_12_;
              auVar92[0xc] = (char)((uint)iVar111 >> 8);
              auVar91._12_4_ = auVar92._12_4_;
              auVar91._0_11_ = auVar79._0_11_;
              auVar91[0xb] = uVar62;
              auVar90._11_5_ = auVar91._11_5_;
              auVar90._0_10_ = auVar79._0_10_;
              auVar90[10] = uVar54;
              auVar89._10_6_ = auVar90._10_6_;
              auVar89._0_9_ = auVar79._0_9_;
              auVar89[9] = (char)iVar117;
              auVar88._9_7_ = auVar89._9_7_;
              auVar88._0_8_ = auVar79._0_8_;
              auVar88[8] = (char)iVar111;
              auVar34._1_8_ = auVar88._8_8_;
              auVar34[0] = uVar61;
              auVar34._9_7_ = 0;
              auVar33._10_6_ = 0;
              auVar33._0_10_ = SUB1610(auVar34 << 0x38, 6);
              auVar32._11_5_ = 0;
              auVar32._0_11_ = SUB1611(auVar33 << 0x30, 5);
              auVar31._12_4_ = 0;
              auVar31._0_12_ = SUB1612(auVar32 << 0x28, 4);
              auVar30._13_3_ = 0;
              auVar30._0_13_ = SUB1613(auVar31 << 0x20, 3);
              auVar87._14_2_ = 0;
              auVar87._0_14_ = SUB1614(auVar30 << 0x18, 2);
              auVar87 = auVar87 << 0x10;
              auVar102._0_14_ = auVar87._0_14_;
              auVar102[0xe] = uVar61;
              auVar102[0xf] = (char)((uint)iVar123 >> 8);
              auVar101._14_2_ = auVar102._14_2_;
              auVar101._0_13_ = auVar87._0_13_;
              auVar101[0xd] = uVar58;
              auVar100._13_3_ = auVar101._13_3_;
              auVar100._0_12_ = auVar87._0_12_;
              auVar100[0xc] = (char)((uint)iVar52 >> 8);
              auVar99._12_4_ = auVar100._12_4_;
              auVar99._0_11_ = auVar87._0_11_;
              auVar99[0xb] = (char)((uint)iVar118 >> 8);
              auVar98._11_5_ = auVar99._11_5_;
              auVar98._0_10_ = auVar87._0_10_;
              auVar98[10] = (char)((uint)iVar115 >> 8);
              auVar97._10_6_ = auVar98._10_6_;
              auVar97._0_9_ = auVar87._0_9_;
              auVar97[9] = uVar112;
              auVar96._9_7_ = auVar97._9_7_;
              auVar96._0_8_ = auVar87._0_8_;
              auVar96[8] = (char)((uint)iVar65 >> 8);
              auVar39._1_8_ = auVar96._8_8_;
              auVar39[0] = uVar63;
              auVar39._9_7_ = 0;
              auVar38._10_6_ = 0;
              auVar38._0_10_ = SUB1610(auVar39 << 0x38, 6);
              auVar37._11_5_ = 0;
              auVar37._0_11_ = SUB1611(auVar38 << 0x30, 5);
              auVar36._12_4_ = 0;
              auVar36._0_12_ = SUB1612(auVar37 << 0x28, 4);
              auVar35._13_3_ = 0;
              auVar35._0_13_ = SUB1613(auVar36 << 0x20, 3);
              auVar95._14_2_ = 0;
              auVar95._0_14_ = SUB1614(auVar35 << 0x18, 2);
              auVar95 = auVar95 << 0x10;
              auVar110._0_14_ = auVar95._0_14_;
              auVar110[0xe] = uVar63;
              auVar110[0xf] = (char)((int)(uint)auVar104[0xf] >> local_28[0]);
              auVar109._14_2_ = auVar110._14_2_;
              auVar109._0_13_ = auVar95._0_13_;
              auVar109[0xd] = uVar62;
              auVar108._13_3_ = auVar109._13_3_;
              auVar108._0_12_ = auVar95._0_12_;
              auVar108[0xc] = (char)iVar121;
              auVar107._12_4_ = auVar108._12_4_;
              auVar107._0_11_ = auVar95._0_11_;
              auVar107[0xb] = uVar59;
              auVar106._11_5_ = auVar107._11_5_;
              auVar106._0_10_ = auVar95._0_10_;
              auVar106[10] = uVar56;
              auVar105._10_6_ = auVar106._10_6_;
              auVar105._0_9_ = auVar95._0_9_;
              auVar105[9] = uVar54;
              auVar104._9_7_ = auVar105._9_7_;
              auVar104._0_8_ = auVar95._0_8_;
              auVar104[8] = (char)iVar52;
              auVar103._8_8_ = auVar104._8_8_;
              auVar103[7] = (char)iVar119;
              auVar103[6] = (char)iVar118;
              auVar103[5] = (char)iVar117;
              auVar103[4] = (char)iVar115;
              auVar103[3] = (char)iVar113;
              auVar103[2] = (char)auVar66._8_4_;
              auVar103[1] = (char)iVar111;
              *(uint8_t (*)[16])(arg2 + lVar47 + (ulong)uVar44) = auVar103 & auVar124;
              lVar47 = lVar47 + 0x10;
            } while (uVar50 < uVar53);
            uVar48 = uVar48 + uVar49;
            pbVar45 = pbVar45 + uVar49;
            if (uVar43 - uVar44 == uVar49) {
              return pbVar45;
            }
          }
          do {
            uVar48 = uVar48 + 1;
            *pbVar45 = (byte)((int)(uint)*pbVar45 >> (bVar46 & 0x1f)) & bVar2;
            pbVar45 = pbVar45 + 1;
          } while (uVar48 < uVar43);
        }
      } else if (bVar46 < 5) {
        if (bVar46 == 2) {
          uVar43 = arg1[1];
          pbVar45 = (byte *)(ulong)uVar43;
          if (uVar43 != 0) {
            pbVar1 = arg2 + (ulong)(uVar43 - 1) + 1;
            do {
              uVar43 = *arg2 >> 1 & 0x55;
              pbVar45 = (byte *)(ulong)uVar43;
              *arg2 = (byte)uVar43;
              arg2 = arg2 + 1;
            } while (arg2 != pbVar1);
          }
        }
      } else if (bVar46 == 8) {
        uVar43 = iVar52 * uVar44;
        if (uVar43 != 0) {
          uVar51 = 0;
          do {
            pbVar45 = (byte *)((uVar51 & 0xffffffff) / (ulong)uVar44);
            arg2[uVar51] = (byte)((int)(uint)arg2[uVar51] >>
                                  ((byte)local_28[(uVar51 & 0xffffffff) % (ulong)uVar44] & 0x1f));
            uVar51 = uVar51 + 1;
          } while ((uint)uVar51 < uVar43);
        }
      } else if ((bVar46 == 0x10) && (uVar43 = iVar52 * uVar44, uVar43 != 0)) {
        uVar48 = 0;
        do {
          uVar49 = uVar48 + 1;
          iVar52 = (int)((uint)arg2[1] + (uint)*arg2 * 0x100) >>
                   ((byte)local_28[(ulong)uVar48 % (ulong)uVar44] & 0x1f);
          arg2[1] = (byte)iVar52;
          pbVar45 = (byte *)(ulong)CONCAT22((short)((uint)iVar52 >> 0x10), (ushort)iVar52 >> 8);
          *arg2 = (byte)((uint)iVar52 >> 8);
          arg2 = arg2 + 2;
          uVar48 = uVar49;
        } while (uVar49 != uVar43);
      }
    }
  }
  return pbVar45;
}

/* ======================================================================
 * png_do_chop  (Ghidra `png_do_chop` @ 00548b90)
 * Signature: uint8_t png_do_chop(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_do_chop(int *arg1, ulong arg2)

{
  uint8_t *puVar1;
  uint8_t *puVar2;
  byte bVar3;
  uint8_t uVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  uint8_t uVar7;
  uint8_t uVar8;
  uint8_t uVar9;
  uint8_t uVar10;
  uint8_t uVar11;
  uint8_t uVar12;
  uint8_t uVar13;
  uint8_t uVar14;
  uint8_t uVar15;
  uint8_t uVar16;
  uint8_t uVar17;
  uint8_t uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;

  if (*(char *)((long)arg1 + 9) != '\x10') {
    return;
  }
  bVar3 = *(byte *)((long)arg1 + 10);
  iVar22 = 0;
  uVar20 = (uint)bVar3 * *arg1;
  if (uVar20 == 0)
    goto LAB_00548c6e;
  uVar24 = uVar20 - 1 >> 4;
  uVar23 = uVar24 << 4;
  if ((uVar24 == 0) ||
      (uVar20 < 0x10 || arg2 <= arg2 + (ulong)uVar20 * 2 && !CARRY8((ulong)uVar20, arg2))) {
    uVar23 = 0;
    uVar25 = arg2;
  LAB_00548c4b:
    lVar19 = 0;
    do {
      *(uint8_t *)(arg2 + lVar19) = *(uint8_t *)(uVar25 + lVar19 * 2);
      lVar19 = lVar19 + 1;
    } while (uVar23 + (int)lVar19 < uVar20);
  } else {
    lVar19 = 0;
    uVar21 = 0;
    do {
      puVar1 = (uint8_t *)(arg2 + lVar19 * 2);
      uVar4 = puVar1[2];
      uVar5 = puVar1[4];
      uVar6 = puVar1[6];
      uVar7 = puVar1[8];
      uVar8 = puVar1[10];
      uVar9 = puVar1[0xc];
      uVar10 = puVar1[0xe];
      uVar21 = uVar21 + 1;
      puVar2 = (uint8_t *)(arg2 + 0x10 + lVar19 * 2);
      uVar11 = *puVar2;
      uVar12 = puVar2[2];
      uVar13 = puVar2[4];
      uVar14 = puVar2[6];
      uVar15 = puVar2[8];
      uVar16 = puVar2[10];
      uVar17 = puVar2[0xc];
      uVar18 = puVar2[0xe];
      puVar2 = (uint8_t *)(arg2 + lVar19);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar2[4] = uVar7;
      puVar2[5] = uVar8;
      puVar2[6] = uVar9;
      puVar2[7] = uVar10;
      puVar2[8] = uVar11;
      puVar2[9] = uVar12;
      puVar2[10] = uVar13;
      puVar2[0xb] = uVar14;
      puVar2[0xc] = uVar15;
      puVar2[0xd] = uVar16;
      puVar2[0xe] = uVar17;
      puVar2[0xf] = uVar18;
      lVar19 = lVar19 + 0x10;
    } while (uVar21 < uVar24);
    uVar25 = arg2 + (ulong)uVar23 * 2;
    arg2 = arg2 + uVar23;
    if (uVar20 != uVar23)
      goto LAB_00548c4b;
  }
  bVar3 = *(byte *)((long)arg1 + 10);
  iVar22 = (uint)bVar3 * *arg1;
LAB_00548c6e:
  *(uint8_t *)((long)arg1 + 9) = 8;
  arg1[1] = iVar22;
  *(byte *)((long)arg1 + 0xb) = bVar3 << 3;
  return;
}

/* ======================================================================
 * png_do_read_swap_alpha  (Ghidra `png_do_read_swap_alpha` @ 00548c90)
 * Signature: uint8_t png_do_read_swap_alpha(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`
 */
void png_do_read_swap_alpha(int *arg1, long arg2)

{
  uint8_t *puVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  int iVar5;
  uint8_t *puVar6;

  iVar5 = *arg1;
  if ((char)arg1[2] == '\x06') {
    if (*(char *)((long)arg1 + 9) == '\b') {
      if (iVar5 != 0) {
        puVar6 = (uint8_t *)((ulong)(uint)arg1[1] + arg2);
        puVar1 = puVar6 + (ulong)(iVar5 - 1) * -4 + -4;
        do {
          uVar2 = puVar6[-1];
          puVar6[-1] = puVar6[-2];
          puVar6[-2] = puVar6[-3];
          puVar6[-3] = puVar6[-4];
          puVar6 = puVar6 + -4;
          *puVar6 = uVar2;
        } while (puVar6 != puVar1);
        return;
      }
    } else if (iVar5 != 0) {
      puVar6 = (uint8_t *)(arg2 + (ulong)(uint)arg1[1]);
      puVar1 = puVar6 + (ulong)(iVar5 - 1) * -8 + -8;
      do {
        uVar2 = puVar6[-1];
        uVar3 = puVar6[-2];
        puVar6[-1] = puVar6[-3];
        puVar6[-2] = puVar6[-4];
        puVar6[-3] = puVar6[-5];
        puVar6[-4] = puVar6[-6];
        uVar4 = puVar6[-7];
        puVar6[-7] = uVar2;
        puVar6[-5] = uVar4;
        puVar6[-6] = puVar6[-8];
        puVar6 = puVar6 + -8;
        *puVar6 = uVar3;
      } while (puVar6 != puVar1);
      return;
    }
  } else if ((char)arg1[2] == '\x04') {
    if (*(char *)((long)arg1 + 9) == '\b') {
      if (iVar5 != 0) {
        puVar6 = (uint8_t *)((ulong)(uint)arg1[1] + arg2);
        puVar1 = puVar6 + (ulong)(iVar5 - 1) * -2 + -2;
        do {
          uVar2 = puVar6[-1];
          puVar6[-1] = puVar6[-2];
          puVar6 = puVar6 + -2;
          *puVar6 = uVar2;
        } while (puVar1 != puVar6);
        return;
      }
    } else if (iVar5 != 0) {
      puVar6 = (uint8_t *)(arg2 + (ulong)(uint)arg1[1]);
      puVar1 = puVar6 + (ulong)(iVar5 - 1) * -4 + -4;
      do {
        uVar2 = puVar6[-1];
        uVar3 = puVar6[-2];
        puVar6[-1] = puVar6[-3];
        puVar6[-3] = uVar2;
        puVar6[-2] = puVar6[-4];
        puVar6 = puVar6 + -4;
        *puVar6 = uVar3;
      } while (puVar6 != puVar1);
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_do_read_invert_alpha  (Ghidra `png_do_read_invert_alpha` @ 00548e00)
 * Signature: uint8_t png_do_read_invert_alpha(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`
 */
void png_do_read_invert_alpha(int *arg1, long arg2)

{
  int iVar1;
  long lVar2;

  iVar1 = *arg1;
  if ((char)arg1[2] == '\x06') {
    if (*(char *)((long)arg1 + 9) == '\b') {
      if (iVar1 != 0) {
        arg2 = arg2 + (ulong)(uint)arg1[1];
        lVar2 = arg2 + (ulong)(iVar1 - 1) * -4;
        do {
          *(byte *)(arg2 + -1) = ~*(byte *)(arg2 + -1);
          arg2 = arg2 + -4;
        } while (arg2 != lVar2 + -4);
        return;
      }
    } else if (iVar1 != 0) {
      arg2 = arg2 + (ulong)(uint)arg1[1];
      lVar2 = arg2 + (ulong)(iVar1 - 1) * -8;
      do {
        *(byte *)(arg2 + -1) = ~*(byte *)(arg2 + -1);
        *(byte *)(arg2 + -2) = ~*(byte *)(arg2 + -2);
        arg2 = arg2 + -8;
      } while (lVar2 + -8 != arg2);
      return;
    }
  } else if ((char)arg1[2] == '\x04') {
    if (*(char *)((long)arg1 + 9) == '\b') {
      if (iVar1 != 0) {
        arg2 = arg2 + (ulong)(uint)arg1[1];
        lVar2 = arg2 + (ulong)(iVar1 - 1) * -2;
        do {
          *(byte *)(arg2 + -1) = ~*(byte *)(arg2 + -1);
          arg2 = arg2 + -2;
        } while (lVar2 + -2 != arg2);
        return;
      }
    } else if (iVar1 != 0) {
      arg2 = arg2 + (ulong)(uint)arg1[1];
      lVar2 = arg2 + (ulong)(iVar1 - 1) * -4;
      do {
        *(byte *)(arg2 + -1) = ~*(byte *)(arg2 + -1);
        *(byte *)(arg2 + -2) = ~*(byte *)(arg2 + -2);
        arg2 = arg2 + -4;
      } while (lVar2 + -4 != arg2);
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_do_read_filler  (Ghidra `png_do_read_filler` @ 00548ef0)
 * Signature: uint8_t png_do_read_filler(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`
 */
void png_do_read_filler(uint *arg1, long arg2, uint32_t arg3, uint arg4)

{
  uint8_t *puVar1;
  uint8_t uVar2;
  uint uVar3;
  uint8_t *puVar4;
  uint8_t *puVar5;
  uint8_t *puVar6;
  uint8_t *puVar7;
  uint8_t uVar8;
  uint8_t uVar9;

  uVar3 = *arg1;
  uVar9 = (uint8_t)((uint)arg3 >> 8);
  uVar8 = (uint8_t)arg3;
  if ((char)arg1[2] == '\0') {
    if (*(char *)((long)arg1 + 9) == '\b') {
      if ((arg4 & 0x80) != 0) {
        puVar7 = (uint8_t *)(arg2 + (ulong)uVar3);
        puVar6 = puVar7 + uVar3;
        if (1 < uVar3) {
          puVar4 = puVar7 + ~(ulong)(uVar3 - 2);
          puVar5 = puVar6;
          do {
            puVar7 = puVar7 + -1;
            puVar5[-1] = uVar8;
            puVar5 = puVar5 + -2;
            *puVar5 = *puVar7;
          } while (puVar7 != puVar4);
          puVar6 = puVar6 + (ulong)(uVar3 - 2) * -2 + -2;
        }
        puVar6[-1] = uVar8;
        *(uint8_t *)((long)arg1 + 10) = 2;
        *(uint8_t *)((long)arg1 + 0xb) = 0x10;
        arg1[1] = uVar3 * 2;
        return;
      }
      if (uVar3 != 0) {
        puVar5 = (uint8_t *)(arg2 + (ulong)uVar3);
        puVar7 = puVar5 + uVar3;
        puVar6 = puVar7 + (ulong)(uVar3 - 1) * -2 + -2;
        do {
          puVar5 = puVar5 + -1;
          puVar7[-1] = *puVar5;
          puVar7 = puVar7 + -2;
          *puVar7 = uVar8;
        } while (puVar6 != puVar7);
      }
      *(uint8_t *)((long)arg1 + 10) = 2;
      *(uint8_t *)((long)arg1 + 0xb) = 0x10;
      arg1[1] = uVar3 * 2;
      return;
    }
    if (*(char *)((long)arg1 + 9) == '\x10') {
      if ((arg4 & 0x80) != 0) {
        puVar6 = (uint8_t *)(arg2 + (ulong)uVar3 * 2);
        puVar7 = (uint8_t *)(arg2 + (ulong)uVar3 * 4);
        if (1 < uVar3) {
          puVar5 = puVar6 + (ulong)(uVar3 - 2) * -2 + -2;
          puVar4 = puVar7;
          do {
            puVar4[-1] = uVar9;
            puVar4[-2] = uVar8;
            puVar1 = puVar6 + -1;
            puVar6 = puVar6 + -2;
            puVar4[-3] = *puVar1;
            puVar4 = puVar4 + -4;
            *puVar4 = *puVar6;
          } while (puVar5 != puVar6);
          puVar7 = puVar7 + (ulong)(uVar3 - 2) * -4 + -4;
        }
        puVar7[-1] = uVar9;
        puVar7[-2] = uVar8;
        *(uint8_t *)((long)arg1 + 10) = 2;
        *(uint8_t *)((long)arg1 + 0xb) = 0x20;
        arg1[1] = uVar3 << 2;
        return;
      }
      if (uVar3 != 0) {
        puVar7 = (uint8_t *)(arg2 + (ulong)uVar3 * 2);
        puVar5 = (uint8_t *)(arg2 + (ulong)uVar3 * 4);
        puVar6 = puVar5 + (ulong)(uVar3 - 1) * -4 + -4;
        do {
          puVar4 = puVar7 + -1;
          puVar7 = puVar7 + -2;
          puVar5[-1] = *puVar4;
          uVar2 = *puVar7;
          puVar5[-3] = uVar9;
          puVar5[-2] = uVar2;
          puVar5 = puVar5 + -4;
          *puVar5 = uVar8;
        } while (puVar5 != puVar6);
      }
      *(uint8_t *)((long)arg1 + 10) = 2;
      *(uint8_t *)((long)arg1 + 0xb) = 0x20;
      arg1[1] = uVar3 << 2;
      return;
    }
  } else if ((char)arg1[2] == '\x02') {
    if (*(char *)((long)arg1 + 9) == '\b') {
      if ((arg4 & 0x80) != 0) {
        puVar7 = (uint8_t *)(arg2 + (ulong)uVar3 * 3);
        puVar6 = puVar7 + uVar3;
        if (1 < uVar3) {
          puVar5 = puVar6;
          do {
            puVar5[-1] = uVar8;
            puVar5[-2] = puVar7[-1];
            puVar4 = puVar7 + -2;
            puVar7 = puVar7 + -3;
            puVar5[-3] = *puVar4;
            puVar5 = puVar5 + -4;
            *puVar5 = *puVar7;
          } while (puVar6 + (ulong)(uVar3 - 2) * -4 + -4 != puVar5);
          puVar6 = puVar6 + (ulong)(uVar3 - 2) * -4 + -4;
        }
        puVar6[-1] = uVar8;
        *(uint8_t *)((long)arg1 + 10) = 4;
        *(uint8_t *)((long)arg1 + 0xb) = 0x20;
        arg1[1] = uVar3 << 2;
        return;
      }
      if (uVar3 != 0) {
        puVar5 = (uint8_t *)(arg2 + (ulong)uVar3 * 3);
        puVar7 = puVar5 + uVar3;
        puVar6 = puVar5 + (ulong)(uVar3 - 1) * -3 + -3;
        do {
          puVar7[-1] = puVar5[-1];
          puVar4 = puVar5 + -2;
          puVar5 = puVar5 + -3;
          puVar7[-2] = *puVar4;
          puVar7[-3] = *puVar5;
          puVar7 = puVar7 + -4;
          *puVar7 = uVar8;
        } while (puVar6 != puVar5);
      }
      *(uint8_t *)((long)arg1 + 10) = 4;
      *(uint8_t *)((long)arg1 + 0xb) = 0x20;
      arg1[1] = uVar3 << 2;
      return;
    }
    if (*(char *)((long)arg1 + 9) == '\x10') {
      if ((arg4 & 0x80) != 0) {
        puVar6 = (uint8_t *)(arg2 + (ulong)uVar3 * 6);
        puVar7 = puVar6 + (ulong)uVar3 * 2;
        if (1 < uVar3) {
          puVar5 = puVar6 + (ulong)(uVar3 - 2) * -6 + -6;
          puVar4 = puVar7;
          do {
            puVar4[-1] = uVar9;
            puVar4[-2] = uVar8;
            puVar4[-3] = puVar6[-1];
            puVar4[-4] = puVar6[-2];
            puVar4[-5] = puVar6[-3];
            puVar4[-6] = puVar6[-4];
            puVar1 = puVar6 + -5;
            puVar6 = puVar6 + -6;
            puVar4[-7] = *puVar1;
            puVar4 = puVar4 + -8;
            *puVar4 = *puVar6;
          } while (puVar5 != puVar6);
          puVar7 = puVar7 + (ulong)(uVar3 - 2) * -8 + -8;
        }
        puVar7[-1] = uVar9;
        puVar7[-2] = uVar8;
        *(uint8_t *)((long)arg1 + 10) = 4;
        *(uint8_t *)((long)arg1 + 0xb) = 0x40;
        arg1[1] = uVar3 << 3;
        return;
      }
      if (uVar3 != 0) {
        puVar7 = (uint8_t *)(arg2 + (ulong)uVar3 * 6);
        puVar5 = puVar7 + (ulong)uVar3 * 2;
        puVar6 = puVar7 + (ulong)(uVar3 - 1) * -6 + -6;
        do {
          puVar5[-1] = puVar7[-1];
          puVar5[-2] = puVar7[-2];
          puVar5[-3] = puVar7[-3];
          puVar5[-4] = puVar7[-4];
          puVar4 = puVar7 + -5;
          puVar7 = puVar7 + -6;
          puVar5[-5] = *puVar4;
          uVar2 = *puVar7;
          puVar5[-7] = uVar9;
          puVar5[-6] = uVar2;
          puVar5 = puVar5 + -8;
          *puVar5 = uVar8;
        } while (puVar6 != puVar7);
      }
      *(uint8_t *)((long)arg1 + 10) = 4;
      *(uint8_t *)((long)arg1 + 0xb) = 0x40;
      arg1[1] = uVar3 << 3;
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_do_gray_to_rgb  (Ghidra `png_do_gray_to_rgb` @ 005492e0)
 * Signature: uint8_t png_do_gray_to_rgb(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`
 */
void png_do_gray_to_rgb(uint *arg1, long arg2)

{
  uint8_t *puVar1;
  uint8_t uVar2;
  byte bVar3;
  uint uVar4;
  uint8_t *puVar5;
  char cVar6;
  uint8_t *puVar7;
  uint8_t *puVar8;
  byte bVar9;

  bVar3 = *(byte *)((long)arg1 + 9);
  uVar4 = *arg1;
  if (bVar3 < 8) {
    return;
  }
  bVar9 = (byte)arg1[2];
  if ((bVar9 & 2) != 0) {
    return;
  }
  if (bVar9 == 0) {
    if (bVar3 == 8) {
      if (uVar4 == 0)
        goto LAB_00549382;
      puVar7 = (uint8_t *)(arg2 + -1 + (ulong)uVar4);
      puVar8 = puVar7 + (ulong)uVar4 * 2;
      puVar5 = puVar7 + ~(ulong)(uVar4 - 1);
      do {
        *puVar8 = *puVar7;
        puVar8[-1] = *puVar7;
        uVar2 = *puVar7;
        puVar7 = puVar7 + -1;
        puVar8[-2] = uVar2;
        puVar8 = puVar8 + -3;
      } while (puVar7 != puVar5);
    } else {
      if (uVar4 == 0)
        goto LAB_00549382;
      puVar5 = (uint8_t *)(arg2 + -1 + (ulong)uVar4 * 2);
      puVar7 = puVar5 + (ulong)uVar4 * 4;
      puVar8 = puVar5 + (ulong)(uVar4 - 1) * -2 + -2;
      do {
        *puVar7 = *puVar5;
        puVar7[-1] = puVar5[-1];
        puVar7[-2] = *puVar5;
        puVar7[-3] = puVar5[-1];
        puVar7[-4] = *puVar5;
        puVar1 = puVar5 + -1;
        puVar5 = puVar5 + -2;
        puVar7[-5] = *puVar1;
        puVar7 = puVar7 + -6;
      } while (puVar8 != puVar5);
    }
  } else {
    if (bVar9 != 4)
      goto LAB_00549382;
    if (bVar3 == 8) {
      if (uVar4 == 0)
        goto LAB_00549382;
      puVar7 = (uint8_t *)(arg2 + -1 + (ulong)uVar4 * 2);
      puVar5 = (uint8_t *)(arg2 + -1 + (ulong)uVar4 * 4);
      puVar8 = puVar7 + (ulong)(uVar4 - 1) * -2 + -2;
      do {
        *puVar5 = *puVar7;
        puVar5[-1] = puVar7[-1];
        puVar5[-2] = puVar7[-1];
        puVar1 = puVar7 + -1;
        puVar7 = puVar7 + -2;
        puVar5[-3] = *puVar1;
        puVar5 = puVar5 + -4;
      } while (puVar8 != puVar7);
    } else {
      if (uVar4 == 0)
        goto LAB_00549382;
      puVar7 = (uint8_t *)(arg2 + -1 + (ulong)uVar4 * 4);
      puVar5 = (uint8_t *)(arg2 + -1 + (ulong)uVar4 * 8);
      puVar8 = puVar7 + (ulong)(uVar4 - 1) * -4 + -4;
      do {
        *puVar5 = *puVar7;
        puVar5[-1] = puVar7[-1];
        puVar5[-2] = puVar7[-2];
        puVar5[-3] = puVar7[-3];
        puVar5[-4] = puVar7[-2];
        puVar5[-5] = puVar7[-3];
        puVar5[-6] = puVar7[-2];
        puVar1 = puVar7 + -3;
        puVar7 = puVar7 + -4;
        puVar5[-7] = *puVar1;
        puVar5 = puVar5 + -8;
      } while (puVar8 != puVar7);
    }
  }
  bVar9 = (byte)arg1[2];
  bVar3 = *(byte *)((long)arg1 + 9);
LAB_00549382:
  *(byte *)(arg1 + 2) = bVar9 | 2;
  cVar6 = *(char *)((long)arg1 + 10) + '\x02';
  bVar3 = bVar3 * cVar6;
  *(char *)((long)arg1 + 10) = cVar6;
  *(byte *)((long)arg1 + 0xb) = bVar3;
  if (bVar3 < 8) {
    uVar4 = bVar3 * uVar4 + 7 >> 3;
  } else {
    uVar4 = (bVar3 >> 3) * uVar4;
  }
  arg1[1] = uVar4;
  return;
}

/* ======================================================================
 * png_do_rgb_to_gray  (Ghidra `png_do_rgb_to_gray` @ 005494f0)
 * Signature: uint8_t png_do_rgb_to_gray(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`
 */
uint64_t png_do_rgb_to_gray(long arg1, int *arg2, byte *arg3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  byte bVar9;
  uint64_t uVar10;
  char cVar11;
  byte *pbVar12;
  uint uVar13;
  short sVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;

  uVar10 = 0;
  bVar18 = *(byte *)(arg2 + 2);
  iVar6 = *arg2;
  if ((bVar18 & 2) == 0) {
    return 0;
  }
  cVar7 = *(char *)((long)arg2 + 9);
  uVar20 = (uint) * (ushort *)(arg1 + 0x3ec);
  uVar8 = (uint) * (ushort *)(arg1 + 0x3ea);
  uVar21 = (uint) * (ushort *)(arg1 + 0x3ee);
  if (bVar18 == 2) {
    if (cVar7 == '\b') {
      if ((*(long *)(arg1 + 0x288) == 0) || (lVar16 = *(long *)(arg1 + 0x290), lVar16 == 0)) {
        if (iVar6 != 0) {
          uVar10 = 0;
          iVar19 = 0;
          pbVar12 = arg3;
          pbVar15 = arg3;
          do {
            bVar18 = *pbVar12;
            bVar9 = pbVar12[2];
            pbVar5 = pbVar12 + 1;
            pbVar12 = pbVar12 + 3;
            if ((bVar18 == bVar9) && (bVar18 == *pbVar5)) {
              *pbVar15 = bVar9;
            } else {
              uVar10 = 1;
              *pbVar15 = (byte)(bVar9 * uVar21 + bVar18 * uVar8 + *pbVar5 * uVar20 >> 0xf);
            }
            iVar19 = iVar19 + 1;
            pbVar15 = pbVar15 + 1;
          } while (iVar19 != iVar6);
          goto LAB_00549b2b;
        }
        goto LAB_00549c60;
      }
      if (iVar6 == 0)
        goto LAB_00549536;
      iVar19 = 0;
      pbVar12 = arg3;
      pbVar15 = arg3;
      while (true) {
        pbVar5 = pbVar12 + 1;
        bVar18 = *pbVar12;
        pbVar1 = pbVar12 + 2;
        pbVar12 = pbVar12 + 3;
        bVar18 = *(byte *)(lVar16 + (ulong)bVar18);
        bVar9 = *(byte *)(lVar16 + (ulong)*pbVar1);
        if ((bVar18 == bVar9) && (bVar18 == *(byte *)(lVar16 + (ulong)*pbVar5))) {
          *pbVar15 = *pbVar1;
        } else {
          *pbVar15 = *(byte *)(*(long *)(arg1 + 0x288) +
                               (ulong)(bVar9 * uVar21 + bVar18 * uVar8 +
                                           *(byte *)(lVar16 + (ulong)*pbVar5) * uVar20 >>
                                       0xf));
          uVar10 = 1;
        }
        iVar19 = iVar19 + 1;
        if (iVar19 == iVar6)
          break;
        lVar16 = *(long *)(arg1 + 0x290);
        pbVar15 = pbVar15 + 1;
      }
      bVar18 = *(byte *)(arg2 + 2);
      cVar7 = *(char *)((long)arg2 + 9);
    } else if ((*(long *)(arg1 + 0x2a8) == 0) || (*(long *)(arg1 + 0x2a0) == 0)) {
      if (iVar6 == 0)
        goto LAB_00549c60;
      uVar10 = 0;
      pbVar15 = arg3;
      pbVar12 = arg3;
      do {
        bVar18 = *pbVar15;
        pbVar5 = pbVar15 + 1;
        pbVar1 = pbVar15 + 3;
        pbVar2 = pbVar15 + 4;
        sVar14 = CONCAT11(bVar18, *pbVar5);
        pbVar3 = pbVar15 + 2;
        pbVar4 = pbVar15 + 5;
        pbVar15 = pbVar15 + 6;
        if (sVar14 != CONCAT11(*pbVar2, *pbVar4) || sVar14 != CONCAT11(*pbVar3, *pbVar1)) {
          uVar10 = 1;
        }
        uVar13 = CONCAT11(*pbVar2, *pbVar4) * uVar21 + CONCAT11(bVar18, *pbVar5) * uVar8 +
                     CONCAT11(*pbVar3, *pbVar1) * uVar20 >>
                 0xf;
        pbVar12[1] = (byte)uVar13;
        *pbVar12 = (byte)(uVar13 >> 8);
        pbVar12 = pbVar12 + 2;
      } while (arg3 + (ulong)(iVar6 - 1) * 6 + 6 != pbVar15);
    LAB_00549b2b:
      bVar18 = *(byte *)(arg2 + 2);
      cVar7 = *(char *)((long)arg2 + 9);
    } else {
      if (iVar6 == 0) {
      LAB_00549c60:
        uVar10 = 0;
        goto LAB_00549536;
      }
      pbVar15 = arg3;
      pbVar12 = arg3;
      do {
        bVar18 = *pbVar15;
        pbVar5 = pbVar15 + 1;
        pbVar1 = pbVar15 + 3;
        pbVar2 = pbVar15 + 4;
        sVar14 = CONCAT11(bVar18, *pbVar5);
        pbVar3 = pbVar15 + 2;
        pbVar4 = pbVar15 + 5;
        pbVar15 = pbVar15 + 6;
        if ((sVar14 != CONCAT11(*pbVar2, *pbVar4)) || (sVar14 != CONCAT11(*pbVar3, *pbVar1))) {
          lVar16 = *(long *)(arg1 + 0x2a8);
          bVar9 = (byte) * (uint32_t *)(arg1 + 0x270);
          uVar13 =
              *(ushort *)(*(long *)(lVar16 + (long)((int)(uint)*pbVar4 >> (bVar9 & 0x1f)) * 8) +
                          (ulong)*pbVar2 * 2) *
                  uVar21 +
              *(ushort *)(*(long *)(lVar16 + (long)((int)(uint)*pbVar1 >> (bVar9 & 0x1f)) * 8) +
                          (ulong)*pbVar3 * 2) *
                  uVar20 +
              *(ushort *)(*(long *)(lVar16 + (long)((int)(uint)*pbVar5 >> (bVar9 & 0x1f)) * 8) +
                          (ulong)bVar18 * 2) *
                  uVar8;
          uVar10 = 1;
          sVar14 = *(short *)(*(long *)(*(long *)(arg1 + 0x2a0) +
                                        (long)((int)(uVar13 >> 0xf & 0xff) >> (bVar9 & 0x1f)) * 8) +
                              (ulong)(uVar13 >> 0x17 & 0xff) * 2);
        }
        pbVar12[1] = (byte)sVar14;
        *pbVar12 = (byte)((ushort)sVar14 >> 8);
        pbVar12 = pbVar12 + 2;
      } while (arg3 + (ulong)(iVar6 - 1) * 2 + 2 != pbVar12);
      bVar18 = *(byte *)(arg2 + 2);
      cVar7 = *(char *)((long)arg2 + 9);
    }
  }
  if (bVar18 != 6)
    goto LAB_00549536;
  if (cVar7 == '\b') {
    lVar16 = *(long *)(arg1 + 0x288);
    if ((lVar16 == 0) || (lVar17 = *(long *)(arg1 + 0x290), lVar17 == 0)) {
      if (iVar6 == 0)
        goto LAB_00549536;
      pbVar15 = arg3 + (ulong)(iVar6 - 1) * 2 + 2;
      pbVar12 = arg3;
      do {
        bVar18 = *arg3;
        if (bVar18 != arg3[2] || bVar18 != arg3[1]) {
          uVar10 = 1;
        }
        *pbVar12 = (byte)(arg3[1] * uVar20 + bVar18 * uVar8 + arg3[2] * uVar21 >> 0xf);
        pbVar5 = arg3 + 3;
        arg3 = arg3 + 4;
        pbVar12[1] = *pbVar5;
        pbVar12 = pbVar12 + 2;
      } while (pbVar15 != pbVar12);
    } else {
      if (iVar6 == 0)
        goto LAB_00549536;
      pbVar15 = arg3 + (ulong)(iVar6 - 1) * 4;
      pbVar12 = arg3;
      while (true) {
        bVar18 = *(byte *)(lVar17 + (ulong)*arg3);
        if ((bVar18 != *(byte *)(lVar17 + (ulong)arg3[2])) ||
            (bVar18 != *(byte *)(lVar17 + (ulong)arg3[1]))) {
          uVar10 = 1;
        }
        *pbVar12 = *(byte *)(lVar16 +
                             (ulong)(*(byte *)(lVar17 + (ulong)arg3[1]) * uVar20 + bVar18 * uVar8 +
                                         *(byte *)(lVar17 + (ulong)arg3[2]) * uVar21 >>
                                     0xf));
        pbVar12[1] = arg3[3];
        if (arg3 == pbVar15)
          break;
        lVar17 = *(long *)(arg1 + 0x290);
        lVar16 = *(long *)(arg1 + 0x288);
        pbVar12 = pbVar12 + 2;
        arg3 = arg3 + 4;
      }
    }
  } else {
    if ((*(long *)(arg1 + 0x2a8) != 0) && (*(long *)(arg1 + 0x2a0) != 0)) {
      if (iVar6 != 0) {
        pbVar15 = arg3 + (ulong)(iVar6 - 1) * 8 + 8;
        pbVar12 = arg3;
        do {
          sVar14 = CONCAT11(*arg3, arg3[1]);
          if ((sVar14 != CONCAT11(arg3[4], arg3[5])) || (sVar14 != CONCAT11(arg3[2], arg3[3]))) {
            lVar16 = *(long *)(arg1 + 0x2a8);
            bVar18 = *(byte *)(arg1 + 0x270);
            uVar13 =
                *(ushort *)(*(long *)(lVar16 + (long)((int)(uint)arg3[5] >> (bVar18 & 0x1f)) * 8) +
                            (ulong)arg3[4] * 2) *
                    uVar21 +
                *(ushort *)(*(long *)(lVar16 + (long)((int)(uint)arg3[3] >>
                                                      (*(byte *)(arg1 + 0x270) & 0x1f)) *
                                                   8) +
                            (ulong)arg3[2] * 2) *
                    uVar20 +
                *(ushort *)(*(long *)(lVar16 + (long)((int)(uint)arg3[1] >> (bVar18 & 0x1f)) * 8) +
                            (ulong)*arg3 * 2) *
                    uVar8;
            sVar14 =
                *(short *)(*(long *)(*(long *)(arg1 + 0x2a0) +
                                     (long)((int)(uVar13 >> 0xf & 0xff) >> (bVar18 & 0x1f)) * 8) +
                           (ulong)(uVar13 >> 0x17 & 0xff) * 2);
            uVar10 = 1;
          }
          pbVar12[1] = (byte)sVar14;
          *pbVar12 = (byte)((ushort)sVar14 >> 8);
          pbVar12[2] = arg3[6];
          pbVar5 = arg3 + 7;
          arg3 = arg3 + 8;
          pbVar12[3] = *pbVar5;
          pbVar12 = pbVar12 + 4;
        } while (pbVar15 != arg3);
        bVar18 = *(byte *)(arg2 + 2);
        cVar7 = *(char *)((long)arg2 + 9);
      }
      goto LAB_00549536;
    }
    if (iVar6 == 0)
      goto LAB_00549536;
    pbVar15 = arg3 + (ulong)(iVar6 - 1) * 4 + 4;
    pbVar12 = arg3;
    do {
      sVar14 = CONCAT11(*arg3, arg3[1]);
      if (sVar14 != CONCAT11(arg3[4], arg3[5]) || sVar14 != CONCAT11(arg3[2], arg3[3])) {
        uVar10 = 1;
      }
      uVar13 = CONCAT11(arg3[4], arg3[5]) * uVar21 + CONCAT11(*arg3, arg3[1]) * uVar8 +
                   CONCAT11(arg3[2], arg3[3]) * uVar20 >>
               0xf;
      pbVar12[1] = (byte)uVar13;
      *pbVar12 = (byte)(uVar13 >> 8);
      pbVar12[2] = arg3[6];
      pbVar5 = arg3 + 7;
      arg3 = arg3 + 8;
      pbVar12[3] = *pbVar5;
      pbVar12 = pbVar12 + 4;
    } while (pbVar15 != pbVar12);
  }
  bVar18 = *(byte *)(arg2 + 2);
  cVar7 = *(char *)((long)arg2 + 9);
LAB_00549536:
  *(byte *)(arg2 + 2) = bVar18 & 0xfd;
  cVar11 = *(char *)((long)arg2 + 10) + -2;
  bVar18 = cVar7 * cVar11;
  *(char *)((long)arg2 + 10) = cVar11;
  *(byte *)((long)arg2 + 0xb) = bVar18;
  if (bVar18 < 8) {
    uVar8 = (uint)bVar18 * iVar6 + 7 >> 3;
  } else {
    uVar8 = (uint)(bVar18 >> 3) * iVar6;
  }
  arg2[1] = uVar8;
  return uVar10;
}

/* ======================================================================
 * png_build_grayscale_palette  (Ghidra `png_build_grayscale_palette` @ 00549c70)
 * Signature: uint8_t png_build_grayscale_palette(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_build_grayscale_palette(int arg1, long arg2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint8_t uVar4;
  int iVar5;
  uint uVar6;

  if ((arg2 != 0) && (uVar6 = arg1 - 1, uVar6 < 8)) {
    iVar1 = *(int *)(CSWTCH_42 + (ulong)uVar6 * 4);
    iVar2 = *(int *)(CSWTCH_43 + (ulong)uVar6 * 4);
    if (0 < iVar1) {
      iVar5 = 0;
      lVar3 = 0;
      do {
        uVar4 = (uint8_t)iVar5;
        *(uint8_t *)(arg2 + lVar3) = uVar4;
        *(uint8_t *)(arg2 + 1 + lVar3) = uVar4;
        *(uint8_t *)(arg2 + 2 + lVar3) = uVar4;
        lVar3 = lVar3 + 3;
        iVar5 = iVar5 + iVar2;
      } while (lVar3 != (ulong)(iVar1 - 1) * 3 + 3);
    }
  }
  return;
}

/* ======================================================================
 * png_do_background  (Ghidra `png_do_background` @ 00549cc0)
 * Signature: uint8_t png_do_background(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`
 */
void png_do_background(uint *arg1, byte *arg2, long arg3, long arg4, long arg5, long arg6,
                       long arg7, long arg8, long arg9, long arg10, long arg11, byte arg12)

{
  byte bVar1;
  byte bVar2;
  uint16_t uVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  byte bVar10;
  int iVar11;
  byte *pbVar12;
  byte bVar13;
  byte *pbVar14;
  int iVar15;
  short sVar16;
  uint uVar17;

  uVar5 = *arg1;
  if (arg4 == 0) {
    return;
  }
  bVar13 = (byte)arg1[2];
  bVar10 = bVar13 & 4;
  if ((bVar13 & 4) == 0) {
    if (bVar13 == 2)
      goto LAB_00549f05;
  LAB_00549d14:
    if (bVar13 < 3) {
      if (bVar13 != 0)
        goto switchD_0054a078_caseD_0;
      switch (*(uint8_t *)((long)arg1 + 9)) {
      default:
        goto switchD_0054a078_caseD_0;
      case 1:
        if (uVar5 == 0)
          goto switchD_0054a078_caseD_0;
        uVar6 = 7;
        uVar17 = 0;
        do {
          bVar13 = (byte)uVar6;
          if (((int)(uint)*arg2 >> (bVar13 & 0x1f) & 1U) == (uint) * (ushort *)(arg3 + 8)) {
            bVar10 = *arg2 & (byte)(0x7f7f >> (7 - bVar13 & 0x1f));
            *arg2 = bVar10;
            *arg2 = bVar10 | (char)*(uint16_t *)(arg4 + 8) << (bVar13 & 0x1f);
          }
          if ((int)uVar6 == 0) {
            arg2 = arg2 + 1;
            uVar6 = CONCAT71((int7)(uVar6 >> 8), 7);
          } else {
            uVar6 = (ulong)((int)uVar6 - 1);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar5);
        break;
      case 2:
        if (arg6 == 0) {
          if (uVar5 == 0)
            goto switchD_0054a078_caseD_0;
          uVar6 = 6;
          uVar17 = 0;
          do {
            bVar13 = (byte)uVar6;
            if (((int)(uint)*arg2 >> (bVar13 & 0x1f) & 3U) == (uint) * (ushort *)(arg3 + 8)) {
              bVar10 = *arg2 & (byte)(0x3f3f >> (6 - bVar13 & 0x1f));
              *arg2 = bVar10;
              *arg2 = bVar10 | (char)*(uint16_t *)(arg4 + 8) << (bVar13 & 0x1f);
            }
            if ((int)uVar6 == 0) {
              arg2 = arg2 + 1;
              uVar6 = CONCAT71((int7)(uVar6 >> 8), 6);
            } else {
              uVar6 = (ulong)((int)uVar6 - 2);
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar5);
        } else {
          if (uVar5 == 0)
            goto switchD_0054a078_caseD_0;
          uVar6 = 6;
          uVar17 = 0;
          do {
            bVar13 = *arg2;
            bVar10 = (byte)uVar6;
            uVar8 = (int)(uint)bVar13 >> (bVar10 & 0x1f);
            if ((uVar8 & 3) == (uint) * (ushort *)(arg3 + 8)) {
              bVar13 = bVar13 & (byte)(0x3f3f >> (6 - bVar10 & 0x1f));
              *arg2 = bVar13;
              *arg2 = bVar13 | (char)*(uint16_t *)(arg4 + 8) << (bVar10 & 0x1f);
            } else {
              uVar8 = uVar8 & 3;
              *arg2 = bVar13 & (byte)(0x3f3f >> (6 - bVar10 & 0x1f)) |
                      (*(byte *)(arg6 + (int)(uVar8 * 4 | uVar8 << 4 | uVar8 | uVar8 << 6)) >> 6)
                          << (bVar10 & 0x1f);
            }
            if ((int)uVar6 == 0) {
              arg2 = arg2 + 1;
              uVar6 = CONCAT71((int7)(uVar6 >> 8), 6);
            } else {
              uVar6 = (ulong)((int)uVar6 - 2);
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar5);
        }
        break;
      case 4:
        if (arg6 == 0) {
          if (uVar5 == 0)
            goto switchD_0054a078_caseD_0;
          uVar6 = 4;
          uVar17 = 0;
          do {
            bVar13 = (byte)uVar6;
            if (((int)(uint)*arg2 >> (bVar13 & 0x1f) & 0xfU) == (uint) * (ushort *)(arg3 + 8)) {
              bVar10 = *arg2 & (byte)(0xf0f >> (4 - bVar13 & 0x1f));
              *arg2 = bVar10;
              *arg2 = bVar10 | (char)*(uint16_t *)(arg4 + 8) << (bVar13 & 0x1f);
            }
            if ((int)uVar6 == 0) {
              arg2 = arg2 + 1;
              uVar6 = CONCAT71((int7)(uVar6 >> 8), 4);
            } else {
              uVar6 = (ulong)((int)uVar6 - 4);
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar5);
        } else {
          if (uVar5 == 0)
            goto switchD_0054a078_caseD_0;
          uVar6 = 4;
          uVar17 = 0;
          do {
            bVar13 = *arg2;
            bVar10 = (byte)uVar6;
            uVar8 = (int)(uint)bVar13 >> (bVar10 & 0x1f);
            if ((uVar8 & 0xf) == (uint) * (ushort *)(arg3 + 8)) {
              bVar13 = bVar13 & (byte)(0xf0f >> (4 - bVar10 & 0x1f));
              *arg2 = bVar13;
              *arg2 = bVar13 | (char)*(uint16_t *)(arg4 + 8) << (bVar10 & 0x1f);
            } else {
              uVar8 = uVar8 & 0xf;
              *arg2 = bVar13 & (byte)(0xf0f >> (4 - bVar10 & 0x1f)) |
                      (*(byte *)(arg6 + (int)(uVar8 << 4 | uVar8)) >> 4) << (bVar10 & 0x1f);
            }
            if ((int)uVar6 == 0) {
              arg2 = arg2 + 1;
              uVar6 = CONCAT71((int7)(uVar6 >> 8), 4);
            } else {
              uVar6 = (ulong)((int)uVar6 - 4);
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar5);
        }
        break;
      case 8:
        if (arg6 == 0) {
          if (uVar5 == 0)
            goto switchD_0054a078_caseD_0;
          pbVar12 = arg2 + (ulong)(uVar5 - 1) + 1;
          do {
            if ((ushort)*arg2 == *(ushort *)(arg3 + 8)) {
              *arg2 = (byte) * (uint16_t *)(arg4 + 8);
            }
            arg2 = arg2 + 1;
          } while (arg2 != pbVar12);
        } else {
          if (uVar5 == 0)
            goto switchD_0054a078_caseD_0;
          pbVar12 = arg2 + (ulong)(uVar5 - 1) + 1;
          do {
            if ((ushort)*arg2 == *(ushort *)(arg3 + 8)) {
              *arg2 = (byte) * (uint16_t *)(arg4 + 8);
            } else {
              *arg2 = *(byte *)(arg6 + (ulong)*arg2);
            }
            arg2 = arg2 + 1;
          } while (arg2 != pbVar12);
        }
        break;
      case 0x10:
        if (arg9 == 0) {
          if (uVar5 == 0)
            goto switchD_0054a078_caseD_0;
          pbVar12 = arg2 + (ulong)(uVar5 - 1) * 2 + 2;
          do {
            if (*(short *)(arg3 + 8) == (ushort)((ushort)*arg2 * 0x100 + (ushort)arg2[1])) {
              *arg2 = *(byte *)(arg4 + 9);
              arg2[1] = (byte) * (uint16_t *)(arg4 + 8);
            }
            arg2 = arg2 + 2;
          } while (arg2 != pbVar12);
        } else {
          if (uVar5 == 0)
            goto switchD_0054a078_caseD_0;
          pbVar12 = arg2 + (ulong)(uVar5 - 1) * 2 + 2;
          do {
            if (*(short *)(arg3 + 8) == (ushort)((ushort)arg2[1] + (ushort)*arg2 * 0x100)) {
              *arg2 = *(byte *)(arg4 + 9);
              arg2[1] = (byte) * (uint16_t *)(arg4 + 8);
            } else {
              uVar3 =
                  *(uint16_t *)(*(long *)(arg9 + (long)((int)(uint)arg2[1] >> (arg12 & 0x1f)) * 8) +
                                (ulong)*arg2 * 2);
              arg2[1] = (byte)uVar3;
              *arg2 = (byte)((ushort)uVar3 >> 8);
            }
            arg2 = arg2 + 2;
          } while (arg2 != pbVar12);
        }
      }
    } else if (bVar13 == 4) {
      if (*(char *)((long)arg1 + 9) == '\b') {
        if (((arg8 == 0) || (arg7 == 0)) || (arg6 == 0)) {
          lVar9 = 0;
          if (uVar5 == 0)
            goto switchD_0054a078_caseD_0;
          do {
            bVar13 = arg2[lVar9 * 2 + 1];
            if (bVar13 == 0xff) {
              arg2[lVar9] = arg2[lVar9 * 2];
            } else if (bVar13 == 0) {
              arg2[lVar9] = (byte) * (uint16_t *)(arg4 + 8);
            } else {
              uVar17 = (ushort)((ushort)bVar13 * (ushort)arg2[lVar9 * 2]) + 0x80 +
                       (uint)(ushort)((0xff - (ushort)bVar13) * *(short *)(arg5 + 8));
              arg2[lVar9] = (byte)((uVar17 & 0xffff) + (uVar17 >> 8 & 0xff) >> 8);
            }
            lVar9 = lVar9 + 1;
          } while ((uint)lVar9 < uVar5);
        } else {
          if (uVar5 == 0)
            goto switchD_0054a078_caseD_0;
          lVar9 = 0;
          do {
            bVar13 = arg2[lVar9 * 2 + 1];
            if (bVar13 == 0xff) {
              arg2[lVar9] = *(byte *)(arg6 + (ulong)arg2[lVar9 * 2]);
            } else if (bVar13 == 0) {
              arg2[lVar9] = (byte) * (uint16_t *)(arg4 + 8);
            } else {
              uVar17 = (ushort)((0xff - (ushort)bVar13) * *(short *)(arg5 + 8)) + 0x80 +
                       (uint)(ushort)((ushort) * (byte *)(arg8 + (ulong)arg2[lVar9 * 2]) *
                                      (ushort)bVar13);
              arg2[lVar9] = *(byte *)(arg7 + (ulong)(uVar17 + (uVar17 >> 8 & 0xff) >> 8 & 0xff));
            }
            lVar9 = lVar9 + 1;
          } while ((uint)lVar9 < uVar5);
        }
      } else if (((arg10 == 0) || (arg9 == 0)) || (arg11 == 0)) {
        if (uVar5 == 0)
          goto switchD_0054a078_caseD_0;
        pbVar12 = arg2 + (ulong)(uVar5 - 1) * 4 + 4;
        pbVar14 = arg2;
        do {
          uVar7 = (ushort)arg2[2] * 0x100 + (ushort)arg2[3];
          if (uVar7 == 0xffff) {
            *(uint16_t *)pbVar14 = *(uint16_t *)arg2;
          } else if (uVar7 == 0) {
            *pbVar14 = *(byte *)(arg4 + 9);
            pbVar14[1] = (byte) * (uint16_t *)(arg4 + 8);
          } else {
            uVar17 = ((uint)*arg2 * 0x100 + (uint)arg2[1]) * (uint)uVar7 + 0x8000 +
                     (0xffff - (uint)uVar7) * (uint) * (ushort *)(arg5 + 8);
            iVar11 = uVar17 + (uVar17 >> 0x10);
            pbVar14[1] = (byte)((uint)iVar11 >> 0x10);
            *pbVar14 = (byte)((uint)iVar11 >> 0x18);
          }
          arg2 = arg2 + 4;
          pbVar14 = pbVar14 + 2;
        } while (arg2 != pbVar12);
      } else {
        if (uVar5 == 0)
          goto switchD_0054a078_caseD_0;
        pbVar12 = arg2 + (ulong)(uVar5 - 1) * 4 + 4;
        pbVar14 = arg2;
        do {
          uVar7 = (ushort)arg2[2] * 0x100 + (ushort)arg2[3];
          if (uVar7 == 0xffff) {
            uVar6 = (ulong)*arg2;
            lVar9 = *(long *)(arg9 + (long)((int)(uint)arg2[1] >> (arg12 & 0x1f)) * 8);
          LAB_0054a3fc:
            uVar3 = *(uint16_t *)(lVar9 + uVar6 * 2);
            pbVar14[1] = (byte)uVar3;
            *pbVar14 = (byte)((ushort)uVar3 >> 8);
          } else {
            if (uVar7 != 0) {
              uVar17 = (0xffff - (uint)uVar7) * (uint) * (ushort *)(arg5 + 8) + 0x8000 +
                       (uint) *
                           (ushort *)(*(long *)(arg11 +
                                                (long)((int)(uint)arg2[1] >> (arg12 & 0x1f)) * 8) +
                                      (ulong)*arg2 * 2) *
                           (uint)uVar7;
              uVar17 = (uVar17 >> 0x10) + uVar17;
              uVar6 = (ulong)(uVar17 >> 0x18);
              lVar9 = *(long *)(arg10 + (long)((int)(uVar17 >> 0x10 & 0xff) >> (arg12 & 0x1f)) * 8);
              goto LAB_0054a3fc;
            }
            *pbVar14 = *(byte *)(arg4 + 9);
            pbVar14[1] = (byte) * (uint16_t *)(arg4 + 8);
          }
          arg2 = arg2 + 4;
          pbVar14 = pbVar14 + 2;
        } while (arg2 != pbVar12);
      }
    } else {
      if (bVar13 != 6)
        goto switchD_0054a078_caseD_0;
      if (*(char *)((long)arg1 + 9) == '\b') {
        if (((arg8 != 0) && (arg7 != 0)) && (arg6 != 0)) {
          if (uVar5 != 0) {
            pbVar12 = arg2 + (ulong)(uVar5 - 1) * 4 + 4;
            pbVar14 = arg2;
            do {
              bVar13 = arg2[3];
              if (bVar13 == 0xff) {
                *pbVar14 = *(byte *)(arg6 + (ulong)*arg2);
                pbVar14[1] = *(byte *)(arg6 + (ulong)arg2[1]);
                pbVar14[2] = *(byte *)(arg6 + (ulong)arg2[2]);
              } else if (bVar13 == 0) {
                *pbVar14 = (byte) * (uint16_t *)(arg4 + 2);
                pbVar14[1] = (byte) * (uint16_t *)(arg4 + 4);
                pbVar14[2] = (byte) * (uint16_t *)(arg4 + 6);
              } else {
                sVar16 = 0xff - (ushort)bVar13;
                uVar17 = (ushort)(sVar16 * *(short *)(arg5 + 2)) + 0x80 +
                         (uint)(ushort)((ushort) * (byte *)(arg8 + (ulong)*arg2) * (ushort)bVar13);
                *pbVar14 = *(byte *)(arg7 + (ulong)(uVar17 + (uVar17 >> 8 & 0xff) >> 8 & 0xff));
                uVar17 =
                    (ushort)(sVar16 * *(short *)(arg5 + 4)) + 0x80 +
                    (uint)(ushort)((ushort) * (byte *)(arg8 + (ulong)arg2[1]) * (ushort)bVar13);
                pbVar14[1] = *(byte *)(arg7 + (ulong)(uVar17 + (uVar17 >> 8 & 0xff) >> 8 & 0xff));
                uVar17 =
                    (ushort)(sVar16 * *(short *)(arg5 + 6)) + 0x80 +
                    (uint)(ushort)((ushort) * (byte *)(arg8 + (ulong)arg2[2]) * (ushort)bVar13);
                pbVar14[2] =
                    *(byte *)(arg7 + ((ulong)uVar17 + (ulong)(byte)(uVar17 >> 8) >> 8 & 0xff));
              }
              arg2 = arg2 + 4;
              pbVar14 = pbVar14 + 3;
            } while (arg2 != pbVar12);
            bVar13 = (byte)arg1[2];
            bVar10 = bVar13 & 4;
          }
          goto switchD_0054a078_caseD_0;
        }
        if (uVar5 == 0)
          goto switchD_0054a078_caseD_0;
        pbVar12 = arg2 + (ulong)(uVar5 - 1) * 4 + 4;
        pbVar14 = arg2;
        do {
          bVar13 = arg2[3];
          if (bVar13 == 0xff) {
            *pbVar14 = *arg2;
            pbVar14[1] = arg2[1];
            pbVar14[2] = arg2[2];
          } else if (bVar13 == 0) {
            *pbVar14 = (byte) * (uint16_t *)(arg4 + 2);
            pbVar14[1] = (byte) * (uint16_t *)(arg4 + 4);
            pbVar14[2] = (byte) * (uint16_t *)(arg4 + 6);
          } else {
            sVar16 = 0xff - (ushort)bVar13;
            uVar17 = (ushort)((ushort)bVar13 * (ushort)*arg2) + 0x80 +
                     (uint)(ushort)(sVar16 * *(short *)(arg4 + 2));
            *pbVar14 = (byte)((uVar17 >> 8 & 0xff) + (uVar17 & 0xffff) >> 8);
            uVar17 = (ushort)((ushort)arg2[1] * (ushort)bVar13) + 0x80 +
                     (uint)(ushort)(sVar16 * *(short *)(arg4 + 4));
            pbVar14[1] = (byte)((uVar17 >> 8 & 0xff) + (uVar17 & 0xffff) >> 8);
            uVar17 = (ushort)((ushort)arg2[2] * (ushort)bVar13) + 0x80 +
                     (uint)(ushort)(sVar16 * *(short *)(arg4 + 6));
            pbVar14[2] = (byte)((uVar17 & 0xffff) + (uVar17 >> 8 & 0xff) >> 8);
          }
          arg2 = arg2 + 4;
          pbVar14 = pbVar14 + 3;
        } while (arg2 != pbVar12);
      } else {
        if (((arg10 != 0) && (arg9 != 0)) && (arg11 != 0)) {
          if (uVar5 != 0) {
            pbVar12 = arg2 + (ulong)(uVar5 - 1) * 8 + 8;
            pbVar14 = arg2;
            do {
              uVar7 = (ushort)arg2[6] * 0x100 + (ushort)arg2[7];
              if (uVar7 == 0xffff) {
                uVar3 = *(
                    uint16_t *)(*(long *)(arg9 + (long)((int)(uint)arg2[1] >> (arg12 & 0x1f)) * 8) +
                                (ulong)*arg2 * 2);
                pbVar14[1] = (byte)uVar3;
                *pbVar14 = (byte)((ushort)uVar3 >> 8);
                uVar3 = *(
                    uint16_t *)(*(long *)(arg9 + (long)((int)(uint)arg2[3] >> (arg12 & 0x1f)) * 8) +
                                (ulong)arg2[2] * 2);
                pbVar14[3] = (byte)uVar3;
                pbVar14[2] = (byte)((ushort)uVar3 >> 8);
                uVar6 = (ulong)arg2[4];
                lVar9 = *(long *)(arg9 + (long)((int)(uint)arg2[5] >> (arg12 & 0x1f)) * 8);
              LAB_0054a30d:
                uVar3 = *(uint16_t *)(lVar9 + uVar6 * 2);
                pbVar14[5] = (byte)uVar3;
                pbVar14[4] = (byte)((ushort)uVar3 >> 8);
              } else {
                if (uVar7 != 0) {
                  uVar8 = (uint)uVar7;
                  iVar11 = 0xffff - uVar8;
                  uVar17 = (uint) * (ushort *)(arg5 + 2) * iVar11 + 0x8000 +
                           *(ushort *)(*(long *)(arg11 +
                                                 (long)((int)(uint)arg2[1] >> (arg12 & 0x1f)) * 8) +
                                       (ulong)*arg2 * 2) *
                               uVar8;
                  uVar17 = uVar17 + (uVar17 >> 0x10);
                  uVar3 = *(uint16_t *)(*(long *)(arg10 + (long)((int)(uVar17 >> 0x10 & 0xff) >>
                                                                 (arg12 & 0x1f)) *
                                                              8) +
                                        (ulong)(uVar17 >> 0x18) * 2);
                  pbVar14[1] = (byte)uVar3;
                  *pbVar14 = (byte)((ushort)uVar3 >> 8);
                  uVar17 = (uint) * (ushort *)(arg5 + 4) * iVar11 + 0x8000 +
                           *(ushort *)(*(long *)(arg11 +
                                                 (long)((int)(uint)arg2[3] >> (arg12 & 0x1f)) * 8) +
                                       (ulong)arg2[2] * 2) *
                               uVar8;
                  uVar17 = uVar17 + (uVar17 >> 0x10);
                  uVar3 = *(uint16_t *)(*(long *)(arg10 + (long)((int)(uVar17 >> 0x10 & 0xff) >>
                                                                 (arg12 & 0x1f)) *
                                                              8) +
                                        (ulong)(uVar17 >> 0x18) * 2);
                  pbVar14[3] = (byte)uVar3;
                  pbVar14[2] = (byte)((ushort)uVar3 >> 8);
                  uVar17 = iVar11 * (uint) * (ushort *)(arg5 + 6) + 0x8000 +
                           *(ushort *)(*(long *)(arg11 +
                                                 (long)((int)(uint)arg2[5] >> (arg12 & 0x1f)) * 8) +
                                       (ulong)arg2[4] * 2) *
                               uVar8;
                  uVar17 = uVar17 + (uVar17 >> 0x10);
                  uVar6 = (ulong)(uVar17 >> 0x18);
                  lVar9 =
                      *(long *)(arg10 + (long)((int)(uVar17 >> 0x10 & 0xff) >> (arg12 & 0x1f)) * 8);
                  goto LAB_0054a30d;
                }
                *pbVar14 = *(byte *)(arg4 + 3);
                pbVar14[1] = (byte) * (uint16_t *)(arg4 + 2);
                pbVar14[2] = *(byte *)(arg4 + 5);
                pbVar14[3] = (byte) * (uint16_t *)(arg4 + 4);
                pbVar14[4] = *(byte *)(arg4 + 7);
                pbVar14[5] = (byte) * (uint16_t *)(arg4 + 6);
              }
              arg2 = arg2 + 8;
              pbVar14 = pbVar14 + 6;
            } while (arg2 != pbVar12);
            bVar13 = (byte)arg1[2];
            bVar10 = bVar13 & 4;
          }
          goto switchD_0054a078_caseD_0;
        }
        if (uVar5 == 0)
          goto switchD_0054a078_caseD_0;
        pbVar12 = arg2 + (ulong)(uVar5 - 1) * 8 + 8;
        pbVar14 = arg2;
        do {
          uVar7 = (ushort)arg2[6] * 0x100 + (ushort)arg2[7];
          if (uVar7 == 0xffff) {
            *(uint32_t *)pbVar14 = *(uint32_t *)arg2;
            *(uint16_t *)(pbVar14 + 4) = *(uint16_t *)(arg2 + 4);
          } else if (uVar7 == 0) {
            *pbVar14 = *(byte *)(arg4 + 3);
            pbVar14[1] = (byte) * (uint16_t *)(arg4 + 2);
            pbVar14[2] = *(byte *)(arg4 + 5);
            pbVar14[3] = (byte) * (uint16_t *)(arg4 + 4);
            pbVar14[4] = *(byte *)(arg4 + 7);
            pbVar14[5] = (byte) * (uint16_t *)(arg4 + 6);
          } else {
            bVar13 = arg2[2];
            bVar10 = arg2[3];
            uVar8 = (uint)uVar7;
            bVar1 = arg2[5];
            bVar2 = arg2[4];
            iVar15 = 0xffff - uVar8;
            uVar17 = ((uint)*arg2 * 0x100 + (uint)arg2[1]) * uVar8 + 0x8000 +
                     (uint) * (ushort *)(arg4 + 2) * iVar15;
            iVar11 = uVar17 + (uVar17 >> 0x10);
            pbVar14[1] = (byte)((uint)iVar11 >> 0x10);
            *pbVar14 = (byte)((uint)iVar11 >> 0x18);
            uVar17 = ((uint)bVar10 + (uint)bVar13 * 0x100) * uVar8 + 0x8000 +
                     (uint) * (ushort *)(arg4 + 4) * iVar15;
            iVar11 = uVar17 + (uVar17 >> 0x10);
            pbVar14[3] = (byte)((uint)iVar11 >> 0x10);
            pbVar14[2] = (byte)((uint)iVar11 >> 0x18);
            uVar17 = ((uint)bVar2 * 0x100 + (uint)bVar1) * uVar8 + 0x8000 +
                     iVar15 * (uint) * (ushort *)(arg4 + 6);
            iVar11 = uVar17 + (uVar17 >> 0x10);
            pbVar14[5] = (byte)((uint)iVar11 >> 0x10);
            pbVar14[4] = (byte)((uint)iVar11 >> 0x18);
          }
          arg2 = arg2 + 8;
          pbVar14 = pbVar14 + 6;
        } while (arg2 != pbVar12);
      }
    }
  } else {
    if (arg3 == 0) {
      return;
    }
    if (bVar13 == 3) {
      return;
    }
    if (bVar13 != 2)
      goto LAB_00549d14;
  LAB_00549f05:
    if (*(char *)((long)arg1 + 9) == '\b') {
      if (arg6 == 0) {
        if (uVar5 == 0)
          goto switchD_0054a078_caseD_0;
        pbVar12 = arg2 + (ulong)(uVar5 - 1) * 3 + 3;
        do {
          if ((((ushort)*arg2 == *(ushort *)(arg3 + 2)) &&
               ((ushort)arg2[1] == *(ushort *)(arg3 + 4))) &&
              ((ushort)arg2[2] == *(ushort *)(arg3 + 6))) {
            *arg2 = (byte) * (uint16_t *)(arg4 + 2);
            arg2[1] = (byte) * (uint16_t *)(arg4 + 4);
            arg2[2] = (byte) * (uint16_t *)(arg4 + 6);
          }
          arg2 = arg2 + 3;
        } while (arg2 != pbVar12);
      } else {
        if (uVar5 == 0)
          goto switchD_0054a078_caseD_0;
        pbVar12 = arg2 + (ulong)(uVar5 - 1) * 3 + 3;
        do {
          if ((ushort)*arg2 == *(ushort *)(arg3 + 2)) {
            bVar13 = arg2[2];
            if (((ushort)arg2[1] != *(ushort *)(arg3 + 4)) ||
                ((ushort)bVar13 != *(ushort *)(arg3 + 6)))
              goto LAB_0054aa15;
            *arg2 = (byte) * (uint16_t *)(arg4 + 2);
            arg2[1] = (byte) * (uint16_t *)(arg4 + 4);
            arg2[2] = (byte) * (uint16_t *)(arg4 + 6);
          } else {
            bVar13 = arg2[2];
          LAB_0054aa15:
            *arg2 = *(byte *)(arg6 + (ulong)*arg2);
            arg2[1] = *(byte *)(arg6 + (ulong)arg2[1]);
            arg2[2] = *(byte *)(arg6 + (ulong)bVar13);
          }
          arg2 = arg2 + 3;
        } while (arg2 != pbVar12);
      }
    } else {
      if (arg9 != 0) {
        if (uVar5 != 0) {
          pbVar12 = arg2 + (ulong)(uVar5 - 1) * 6 + 6;
          do {
            if (((*(short *)(arg3 + 2) == (ushort)((ushort)arg2[1] + (ushort)*arg2 * 0x100)) &&
                 (*(short *)(arg3 + 4) == (ushort)((ushort)arg2[3] + (ushort)arg2[2] * 0x100))) &&
                (*(short *)(arg3 + 6) == (ushort)((ushort)arg2[5] + (ushort)arg2[4] * 0x100))) {
              *arg2 = *(byte *)(arg4 + 3);
              arg2[1] = (byte) * (uint16_t *)(arg4 + 2);
              arg2[2] = *(byte *)(arg4 + 5);
              arg2[3] = (byte) * (uint16_t *)(arg4 + 4);
              arg2[4] = *(byte *)(arg4 + 7);
              arg2[5] = (byte) * (uint16_t *)(arg4 + 6);
            } else {
              uVar3 =
                  *(uint16_t *)(*(long *)(arg9 + (long)((int)(uint)arg2[1] >> (arg12 & 0x1f)) * 8) +
                                (ulong)*arg2 * 2);
              arg2[1] = (byte)uVar3;
              *arg2 = (byte)((ushort)uVar3 >> 8);
              uVar3 =
                  *(uint16_t *)(*(long *)(arg9 + (long)((int)(uint)arg2[3] >> (arg12 & 0x1f)) * 8) +
                                (ulong)arg2[2] * 2);
              arg2[3] = (byte)uVar3;
              arg2[2] = (byte)((ushort)uVar3 >> 8);
              uVar3 =
                  *(uint16_t *)(*(long *)(arg9 + (long)((int)(uint)arg2[5] >> (arg12 & 0x1f)) * 8) +
                                (ulong)arg2[4] * 2);
              arg2[5] = (byte)uVar3;
              arg2[4] = (byte)((ushort)uVar3 >> 8);
            }
            arg2 = arg2 + 6;
          } while (arg2 != pbVar12);
          bVar13 = (byte)arg1[2];
          bVar10 = bVar13 & 4;
        }
        goto switchD_0054a078_caseD_0;
      }
      if (uVar5 == 0)
        goto switchD_0054a078_caseD_0;
      pbVar12 = arg2 + (ulong)(uVar5 - 1) * 6 + 6;
      do {
        if (((*(short *)(arg3 + 2) == (ushort)((ushort)*arg2 * 0x100 + (ushort)arg2[1])) &&
             (*(short *)(arg3 + 4) == (ushort)((ushort)arg2[3] + (ushort)arg2[2] * 0x100))) &&
            (*(short *)(arg3 + 6) == (ushort)((ushort)arg2[4] * 0x100 + (ushort)arg2[5]))) {
          *arg2 = *(byte *)(arg4 + 3);
          arg2[1] = (byte) * (uint16_t *)(arg4 + 2);
          arg2[2] = *(byte *)(arg4 + 5);
          arg2[3] = (byte) * (uint16_t *)(arg4 + 4);
          arg2[4] = *(byte *)(arg4 + 7);
          arg2[5] = (byte) * (uint16_t *)(arg4 + 6);
        }
        arg2 = arg2 + 6;
      } while (arg2 != pbVar12);
    }
  }
  bVar13 = (byte)arg1[2];
  bVar10 = bVar13 & 4;
switchD_0054a078_caseD_0:
  if (bVar10 != 0) {
    *(byte *)(arg1 + 2) = bVar13 & 0xfb;
    cVar4 = *(char *)((long)arg1 + 10) + -1;
    *(char *)((long)arg1 + 10) = cVar4;
    bVar13 = cVar4 * *(char *)((long)arg1 + 9);
    *(byte *)((long)arg1 + 0xb) = bVar13;
    if (bVar13 < 8) {
      uVar5 = bVar13 * uVar5 + 7 >> 3;
    } else {
      uVar5 = (bVar13 >> 3) * uVar5;
    }
    arg1[1] = uVar5;
  }
  return;
}

/* ======================================================================
 * png_do_gamma  (Ghidra `png_do_gamma` @ 0054aea0)
 * Signature: uint8_t png_do_gamma(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`
 */
void png_do_gamma(uint *arg1, byte *arg2, long arg3, long arg4, byte arg5)

{
  uint16_t uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;

  uVar2 = *arg1;
  bVar6 = *(byte *)((long)arg1 + 9);
  if ((arg3 == 0) || (8 < bVar6)) {
    if (arg4 == 0) {
      return;
    }
    if (bVar6 != 0x10) {
      return;
    }
    bVar3 = (byte)arg1[2];
  } else {
    bVar3 = (byte)arg1[2];
  }
  if (bVar3 == 2) {
    if (bVar6 == 8) {
      if (uVar2 != 0) {
        pbVar8 = arg2 + (ulong)(uVar2 - 1) * 3 + 3;
        do {
          *arg2 = *(byte *)(arg3 + (ulong)*arg2);
          arg2[1] = *(byte *)(arg3 + (ulong)arg2[1]);
          arg2[2] = *(byte *)(arg3 + (ulong)arg2[2]);
          arg2 = arg2 + 3;
        } while (pbVar8 != arg2);
      }
    } else if (uVar2 != 0) {
      pbVar8 = arg2 + (ulong)(uVar2 - 1) * 6 + 6;
      do {
        uVar1 = *(uint16_t *)(*(long *)(arg4 + (long)((int)(uint)arg2[1] >> (arg5 & 0x1f)) * 8) +
                              (ulong)*arg2 * 2);
        arg2[1] = (byte)uVar1;
        *arg2 = (byte)((ushort)uVar1 >> 8);
        uVar1 = *(uint16_t *)(*(long *)(arg4 + (long)((int)(uint)arg2[3] >> (arg5 & 0x1f)) * 8) +
                              (ulong)arg2[2] * 2);
        arg2[3] = (byte)uVar1;
        arg2[2] = (byte)((ushort)uVar1 >> 8);
        uVar1 = *(uint16_t *)(*(long *)(arg4 + (long)((int)(uint)arg2[5] >> (arg5 & 0x1f)) * 8) +
                              (ulong)arg2[4] * 2);
        arg2[5] = (byte)uVar1;
        arg2[4] = (byte)((ushort)uVar1 >> 8);
        arg2 = arg2 + 6;
      } while (pbVar8 != arg2);
      return;
    }
  } else if (bVar3 < 2) {
    if (bVar3 == 0) {
      if (bVar6 == 2) {
        if (uVar2 == 0) {
          return;
        }
        uVar5 = 0;
        pbVar8 = arg2;
        do {
          bVar6 = *pbVar8;
          uVar7 = bVar6 & 3;
          uVar10 = bVar6 & 0xc0;
          uVar9 = bVar6 & 0x30;
          uVar4 = bVar6 & 0xc;
          uVar5 = uVar5 + 4;
          *pbVar8 =
              *(byte *)(arg3 + (int)(uVar7 << 6 | uVar7 << 4 | uVar7 | uVar7 << 2)) >> 6 |
              *(byte *)(arg3 +
                        (int)((int)uVar10 >> 2 | (int)uVar10 >> 4 | uVar10 | (int)uVar10 >> 6)) &
                  0xc0 |
              *(byte *)(arg3 + (int)(uVar9 * 4 | (int)uVar9 >> 2 | uVar9 | (int)uVar9 >> 4)) >> 2 &
                  0x30 |
              *(byte *)(arg3 + (int)(uVar4 << 4 | uVar4 * 4 | uVar4 | (int)uVar4 >> 2)) >> 4 & 0xc;
          pbVar8 = pbVar8 + 1;
        } while (uVar5 < uVar2);
        bVar6 = *(byte *)((long)arg1 + 9);
      }
      if (bVar6 == 4) {
        if (uVar2 != 0) {
          uVar5 = 0;
          do {
            uVar5 = uVar5 + 2;
            uVar4 = *arg2 & 0xf;
            uVar7 = *arg2 & 0xf0;
            *arg2 = *(byte *)(arg3 + (int)(uVar4 << 4 | uVar4)) >> 4 |
                    *(byte *)(arg3 + (int)((int)uVar7 >> 4 | uVar7)) & 0xf0;
            arg2 = arg2 + 1;
          } while (uVar5 < uVar2);
        }
      } else if (bVar6 == 8) {
        if (uVar2 != 0) {
          pbVar8 = arg2 + (ulong)(uVar2 - 1) + 1;
          do {
            *arg2 = *(byte *)(arg3 + (ulong)*arg2);
            arg2 = arg2 + 1;
          } while (arg2 != pbVar8);
        }
      } else if ((bVar6 == 0x10) && (uVar2 != 0)) {
        pbVar8 = arg2 + (ulong)(uVar2 - 1) * 2 + 2;
        do {
          uVar1 = *(uint16_t *)(*(long *)(arg4 + (long)((int)(uint)arg2[1] >> (arg5 & 0x1f)) * 8) +
                                (ulong)*arg2 * 2);
          arg2[1] = (byte)uVar1;
          *arg2 = (byte)((ushort)uVar1 >> 8);
          arg2 = arg2 + 2;
        } while (arg2 != pbVar8);
      }
    }
  } else if (bVar3 == 4) {
    if (bVar6 == 8) {
      if (uVar2 != 0) {
        pbVar8 = arg2 + (ulong)(uVar2 - 1) * 2 + 2;
        do {
          *arg2 = *(byte *)(arg3 + (ulong)*arg2);
          arg2 = arg2 + 2;
        } while (arg2 != pbVar8);
      }
    } else if (uVar2 != 0) {
      pbVar8 = arg2 + (ulong)(uVar2 - 1) * 4 + 4;
      do {
        uVar1 = *(uint16_t *)(*(long *)(arg4 + (long)((int)(uint)arg2[1] >> (arg5 & 0x1f)) * 8) +
                              (ulong)*arg2 * 2);
        arg2[1] = (byte)uVar1;
        *arg2 = (byte)((ushort)uVar1 >> 8);
        arg2 = arg2 + 4;
      } while (arg2 != pbVar8);
      return;
    }
  } else if (bVar3 == 6) {
    if (bVar6 == 8) {
      if (uVar2 != 0) {
        pbVar8 = arg2 + (ulong)(uVar2 - 1) * 4 + 4;
        do {
          *arg2 = *(byte *)(arg3 + (ulong)*arg2);
          arg2[1] = *(byte *)(arg3 + (ulong)arg2[1]);
          arg2[2] = *(byte *)(arg3 + (ulong)arg2[2]);
          arg2 = arg2 + 4;
        } while (pbVar8 != arg2);
      }
    } else if (uVar2 != 0) {
      pbVar8 = arg2 + (ulong)(uVar2 - 1) * 8 + 8;
      do {
        uVar1 = *(uint16_t *)(*(long *)(arg4 + (long)((int)(uint)arg2[1] >> (arg5 & 0x1f)) * 8) +
                              (ulong)*arg2 * 2);
        arg2[1] = (byte)uVar1;
        *arg2 = (byte)((ushort)uVar1 >> 8);
        uVar1 = *(uint16_t *)(*(long *)(arg4 + (long)((int)(uint)arg2[3] >> (arg5 & 0x1f)) * 8) +
                              (ulong)arg2[2] * 2);
        arg2[3] = (byte)uVar1;
        arg2[2] = (byte)((ushort)uVar1 >> 8);
        uVar1 = *(uint16_t *)(*(long *)(arg4 + (long)((int)(uint)arg2[5] >> (arg5 & 0x1f)) * 8) +
                              (ulong)arg2[4] * 2);
        arg2[5] = (byte)uVar1;
        arg2[4] = (byte)((ushort)uVar1 >> 8);
        arg2 = arg2 + 8;
      } while (pbVar8 != arg2);
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_do_expand_palette  (Ghidra `png_do_expand_palette` @ 0054b390)
 * Signature: uint8_t png_do_expand_palette(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`
 */
void png_do_expand_palette(uint *arg1, long arg2, long arg3, long arg4, int arg5)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint8_t *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;

  uVar3 = *arg1;
  if ((char)arg1[2] == '\x03') {
    bVar2 = *(byte *)((long)arg1 + 9);
    if (bVar2 < 8) {
      if (bVar2 == 2) {
        if (uVar3 != 0) {
          pbVar7 = (byte *)(arg2 + -1 + (ulong)uVar3);
          pbVar9 = pbVar7 + ~(ulong)(uVar3 - 1);
          pbVar8 = (byte *)((ulong)(uVar3 - 1 >> 2) + arg2);
          iVar4 = (~(uVar3 + 3) & 3) * 2;
          do {
            bVar10 = iVar4 == 6;
            *pbVar7 = (byte)((int)(uint)*pbVar8 >> ((byte)iVar4 & 0x1f)) & 3;
            iVar4 = iVar4 + 2;
            if (bVar10) {
              iVar4 = 0;
              pbVar8 = pbVar8 + -1;
            }
            pbVar7 = pbVar7 + -1;
          } while (pbVar7 != pbVar9);
        }
      } else if (bVar2 == 4) {
        if (uVar3 != 0) {
          pbVar7 = (byte *)(arg2 + -1 + (ulong)uVar3);
          iVar4 = (uVar3 & 1) << 2;
          pbVar9 = pbVar7 + ~(ulong)(uVar3 - 1);
          pbVar8 = (byte *)((ulong)(uVar3 - 1 >> 1) + arg2);
          do {
            bVar10 = iVar4 == 4;
            *pbVar7 = (byte)((int)(uint)*pbVar8 >> ((byte)iVar4 & 0x1f)) & 0xf;
            iVar4 = iVar4 + 4;
            if (bVar10) {
              iVar4 = 0;
              pbVar8 = pbVar8 + -1;
            }
            pbVar7 = pbVar7 + -1;
          } while (pbVar7 != pbVar9);
        }
      } else if ((bVar2 == 1) && (uVar3 != 0)) {
        pbVar7 = (byte *)(arg2 + -1 + (ulong)uVar3);
        pbVar9 = pbVar7 + ~(ulong)(uVar3 - 1);
        pbVar8 = (byte *)((ulong)(uVar3 - 1 >> 3) + arg2);
        uVar5 = ~(uVar3 + 7) & 7;
        do {
          bVar10 = uVar5 == 7;
          *pbVar7 = (byte)((int)(uint)*pbVar8 >> ((byte)uVar5 & 0x1f)) & 1;
          uVar5 = uVar5 + 1;
          if (bVar10) {
            uVar5 = 0;
            pbVar8 = pbVar8 + -1;
          }
          pbVar7 = pbVar7 + -1;
        } while (pbVar7 != pbVar9);
      }
      *(uint8_t *)((long)arg1 + 9) = 8;
      *(uint8_t *)((long)arg1 + 0xb) = 8;
      arg1[1] = uVar3;
    } else if (bVar2 != 8) {
      return;
    }
    if (arg4 != 0) {
      if (uVar3 != 0) {
        pbVar7 = (byte *)(arg2 + -1 + (ulong)uVar3);
        lVar1 = arg2 + -1 + (ulong)(uVar3 * 4);
        puVar6 = (uint8_t *)(lVar1 + -1);
        do {
          if ((int)(uint)*pbVar7 < arg5) {
            puVar6[1] = *(uint8_t *)(arg4 + (ulong)*pbVar7);
          } else {
            puVar6[1] = 0xff;
          }
          *puVar6 = *(uint8_t *)(arg3 + 2 + (ulong)*pbVar7 * 3);
          puVar6[-1] = *(uint8_t *)(arg3 + 1 + (ulong)*pbVar7 * 3);
          bVar2 = *pbVar7;
          pbVar7 = pbVar7 + -1;
          puVar6[-2] = *(uint8_t *)(arg3 + (ulong)bVar2 * 3);
          puVar6 = puVar6 + -4;
        } while (puVar6 != (uint8_t *)(lVar1 + (ulong)(uVar3 - 1) * -4 + -5));
      }
      *(uint8_t *)((long)arg1 + 9) = 8;
      *(uint8_t *)((long)arg1 + 0xb) = 0x20;
      arg1[1] = uVar3 << 2;
      *(uint8_t *)(arg1 + 2) = 6;
      *(uint8_t *)((long)arg1 + 10) = 4;
      return;
    }
    if (uVar3 != 0) {
      pbVar7 = (byte *)(arg2 + -1 + (ulong)uVar3);
      puVar6 = (uint8_t *)(arg2 + -1 + (ulong)(uVar3 * 3));
      pbVar8 = pbVar7 + ~(ulong)(uVar3 - 1);
      do {
        *puVar6 = *(uint8_t *)(arg3 + 2 + (ulong)*pbVar7 * 3);
        puVar6[-1] = *(uint8_t *)(arg3 + 1 + (ulong)*pbVar7 * 3);
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + -1;
        puVar6[-2] = *(uint8_t *)(arg3 + (ulong)bVar2 * 3);
        puVar6 = puVar6 + -3;
      } while (pbVar7 != pbVar8);
    }
    *(uint8_t *)((long)arg1 + 9) = 8;
    *(uint8_t *)((long)arg1 + 0xb) = 0x18;
    arg1[1] = uVar3 * 3;
    *(uint8_t *)(arg1 + 2) = 2;
    *(uint8_t *)((long)arg1 + 10) = 3;
  }
  return;
}

/* ======================================================================
 * png_do_expand  (Ghidra `png_do_expand` @ 0054b680)
 * Signature: uint8_t png_do_expand(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`
 */
void png_do_expand(uint *arg1, long arg2, long arg3)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint16_t uVar6;
  uint16_t uVar7;
  uint16_t uVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  char *pcVar16;
  byte *pbVar17;
  char *pcVar18;
  ushort uVar19;
  bool bVar20;

  uVar10 = *arg1;
  if ((char)arg1[2] == '\0') {
    uVar19 = 0;
    if (arg3 != 0) {
      uVar19 = *(ushort *)(arg3 + 8);
    }
    bVar9 = *(byte *)((long)arg1 + 9);
    uVar14 = (uint)bVar9;
    if (bVar9 < 8) {
      if (bVar9 == 2) {
        uVar19 = (uVar19 & 3) * 0x55;
        if (uVar10 != 0) {
          pbVar11 = (byte *)(arg2 + -1 + (ulong)uVar10);
          pbVar17 = pbVar11 + ~(ulong)(uVar10 - 1);
          pbVar15 = (byte *)((ulong)(uVar10 - 1 >> 2) + arg2);
          iVar13 = (~(uVar10 + 3) & 3) * 2;
          do {
            uVar14 = (int)(uint)*pbVar15 >> ((byte)iVar13 & 0x1f) & 3;
            bVar20 = iVar13 == 6;
            *pbVar11 =
                (byte)(uVar14 << 4) | (byte)uVar14 * '\x04' | (byte)uVar14 | (byte)(uVar14 << 6);
            iVar13 = iVar13 + 2;
            if (bVar20) {
              iVar13 = 0;
              pbVar15 = pbVar15 + -1;
            }
            pbVar11 = pbVar11 + -1;
          } while (pbVar11 != pbVar17);
        }
      } else if (bVar9 == 4) {
        uVar19 = (uVar19 & 0xf) * 0x11;
        if (uVar10 != 0) {
          pbVar11 = (byte *)(arg2 + -1 + (ulong)uVar10);
          pbVar17 = pbVar11 + ~(ulong)(uVar10 - 1);
          pbVar15 = (byte *)((ulong)(uVar10 - 1 >> 1) + arg2);
          bVar9 = -((uVar10 + 1 & 1) == 0) & 4;
          do {
            uVar14 = (int)(uint)*pbVar15 >> bVar9 & 0xf;
            *pbVar11 = (byte)uVar14 | (byte)(uVar14 << 4);
            if (bVar9 == 4) {
              pbVar15 = pbVar15 + -1;
            }
            pbVar11 = pbVar11 + -1;
            bVar9 = (bVar9 != 4) << 2;
          } while (pbVar11 != pbVar17);
        }
      } else if ((bVar9 == 1) && (uVar19 = (uVar19 & 1) * 0xff, uVar10 != 0)) {
        pcVar18 = (char *)(arg2 + -1 + (ulong)uVar10);
        uVar14 = ~(uVar10 + 7) & 7;
        pcVar12 = pcVar18 + ~(ulong)(uVar10 - 1);
        pbVar11 = (byte *)((ulong)(uVar10 - 1 >> 3) + arg2);
        do {
          bVar20 = uVar14 == 7;
          *pcVar18 = -((byte)((int)(uint)*pbVar11 >> ((byte)uVar14 & 0x1f)) & 1);
          uVar14 = uVar14 + 1;
          if (bVar20) {
            uVar14 = 0;
            pbVar11 = pbVar11 + -1;
          }
          pcVar18 = pcVar18 + -1;
        } while (pcVar18 != pcVar12);
      }
      *(uint8_t *)((long)arg1 + 9) = 8;
      *(uint8_t *)((long)arg1 + 0xb) = 8;
      uVar14 = 8;
      arg1[1] = uVar10;
    }
    if (arg3 == 0) {
      return;
    }
    if ((char)uVar14 != '\b') {
      if ((char)uVar14 == '\x10') {
        if (uVar10 == 0)
          goto LAB_0054bb38;
        pcVar12 = (char *)(arg2 + -1 + (ulong)arg1[1]);
        pcVar16 = (char *)(arg2 + -3 + (ulong)(arg1[1] * 2));
        pcVar18 = pcVar12 + (ulong)(uVar10 - 1) * -2 + -2;
        do {
          if ((pcVar12[-1] == (char)(uVar19 >> 8)) && (*pcVar12 == (char)uVar19)) {
            pcVar16[2] = '\0';
            pcVar16[1] = '\0';
          } else {
            pcVar16[2] = -1;
            pcVar16[1] = -1;
          }
          *pcVar16 = *pcVar12;
          pcVar1 = pcVar12 + -1;
          pcVar12 = pcVar12 + -2;
          pcVar16[-1] = *pcVar1;
          pcVar16 = pcVar16 + -4;
        } while (pcVar18 != pcVar12);
      LAB_0054b91a:
        uVar14 = (uint) * (byte *)((long)arg1 + 9);
      }
      uVar14 = uVar14 * 2;
      *(uint8_t *)(arg1 + 2) = 4;
      *(uint8_t *)((long)arg1 + 10) = 2;
      bVar9 = (byte)uVar14;
      *(byte *)((long)arg1 + 0xb) = bVar9;
      goto joined_r0x0054b73d;
    }
    if (uVar10 != 0) {
      pbVar15 = (byte *)(arg2 + -1 + (ulong)uVar10);
      lVar2 = arg2 + -1 + (ulong)(uVar10 * 2);
      pbVar11 = (byte *)(lVar2 + -1);
      do {
        pbVar11[1] = ((ushort)*pbVar15 == (uVar19 & 0xff)) - 1;
        bVar9 = *pbVar15;
        pbVar15 = pbVar15 + -1;
        *pbVar11 = bVar9;
        pbVar11 = pbVar11 + -2;
      } while (pbVar11 != (byte *)(lVar2 + (ulong)(uVar10 - 1) * -2 + -3));
      goto LAB_0054b91a;
    }
  LAB_0054bb38:
    uVar14 = uVar14 * 2;
    *(uint8_t *)(arg1 + 2) = 4;
    *(uint8_t *)((long)arg1 + 10) = 2;
    *(char *)((long)arg1 + 0xb) = (char)uVar14;
  } else {
    if (arg3 == 0) {
      return;
    }
    if ((char)arg1[2] != '\x02') {
      return;
    }
    bVar9 = *(byte *)((long)arg1 + 9);
    uVar14 = (uint)bVar9;
    if (bVar9 == 8) {
      cVar3 = *(char *)(arg3 + 2);
      cVar4 = *(char *)(arg3 + 4);
      cVar5 = *(char *)(arg3 + 6);
      if (uVar10 == 0) {
      LAB_0054bb50:
        uVar14 = uVar14 << 2;
        *(uint8_t *)(arg1 + 2) = 6;
        *(uint8_t *)((long)arg1 + 10) = 4;
        *(char *)((long)arg1 + 0xb) = (char)uVar14;
        goto LAB_0054b6f5;
      }
      pcVar12 = (char *)(arg2 + -1 + (ulong)arg1[1]);
      pcVar16 = (char *)(arg2 + -2 + (ulong)(uVar10 * 4));
      pcVar18 = pcVar12 + (ulong)(uVar10 - 1) * -3 + -3;
      do {
        if (((pcVar12[-2] == cVar3) && (pcVar12[-1] == cVar4)) && (*pcVar12 == cVar5)) {
          pcVar16[1] = '\0';
        } else {
          pcVar16[1] = -1;
        }
        *pcVar16 = *pcVar12;
        pcVar16[-1] = pcVar12[-1];
        pcVar1 = pcVar12 + -2;
        pcVar12 = pcVar12 + -3;
        pcVar16[-2] = *pcVar1;
        pcVar16 = pcVar16 + -4;
      } while (pcVar18 != pcVar12);
    LAB_0054b8b0:
      uVar14 = (uint) * (byte *)((long)arg1 + 9);
    } else if (bVar9 == 0x10) {
      uVar6 = *(uint16_t *)(arg3 + 2);
      uVar7 = *(uint16_t *)(arg3 + 4);
      uVar8 = *(uint16_t *)(arg3 + 6);
      if (uVar10 == 0)
        goto LAB_0054bb50;
      pcVar12 = (char *)(arg2 + -1 + (ulong)arg1[1]);
      lVar2 = arg2 + -1 + (ulong)(uVar10 * 8);
      pcVar18 = (char *)(lVar2 + -2);
      do {
        if ((((pcVar12[-5] == (char)((ushort)uVar6 >> 8)) && (pcVar12[-4] == (char)uVar6)) &&
             ((pcVar12[-3] == (char)((ushort)uVar7 >> 8) &&
               ((pcVar12[-2] == (char)uVar7 && (pcVar12[-1] == (char)((ushort)uVar8 >> 8))))))) &&
            (*pcVar12 == (char)uVar8)) {
          pcVar18[2] = '\0';
          pcVar18[1] = '\0';
        } else {
          pcVar18[2] = -1;
          pcVar18[1] = -1;
        }
        *pcVar18 = *pcVar12;
        pcVar18[-1] = pcVar12[-1];
        pcVar18[-2] = pcVar12[-2];
        pcVar18[-3] = pcVar12[-3];
        pcVar18[-4] = pcVar12[-4];
        pcVar16 = pcVar12 + -5;
        pcVar12 = pcVar12 + -6;
        pcVar18[-5] = *pcVar16;
        pcVar18 = pcVar18 + -8;
      } while (pcVar18 != (char *)(lVar2 + (ulong)(uVar10 - 1) * -8 + -10));
      goto LAB_0054b8b0;
    }
    uVar14 = uVar14 << 2;
    *(uint8_t *)(arg1 + 2) = 6;
    *(uint8_t *)((long)arg1 + 10) = 4;
    bVar9 = (byte)uVar14;
    *(byte *)((long)arg1 + 0xb) = bVar9;
  joined_r0x0054b73d:
    if (bVar9 < 8) {
      uVar10 = (uVar14 & 0xff) * uVar10 + 7 >> 3;
      goto LAB_0054b6ff;
    }
  }
LAB_0054b6f5:
  uVar10 = (uVar14 >> 3 & 0x1f) * uVar10;
LAB_0054b6ff:
  arg1[1] = uVar10;
  return;
}

/* ======================================================================
 * png_do_dither  (Ghidra `png_do_dither` @ 0054bb70)
 * Signature: uint8_t png_do_dither(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`
 */
void png_do_dither(uint *arg1, byte *arg2, long arg3, long arg4)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;

  uVar4 = *arg1;
  cVar3 = (char)arg1[2];
  if (arg3 == 0) {
  LAB_0054bb97:
    if ((((arg4 != 0) && (cVar3 == '\x03')) && (*(char *)((long)arg1 + 9) == '\b')) &&
        (uVar4 != 0)) {
      pbVar6 = arg2 + (ulong)(uVar4 - 1) + 1;
      do {
        *arg2 = *(byte *)(arg4 + (ulong)*arg2);
        arg2 = arg2 + 1;
      } while (arg2 != pbVar6);
      return;
    }
    return;
  }
  if ((cVar3 == '\x02') && (*(char *)((long)arg1 + 9) == '\b')) {
    if (uVar4 == 0) {
    LAB_0054bcd0:
      *(uint8_t *)(arg1 + 2) = 3;
      *(uint8_t *)((long)arg1 + 10) = 1;
      bVar5 = 8;
      *(uint8_t *)((long)arg1 + 0xb) = 8;
      goto LAB_0054bce8;
    }
    pbVar8 = arg2 + (ulong)(uVar4 - 1) * 3 + 3;
    pbVar6 = arg2;
    do {
      bVar5 = *arg2;
      pbVar2 = arg2 + 1;
      pbVar1 = arg2 + 2;
      arg2 = arg2 + 3;
      *pbVar6 = *(byte *)(arg3 + (((int)(uint)bVar5 >> 3) << 10 | ((int)(uint)*pbVar2 >> 3) << 5 |
                                  (int)(uint)*pbVar1 >> 3));
      pbVar6 = pbVar6 + 1;
    } while (pbVar8 != arg2);
  } else {
    if ((cVar3 != '\x06') || (*(char *)((long)arg1 + 9) != '\b'))
      goto LAB_0054bb97;
    if (uVar4 == 0)
      goto LAB_0054bcd0;
    lVar7 = 0;
    pbVar6 = arg2;
    do {
      bVar5 = *pbVar6;
      pbVar8 = pbVar6 + 1;
      pbVar2 = pbVar6 + 2;
      pbVar6 = pbVar6 + 4;
      arg2[lVar7] = *(byte *)(arg3 + (((int)(uint)bVar5 >> 3) << 10 |
                                      ((int)(uint)*pbVar8 >> 3) << 5 | (int)(uint)*pbVar2 >> 3));
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < uVar4);
  }
  bVar5 = *(byte *)((long)arg1 + 9);
  *(uint8_t *)(arg1 + 2) = 3;
  *(uint8_t *)((long)arg1 + 10) = 1;
  *(byte *)((long)arg1 + 0xb) = bVar5;
  if (bVar5 < 8) {
    arg1[1] = bVar5 * uVar4 + 7 >> 3;
    return;
  }
LAB_0054bce8:
  arg1[1] = (bVar5 >> 3) * uVar4;
  return;
}

/* ======================================================================
 * png_do_read_transformations  (Ghidra `png_do_read_transformations` @ 0054bd00)
 * Signature: uint8_t png_do_read_transformations(void)
 * Calls: `png_do_background`, `png_do_bgr`, `png_do_dither`, `png_do_expand`, `png_do_expand_palette`, `png_do_gamma`, `png_do_gray_to_rgb`, `png_do_invert`, `png_do_packswap`, `png_do_read_filler` (+10 more)
 * Called by: `png_push_process_row`, `png_read_row`
 */
/* WARNING: Type propagation algorithm not settling */

void png_do_read_transformations(long arg1)

{
  uint8_t *puVar1;
  uint8_t *puVar2;
  char cVar3;
  char cVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  uint8_t uVar7;
  uint8_t uVar8;
  uint8_t uVar9;
  uint8_t uVar10;
  uint8_t uVar11;
  uint8_t uVar12;
  uint8_t uVar13;
  uint8_t uVar14;
  uint8_t uVar15;
  uint8_t uVar16;
  uint8_t uVar17;
  uint8_t uVar18;
  uint8_t uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte bVar25;
  uint uVar26;
  int iVar27;
  ulong uVar28;
  uint uVar29;
  char local_48[64];

  if (*(long *)(arg1 + 0x1e0) == 0) {
    snprintf(local_48, 0x32, "NULL row buffer for row %ld, pass %d",
             (ulong) * (uint *)(arg1 + 0x1d0), (ulong) * (byte *)(arg1 + 0x234));
    png_error(arg1, local_48);
  }
  if ((*(byte *)(arg1 + 0x118) & 0x40) == 0) {
    png_error(arg1, "Uninitialized row");
  }
  if ((*(uint *)(arg1 + 0x11c) & 0x1000) != 0) {
    if (*(char *)(arg1 + 0x210) == '\x03') {
      png_do_expand_palette(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1, *(uint64_t *)(arg1 + 0x220),
                            *(uint64_t *)(arg1 + 0x2c0), *(uint16_t *)(arg1 + 0x22a));
    } else if ((*(short *)(arg1 + 0x22a) == 0) || ((*(uint *)(arg1 + 0x11c) & 0x2000000) == 0)) {
      png_do_expand(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1, 0);
    } else {
      png_do_expand(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1, arg1 + 0x2c8);
    }
  }
  if ((*(uint *)(arg1 + 0x118) & 0x400000) != 0) {
    png_do_strip_filler(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1,
                        CONCAT71((uint7)((uint3)(*(uint *)(arg1 + 0x118) >> 8) & 0x4000), 0x80));
  }
  uVar20 = *(uint *)(arg1 + 0x11c);
  if ((uVar20 & 0x600000) != 0) {
    iVar27 = png_do_rgb_to_gray(arg1, arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
    if (iVar27 != 0) {
      uVar20 = *(uint *)(arg1 + 0x11c);
      *(uint8_t *)(arg1 + 1000) = 1;
      uVar26 = uVar20 & 0x600000;
      if (uVar26 == 0x400000) {
        png_warning(arg1, "png_do_rgb_to_gray found nongray pixel");
        uVar20 = *(uint *)(arg1 + 0x11c);
        uVar26 = uVar20 & 0x600000;
      }
      if (uVar26 != 0x200000)
        goto LAB_0054bd8c;
      png_error(arg1, "png_do_rgb_to_gray found nongray pixel");
    }
    uVar20 = *(uint *)(arg1 + 0x11c);
  }
LAB_0054bd8c:
  if (((uVar20 & 0x4000) != 0) && ((*(byte *)(arg1 + 0x115) & 8) == 0)) {
    png_do_gray_to_rgb(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
    uVar20 = *(uint *)(arg1 + 0x11c);
  }
  if (((uVar20 & 0x80) != 0) &&
      ((*(short *)(arg1 + 0x22a) != 0 || ((*(byte *)(arg1 + 0x236) & 4) != 0)))) {
    png_do_background(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1, arg1 + 0x2c8, arg1 + 0x248,
                      arg1 + 0x252, *(uint64_t *)(arg1 + 0x280), *(uint64_t *)(arg1 + 0x288),
                      *(uint64_t *)(arg1 + 0x290), *(uint64_t *)(arg1 + 0x298),
                      *(uint64_t *)(arg1 + 0x2a0), *(uint64_t *)(arg1 + 0x2a8),
                      *(uint32_t *)(arg1 + 0x270));
    uVar20 = *(uint *)(arg1 + 0x11c);
  }
  if ((uVar20 & 0x2000) != 0) {
    if ((uVar20 & 0x80) == 0) {
      bVar25 = *(byte *)(arg1 + 0x236);
    } else if ((*(short *)(arg1 + 0x22a) != 0) ||
               (bVar25 = *(byte *)(arg1 + 0x236), (bVar25 & 4) != 0))
      goto LAB_0054be10;
    if (bVar25 != 3) {
      png_do_gamma(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1, *(uint64_t *)(arg1 + 0x280),
                   *(uint64_t *)(arg1 + 0x298), *(uint32_t *)(arg1 + 0x270));
      uVar20 = *(uint *)(arg1 + 0x11c);
    }
  }
LAB_0054be10:
  if (((uVar20 & 0x400) == 0) ||
      (lVar22 = *(long *)(arg1 + 0x1e0), *(char *)(arg1 + 0x211) != '\x10'))
    goto joined_r0x0054be1b;
  bVar25 = *(byte *)(arg1 + 0x212);
  iVar27 = 0;
  uVar26 = (uint)bVar25 * *(int *)(arg1 + 0x208);
  if (uVar26 != 0) {
    uVar24 = lVar22 + 1;
    uVar29 = uVar26 - 1 >> 4;
    uVar20 = uVar29 << 4;
    if ((uVar29 == 0) ||
        (!CARRY8(uVar24, (ulong)uVar26) && uVar24 <= uVar24 + (ulong)uVar26 * 2 || uVar26 < 0x10)) {
      uVar20 = 0;
      uVar28 = uVar24;
    LAB_0054c1e5:
      lVar22 = 0;
      do {
        *(uint8_t *)(uVar28 + lVar22) = *(uint8_t *)(uVar24 + lVar22 * 2);
        lVar22 = lVar22 + 1;
      } while (uVar20 + (int)lVar22 < uVar26);
    } else {
      lVar21 = 0;
      uVar23 = 0;
      do {
        puVar1 = (uint8_t *)(lVar22 + 1 + lVar21 * 2);
        uVar5 = puVar1[2];
        uVar6 = puVar1[4];
        uVar7 = puVar1[6];
        uVar8 = puVar1[8];
        uVar9 = puVar1[10];
        uVar10 = puVar1[0xc];
        uVar11 = puVar1[0xe];
        uVar23 = uVar23 + 1;
        puVar2 = (uint8_t *)(lVar22 + 0x11 + lVar21 * 2);
        uVar12 = *puVar2;
        uVar13 = puVar2[2];
        uVar14 = puVar2[4];
        uVar15 = puVar2[6];
        uVar16 = puVar2[8];
        uVar17 = puVar2[10];
        uVar18 = puVar2[0xc];
        uVar19 = puVar2[0xe];
        puVar2 = (uint8_t *)(lVar22 + 1 + lVar21);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        puVar2[4] = uVar8;
        puVar2[5] = uVar9;
        puVar2[6] = uVar10;
        puVar2[7] = uVar11;
        puVar2[8] = uVar12;
        puVar2[9] = uVar13;
        puVar2[10] = uVar14;
        puVar2[0xb] = uVar15;
        puVar2[0xc] = uVar16;
        puVar2[0xd] = uVar17;
        puVar2[0xe] = uVar18;
        puVar2[0xf] = uVar19;
        lVar21 = lVar21 + 0x10;
      } while (uVar23 < uVar29);
      uVar28 = uVar24 + uVar20;
      uVar24 = uVar24 + (ulong)uVar20 * 2;
      if (uVar26 != uVar20)
        goto LAB_0054c1e5;
    }
    bVar25 = *(byte *)(arg1 + 0x212);
    uVar20 = *(uint *)(arg1 + 0x11c);
    iVar27 = (uint)bVar25 * *(int *)(arg1 + 0x208);
  }
  *(uint8_t *)(arg1 + 0x211) = 8;
  *(byte *)(arg1 + 0x213) = bVar25 << 3;
  *(int *)(arg1 + 0x20c) = iVar27;
joined_r0x0054be1b:
  if ((uVar20 & 0x40) != 0) {
    png_do_dither(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1, *(uint64_t *)(arg1 + 0x370),
                  *(uint64_t *)(arg1 + 0x378));
    if (*(int *)(arg1 + 0x20c) == 0) {
      png_error(arg1, "png_do_dither returned rowbytes=0");
    }
    uVar20 = *(uint *)(arg1 + 0x11c);
  }
  if ((uVar20 & 0x20) != 0) {
    png_do_invert(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
    uVar20 = *(uint *)(arg1 + 0x11c);
  }
  if ((uVar20 & 8) != 0) {
    png_do_unshift(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1, arg1 + 0x2b5);
    uVar20 = *(uint *)(arg1 + 0x11c);
  }
  if ((uVar20 & 4) != 0) {
    png_do_unpack(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
    uVar20 = *(uint *)(arg1 + 0x11c);
  }
  if ((uVar20 & 1) != 0) {
    png_do_bgr(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
    uVar20 = *(uint *)(arg1 + 0x11c);
  }
  if ((uVar20 & 0x10000) != 0) {
    png_do_packswap(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
    uVar20 = *(uint *)(arg1 + 0x11c);
  }
  if (((uVar20 & 0x4000) != 0) && ((*(byte *)(arg1 + 0x115) & 8) != 0)) {
    png_do_gray_to_rgb(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
    uVar20 = *(uint *)(arg1 + 0x11c);
  }
  if ((uVar20 & 0x8000) != 0) {
    png_do_read_filler(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1, *(uint16_t *)(arg1 + 0x23e),
                       *(uint32_t *)(arg1 + 0x118));
    uVar20 = *(uint *)(arg1 + 0x11c);
  }
  if ((uVar20 & 0x80000) != 0) {
    png_do_read_invert_alpha(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
    uVar20 = *(uint *)(arg1 + 0x11c);
  }
  if ((uVar20 & 0x20000) != 0) {
    png_do_read_swap_alpha(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
    uVar20 = *(uint *)(arg1 + 0x11c);
  }
  if ((uVar20 & 0x10) != 0) {
    png_do_swap(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
    uVar20 = *(uint *)(arg1 + 0x11c);
  }
  if ((uVar20 & 0x100000) != 0) {
    if (*(code **)(arg1 + 0xf8) != (code *)0x0) {
      (**(code **)(arg1 + 0xf8))(arg1, arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
    }
    cVar3 = *(char *)(arg1 + 0x110);
    if (cVar3 == '\0') {
      cVar4 = *(char *)(arg1 + 0x111);
      cVar3 = *(char *)(arg1 + 0x211);
    } else {
      cVar4 = *(char *)(arg1 + 0x111);
      *(char *)(arg1 + 0x211) = cVar3;
    }
    if (cVar4 == '\0') {
      bVar25 = *(char *)(arg1 + 0x212) * cVar3;
      *(byte *)(arg1 + 0x213) = bVar25;
    } else {
      *(char *)(arg1 + 0x212) = cVar4;
      bVar25 = cVar4 * cVar3;
      *(byte *)(arg1 + 0x213) = bVar25;
    }
    if (bVar25 < 8) {
      uVar20 = (uint)bVar25 * *(int *)(arg1 + 0x208) + 7 >> 3;
    } else {
      uVar20 = (uint)(bVar25 >> 3) * *(int *)(arg1 + 0x208);
    }
    *(uint *)(arg1 + 0x20c) = uVar20;
    return;
  }
  return;
}

/* ======================================================================
 * png_build_gamma_table  (Ghidra `png_build_gamma_table` @ 0054c4b0)
 * Signature: uint8_t png_build_gamma_table(void)
 * Calls: `png_malloc`
 * Called by: `png_init_read_transformations`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_build_gamma_table(long arg1)

{
  float fVar1;
  long lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double local_78;
  double local_60;
  double local_58;

  dVar20 = DAT_005d2730 /* R:-3.0819790611203132e-19f */;
  local_58 = DAT_005c7318 /* R:0.0f */;
  if (*(byte *)(arg1 + 0x237) < 9) {
    if (DAT_005d2730 /* R:-3.0819790611203132e-19f */ < (double)*(float *)(arg1 + 0x278)) {
      local_78 =
          DAT_005c7318 /* R:0.0f */ / (double)(*(float *)(arg1 + 0x278) * *(float *)(arg1 + 0x274));
      dVar16 = (double)__pow_finite(0, local_78);
    } else {
      dVar16 = 0.0;
      local_78 = DAT_005c7318 /* R:0.0f */;
    }
    lVar2 = png_malloc(arg1, 0x100);
    dVar18 = DAT_005d2728 /* R:0.0f */;
    *(long *)(arg1 + 0x280) = lVar2;
    lVar6 = 0;
    while (true) {
      *(char *)(lVar2 + lVar6) = (char)(int)(dVar16 * DAT_005d2738 /* R:0.0f */ + dVar18);
      iVar12 = (int)lVar6;
      lVar6 = lVar6 + 1;
      if (lVar6 == 0x100)
        break;
      lVar2 = *(long *)(arg1 + 0x280);
      dVar16 = (double)__pow_finite(
          (double)(iVar12 + 1) * DAT_005d2740 /* R:2.8411366687849113e-29f */, local_78);
    }
    if ((*(uint *)(arg1 + 0x11c) & 0x600080) == 0) {
      return;
    }
    fVar1 = *(float *)(arg1 + 0x274);
    lVar6 = 0;
    lVar2 = png_malloc(arg1, 0x100);
    *(long *)(arg1 + 0x290) = lVar2;
    while (true) {
      dVar16 =
          (double)__pow_finite((double)(int)lVar6 * DAT_005d2740 /* R:2.8411366687849113e-29f */,
                               local_58 / (double)fVar1);
      *(char *)(lVar2 + lVar6) = (char)(int)(dVar16 * DAT_005d2738 /* R:0.0f */ + dVar18);
      lVar6 = lVar6 + 1;
      if (lVar6 == 0x100)
        break;
      lVar2 = *(long *)(arg1 + 0x290);
    }
    lVar2 = png_malloc(arg1, 0x100);
    *(long *)(arg1 + 0x288) = lVar2;
    if ((double)*(float *)(arg1 + 0x278) <= dVar20) {
      local_58 = (double)*(float *)(arg1 + 0x274);
    } else {
      local_58 = local_58 / (double)*(float *)(arg1 + 0x278);
    }
    lVar6 = 0;
    while (true) {
      dVar20 = (double)__pow_finite(
          (double)(int)lVar6 * DAT_005d2740 /* R:2.8411366687849113e-29f */, local_58);
      *(char *)(lVar2 + lVar6) = (char)(int)(dVar20 * DAT_005d2738 /* R:0.0f */ + dVar18);
      lVar6 = lVar6 + 1;
      if (lVar6 == 0x100)
        break;
      lVar2 = *(long *)(arg1 + 0x288);
    }
    return;
  }
  if ((*(byte *)(arg1 + 0x236) & 2) == 0) {
    uVar14 = (uint) * (byte *)(arg1 + 0x2b3);
  LAB_0054c5c0:
    uVar11 = 0;
    if (uVar14 != 0)
      goto LAB_0054c5c7;
  } else {
    uVar14 = (uint) * (byte *)(arg1 + 0x2b0);
    if ((uint) * (byte *)(arg1 + 0x2b0) <= (uint) * (byte *)(arg1 + 0x2b1)) {
      uVar14 = (uint) * (byte *)(arg1 + 0x2b1);
    }
    if (*(byte *)(arg1 + 0x2b2) <= uVar14)
      goto LAB_0054c5c0;
    uVar14 = (uint) * (byte *)(arg1 + 0x2b2);
  LAB_0054c5c7:
    uVar11 = 0x10 - uVar14;
  }
  if (((*(byte *)(arg1 + 0x11d) & 4) == 0) || (4 < (int)uVar11)) {
    if ((int)uVar11 < 9) {
      if ((int)uVar11 < 0) {
        iVar12 = 0x800;
        iVar10 = 0x100;
        bVar5 = 8;
        uVar14 = 0;
        uVar11 = 0;
      } else {
        uVar14 = uVar11 & 0xff;
        bVar5 = 8 - (char)uVar11;
        iVar10 = 1 << (bVar5 & 0x1f);
        iVar12 = iVar10 * 8;
      }
    } else {
      iVar12 = 8;
      iVar10 = 1;
      bVar5 = 0;
      uVar14 = 8;
      uVar11 = 8;
    }
  } else {
    iVar12 = 0x40;
    iVar10 = 8;
    bVar5 = 3;
    uVar14 = 5;
    uVar11 = 5;
  }
  *(uint *)(arg1 + 0x270) = uVar14;
  dVar20 = DAT_005d2730 /* R:-3.0819790611203132e-19f */;
  local_58 = DAT_005c7318 /* R:0.0f */;
  if ((double)*(float *)(arg1 + 0x278) <= DAT_005d2730 /* R:-3.0819790611203132e-19f */) {
    local_60 = DAT_005c7318 /* R:0.0f */;
  } else {
    local_60 =
        DAT_005c7318 /* R:0.0f */ / (double)(*(float *)(arg1 + 0x278) * *(float *)(arg1 + 0x274));
  }
  lVar2 = png_malloc(arg1, iVar12);
  uVar14 = *(uint *)(arg1 + 0x11c);
  *(long *)(arg1 + 0x298) = lVar2;
  dVar19 = _DAT_005d2758 /* R:0.0f */;
  dVar18 = DAT_005d2750 /* R:1.4693903593032886e-39f */;
  dVar16 = DAT_005d2728 /* R:0.0f */;
  if ((uVar14 & 0x480) == 0) {
    if (iVar10 < 1)
      goto LAB_0054c94d;
    iVar9 = *(int *)(png_gamma_shift + (long)(int)uVar11 * 4);
    uVar15 = 0;
    lVar6 = 0;
    while (true) {
      uVar3 = png_malloc(arg1, 0x200);
      *(uint64_t *)(lVar2 + lVar6) = uVar3;
      lVar2 = 0;
      do {
        dVar17 = (double)__pow_finite(
            (double)(uint)((int)lVar2 * 0x100 + (int)(uVar15 >> 4)) * dVar18, local_60);
        *(short *)(*(long *)(*(long *)(arg1 + 0x298) + lVar6) + lVar2 * 2) =
            (short)(int)(dVar17 * dVar19 + dVar16);
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x100);
      lVar6 = lVar6 + 8;
      uVar15 = (ulong)(uint)((int)uVar15 + iVar9);
      if (lVar6 == (ulong)(iVar10 - 1) * 8 + 8)
        break;
      lVar2 = *(long *)(arg1 + 0x298);
    }
  } else {
    if (0 < iVar10) {
      lVar6 = 0;
      while (true) {
        puVar4 = (uint64_t *)(lVar2 + lVar6);
        lVar6 = lVar6 + 8;
        uVar3 = png_malloc(arg1, 0x200);
        *puVar4 = uVar3;
        if (lVar6 == (ulong)(iVar10 - 1) * 8 + 8)
          break;
        lVar2 = *(long *)(arg1 + 0x298);
      }
    }
    dVar16 = DAT_005d2728 /* R:0.0f */;
    uVar8 = 0xff >> ((byte)uVar11 & 0x1f);
    uVar14 = 0;
    iVar9 = 0;
    do {
      dVar18 = (double)__pow_finite(((double)iVar9 + dVar16) * _DAT_005d2748 /* R:0.0f */,
                                    local_58 / local_60);
      uVar7 = (uint)(long)(dVar18 * (double)(uint)(iVar10 << 8));
      if (uVar14 <= uVar7) {
        uVar13 = uVar14;
        do {
          uVar14 = uVar13 + 1;
          *(ushort *)(*(long *)(*(long *)(arg1 + 0x298) + (long)(int)(uVar13 & uVar8) * 8) +
                      (long)(int)(uVar13 >> (bVar5 & 0x1f)) * 2) =
              (ushort)(iVar9 << 8) | (ushort)iVar9;
          uVar13 = uVar14;
        } while (uVar14 <= uVar7);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x100);
    for (; uVar14 < (uint)(iVar10 << 8); uVar14 = uVar14 + 1) {
      *(uint16_t *)(*(long *)(*(long *)(arg1 + 0x298) + (long)(int)(uVar14 & uVar8) * 8) +
                    (long)(int)(uVar14 >> (bVar5 & 0x1f)) * 2) = 0xffff;
    }
  }
  uVar14 = *(uint *)(arg1 + 0x11c);
LAB_0054c94d:
  if ((uVar14 & 0x600080) != 0) {
    fVar1 = *(float *)(arg1 + 0x274);
    lVar2 = png_malloc(arg1, iVar12);
    *(long *)(arg1 + 0x2a8) = lVar2;
    dVar19 = _DAT_005d2758 /* R:0.0f */;
    dVar18 = DAT_005d2750 /* R:1.4693903593032886e-39f */;
    dVar16 = DAT_005d2728 /* R:0.0f */;
    if (0 < iVar10) {
      iVar9 = *(int *)(png_gamma_shift + (long)(int)uVar11 * 4);
      uVar14 = 0;
      lVar6 = 0;
      while (true) {
        uVar3 = png_malloc(arg1, 0x200);
        *(uint64_t *)(lVar2 + lVar6) = uVar3;
        lVar2 = 0;
        do {
          dVar17 = (double)__pow_finite((double)((int)lVar2 * 0x100 + (uVar14 >> 4)) * dVar18,
                                        local_58 / (double)fVar1);
          *(short *)(*(long *)(*(long *)(arg1 + 0x2a8) + lVar6) + lVar2 * 2) =
              (short)(int)(dVar17 * dVar19 + dVar16);
          lVar2 = lVar2 + 1;
        } while (lVar2 != 0x100);
        lVar6 = lVar6 + 8;
        uVar14 = uVar14 + iVar9;
        if (lVar6 == (ulong)(iVar10 - 1) * 8 + 8)
          break;
        lVar2 = *(long *)(arg1 + 0x2a8);
      }
    }
    if (dVar20 < (double)*(float *)(arg1 + 0x278)) {
      local_58 = local_58 / (double)*(float *)(arg1 + 0x278);
    } else {
      local_58 = (double)*(float *)(arg1 + 0x274);
    }
    lVar2 = png_malloc(arg1, iVar12);
    *(long *)(arg1 + 0x2a0) = lVar2;
    dVar18 = _DAT_005d2758 /* R:0.0f */;
    dVar16 = DAT_005d2750 /* R:1.4693903593032886e-39f */;
    dVar20 = DAT_005d2728 /* R:0.0f */;
    if (0 < iVar10) {
      iVar12 = *(int *)(png_gamma_shift + (long)(int)uVar11 * 4);
      lVar6 = 0;
      uVar14 = 0;
      while (true) {
        uVar3 = png_malloc(arg1, 0x200);
        *(uint64_t *)(lVar2 + lVar6) = uVar3;
        lVar2 = 0;
        do {
          dVar19 =
              (double)__pow_finite((double)((int)lVar2 * 0x100 + (uVar14 >> 4)) * dVar16, local_58);
          *(short *)(*(long *)(*(long *)(arg1 + 0x2a0) + lVar6) + lVar2 * 2) =
              (short)(int)(dVar19 * dVar18 + dVar20);
          lVar2 = lVar2 + 1;
        } while (lVar2 != 0x100);
        lVar6 = lVar6 + 8;
        uVar14 = uVar14 + iVar12;
        if (lVar6 == (ulong)(iVar10 - 1) * 8 + 8)
          break;
        lVar2 = *(long *)(arg1 + 0x2a0);
      }
    }
  }
  return;
}

/* ======================================================================
 * png_init_read_transformations  (Ghidra `png_init_read_transformations` @ 0054cd60)
 * Signature: uint8_t png_init_read_transformations(void)
 * Calls: `png_build_gamma_table`
 * Called by: `png_read_start_row`
 */
void png_init_read_transformations(long arg1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  double dVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  short sVar9;
  byte *pbVar10;
  long lVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint16_t uVar18;
  byte bVar19;
  byte bVar20;
  bool bVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double local_60;
  double local_58;
  double local_50;
  double local_48;

  uVar6 = *(uint *)(arg1 + 0x11c);
  bVar20 = *(byte *)(arg1 + 0x236);
  if (((uVar6 & 0x100) == 0) || ((bVar20 & 2) != 0)) {
    if (((*(uint *)(arg1 + 0x11c) & 0x4180) == 0x4080) &&
        ((sVar9 = *(short *)(arg1 + 0x24a),
          sVar9 == *(short *)(arg1 + 0x24c) && (sVar9 == *(short *)(arg1 + 0x24e))))) {
      *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 0x800;
      *(short *)(arg1 + 0x250) = sVar9;
    }
    if ((*(uint *)(arg1 + 0x11c) & 0x1100) == 0x1100)
      goto LAB_0054d02e;
  switchD_0054d04c_caseD_0:
    *(uint64_t *)(arg1 + 0x252) = *(uint64_t *)(arg1 + 0x248);
    *(uint16_t *)(arg1 + 0x25a) = *(uint16_t *)(arg1 + 0x250);
    if (bVar20 == 3) {
      uVar12 = *(ushort *)(arg1 + 0x22a);
    LAB_0054d05f:
      if ((uVar12 != 0) &&
          ((double)((ulong)((double)(*(float *)(arg1 + 0x274) * *(float *)(arg1 + 0x278)) -
                            DAT_005c7318 /* R:0.0f */) &
                    DAT_005c72e0 /* R:u32=4294967295 */) <
           DAT_005d2718 /* R:-1.5881868392106856e-23f */)) {
        if (uVar12 != 0) {
          lVar8 = 0;
          bVar21 = false;
          do {
            if ((byte)(*(char *)(*(long *)(arg1 + 0x2c0) + lVar8) - 1U) < 0xfe) {
              bVar21 = true;
            }
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < (int)(uint)uVar12);
          if (bVar21)
            goto LAB_0054cdde;
        }
        uVar6 = uVar6 & 0xffffdfff;
        *(uint *)(arg1 + 0x11c) = uVar6;
      }
    }
  } else {
    *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 0x800;
    if ((uVar6 & 0x1100) != 0x1100)
      goto switchD_0054d04c_caseD_0;
  LAB_0054d02e:
    if ((bVar20 & 2) == 0) {
      switch (*(uint8_t *)(arg1 + 0x237)) {
      case 1:
        sVar9 = *(short *)(arg1 + 0x250) * 0xff;
        *(short *)(arg1 + 0x250) = sVar9;
        *(short *)(arg1 + 0x24e) = sVar9;
        *(short *)(arg1 + 0x24c) = sVar9;
        *(short *)(arg1 + 0x24a) = sVar9;
        if ((uVar6 & 0x2000000) == 0) {
          sVar9 = *(short *)(arg1 + 0x2d0) * 0xff;
          *(short *)(arg1 + 0x2d0) = sVar9;
          *(short *)(arg1 + 0x2ce) = sVar9;
          *(short *)(arg1 + 0x2cc) = sVar9;
          *(short *)(arg1 + 0x2ca) = sVar9;
        }
        break;
      case 2:
        sVar9 = *(short *)(arg1 + 0x250) * 0x55;
        *(short *)(arg1 + 0x250) = sVar9;
        *(short *)(arg1 + 0x24e) = sVar9;
        *(short *)(arg1 + 0x24c) = sVar9;
        *(short *)(arg1 + 0x24a) = sVar9;
        if ((uVar6 & 0x2000000) == 0) {
          sVar9 = *(short *)(arg1 + 0x2d0) * 5;
        LAB_0054d4e8:
          sVar9 = sVar9 * 0x11;
          *(short *)(arg1 + 0x2d0) = sVar9;
          *(short *)(arg1 + 0x2ce) = sVar9;
          *(short *)(arg1 + 0x2cc) = sVar9;
          *(short *)(arg1 + 0x2ca) = sVar9;
        }
        break;
      case 4:
        sVar9 = *(short *)(arg1 + 0x250) * 0x11;
        *(short *)(arg1 + 0x250) = sVar9;
        *(short *)(arg1 + 0x24e) = sVar9;
        *(short *)(arg1 + 0x24c) = sVar9;
        *(short *)(arg1 + 0x24a) = sVar9;
        if ((uVar6 & 0x2000000) == 0) {
          sVar9 = *(short *)(arg1 + 0x2d0);
          goto LAB_0054d4e8;
        }
        break;
      case 8:
      case 0x10:
        uVar18 = *(uint16_t *)(arg1 + 0x250);
        *(uint16_t *)(arg1 + 0x24e) = uVar18;
        *(uint16_t *)(arg1 + 0x24c) = uVar18;
        *(uint16_t *)(arg1 + 0x24a) = uVar18;
      }
      goto switchD_0054d04c_caseD_0;
    }
    if (bVar20 == 3) {
      uVar12 = *(ushort *)(arg1 + 0x22a);
      pbVar10 = (byte *)((ulong) * (byte *)(arg1 + 0x248) * 3 + *(long *)(arg1 + 0x220));
      *(ushort *)(arg1 + 0x24a) = (ushort)*pbVar10;
      *(ushort *)(arg1 + 0x24c) = (ushort)pbVar10[1];
      *(ushort *)(arg1 + 0x24e) = (ushort)pbVar10[2];
      if ((((uVar6 & 0x80000) != 0) && ((uVar6 & 0x2000000) == 0)) && (uVar12 != 0)) {
        lVar8 = 0;
        do {
          pbVar10 = (byte *)(lVar8 + *(long *)(arg1 + 0x2c0));
          lVar8 = lVar8 + 1;
          *pbVar10 = ~*pbVar10;
        } while ((int)lVar8 < (int)(uint)uVar12);
        uVar12 = *(ushort *)(arg1 + 0x22a);
        uVar6 = *(uint *)(arg1 + 0x11c);
      }
      *(uint64_t *)(arg1 + 0x252) = *(uint64_t *)(arg1 + 0x248);
      *(uint16_t *)(arg1 + 0x25a) = *(uint16_t *)(arg1 + 0x250);
      goto LAB_0054d05f;
    }
    *(uint64_t *)(arg1 + 0x252) = *(uint64_t *)(arg1 + 0x248);
    *(uint16_t *)(arg1 + 0x25a) = *(uint16_t *)(arg1 + 0x250);
  }
LAB_0054cdde:
  if (((uVar6 & 0x602000) == 0) || (*(float *)(arg1 + 0x274) == 0.0)) {
    bVar21 = bVar20 == 3;
    if (((uVar6 & 0x80) != 0) && (bVar21)) {
      uVar12 = *(ushort *)(arg1 + 0x22a);
      pbVar10 = *(byte **)(arg1 + 0x220);
      bVar20 = *(byte *)(arg1 + 0x24a);
      bVar19 = *(byte *)(arg1 + 0x24c);
      bVar17 = *(byte *)(arg1 + 0x24e);
      if (uVar12 != 0) {
        lVar8 = 0;
        do {
          while (true) {
            bVar16 = *(byte *)(*(long *)(arg1 + 0x2c0) + lVar8);
            if (bVar16 != 0)
              break;
            *pbVar10 = bVar20;
            pbVar10[1] = bVar19;
            pbVar10[2] = bVar17;
          LAB_0054ce63:
            lVar8 = lVar8 + 1;
            pbVar10 = pbVar10 + 3;
            if ((int)(uint)uVar12 <= (int)lVar8)
              goto LAB_0054cf30;
          }
          if (bVar16 == 0xff)
            goto LAB_0054ce63;
          uVar6 = (ushort)((ushort)bVar16 * (ushort)*pbVar10) + 0x80 +
                  (uint)(ushort)(0xff - bVar16) * (uint)bVar20;
          *pbVar10 = (byte)((uVar6 >> 8 & 0xff) + (uVar6 & 0xffff) >> 8);
          bVar16 = *(byte *)(*(long *)(arg1 + 0x2c0) + lVar8);
          uVar6 = (ushort)((ushort)bVar16 * (ushort)pbVar10[1]) + 0x80 +
                  (uint)(ushort)(0xff - bVar16) * (uint)bVar19;
          pbVar10[1] = (byte)((uVar6 >> 8 & 0xff) + (uVar6 & 0xffff) >> 8);
          bVar16 = *(byte *)(*(long *)(arg1 + 0x2c0) + lVar8);
          lVar8 = lVar8 + 1;
          uVar6 = (ushort)((ushort)bVar16 * (ushort)pbVar10[2]) + 0x80 +
                  (uint)(ushort)(0xff - bVar16) * (uint)bVar17;
          pbVar10[2] = (byte)((uVar6 >> 8 & 0xff) + (uVar6 & 0xffff) >> 8);
          pbVar10 = pbVar10 + 3;
        } while ((int)lVar8 < (int)(uint)uVar12);
      LAB_0054cf30:
        uVar6 = *(uint *)(arg1 + 0x11c);
      }
      bVar21 = true;
      uVar6 = uVar6 & 0xffffff7f | 0x40000;
      *(uint *)(arg1 + 0x11c) = uVar6;
    }
    goto LAB_0054cf48;
  }
  png_build_gamma_table(arg1);
  dVar26 = DAT_005c7318 /* R:0.0f */;
  uVar6 = *(uint *)(arg1 + 0x11c);
  if ((uVar6 & 0x80) == 0) {
    if (bVar20 != 3) {
      return;
    }
    uVar12 = *(ushort *)(arg1 + 0x228);
    lVar8 = *(long *)(arg1 + 0x220);
    if (uVar12 != 0) {
      lVar11 = 0;
      do {
        *(uint8_t *)(lVar8 + lVar11) =
            *(uint8_t *)(*(long *)(arg1 + 0x280) + (ulong) * (byte *)(lVar8 + lVar11));
        *(uint8_t *)(lVar8 + 1 + lVar11) =
            *(uint8_t *)(*(long *)(arg1 + 0x280) + (ulong) * (byte *)(lVar8 + 1 + lVar11));
        *(uint8_t *)(lVar8 + 2 + lVar11) =
            *(uint8_t *)(*(long *)(arg1 + 0x280) + (ulong) * (byte *)(lVar8 + 2 + lVar11));
        lVar11 = lVar11 + 3;
      } while (lVar11 != (ulong)(uVar12 - 1) * 3 + 3);
      uVar6 = *(uint *)(arg1 + 0x11c);
    }
    bVar21 = true;
    uVar6 = uVar6 & 0xffffdfff;
    *(uint *)(arg1 + 0x11c) = uVar6;
    goto LAB_0054cf48;
  }
  if (bVar20 != 3) {
    dVar24 = (double)((1 << (*(byte *)(arg1 + 0x237) & 0x1f)) - 1);
    cVar1 = *(char *)(arg1 + 0x240);
    if (cVar1 == '\x02') {
      fVar22 = *(float *)(arg1 + 0x274);
    } else {
      if (cVar1 != '\x03') {
        if (cVar1 == '\x01') {
          local_50 = (double)*(float *)(arg1 + 0x278);
          local_48 = DAT_005c7318 /* R:0.0f */;
        } else {
          local_48 = DAT_005c7318 /* R:0.0f */;
          local_50 = DAT_005c7318 /* R:0.0f */;
        }
        goto LAB_0054d1a5;
      }
      fVar22 = *(float *)(arg1 + 0x244);
    }
    local_50 = DAT_005c7318 /* R:0.0f */ / (double)fVar22;
    local_48 = DAT_005c7318 /* R:0.0f */ / (double)(fVar22 * *(float *)(arg1 + 0x278));
  LAB_0054d1a5:
    dVar25 = (double)*(ushort *)(arg1 + 0x250) / dVar24;
    dVar23 = (double)__pow_finite(dVar25, local_50);
    dVar4 = DAT_005d2728 /* R:0.0f */;
    uVar18 = (uint16_t)(int)(dVar23 * dVar24 + DAT_005d2728 /* R:0.0f */);
    *(uint16_t *)(arg1 + 0x25a) = uVar18;
    dVar23 = (double)__pow_finite(dVar25, local_48);
    uVar12 = *(ushort *)(arg1 + 0x24c);
    uVar5 = (ushort)(int)(dVar23 * dVar24 + dVar4);
    *(ushort *)(arg1 + 0x250) = uVar5;
    uVar3 = *(ushort *)(arg1 + 0x24a);
    if (((uVar3 == uVar12) && (uVar3 == *(ushort *)(arg1 + 0x24e))) && (uVar5 == uVar3)) {
      *(uint16_t *)(arg1 + 600) = uVar18;
      *(uint16_t *)(arg1 + 0x256) = uVar18;
      *(uint16_t *)(arg1 + 0x254) = uVar18;
      *(ushort *)(arg1 + 0x24e) = uVar5;
      *(ushort *)(arg1 + 0x24c) = uVar5;
      *(ushort *)(arg1 + 0x24a) = uVar5;
      return;
    }
    dVar26 = dVar26 / dVar24;
    dVar23 = (double)__pow_finite((double)uVar3 * dVar26, local_50);
    dVar27 = (double)uVar12 * dVar26;
    *(short *)(arg1 + 0x254) = (short)(int)(dVar23 * dVar24 + dVar4);
    dVar23 = (double)__pow_finite(dVar27, local_50);
    *(short *)(arg1 + 0x256) = (short)(int)(dVar23 * dVar24 + dVar4);
    dVar25 = (double)*(ushort *)(arg1 + 0x24e) * dVar26;
    dVar23 = (double)__pow_finite(dVar25, local_50);
    *(short *)(arg1 + 600) = (short)(int)(dVar23 * dVar24 + dVar4);
    dVar26 = (double)__pow_finite((double)uVar3 * dVar26, local_48);
    *(short *)(arg1 + 0x24a) = (short)(int)(dVar26 * dVar24 + dVar4);
    dVar26 = (double)__pow_finite(dVar27, local_48);
    *(short *)(arg1 + 0x24c) = (short)(int)(dVar26 * dVar24 + dVar4);
    dVar26 = (double)__pow_finite(dVar25, local_48);
    *(short *)(arg1 + 0x24e) = (short)(int)(dVar26 * dVar24 + dVar4);
    return;
  }
  pbVar10 = *(byte **)(arg1 + 0x220);
  uVar12 = *(ushort *)(arg1 + 0x228);
  cVar1 = *(char *)(arg1 + 0x240);
  if (cVar1 == '\x02') {
    lVar8 = *(long *)(arg1 + 0x280);
    bVar20 = *(byte *)(lVar8 + (ulong) * (ushort *)(arg1 + 0x24a));
    bVar19 = *(byte *)(lVar8 + (ulong) * (ushort *)(arg1 + 0x24c));
    bVar17 = *(byte *)(lVar8 + (ulong) * (ushort *)(arg1 + 0x24e));
    lVar8 = *(long *)(arg1 + 0x290);
    bVar16 = *(byte *)(lVar8 + (ulong) * (ushort *)(arg1 + 0x24a));
    bVar15 = *(byte *)(lVar8 + (ulong) * (ushort *)(arg1 + 0x24c));
    uVar13 = (uint) * (byte *)(lVar8 + (ulong) * (ushort *)(arg1 + 0x24e));
  } else {
    if (cVar1 == '\x03') {
      local_50 = DAT_005c7318 /* R:0.0f */ / (double)*(float *)(arg1 + 0x244);
      dVar26 =
          DAT_005c7318 /* R:0.0f */ / (double)(*(float *)(arg1 + 0x244) * *(float *)(arg1 + 0x278));
      dVar24 = (double)((ulong)(dVar26 - DAT_005c7318 /* R:0.0f */) &
                        DAT_005c72e0 /* R:u32=4294967295 */);
    LAB_0054d696:
      if (dVar24 < DAT_005d2718 /* R:-1.5881868392106856e-23f */)
        goto LAB_0054da4a;
      dVar27 = (double)*(ushort *)(arg1 + 0x24a) * DAT_005d2740 /* R:2.8411366687849113e-29f */;
      dVar23 = (double)__pow_finite(dVar27, dVar26);
      dVar4 = DAT_005d2738 /* R:0.0f */;
      dVar24 = DAT_005d2728 /* R:0.0f */;
      local_60 = DAT_005d2738 /* R:0.0f */;
      local_58 = DAT_005d2728 /* R:0.0f */;
      uVar14 = (uint)(dVar23 * DAT_005d2738 /* R:0.0f */ + DAT_005d2728 /* R:0.0f */);
      dVar25 = (double)*(ushort *)(arg1 + 0x24c) * DAT_005d2740 /* R:2.8411366687849113e-29f */;
      dVar23 = (double)__pow_finite(dVar25, dVar26);
      uVar7 = (uint)(dVar23 * dVar4 + dVar24);
      dVar23 = (double)*(ushort *)(arg1 + 0x24e) * DAT_005d2740 /* R:2.8411366687849113e-29f */;
      dVar26 = (double)__pow_finite(dVar23, dVar26);
      uVar13 = (uint)(dVar26 * dVar4 + dVar24);
    } else {
      if (cVar1 != '\x01') {
        dVar24 = 0.0;
        local_50 = DAT_005c7318 /* R:0.0f */;
        goto LAB_0054d696;
      }
      local_50 = (double)*(float *)(arg1 + 0x278);
    LAB_0054da4a:
      local_58 = DAT_005d2728 /* R:0.0f */;
      uVar14 = (uint) * (ushort *)(arg1 + 0x24a);
      uVar7 = (uint) * (ushort *)(arg1 + 0x24c);
      uVar13 = (uint) * (ushort *)(arg1 + 0x24e);
      dVar27 = (double)uVar14 * DAT_005d2740 /* R:2.8411366687849113e-29f */;
      dVar25 = (double)uVar7 * DAT_005d2740 /* R:2.8411366687849113e-29f */;
      dVar23 = (double)uVar13 * DAT_005d2740 /* R:2.8411366687849113e-29f */;
      local_60 = DAT_005d2738 /* R:0.0f */;
    }
    bVar17 = (byte)uVar13;
    bVar19 = (byte)uVar7;
    bVar20 = (byte)uVar14;
    dVar26 = (double)__pow_finite(dVar27, local_50);
    bVar16 = (byte)(int)(dVar26 * local_60 + local_58);
    dVar26 = (double)__pow_finite(dVar25, local_50);
    bVar15 = (byte)(int)(dVar26 * local_60 + local_58);
    dVar26 = (double)__pow_finite(dVar23, local_50);
    uVar13 = (uint)(dVar26 * local_60 + local_58);
  }
  if (uVar12 != 0) {
    lVar8 = 0;
    do {
      if (((int)lVar8 < (int)(uint) * (ushort *)(arg1 + 0x22a)) &&
          (bVar2 = *(byte *)(*(long *)(arg1 + 0x2c0) + lVar8), bVar2 != 0xff)) {
        if (bVar2 == 0) {
          *pbVar10 = bVar20;
          pbVar10[1] = bVar19;
          pbVar10[2] = bVar17;
        } else {
          uVar6 = (ushort)((ushort) * (byte *)(*(long *)(arg1 + 0x290) + (ulong)*pbVar10) *
                           (ushort)bVar2) +
                  0x80 + (uint)(ushort)(0xff - bVar2) * (uint)bVar16;
          *pbVar10 = *(byte *)(*(long *)(arg1 + 0x288) +
                               ((ulong)uVar6 + (ulong)(byte)(uVar6 >> 8) >> 8 & 0xff));
          bVar2 = *(byte *)(*(long *)(arg1 + 0x2c0) + lVar8);
          uVar6 = (ushort)((ushort) * (byte *)(*(long *)(arg1 + 0x290) + (ulong)pbVar10[1]) *
                           (ushort)bVar2) +
                  0x80 + (uint)(ushort)(0xff - bVar2) * (uint)bVar15;
          pbVar10[1] = *(byte *)(*(long *)(arg1 + 0x288) +
                                 ((ulong)uVar6 + (ulong)(byte)(uVar6 >> 8) >> 8 & 0xff));
          bVar2 = *(byte *)(*(long *)(arg1 + 0x2c0) + lVar8);
          uVar6 = (ushort)((ushort) * (byte *)(*(long *)(arg1 + 0x290) + (ulong)pbVar10[2]) *
                           (ushort)bVar2) +
                  0x80 + (uint)(ushort)(0xff - bVar2) * (uVar13 & 0xff);
          pbVar10[2] = *(byte *)(*(long *)(arg1 + 0x288) +
                                 ((ulong)uVar6 + (ulong)(byte)(uVar6 >> 8) >> 8 & 0xff));
        }
      } else {
        *pbVar10 = *(byte *)(*(long *)(arg1 + 0x280) + (ulong)*pbVar10);
        pbVar10[1] = *(byte *)(*(long *)(arg1 + 0x280) + (ulong)pbVar10[1]);
        pbVar10[2] = *(byte *)(*(long *)(arg1 + 0x280) + (ulong)pbVar10[2]);
      }
      lVar8 = lVar8 + 1;
      pbVar10 = pbVar10 + 3;
    } while ((int)lVar8 < (int)(uint)uVar12);
    uVar6 = *(uint *)(arg1 + 0x11c);
  }
  bVar21 = true;
  uVar6 = uVar6 & 0xffffdf7f | 0x40000;
  *(uint *)(arg1 + 0x11c) = uVar6;
LAB_0054cf48:
  if (((uVar6 & 8) != 0) && (bVar21)) {
    uVar12 = *(ushort *)(arg1 + 0x228);
    uVar6 = 8 - *(byte *)(arg1 + 0x2b0);
    uVar13 = 8 - *(byte *)(arg1 + 0x2b1);
    uVar14 = 8 - *(byte *)(arg1 + 0x2b2);
    uVar7 = 0;
    if (8 < uVar6) {
      uVar6 = uVar7;
    }
    if (8 < uVar13) {
      uVar13 = uVar7;
    }
    if (8 < uVar14) {
      uVar14 = uVar7;
    }
    if (uVar12 != 0) {
      lVar8 = 0;
      do {
        pbVar10 = (byte *)(lVar8 + *(long *)(arg1 + 0x220));
        *pbVar10 = (byte)((int)(uint)*pbVar10 >> ((byte)uVar6 & 0x1f));
        lVar11 = lVar8 + *(long *)(arg1 + 0x220);
        *(char *)(lVar11 + 1) = (char)((int)(uint) * (byte *)(lVar11 + 1) >> ((byte)uVar13 & 0x1f));
        lVar11 = lVar8 + *(long *)(arg1 + 0x220);
        lVar8 = lVar8 + 3;
        *(char *)(lVar11 + 2) = (char)((int)(uint) * (byte *)(lVar11 + 2) >> ((byte)uVar14 & 0x1f));
      } while (lVar8 != (ulong)(uVar12 - 1 & 0xffff) * 3 + 3);
    }
  }
  return;
}

/* ======================================================================
 * png_do_read_intrapixel  (Ghidra `png_do_read_intrapixel` @ 0054db50)
 * Signature: uint8_t png_do_read_intrapixel(void)
 * Calls: (none)
 * Called by: `png_read_row`
 */
void png_do_read_intrapixel(int *arg1, char *arg2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;

  bVar1 = *(byte *)(arg1 + 2);
  if ((bVar1 & 2) != 0) {
    iVar2 = *arg1;
    if (*(char *)((long)arg1 + 9) == '\b') {
      if (bVar1 == 2) {
        lVar6 = 3;
      } else {
        lVar6 = 4;
        if (bVar1 != 6) {
          return;
        }
      }
      if (iVar2 != 0) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          *arg2 = *arg2 + arg2[1];
          arg2[2] = arg2[2] + arg2[1];
          arg2 = arg2 + lVar6;
        } while (iVar4 != iVar2);
        return;
      }
    } else if (*(char *)((long)arg1 + 9) == '\x10') {
      if (bVar1 == 2) {
        lVar6 = 6;
      } else {
        lVar6 = 8;
        if (bVar1 != 6) {
          return;
        }
      }
      if (iVar2 != 0) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          uVar5 = (uint)CONCAT11(*arg2, arg2[1]) + (uint)CONCAT11(arg2[2], arg2[3]) & 0xffff;
          arg2[1] = (char)uVar5;
          uVar3 = (uint)CONCAT11(arg2[2], arg2[3]) + (uint)CONCAT11(arg2[4], arg2[5]) & 0xffff;
          *arg2 = (char)(uVar5 >> 8);
          arg2[5] = (char)uVar3;
          arg2[4] = (char)(uVar3 >> 8);
          arg2 = arg2 + lVar6;
        } while (iVar4 != iVar2);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * png_get_uint_31  (Ghidra `png_get_uint_31` @ 0054dc40)
 * Signature: uint8_t png_get_uint_31(void)
 * Calls: `png_error`
 * Called by: `png_push_read_IDAT`, `png_push_read_chunk`, `png_read_end`, `png_read_info`, `png_read_row`
 */
int png_get_uint_31(uint64_t arg1, byte *arg2)

{
  int iVar1;

  iVar1 = (uint)arg2[1] * 0x10000 + (uint)*arg2 * 0x1000000 + (uint)arg2[3] + (uint)arg2[2] * 0x100;
  if (-1 < iVar1) {
    return iVar1;
  }
  png_error(arg1, "PNG unsigned integer out of range.");
  return iVar1;
}

/* ======================================================================
 * png_get_uint_32  (Ghidra `png_get_uint_32` @ 0054dc90)
 * Signature: uint8_t png_get_uint_32(void)
 * Calls: (none)
 * Called by: (none)
 */
int png_get_uint_32(byte *arg1)

{
  return (uint)arg1[2] * 0x100 + (uint)*arg1 * 0x1000000 + (uint)arg1[1] * 0x10000 + (uint)arg1[3];
}

/* ======================================================================
 * png_get_int_32  (Ghidra `png_get_int_32` @ 0054dcb0)
 * Signature: uint8_t png_get_int_32(void)
 * Calls: (none)
 * Called by: (none)
 */
int png_get_int_32(byte *arg1)

{
  return (uint)arg1[2] * 0x100 + (uint)*arg1 * 0x1000000 + (uint)arg1[1] * 0x10000 + (uint)arg1[3];
}

/* ======================================================================
 * png_get_uint_16  (Ghidra `png_get_uint_16` @ 0054dcd0)
 * Signature: uint8_t png_get_uint_16(void)
 * Calls: (none)
 * Called by: (none)
 */
int png_get_uint_16(byte *arg1)

{
  return (uint)*arg1 * 0x100 + (uint)arg1[1];
}

/* ======================================================================
 * png_crc_read  (Ghidra `png_crc_read` @ 0054dce0)
 * Signature: uint8_t png_crc_read(void)
 * Calls: `png_calculate_crc`, `png_read_data`
 * Called by: `png_push_handle_unknown`, `png_push_read_IDAT`, `png_push_read_chunk`, `png_push_read_tEXt`, `png_push_read_zTXt`, `png_read_end`, `png_read_info`, `png_read_row`
 */
void png_crc_read(long arg1, uint64_t arg2, uint64_t arg3)

{
  if (arg1 != 0) {
    png_read_data();
    png_calculate_crc(arg1, arg2, arg3);
    return;
  }
  return;
}

/* ======================================================================
 * png_crc_finish  (Ghidra `png_crc_finish` @ 0054dd50)
 * Signature: uint8_t png_crc_finish(void)
 * Calls: `png_calculate_crc`, `png_chunk_error`, `png_chunk_warning`, `png_read_data`
 * Called by: `png_handle_IEND`, `png_handle_IHDR`, `png_handle_PLTE`, `png_handle_bKGD`, `png_handle_cHRM`, `png_handle_gAMA`, `png_handle_hIST`, `png_handle_iCCP`, `png_handle_oFFs`, `png_handle_pCAL` (+15 more)
 */
uint64_t png_crc_finish(long arg1, ulong arg2)

{
  ulong uVar1;
  uint64_t uVar2;
  ulong uVar3;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;

  arg2 = arg2 & 0xffffffff;
  uVar1 = *(ulong *)(arg1 + 0x198);
  if (uVar1 < arg2) {
    arg2 = arg2 - uVar1;
    uVar3 = uVar1;
    while (true) {
      uVar2 = *(uint64_t *)(arg1 + 400);
      png_read_data(arg1, uVar2, uVar3);
      png_calculate_crc(arg1, uVar2, uVar3);
      if (arg2 <= uVar1)
        break;
      uVar3 = *(ulong *)(arg1 + 0x198);
      arg2 = arg2 - uVar1;
    }
  }
  if (arg2 != 0) {
    uVar2 = *(uint64_t *)(arg1 + 400);
    png_read_data(arg1, uVar2, arg2);
    png_calculate_crc(arg1, uVar2, arg2);
  }
  if ((*(byte *)(arg1 + 0x22c) & 0x20) == 0) {
    if ((*(byte *)(arg1 + 0x119) & 8) != 0)
      goto LAB_0054de51;
  } else if ((*(uint *)(arg1 + 0x118) & 0x300) == 0x300) {
  LAB_0054de51:
    png_read_data(arg1, &local_38, 4);
    return 0;
  }
  png_read_data(arg1, &local_38, 4);
  if ((uint)local_36 * 0x100 + (uint)local_38 * 0x1000000 + (uint)local_37 * 0x10000 +
          (uint)local_35 ==
      *(int *)(arg1 + 0x218)) {
    return 0;
  }
  if ((*(byte *)(arg1 + 0x22c) & 0x20) == 0) {
    if ((*(byte *)(arg1 + 0x119) & 4) != 0)
      goto LAB_0054de79;
  } else if ((*(byte *)(arg1 + 0x119) & 2) == 0) {
  LAB_0054de79:
    png_chunk_warning(arg1, "CRC error");
    return 1;
  }
  png_chunk_error(arg1, "CRC error");
  return 1;
}

/* ======================================================================
 * png_crc_error  (Ghidra `png_crc_error` @ 0054ded0)
 * Signature: uint8_t png_crc_error(void)
 * Calls: `png_read_data`
 * Called by: (none)
 */
bool png_crc_error(long arg1)

{
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;

  if ((*(byte *)(arg1 + 0x22c) & 0x20) == 0) {
    if ((*(byte *)(arg1 + 0x119) & 8) != 0)
      goto LAB_0054df49;
  } else if ((*(uint *)(arg1 + 0x118) & 0x300) == 0x300) {
  LAB_0054df49:
    png_read_data(arg1, &local_18, 4);
    return false;
  }
  png_read_data(arg1, &local_18, 4);
  return *(int *)(arg1 + 0x218) != (uint)local_16 * 0x100 + (uint)local_18 * 0x1000000 +
                                       (uint)local_17 * 0x10000 + (uint)local_15;
}

/* ======================================================================
 * png_decompress_chunk  (Ghidra `png_decompress_chunk` @ 0054df70)
 * Signature: uint8_t png_decompress_chunk(void)
 * Calls: `inflate`, `inflateReset`, `memcpy`, `png_error`, `png_free`, `png_malloc_warn`, `png_warning`, `snprintf`
 * Called by: `png_handle_iCCP`, `png_handle_zTXt`
 */
void *png_decompress_chunk(long arg1, uint arg2, void *arg3, long arg4, size_t arg5, size_t *arg6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  void *__dest_00;
  size_t sVar4;
  char *pcVar5;
  ulong uVar6;
  int local_90;
  char local_78[72];

  if (arg2 != 0) {
    snprintf(local_78, 0x32, "Unknown zTXt compression type %d", (ulong)arg2);
    png_warning(arg1, local_78);
    *(uint8_t *)((long)arg3 + arg5) = 0;
    *arg6 = arg5;
    return arg3;
  }
  uVar6 = 0;
  __dest_00 = (void *)0x0;
  *(size_t *)(arg1 + 0x120) = (long)arg3 + arg5;
  local_90 = (int)arg4;
  lVar1 = arg1 + 0x120;
  *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 400);
  local_90 = local_90 - (int)arg5;
  *(int *)(arg1 + 0x128) = local_90;
  *(int *)(arg1 + 0x140) = (int)*(uint64_t *)(arg1 + 0x198);
  do {
    if (local_90 == 0) {
    LAB_0054e190:
      snprintf(local_78, 0x34, "Incomplete compressed datastream in %s chunk", arg1 + 0x22c);
    LAB_0054e1b0:
      png_warning(arg1, local_78);
      if (__dest_00 == (void *)0x0) {
        __dest_00 = (void *)png_malloc_warn(arg1, (int)arg5 + 1);
        if (__dest_00 == (void *)0x0) {
          png_free(arg1, arg3);
          png_error(arg1, "Not enough memory for text.");
        }
        memcpy(__dest_00, arg3, arg5);
      }
      *(uint8_t *)((long)__dest_00 + arg5) = 0;
      uVar6 = arg5;
    LAB_0054e140:
      inflateReset(lVar1);
      *(uint32_t *)(arg1 + 0x128) = 0;
      png_free(arg1, arg3);
      *arg6 = uVar6;
      return __dest_00;
    }
    uVar3 = inflate(lVar1, 1);
    if (1 < uVar3) {
      pcVar5 = *(char **)(arg1 + 0x150);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "Error decoding compressed text";
      }
      png_warning(arg1, pcVar5);
      inflateReset(lVar1);
      *(uint32_t *)(arg1 + 0x128) = 0;
      if (__dest_00 == (void *)0x0) {
        uVar6 = arg5 + 0x20;
        __dest_00 = (void *)png_malloc_warn(arg1, uVar6 & 0xffffffff);
        if (__dest_00 == (void *)0x0) {
          png_free(arg1, arg3);
          png_error(arg1, "Not enough memory to decompress chunk");
        }
        memcpy(__dest_00, arg3, arg5);
      }
      *(uint8_t *)((long)__dest_00 + (uVar6 - 1)) = 0;
      uVar6 = (long)arg3 + ((arg4 + -1) - (long)__dest_00);
      sVar4 = 0x1f;
      if (uVar6 < 0x20) {
        sVar4 = uVar6;
      }
      memcpy((void *)((long)__dest_00 + arg5), "Error decoding compressed text", sVar4);
      if (uVar3 == 0xfffffffb) {
        snprintf(local_78, 0x34, "Buffer error in compressed datastream in %s chunk", arg1 + 0x22c);
        goto LAB_0054e1b0;
      }
      if (uVar3 == 0xfffffffd) {
        snprintf(local_78, 0x34, "Data error in compressed datastream in %s chunk", arg1 + 0x22c);
        goto LAB_0054e1b0;
      }
      goto LAB_0054e190;
    }
    uVar2 = *(uint *)(arg1 + 0x140);
    if (((char)uVar3 != '\0') || (uVar2 == 0)) {
      if (__dest_00 == (void *)0x0) {
        sVar4 = *(long *)(arg1 + 0x198) - (ulong)uVar2;
        uVar6 = arg5 + sVar4;
        __dest_00 = (void *)png_malloc_warn(arg1, (int)uVar6 + 1);
        if (__dest_00 == (void *)0x0) {
          png_free(arg1, arg3);
          png_error(arg1, "Not enough memory to decompress chunk.");
        }
        memcpy((void *)((long)__dest_00 + arg5), *(void **)(arg1 + 400), sVar4);
        memcpy(__dest_00, arg3, arg5);
        *(uint8_t *)((long)__dest_00 + uVar6) = 0;
      } else {
        __dest = (void *)png_malloc_warn(arg1, ((int)*(uint64_t *)(arg1 + 0x198) - uVar2) + 1 +
                                                   (int)uVar6);
        if (__dest == (void *)0x0) {
          png_free(arg1, __dest_00);
          png_free(arg1, arg3);
          png_error(arg1, "Not enough memory to decompress chunk..");
        }
        memcpy(__dest, __dest_00, uVar6);
        png_free(arg1, __dest_00);
        memcpy((void *)((long)__dest + uVar6), *(void **)(arg1 + 400),
               *(long *)(arg1 + 0x198) - (ulong) * (uint *)(arg1 + 0x140));
        uVar6 = (uVar6 - *(uint *)(arg1 + 0x140)) + *(long *)(arg1 + 0x198);
        *(uint8_t *)((long)__dest + uVar6) = 0;
        __dest_00 = __dest;
      }
      if (uVar3 == 1)
        goto LAB_0054e140;
      *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 400);
      *(int *)(arg1 + 0x140) = (int)*(uint64_t *)(arg1 + 0x198);
    }
    local_90 = *(int *)(arg1 + 0x128);
  } while (true);
}

/* ======================================================================
 * png_handle_IHDR  (Ghidra `png_handle_IHDR` @ 0054e3e0)
 * Signature: uint8_t png_handle_IHDR(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_read_data`, `png_set_IHDR`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_IHDR(long arg1, uint64_t arg2, int arg3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  char local_30;
  uint8_t local_2f;
  uint8_t local_2e;
  uint8_t local_2d;
  uint8_t local_2c;

  if ((*(byte *)(arg1 + 0x114) & 1) != 0) {
    png_error(arg1, "Out of place IHDR");
  }
  if (arg3 != 0xd) {
    png_error(arg1, "Invalid IHDR chunk");
  }
  *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 1;
  png_read_data(arg1, &local_38, 0xd);
  png_calculate_crc(arg1, &local_38, 0xd);
  png_crc_finish(arg1, 0);
  iVar5 = (uint)local_38 * 0x1000000 + (uint)local_37 * 0x10000 + (uint)local_35 +
          (uint)local_36 * 0x100;
  if (iVar5 < 0) {
    png_error(arg1, "PNG unsigned integer out of range.");
  }
  iVar4 = (uint)local_34 * 0x1000000 + (uint)local_33 * 0x10000 + (uint)local_31 +
          (uint)local_32 * 0x100;
  if (iVar4 < 0) {
    png_error(arg1, "PNG unsigned integer out of range.");
  }
  *(int *)(arg1 + 0x1b4) = iVar5;
  *(int *)(arg1 + 0x1b8) = iVar4;
  *(char *)(arg1 + 0x237) = local_30;
  *(uint8_t *)(arg1 + 0x233) = local_2c;
  *(uint8_t *)(arg1 + 0x236) = local_2f;
  *(uint8_t *)(arg1 + 0x3f8) = local_2d;
  *(uint8_t *)(arg1 + 0x440) = local_2e;
  switch (local_2f) {
  case 0:
  case 3:
    *(uint8_t *)(arg1 + 0x23a) = 1;
    cVar2 = '\x01';
    break;
  default:
    cVar2 = *(char *)(arg1 + 0x23a);
    break;
  case 2:
    *(uint8_t *)(arg1 + 0x23a) = 3;
    cVar2 = '\x03';
    break;
  case 4:
    *(uint8_t *)(arg1 + 0x23a) = 2;
    cVar2 = '\x02';
    break;
  case 6:
    *(uint8_t *)(arg1 + 0x23a) = 4;
    bVar1 = local_30 * '\x04';
    *(byte *)(arg1 + 0x239) = bVar1;
    goto joined_r0x0054e56f;
  }
  bVar1 = cVar2 * local_30;
  *(byte *)(arg1 + 0x239) = bVar1;
joined_r0x0054e56f:
  if (bVar1 < 8) {
    uVar3 = (uint)bVar1 * iVar5 + 7 >> 3;
  } else {
    uVar3 = (uint)(bVar1 >> 3) * iVar5;
  }
  *(uint *)(arg1 + 0x1c4) = uVar3;
  png_set_IHDR(arg1, arg2, iVar5, iVar4, local_30, local_2f, local_2c, local_2e, local_2d);
  return;
}

/* ======================================================================
 * png_handle_PLTE  (Ghidra `png_handle_PLTE` @ 0054e630)
 * Signature: uint8_t png_handle_PLTE(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_read_data`, `png_set_PLTE`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_PLTE(long arg1, long arg2, uint arg3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  char *pcVar4;
  uint8_t *puVar5;
  uint8_t local_338[3];
  uint8_t auStack_335[765];
  uint8_t local_38;
  uint8_t local_37;
  uint8_t local_36;

  puVar5 = local_338;
  uVar2 = *(uint *)(arg1 + 0x114);
  if ((uVar2 & 1) == 0) {
    png_error(arg1, "Missing IHDR before PLTE");
    uVar2 = *(uint *)(arg1 + 0x114);
  } else {
    pcVar4 = "Invalid PLTE after IDAT";
    if ((uVar2 & 4) != 0)
      goto LAB_0054e69e;
    if ((uVar2 & 2) != 0) {
      png_error(arg1, "Duplicate PLTE chunk");
      uVar2 = *(uint *)(arg1 + 0x114);
    }
  }
  *(uint *)(arg1 + 0x114) = uVar2 | 2;
  if ((*(byte *)(arg1 + 0x236) & 2) == 0) {
    pcVar4 = "Ignoring PLTE chunk in grayscale PNG";
  LAB_0054e69e:
    png_warning(arg1, pcVar4);
    png_crc_finish(arg1, arg3);
    return;
  }
  if ((0x300 < arg3) || (arg3 != (arg3 / 3) * 3)) {
    pcVar4 = "Invalid palette chunk";
    if (*(byte *)(arg1 + 0x236) != 3)
      goto LAB_0054e69e;
    png_error(arg1, "Invalid palette chunk");
  }
  iVar1 = (int)arg3 / 3;
  if (0 < iVar1) {
    do {
      png_read_data(arg1, &local_38, 3);
      png_calculate_crc(arg1, &local_38, 3);
      *puVar5 = local_38;
      puVar5[1] = local_37;
      puVar5[2] = local_36;
      puVar5 = puVar5 + 3;
    } while (puVar5 != auStack_335 + (ulong)(iVar1 - 1) * 3);
  }
  png_crc_finish(arg1, 0);
  png_set_PLTE(arg1, arg2, local_338, iVar1);
  if (*(char *)(arg1 + 0x236) != '\x03') {
    return;
  }
  if (arg2 == 0) {
    return;
  }
  if ((*(byte *)(arg2 + 8) & 0x10) == 0) {
    return;
  }
  uVar3 = (ushort)iVar1;
  if (uVar3 < *(ushort *)(arg1 + 0x22a)) {
    png_warning(arg1, "Truncating incorrect tRNS chunk length");
    *(ushort *)(arg1 + 0x22a) = uVar3;
  }
  if (*(ushort *)(arg2 + 0x1a) <= uVar3) {
    return;
  }
  png_warning(arg1, "Truncating incorrect info tRNS chunk length");
  *(ushort *)(arg2 + 0x1a) = uVar3;
  return;
}

/* ======================================================================
 * png_handle_IEND  (Ghidra `png_handle_IEND` @ 0054e830)
 * Signature: uint8_t png_handle_IEND(void)
 * Calls: `png_crc_finish`, `png_error`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_IEND(long arg1, uint64_t arg2, int arg3)

{
  if ((*(uint *)(arg1 + 0x114) & 5) != 5) {
    png_error(arg1, "No image in file");
  }
  *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 0x18;
  if (arg3 != 0) {
    png_warning(arg1, "Incorrect IEND chunk length");
  }
  png_crc_finish(arg1, arg3);
  return;
}

/* ======================================================================
 * png_handle_gAMA  (Ghidra `png_handle_gAMA` @ 0054e890)
 * Signature: uint8_t png_handle_gAMA(void)
 * Calls: `fprintf`, `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_read_data`, `png_set_gAMA`, `png_set_gAMA_fixed`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_gAMA(long arg1, long arg2, int arg3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  float fVar4;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;

  uVar3 = *(uint *)(arg1 + 0x114);
  if ((uVar3 & 1) == 0) {
    png_error(arg1, "Missing IHDR before gAMA");
  } else {
    pcVar2 = "Invalid gAMA after IDAT";
    if ((uVar3 & 4) != 0)
      goto LAB_0054e8ec;
    if ((uVar3 & 2) != 0) {
      png_warning(arg1, "Out of place gAMA chunk");
    }
  }
  if ((arg2 == 0) || ((*(uint *)(arg2 + 8) & 0x801) != 1)) {
    pcVar2 = "Incorrect gAMA chunk length";
    if (arg3 == 4) {
      png_read_data(arg1, &local_28, 4);
      png_calculate_crc(arg1, &local_28, 4);
      iVar1 = png_crc_finish(arg1, 0);
      if (iVar1 != 0) {
        return;
      }
      uVar3 = (uint)local_28 * 0x1000000 + (uint)local_27 * 0x10000 + (uint)local_25 +
              (uint)local_26 * 0x100;
      if (uVar3 != 0) {
        if (((arg2 != 0) && ((*(byte *)(arg2 + 9) & 8) != 0)) && (1000 < uVar3 - 45000)) {
          png_warning(arg1, "Ignoring incorrect gAMA value when sRGB is also present");
          fprintf(stderr, "gamma = (%d/100000)\n", (ulong)uVar3);
          return;
        }
        fVar4 = (float)(int)uVar3 * DAT_005d3660 /* R:9.999999747378752e-06f */;
        *(float *)(arg1 + 0x274) = fVar4;
        png_set_gAMA((double)fVar4, arg1, arg2);
        png_set_gAMA_fixed(arg1, arg2, uVar3);
        return;
      }
      png_warning(arg1, "Ignoring gAMA chunk with gamma=0");
      return;
    }
  } else {
    pcVar2 = "Duplicate gAMA chunk";
  }
LAB_0054e8ec:
  png_warning(arg1, pcVar2);
  png_crc_finish(arg1, arg3);
  return;
}

/* ======================================================================
 * png_handle_sBIT  (Ghidra `png_handle_sBIT` @ 0054ea40)
 * Signature: uint8_t png_handle_sBIT(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_read_data`, `png_set_sBIT`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_sBIT(long arg1, long arg2, uint arg3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint8_t local_38;
  uint8_t local_37;
  uint8_t local_36;
  uint8_t local_35;

  uVar3 = *(uint *)(arg1 + 0x114);
  local_35 = 0;
  local_36 = 0;
  local_37 = 0;
  local_38 = 0;
  if ((uVar3 & 1) == 0) {
    png_error(arg1, "Missing IHDR before sBIT");
  } else {
    pcVar2 = "Invalid sBIT after IDAT";
    if ((uVar3 & 4) != 0)
      goto LAB_0054eb4d;
    if ((uVar3 & 2) != 0) {
      png_warning(arg1, "Out of place sBIT chunk");
    }
  }
  if ((arg2 == 0) || ((*(byte *)(arg2 + 8) & 2) == 0)) {
    uVar3 = 3;
    if (*(char *)(arg1 + 0x236) != '\x03') {
      uVar3 = (uint) * (byte *)(arg1 + 0x23a);
    }
    if ((arg3 == uVar3) && (arg3 < 5)) {
      png_read_data(arg1, &local_38, uVar3);
      png_calculate_crc(arg1, &local_38, uVar3);
      iVar1 = png_crc_finish(arg1, 0);
      if (iVar1 != 0) {
        return;
      }
      if ((*(byte *)(arg1 + 0x236) & 2) == 0) {
        *(uint8_t *)(arg1 + 0x2b3) = local_38;
        *(uint8_t *)(arg1 + 0x2b0) = local_38;
        *(uint8_t *)(arg1 + 0x2b1) = local_38;
        *(uint8_t *)(arg1 + 0x2b2) = local_38;
        *(uint8_t *)(arg1 + 0x2b4) = local_37;
      } else {
        *(uint8_t *)(arg1 + 0x2b0) = local_38;
        *(uint8_t *)(arg1 + 0x2b1) = local_37;
        *(uint8_t *)(arg1 + 0x2b2) = local_36;
        *(uint8_t *)(arg1 + 0x2b4) = local_35;
      }
      png_set_sBIT(arg1, arg2, arg1 + 0x2b0);
      return;
    }
    pcVar2 = "Incorrect sBIT chunk length";
  } else {
    pcVar2 = "Duplicate sBIT chunk";
  }
LAB_0054eb4d:
  png_warning(arg1, pcVar2);
  png_crc_finish(arg1, arg3);
  return;
}

/* ======================================================================
 * png_handle_cHRM  (Ghidra `png_handle_cHRM` @ 0054ebe0)
 * Signature: uint8_t png_handle_cHRM(void)
 * Calls: `fprintf`, `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_read_data`, `png_set_cHRM`, `png_set_cHRM_fixed`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_cHRM(long arg1, long arg2, int arg3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;

  uVar6 = *(uint *)(arg1 + 0x114);
  if ((uVar6 & 1) == 0) {
    png_error(arg1, "Missing IHDR before cHRM");
  } else {
    pcVar5 = "Invalid cHRM after IDAT";
    if ((uVar6 & 4) != 0)
      goto LAB_0054ec4e;
    if ((uVar6 & 2) != 0) {
      png_warning(arg1, "Missing PLTE before cHRM");
    }
  }
  if ((arg2 == 0) || ((*(uint *)(arg2 + 8) & 0x804) != 4)) {
    pcVar5 = "Incorrect cHRM chunk length";
    if (arg3 == 0x20) {
      png_read_data(arg1, &local_48, 4);
      png_calculate_crc(arg1, &local_48, 4);
      uVar6 = (uint)local_48 * 0x1000000 + (uint)local_47 * 0x10000 + (uint)local_45 +
              (uint)local_46 * 0x100;
      png_read_data(arg1, &local_48, 4);
      png_calculate_crc(arg1, &local_48, 4);
      uVar7 = (uint)local_48 * 0x1000000 + (uint)local_47 * 0x10000 + (uint)local_45 +
              (uint)local_46 * 0x100;
      if (((80000 < uVar7) || (80000 < uVar6)) || (100000 < uVar7 + uVar6)) {
        png_warning(arg1, "Invalid cHRM white point");
        png_crc_finish(arg1, 0x18);
        return;
      }
      png_read_data(arg1, &local_48, 4);
      png_calculate_crc(arg1, &local_48, 4);
      iVar8 = (uint)local_48 * 0x1000000 + (uint)local_47 * 0x10000 + (uint)local_45 +
              (uint)local_46 * 0x100;
      png_read_data(arg1, &local_48, 4);
      png_calculate_crc(arg1, &local_48, 4);
      iVar9 = (uint)local_48 * 0x1000000 + (uint)local_47 * 0x10000 + (uint)local_45 +
              (uint)local_46 * 0x100;
      if (100000 < (uint)(iVar9 + iVar8)) {
        png_warning(arg1, "Invalid cHRM red point");
        png_crc_finish(arg1, 0x10);
        return;
      }
      png_read_data(arg1, &local_48, 4);
      png_calculate_crc(arg1, &local_48, 4);
      iVar1 = (uint)local_46 * 0x100 + (uint)local_48 * 0x1000000 + (uint)local_47 * 0x10000 +
              (uint)local_45;
      png_read_data(arg1, &local_48, 4);
      png_calculate_crc(arg1, &local_48, 4);
      iVar2 = (uint)local_46 * 0x100 + (uint)local_48 * 0x1000000 + (uint)local_47 * 0x10000 +
              (uint)local_45;
      if ((uint)(iVar1 + iVar2) < 0x186a1) {
        png_read_data(arg1, &local_48, 4);
        png_calculate_crc(arg1, &local_48, 4);
        iVar3 = (uint)local_48 * 0x1000000 + (uint)local_47 * 0x10000 + (uint)local_45 +
                (uint)local_46 * 0x100;
        png_read_data(arg1, &local_48, 4);
        png_calculate_crc(arg1, &local_48, 4);
        iVar4 = (uint)local_46 * 0x100 + (uint)local_48 * 0x1000000 + (uint)local_47 * 0x10000 +
                (uint)local_45;
        if ((uint)(iVar4 + iVar3) < 0x186a1) {
          fVar14 = (float)iVar1 * DAT_005d3660 /* R:9.999999747378752e-06f */;
          fVar10 = (float)(int)uVar6 * DAT_005d3660 /* R:9.999999747378752e-06f */;
          fVar11 = (float)(int)uVar7 * DAT_005d3660 /* R:9.999999747378752e-06f */;
          fVar12 = (float)iVar8 * DAT_005d3660 /* R:9.999999747378752e-06f */;
          fVar13 = (float)iVar9 * DAT_005d3660 /* R:9.999999747378752e-06f */;
          fVar15 = (float)iVar2 * DAT_005d3660 /* R:9.999999747378752e-06f */;
          fVar16 = (float)iVar3 * DAT_005d3660 /* R:9.999999747378752e-06f */;
          fVar17 = (float)iVar4 * DAT_005d3660 /* R:9.999999747378752e-06f */;
          if ((arg2 == 0) || ((*(byte *)(arg2 + 9) & 8) == 0)) {
            png_set_cHRM((double)fVar10, (double)fVar11, (double)fVar12, (double)fVar13,
                         (double)fVar14, (double)fVar15, (double)fVar16, (double)fVar17, arg1,
                         arg2);
            png_set_cHRM_fixed(arg1, arg2, uVar6, uVar7, iVar8, iVar9, iVar1, iVar2, iVar3, iVar4);
          } else if (((2000 < uVar6 - 0x763e) || (2000 < uVar7 - 0x7c9c)) ||
                     ((2000 < iVar8 - 63000U ||
                       ((((2000 < iVar9 - 32000U || (2000 < iVar1 - 29000U)) ||
                          (2000 < iVar2 - 59000U)) ||
                         ((2000 < iVar3 - 14000U || (2000 < iVar4 - 5000U)))))))) {
            png_warning(arg1, "Ignoring incorrect cHRM value when sRGB is also present");
            fprintf(stderr, "wx=%f, wy=%f, rx=%f, ry=%f\n", (double)fVar10, (double)fVar11,
                    (double)fVar12, (double)fVar13);
            fprintf(stderr, "gx=%f, gy=%f, bx=%f, by=%f\n", (double)fVar14, (double)fVar15,
                    (double)fVar16, (double)fVar17);
          }
          png_crc_finish(arg1, 0);
          return;
        }
        png_warning(arg1, "Invalid cHRM blue point");
        png_crc_finish(arg1, 0);
        return;
      }
      png_warning(arg1, "Invalid cHRM green point");
      png_crc_finish(arg1, 8);
      return;
    }
  } else {
    pcVar5 = "Duplicate cHRM chunk";
  }
LAB_0054ec4e:
  png_warning(arg1, pcVar5);
  png_crc_finish(arg1, arg3);
  return;
}

/* ======================================================================
 * png_handle_sRGB  (Ghidra `png_handle_sRGB` @ 0054f310)
 * Signature: uint8_t png_handle_sRGB(void)
 * Calls: `fprintf`, `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_read_data`, `png_set_sRGB_gAMA_and_cHRM`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_sRGB(long arg1, long arg2, int arg3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  byte local_28[16];

  uVar2 = *(uint *)(arg1 + 0x114);
  if ((uVar2 & 1) == 0) {
    png_error(arg1, "Missing IHDR before sRGB");
  } else {
    pcVar3 = "Invalid sRGB after IDAT";
    if ((uVar2 & 4) != 0)
      goto LAB_0054f366;
    if ((uVar2 & 2) != 0) {
      png_warning(arg1, "Out of place sRGB chunk");
    }
  }
  if ((arg2 == 0) || (pcVar3 = "Duplicate sRGB chunk", (*(byte *)(arg2 + 9) & 8) == 0)) {
    if (arg3 == 1) {
      png_read_data(arg1, local_28, 1);
      png_calculate_crc(arg1, local_28, 1);
      iVar1 = png_crc_finish(arg1, 0);
      if (iVar1 != 0) {
        return;
      }
      if (local_28[0] < 4) {
        if (arg2 != 0) {
          uVar2 = *(uint *)(arg2 + 8);
          if (((uVar2 & 1) != 0) && (1000 < *(int *)(arg2 + 0x140) - 45000U)) {
            png_warning(arg1, "Ignoring incorrect gAMA value when sRGB is also present");
            fprintf(stderr, "incorrect gamma=(%d/100000)\n", (ulong) * (uint *)(arg1 + 0x3f4));
            uVar2 = *(uint *)(arg2 + 8);
          }
          if (((uVar2 & 4) != 0) && (((((2000 < *(int *)(arg2 + 0x144) - 0x763eU ||
                                         (2000 < *(int *)(arg2 + 0x148) - 0x7c9cU)) ||
                                        (2000 < *(int *)(arg2 + 0x14c) - 63000U)) ||
                                       ((2000 < *(int *)(arg2 + 0x150) - 32000U ||
                                         (2000 < *(int *)(arg2 + 0x154) - 29000U)))) ||
                                      ((2000 < *(int *)(arg2 + 0x158) - 59000U ||
                                        ((2000 < *(int *)(arg2 + 0x15c) - 14000U ||
                                          (2000 < *(int *)(arg2 + 0x160) - 5000U)))))))) {
            png_warning(arg1, "Ignoring incorrect cHRM value when sRGB is also present");
          }
        }
        png_set_sRGB_gAMA_and_cHRM(arg1, arg2, local_28[0]);
        return;
      }
      png_warning(arg1, "Unknown sRGB intent");
      return;
    }
    pcVar3 = "Incorrect sRGB chunk length";
  }
LAB_0054f366:
  png_warning(arg1, pcVar3);
  png_crc_finish(arg1, arg3);
  return;
}

/* ======================================================================
 * png_handle_iCCP  (Ghidra `png_handle_iCCP` @ 0054f530)
 * Signature: uint8_t png_handle_iCCP(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_decompress_chunk`, `png_error`, `png_free`, `png_malloc`, `png_read_data`, `png_set_iCCP`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_iCCP(long arg1, long arg2, uint arg3)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;
  char *local_30;

  uVar7 = *(uint *)(arg1 + 0x114);
  uVar8 = (ulong)arg3;
  if ((uVar7 & 1) == 0) {
    png_error(arg1, "Missing IHDR before iCCP");
  } else {
    pcVar6 = "Invalid iCCP after IDAT";
    if ((uVar7 & 4) != 0)
      goto LAB_0054f6b5;
    if ((uVar7 & 2) != 0) {
      png_warning(arg1, "Out of place iCCP chunk");
    }
  }
  if ((arg2 == 0) || ((*(byte *)(arg2 + 9) & 0x10) == 0)) {
    pcVar6 = (char *)png_malloc(arg1, arg3 + 1);
    png_read_data(arg1, pcVar6, uVar8);
    png_calculate_crc(arg1, pcVar6, uVar8);
    iVar3 = png_crc_finish(arg1, 0);
    if (iVar3 == 0) {
      pcVar6[uVar8] = '\0';
      cVar2 = *pcVar6;
      pcVar5 = pcVar6;
      while (cVar2 != '\0') {
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar5;
      }
      if (pcVar6 + (uVar8 - 1) <= pcVar5 + 1) {
        png_free(arg1, pcVar6);
        png_warning(arg1, "Malformed iCCP chunk");
        return;
      }
      if (pcVar5[1] != '\0') {
        png_warning(arg1, "Ignoring nonzero compression type in iCCP chunk");
      }
      pcVar5 = pcVar5 + (2 - (long)pcVar6);
      pcVar6 = (char *)png_decompress_chunk(arg1, 0, pcVar6, uVar8, pcVar5, &local_30);
      uVar7 = (int)local_30 - (int)pcVar5;
      if ((uVar7 < 4) || (local_30 < pcVar5)) {
        png_free(arg1, pcVar6);
        png_warning(arg1, "Profile size field missing from iCCP chunk");
        return;
      }
      pbVar1 = (byte *)(pcVar6 + (long)pcVar5);
      uVar4 =
          (uint)*pbVar1 << 0x18 | (uint)pbVar1[1] << 0x10 | (uint)pbVar1[3] | (uint)pbVar1[2] << 8;
      bVar9 = uVar7 < uVar4;
      if ((uVar7 <= uVar4) && (uVar4 = uVar7, bVar9)) {
        png_free(arg1, pcVar6);
        png_warning(arg1, "Ignoring truncated iCCP profile.");
        return;
      }
      png_set_iCCP(arg1, arg2, pcVar6, 0, pbVar1, uVar4);
    }
    png_free(arg1, pcVar6);
    return;
  }
  pcVar6 = "Duplicate iCCP chunk";
LAB_0054f6b5:
  png_warning(arg1, pcVar6);
  png_crc_finish(arg1, uVar8);
  return;
}

/* ======================================================================
 * png_handle_sPLT  (Ghidra `png_handle_sPLT` @ 0054f770)
 * Signature: uint8_t png_handle_sPLT(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_free`, `png_malloc`, `png_malloc_warn`, `png_read_data`, `png_set_sPLT`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_sPLT(long arg1, uint64_t arg2, uint arg3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ushort *puVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  char *local_58;
  char local_50;
  long local_48;
  uint local_40;

  uVar10 = (ulong)arg3;
  if ((*(uint *)(arg1 + 0x114) & 1) == 0) {
    png_error(arg1, "Missing IHDR before sPLT");
  } else if ((*(uint *)(arg1 + 0x114) & 4) != 0) {
    png_warning(arg1, "Invalid sPLT after IDAT");
    png_crc_finish(arg1, uVar10);
    return;
  }
  pcVar3 = (char *)png_malloc(arg1, arg3 + 1);
  png_read_data(arg1, pcVar3, uVar10);
  png_calculate_crc(arg1, pcVar3, uVar10);
  iVar2 = png_crc_finish(arg1, 0);
  if (iVar2 != 0) {
    png_free(arg1, pcVar3);
    return;
  }
  pcVar3[uVar10] = '\0';
  cVar1 = *pcVar3;
  pcVar7 = pcVar3;
  while (cVar1 != '\0') {
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  if (pcVar3 + (uVar10 - 2) < pcVar7 + 1) {
    png_free(arg1, pcVar3);
    png_warning(arg1, "malformed sPLT chunk");
    return;
  }
  local_50 = pcVar7[1];
  pbVar8 = (byte *)(pcVar7 + 2);
  iVar2 = ((int)pcVar3 - (int)pbVar8) + arg3;
  iVar5 = (uint)(local_50 != '\b') * 4 + 6;
  local_40 = iVar2 / iVar5;
  if (iVar2 % iVar5 != 0) {
    png_free(arg1, pcVar3);
    png_warning(arg1, "sPLT chunk has bad length");
    return;
  }
  if (local_40 < 0x9999999a) {
    local_48 = png_malloc_warn(arg1);
    if (local_48 == 0) {
      png_warning(arg1, "sPLT chunk requires too much memory");
    } else {
      lVar6 = 0;
      iVar2 = 0;
      if (0 < (int)local_40) {
        while (true) {
          puVar4 = (ushort *)(local_48 + lVar6);
          if (local_50 == '\b') {
            *puVar4 = (ushort)*pbVar8;
            puVar4[1] = (ushort)pbVar8[1];
            puVar4[2] = (ushort)pbVar8[2];
            pbVar9 = pbVar8 + 4;
            puVar4[3] = (ushort)pbVar8[3];
          } else {
            *puVar4 = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
            puVar4[1] = (ushort)pbVar8[2] * 0x100 + (ushort)pbVar8[3];
            puVar4[2] = (ushort)pbVar8[4] * 0x100 + (ushort)pbVar8[5];
            pbVar9 = pbVar8 + 8;
            puVar4[3] = (ushort)pbVar8[6] * 0x100 + (ushort)pbVar8[7];
          }
          iVar2 = iVar2 + 1;
          lVar6 = lVar6 + 10;
          puVar4[4] = (ushort)*pbVar9 * 0x100 + (ushort)pbVar9[1];
          if ((int)local_40 <= iVar2)
            break;
          pbVar8 = pbVar9 + 2;
        }
      }
      local_58 = pcVar3;
      png_set_sPLT(arg1, arg2, &local_58, 1);
      png_free(arg1, pcVar3);
      png_free(arg1, local_48);
    }
    return;
  }
  png_warning(arg1, "sPLT chunk too long");
  return;
}

/* ======================================================================
 * png_handle_tRNS  (Ghidra `png_handle_tRNS` @ 0054fa60)
 * Signature: uint8_t png_handle_tRNS(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_read_data`, `png_set_tRNS`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_tRNS(long arg1, long arg2, uint arg3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  uint8_t auStack_138[256];
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;

  bVar1 = *(byte *)(arg1 + 0x237);
  if ((*(uint *)(arg1 + 0x114) & 1) == 0) {
    png_error(arg1, "Missing IHDR before tRNS");
  } else {
    pcVar5 = "Invalid tRNS after IDAT";
    if (((*(uint *)(arg1 + 0x114) & 4) != 0) ||
        ((arg2 != 0 && (pcVar5 = "Duplicate tRNS chunk", (*(byte *)(arg2 + 8) & 0x10) != 0))))
      goto LAB_0054fae2;
  }
  cVar2 = *(char *)(arg1 + 0x236);
  uVar3 = (short)(1 << (bVar1 & 0x1f)) - 1;
  if (cVar2 == '\0') {
    if (arg3 == 2) {
      png_read_data(arg1, &local_38, 2);
      png_calculate_crc(arg1, &local_38, 2);
      *(uint16_t *)(arg1 + 0x22a) = 1;
      *(ushort *)(arg1 + 0x2d0) = (ushort)local_38 * 0x100 + (ushort)local_37 & uVar3;
      iVar4 = png_crc_finish(arg1, 0);
      goto joined_r0x0054fb96;
    }
  } else if (cVar2 == '\x02') {
    if (arg3 == 6) {
      png_read_data(arg1, &local_38, 6);
      png_calculate_crc(arg1, &local_38, 6);
      *(uint16_t *)(arg1 + 0x22a) = 1;
      *(ushort *)(arg1 + 0x2ca) = (ushort)local_38 * 0x100 + (ushort)local_37 & uVar3;
      *(ushort *)(arg1 + 0x2cc) = (ushort)local_36 * 0x100 + (ushort)local_35 & uVar3;
      *(ushort *)(arg1 + 0x2ce) = (ushort)local_34 * 0x100 + (ushort)local_33 & uVar3;
    LAB_0054fb8a:
      iVar4 = png_crc_finish(arg1, 0);
    joined_r0x0054fb96:
      if (iVar4 == 0) {
        png_set_tRNS(arg1, arg2, auStack_138, *(uint16_t *)(arg1 + 0x22a), arg1 + 0x2c8);
        return;
      }
      *(uint16_t *)(arg1 + 0x22a) = 0;
      return;
    }
  } else {
    if (cVar2 != '\x03') {
      pcVar5 = "tRNS chunk not allowed with alpha channel";
      goto LAB_0054fae2;
    }
    if ((*(byte *)(arg1 + 0x114) & 2) == 0) {
      png_warning(arg1, "Missing PLTE before tRNS");
    }
    if ((arg3 < 0x101) && (arg3 <= *(ushort *)(arg1 + 0x228))) {
      if (arg3 == 0) {
        png_warning(arg1, "Zero length tRNS chunk");
        png_crc_finish(arg1, 0);
        return;
      }
      png_read_data(arg1, auStack_138, arg3);
      png_calculate_crc(arg1, auStack_138, arg3);
      *(short *)(arg1 + 0x22a) = (short)arg3;
      goto LAB_0054fb8a;
    }
  }
  pcVar5 = "Incorrect tRNS chunk length";
LAB_0054fae2:
  png_warning(arg1, pcVar5);
  png_crc_finish(arg1, arg3);
  return;
}

/* ======================================================================
 * png_handle_bKGD  (Ghidra `png_handle_bKGD` @ 0054fd40)
 * Signature: uint8_t png_handle_bKGD(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_read_data`, `png_set_bKGD`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_bKGD(long arg1, long arg2, ulong arg3)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  char *pcVar6;
  ulong uVar7;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;

  uVar1 = *(uint *)(arg1 + 0x114);
  if ((uVar1 & 1) == 0) {
    png_error(arg1, "Missing IHDR before bKGD");
    bVar5 = *(byte *)(arg1 + 0x236);
  } else {
    pcVar6 = "Invalid bKGD after IDAT";
    if ((((uVar1 & 4) != 0) ||
         ((bVar5 = *(byte *)(arg1 + 0x236),
           bVar5 == 3 && (pcVar6 = "Missing PLTE before bKGD", (uVar1 & 2) == 0)))) ||
        ((arg2 != 0 && (pcVar6 = "Duplicate bKGD chunk", (*(byte *)(arg2 + 8) & 0x20) != 0))))
      goto LAB_0054fdc1;
  }
  uVar7 = 1;
  if (bVar5 != 3) {
    uVar7 = (-(ulong)((bVar5 & 2) == 0) & 0xfffffffffffffffc) + 6;
  }
  if ((arg3 & 0xffffffff) == uVar7) {
    png_read_data(arg1, &local_38, uVar7);
    png_calculate_crc(arg1, &local_38, uVar7);
    iVar3 = png_crc_finish(arg1, 0);
    if (iVar3 != 0) {
      return;
    }
    if (*(byte *)(arg1 + 0x236) == 3) {
      *(byte *)(arg1 + 0x248) = local_38;
      if ((arg2 != 0) && (*(ushort *)(arg2 + 0x18) != 0)) {
        if (*(ushort *)(arg2 + 0x18) < (ushort)local_38) {
          png_warning(arg1, "Incorrect bKGD chunk index value");
          return;
        }
        pbVar4 = (byte *)((ulong)local_38 * 3 + *(long *)(arg1 + 0x220));
        *(ushort *)(arg1 + 0x24a) = (ushort)*pbVar4;
        *(ushort *)(arg1 + 0x24c) = (ushort)pbVar4[1];
        *(ushort *)(arg1 + 0x24e) = (ushort)pbVar4[2];
      }
    } else if ((*(byte *)(arg1 + 0x236) & 2) == 0) {
      sVar2 = (ushort)local_38 * 0x100 + (ushort)local_37;
      *(short *)(arg1 + 0x250) = sVar2;
      *(short *)(arg1 + 0x24e) = sVar2;
      *(short *)(arg1 + 0x24c) = sVar2;
      *(short *)(arg1 + 0x24a) = sVar2;
    } else {
      *(ushort *)(arg1 + 0x24a) = (ushort)local_38 * 0x100 + (ushort)local_37;
      *(ushort *)(arg1 + 0x24c) = (ushort)local_36 * 0x100 + (ushort)local_35;
      *(ushort *)(arg1 + 0x24e) = (ushort)local_34 * 0x100 + (ushort)local_33;
    }
    png_set_bKGD(arg1, arg2, arg1 + 0x248);
    return;
  }
  pcVar6 = "Incorrect bKGD chunk length";
LAB_0054fdc1:
  png_warning(arg1, pcVar6);
  png_crc_finish(arg1, arg3 & 0xffffffff);
  return;
}

/* ======================================================================
 * png_handle_hIST  (Ghidra `png_handle_hIST` @ 0054ff70)
 * Signature: uint8_t png_handle_hIST(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_read_data`, `png_set_hIST`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_hIST(long arg1, long arg2, ulong arg3)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  char *pcVar4;
  short *psVar5;
  short *psVar6;
  short local_238;
  short local_236[255];
  byte local_38;
  byte local_37;

  arg3 = arg3 & 0xffffffff;
  uVar1 = *(uint *)(arg1 + 0x114);
  if ((uVar1 & 1) == 0) {
    png_error(arg1, "Missing IHDR before hIST");
    uVar1 = (uint)(arg3 >> 1);
  } else {
    pcVar4 = "Invalid hIST after IDAT";
    if ((uVar1 & 4) != 0)
      goto LAB_00550079;
    if ((uVar1 & 2) == 0) {
      pcVar4 = "Missing PLTE before hIST";
      goto LAB_00550079;
    }
    if ((arg2 != 0) && (pcVar4 = "Duplicate hIST chunk", (*(byte *)(arg2 + 8) & 0x40) != 0))
      goto LAB_00550079;
    uVar1 = (uint)(arg3 >> 1);
  }
  if ((uVar1 < 0x101) && (*(ushort *)(arg1 + 0x228) == uVar1)) {
    if (uVar1 != 0) {
      psVar2 = local_236;
      psVar6 = &local_238;
      while (true) {
        psVar5 = psVar2;
        png_read_data(arg1, &local_38, 2);
        png_calculate_crc(arg1, &local_38, 2);
        *psVar6 = (ushort)local_38 * 0x100 + (ushort)local_37;
        if (psVar5 == local_236 + (uVar1 - 1))
          break;
        psVar2 = psVar5 + 1;
        psVar6 = psVar5;
      }
    }
    iVar3 = png_crc_finish(arg1, 0);
    if (iVar3 == 0) {
      png_set_hIST(arg1, arg2, &local_238);
    }
    return;
  }
  pcVar4 = "Incorrect hIST chunk length";
LAB_00550079:
  png_warning(arg1, pcVar4);
  png_crc_finish(arg1, arg3);
  return;
}

/* ======================================================================
 * png_handle_pHYs  (Ghidra `png_handle_pHYs` @ 005500c0)
 * Signature: uint8_t png_handle_pHYs(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_read_data`, `png_set_pHYs`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_pHYs(long arg1, long arg2, int arg3)

{
  int iVar1;
  char *pcVar2;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  uint8_t local_20;

  if ((*(uint *)(arg1 + 0x114) & 1) == 0) {
    png_error(arg1, "Missing IHDR before pHYs");
  } else {
    pcVar2 = "Invalid pHYs after IDAT";
    if ((*(uint *)(arg1 + 0x114) & 4) != 0)
      goto LAB_0055010d;
    if ((arg2 != 0) && ((*(byte *)(arg2 + 8) & 0x80) != 0)) {
      pcVar2 = "Duplicate pHYs chunk";
      goto LAB_0055010d;
    }
  }
  pcVar2 = "Incorrect pHYs chunk length";
  if (arg3 == 9) {
    png_read_data(arg1, &local_28, 9);
    png_calculate_crc(arg1, &local_28, 9);
    iVar1 = png_crc_finish(arg1, 0);
    if (iVar1 != 0) {
      return;
    }
    png_set_pHYs(arg1, arg2,
                 (uint)local_28 * 0x1000000 + (uint)local_27 * 0x10000 + (uint)local_25 +
                     (uint)local_26 * 0x100,
                 (uint)local_24 * 0x1000000 + (uint)local_23 * 0x10000 + (uint)local_21 +
                     (uint)local_22 * 0x100,
                 local_20);
    return;
  }
LAB_0055010d:
  png_warning(arg1, pcVar2);
  png_crc_finish(arg1, arg3);
  return;
}

/* ======================================================================
 * png_handle_oFFs  (Ghidra `png_handle_oFFs` @ 00550200)
 * Signature: uint8_t png_handle_oFFs(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_read_data`, `png_set_oFFs`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_oFFs(long arg1, long arg2, int arg3)

{
  int iVar1;
  char *pcVar2;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  uint8_t local_20;

  if ((*(uint *)(arg1 + 0x114) & 1) == 0) {
    png_error(arg1, "Missing IHDR before oFFs");
  } else {
    pcVar2 = "Invalid oFFs after IDAT";
    if ((*(uint *)(arg1 + 0x114) & 4) != 0)
      goto LAB_0055024d;
    if ((arg2 != 0) && ((*(byte *)(arg2 + 9) & 1) != 0)) {
      pcVar2 = "Duplicate oFFs chunk";
      goto LAB_0055024d;
    }
  }
  pcVar2 = "Incorrect oFFs chunk length";
  if (arg3 == 9) {
    png_read_data(arg1, &local_28, 9);
    png_calculate_crc(arg1, &local_28, 9);
    iVar1 = png_crc_finish(arg1, 0);
    if (iVar1 != 0) {
      return;
    }
    png_set_oFFs(arg1, arg2,
                 (uint)local_28 * 0x1000000 + (uint)local_27 * 0x10000 + (uint)local_26 * 0x100 +
                     (uint)local_25,
                 (uint)local_24 * 0x1000000 + (uint)local_23 * 0x10000 + (uint)local_22 * 0x100 +
                     (uint)local_21,
                 local_20);
    return;
  }
LAB_0055024d:
  png_warning(arg1, pcVar2);
  png_crc_finish(arg1, arg3);
  return;
}

/* ======================================================================
 * png_handle_pCAL  (Ghidra `png_handle_pCAL` @ 00550340)
 * Signature: uint8_t png_handle_pCAL(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_free`, `png_malloc_warn`, `png_read_data`, `png_set_pCAL`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_pCAL(long arg1, long arg2, uint arg3)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  ulong uVar19;
  char *pcVar20;
  char *pcVar21;

  uVar19 = (ulong)arg3;
  if ((*(uint *)(arg1 + 0x114) & 1) == 0) {
    png_error(arg1, "Missing IHDR before pCAL");
  } else {
    pcVar16 = "Invalid pCAL after IDAT";
    if ((*(uint *)(arg1 + 0x114) & 4) != 0) {
    LAB_00550595:
      png_warning(arg1, pcVar16);
      png_crc_finish(arg1, uVar19);
      return;
    }
    if ((arg2 != 0) && ((*(byte *)(arg2 + 9) & 4) != 0)) {
      pcVar16 = "Duplicate pCAL chunk";
      goto LAB_00550595;
    }
  }
  pcVar16 = (char *)png_malloc_warn(arg1, arg3 + 1);
  pcVar17 = "No memory for pCAL purpose.";
  if (pcVar16 == (char *)0x0) {
  LAB_00550685:
    png_warning(arg1, pcVar17);
    return;
  }
  png_read_data(arg1, pcVar16, uVar19);
  png_calculate_crc(arg1, pcVar16, uVar19);
  iVar13 = png_crc_finish(arg1, 0);
  if (iVar13 == 0) {
    pcVar20 = pcVar16 + uVar19;
    *pcVar20 = '\0';
    cVar2 = *pcVar16;
    pcVar17 = pcVar16;
    while (cVar2 != '\0') {
      pcVar17 = pcVar17 + 1;
      cVar2 = *pcVar17;
    }
    if (pcVar17 + 0xc < pcVar20) {
      bVar3 = pcVar17[1];
      bVar4 = pcVar17[10];
      bVar5 = pcVar17[5];
      bVar6 = pcVar17[6];
      bVar7 = pcVar17[7];
      bVar8 = pcVar17[9];
      bVar9 = pcVar17[2];
      bVar10 = pcVar17[3];
      bVar11 = pcVar17[4];
      bVar12 = pcVar17[8];
      if ((((bVar4 == 2) || (bVar8 != 0)) && ((bVar8 != 1 && bVar8 != 2 || (bVar4 == 3)))) &&
          ((bVar4 == 4 || (bVar8 != 3)))) {
        if (3 < bVar8) {
          png_warning(arg1, "Unrecognized equation type for pCAL chunk");
        }
        cVar2 = pcVar17[0xb];
        pcVar21 = pcVar17 + 0xb;
        while (cVar2 != '\0') {
          pcVar21 = pcVar21 + 1;
          cVar2 = *pcVar21;
        }
        uVar15 = (uint)bVar4;
        pcVar14 = (char *)png_malloc_warn(arg1);
        if (pcVar14 == (char *)0x0) {
          png_free(arg1, pcVar16);
          pcVar17 = "No memory for pCAL params.";
          goto LAB_00550685;
        }
        lVar18 = 0;
        if (uVar15 != 0) {
          do {
            pcVar1 = pcVar21 + 1;
            *(char **)(pcVar14 + lVar18 * 8) = pcVar1;
            if (pcVar20 < pcVar1) {
            LAB_00550532:
              png_warning(arg1, "Invalid pCAL data");
              goto LAB_0055053f;
            }
            cVar2 = pcVar21[1];
            pcVar21 = pcVar1;
            while (cVar2 != '\0') {
              pcVar21 = pcVar21 + 1;
              if (pcVar20 < pcVar21)
                goto LAB_00550532;
              cVar2 = *pcVar21;
            }
            lVar18 = lVar18 + 1;
          } while ((int)lVar18 < (int)uVar15);
        }
        png_set_pCAL(
            arg1, arg2, pcVar16,
            (uint)bVar10 * 0x100 + (uint)bVar3 * 0x1000000 + (uint)bVar9 * 0x10000 + (uint)bVar11,
            (uint)bVar12 + (uint)bVar5 * 0x1000000 + (uint)bVar6 * 0x10000 + (uint)bVar7 * 0x100,
            bVar8, uVar15, pcVar17 + 0xb, pcVar14);
      LAB_0055053f:
        png_free(arg1, pcVar16);
        pcVar16 = pcVar14;
      } else {
        png_warning(arg1, "Invalid pCAL parameters for equation type");
      }
    } else {
      png_warning(arg1, "Invalid pCAL data");
    }
  }
  png_free(arg1, pcVar16);
  return;
}

/* ======================================================================
 * png_handle_sCAL  (Ghidra `png_handle_sCAL` @ 00550700)
 * Signature: uint8_t png_handle_sCAL(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_free`, `png_malloc_warn`, `png_read_data`, `png_set_sCAL`, `png_warning`, `strtod`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_sCAL(long arg1, long arg2, uint arg3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  double dVar6;
  double dVar7;
  char *local_30;

  uVar4 = (ulong)arg3;
  if ((*(uint *)(arg1 + 0x114) & 1) == 0) {
    png_error(arg1, "Missing IHDR before sCAL");
  } else {
    pcVar3 = "Invalid sCAL after IDAT";
    if ((*(uint *)(arg1 + 0x114) & 4) != 0) {
    LAB_00550885:
      png_warning(arg1, pcVar3);
      png_crc_finish(arg1, uVar4);
      return;
    }
    if ((arg2 != 0) && ((*(byte *)(arg2 + 9) & 0x40) != 0)) {
      pcVar3 = "Duplicate sCAL chunk";
      goto LAB_00550885;
    }
  }
  pcVar3 = (char *)png_malloc_warn(arg1, arg3 + 1);
  if (pcVar3 == (char *)0x0) {
    png_warning(arg1, "Out of memory while processing sCAL chunk");
    return;
  }
  png_read_data(arg1, pcVar3, uVar4);
  png_calculate_crc(arg1, pcVar3, uVar4);
  iVar1 = png_crc_finish(arg1, 0);
  if (iVar1 == 0) {
    pcVar5 = pcVar3 + 1;
    pcVar3[uVar4] = '\0';
    dVar6 = strtod(pcVar5, &local_30);
    if (*local_30 != '\0') {
      png_warning(arg1, "malformed width string in sCAL chunk");
      return;
    }
    pcVar2 = pcVar3;
    if (*pcVar3 != '\0') {
      do {
        pcVar5 = pcVar2;
        pcVar2 = pcVar5 + 1;
      } while (*pcVar2 != '\0');
      pcVar5 = pcVar5 + 2;
    }
    pcVar2 = "Truncated sCAL chunk";
    if (pcVar5 <= pcVar3 + uVar4) {
      dVar7 = strtod(pcVar5, &local_30);
      if (*local_30 != '\0') {
        png_warning(arg1, "malformed height string in sCAL chunk");
        return;
      }
      if ((0.0 < dVar6) && (0.0 < dVar7)) {
        png_set_sCAL(dVar6, dVar7, arg1, arg2, (int)*pcVar3);
        goto LAB_00550840;
      }
      pcVar2 = "Invalid sCAL data";
    }
    png_warning(arg1, pcVar2);
    png_free(arg1, pcVar3);
  } else {
  LAB_00550840:
    png_free(arg1, pcVar3);
  }
  return;
}

/* ======================================================================
 * png_handle_tIME  (Ghidra `png_handle_tIME` @ 00550910)
 * Signature: uint8_t png_handle_tIME(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_read_data`, `png_set_tIME`, `png_warning`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_tIME(long arg1, long arg2, int arg3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  short local_38;
  uint8_t local_36;
  uint8_t local_35;
  uint8_t local_34;
  uint8_t local_33;
  uint8_t local_32;
  byte local_28;
  byte local_27;
  uint8_t local_26;
  uint8_t local_25;
  uint8_t local_24;
  uint8_t local_23;
  uint8_t local_22;

  uVar1 = *(uint *)(arg1 + 0x114);
  if ((uVar1 & 1) == 0) {
    png_error(arg1, "Out of place tIME chunk");
    uVar1 = *(uint *)(arg1 + 0x114);
  } else if ((arg2 != 0) && (pcVar3 = "Duplicate tIME chunk", (*(byte *)(arg2 + 9) & 2) != 0))
    goto LAB_00550959;
  if ((uVar1 & 4) != 0) {
    *(uint *)(arg1 + 0x114) = uVar1 | 8;
  }
  if (arg3 == 7) {
    png_read_data(arg1, &local_28, 7);
    png_calculate_crc(arg1, &local_28, 7);
    iVar2 = png_crc_finish(arg1, 0);
    if (iVar2 != 0) {
      return;
    }
    local_32 = local_22;
    local_33 = local_23;
    local_34 = local_24;
    local_35 = local_25;
    local_36 = local_26;
    local_38 = (ushort)local_28 * 0x100 + (ushort)local_27;
    png_set_tIME(arg1, arg2, &local_38);
    return;
  }
  pcVar3 = "Incorrect tIME chunk length";
LAB_00550959:
  png_warning(arg1, pcVar3);
  png_crc_finish(arg1, arg3);
  return;
}

/* ======================================================================
 * png_handle_tEXt  (Ghidra `png_handle_tEXt` @ 00550a40)
 * Signature: uint8_t png_handle_tEXt(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_free`, `png_malloc_warn`, `png_read_data`, `png_set_text_2`, `png_warning`, `strlen`
 * Called by: `png_read_end`, `png_read_info`
 */
void png_handle_tEXt(long arg1, uint64_t arg2, uint arg3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint32_t *puVar5;
  size_t sVar6;
  char *pcVar7;
  ulong uVar8;

  uVar2 = *(uint *)(arg1 + 0x114);
  uVar8 = (ulong)arg3;
  if ((uVar2 & 1) == 0) {
    png_error(arg1, "Missing IHDR before tEXt");
    uVar2 = *(uint *)(arg1 + 0x114);
  }
  if ((uVar2 & 4) != 0) {
    *(uint *)(arg1 + 0x114) = uVar2 | 8;
  }
  pcVar4 = (char *)png_malloc_warn(arg1, arg3 + 1);
  pcVar7 = "No memory to process text chunk.";
  if (pcVar4 == (char *)0x0) {
  LAB_00550b85:
    png_warning(arg1, pcVar7);
    return;
  }
  png_read_data(arg1, pcVar4, uVar8);
  png_calculate_crc(arg1, pcVar4, uVar8);
  iVar3 = png_crc_finish(arg1, 0);
  if (iVar3 == 0) {
    pcVar4[uVar8] = '\0';
    cVar1 = *pcVar4;
    pcVar7 = pcVar4;
    while (cVar1 != '\0') {
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
    }
    puVar5 = (uint32_t *)png_malloc_warn(arg1, 0x20);
    if (puVar5 != (uint32_t *)0x0) {
      *puVar5 = 0xffffffff;
      *(char **)(puVar5 + 2) = pcVar4;
      *(char **)(puVar5 + 4) = pcVar7 + (pcVar7 != pcVar4 + uVar8);
      sVar6 = strlen(pcVar7 + (pcVar7 != pcVar4 + uVar8));
      *(size_t *)(puVar5 + 6) = sVar6;
      iVar3 = png_set_text_2(arg1, arg2, puVar5, 1);
      png_free(arg1, pcVar4);
      png_free(arg1, puVar5);
      if (iVar3 == 0) {
        return;
      }
      pcVar7 = "Insufficient memory to process text chunk.";
      goto LAB_00550b85;
    }
    png_warning(arg1, "Not enough memory to process text chunk.");
  }
  png_free(arg1, pcVar4);
  return;
}

/* ======================================================================
 * png_handle_zTXt  (Ghidra `png_handle_zTXt` @ 00550c00)
 * Signature: uint8_t png_handle_zTXt(void)
 * Calls: `png_calculate_crc`, `png_crc_finish`, `png_decompress_chunk`, `png_error`, `png_free`, `png_malloc_warn`, `png_read_data`, `png_set_text_2`, `png_warning`
 * Called by: `png_read_end`, `png_read_info`
 */
void png_handle_zTXt(long arg1, uint64_t arg2, uint arg3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  uint32_t *puVar6;
  ulong uVar7;
  char *pcVar8;
  uint64_t local_30;

  uVar7 = (ulong)arg3;
  uVar2 = *(uint *)(arg1 + 0x114);
  if ((uVar2 & 1) == 0) {
    png_error(arg1, "Missing IHDR before zTXt");
    uVar2 = *(uint *)(arg1 + 0x114);
  }
  if ((uVar2 & 4) != 0) {
    *(uint *)(arg1 + 0x114) = uVar2 | 8;
  }
  pcVar4 = (char *)png_malloc_warn(arg1, arg3 + 1);
  if (pcVar4 != (char *)0x0) {
    png_read_data(arg1, pcVar4, uVar7);
    png_calculate_crc(arg1, pcVar4, uVar7);
    iVar3 = png_crc_finish(arg1, 0);
    if (iVar3 == 0) {
      pcVar4[uVar7] = '\0';
      cVar1 = *pcVar4;
      pcVar8 = pcVar4;
      while (cVar1 != '\0') {
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar8;
      }
      if (pcVar8 < pcVar4 + (uVar7 - 2)) {
        if (pcVar8[1] != '\0') {
          png_warning(arg1, "Unknown compression type in zTXt chunk");
        }
        lVar5 =
            png_decompress_chunk(arg1, 0, pcVar4, uVar7, pcVar8 + (2 - (long)pcVar4), &local_30);
        puVar6 = (uint32_t *)png_malloc_warn(arg1, 0x20);
        if (puVar6 == (uint32_t *)0x0) {
          png_warning(arg1, "Not enough memory to process zTXt chunk.");
          png_free(arg1, lVar5);
        } else {
          *puVar6 = 0;
          *(long *)(puVar6 + 2) = lVar5;
          *(char **)(puVar6 + 4) = pcVar8 + (2 - (long)pcVar4) + lVar5;
          *(uint64_t *)(puVar6 + 6) = local_30;
          iVar3 = png_set_text_2(arg1, arg2, puVar6, 1);
          png_free(arg1, puVar6);
          png_free(arg1, lVar5);
          if (iVar3 != 0) {
            png_error(arg1, "Insufficient memory to store zTXt chunk.");
            return;
          }
        }
        return;
      }
      png_warning(arg1, "Truncated zTXt chunk");
    }
    png_free(arg1, pcVar4);
    return;
  }
  png_warning(arg1, "Out of memory processing zTXt chunk.");
  return;
}

/* ======================================================================
 * png_handle_unknown  (Ghidra `png_handle_unknown` @ 00550e00)
 * Signature: uint8_t png_handle_unknown(void)
 * Calls: `memcmp`, `png_calculate_crc`, `png_chunk_error`, `png_crc_finish`, `png_free`, `png_handle_as_unknown`, `png_malloc`, `png_read_data`, `png_set_unknown_chunks`
 * Called by: `png_push_read_chunk`, `png_read_end`, `png_read_info`
 */
void png_handle_unknown(long arg1, uint64_t arg2, uint arg3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  ulong uVar5;

  uVar2 = *(uint *)(arg1 + 0x114);
  uVar5 = (ulong)arg3;
  if (((uVar2 & 4) != 0) && (iVar3 = memcmp((void *)(arg1 + 0x22c), &png_IDAT, 4), iVar3 != 0)) {
    *(uint *)(arg1 + 0x114) = uVar2 | 8;
  }
  bVar1 = *(byte *)(arg1 + 0x22c);
  if ((((((byte)(bVar1 + 0xa5) < 6) || (0x39 < (byte)(bVar1 + 0xbf))) ||
        ((byte)(*(char *)(arg1 + 0x22d) + 0xa5U) < 6)) ||
       ((0x39 < (byte)(*(char *)(arg1 + 0x22d) + 0xbfU) ||
         ((byte)(*(char *)(arg1 + 0x22e) + 0xa5U) < 6)))) ||
      ((0x39 < (byte)(*(char *)(arg1 + 0x22e) + 0xbfU) ||
        (((byte)(*(char *)(arg1 + 0x22f) + 0xa5U) < 6 ||
          (0x39 < (byte)(*(char *)(arg1 + 0x22f) + 0xbfU))))))) {
    png_chunk_error(arg1, "invalid chunk type");
    bVar1 = *(byte *)(arg1 + 0x22c);
  }
  if ((((bVar1 & 0x20) == 0) && (iVar3 = png_handle_as_unknown(arg1, arg1 + 0x22c), iVar3 != 3)) &&
      (*(long *)(arg1 + 0x3d0) == 0)) {
    png_chunk_error(arg1, "unknown critical chunk");
  }
  if (((*(byte *)(arg1 + 0x119) & 0x80) == 0) && (*(long *)(arg1 + 0x3d0) == 0))
    goto LAB_00550f69;
  *(uint8_t *)(arg1 + 0x454) = 0;
  *(uint32_t *)(arg1 + 0x450) = *(uint32_t *)(arg1 + 0x22c);
  uVar4 = png_malloc(arg1, uVar5);
  *(uint64_t *)(arg1 + 0x458) = uVar4;
  *(ulong *)(arg1 + 0x460) = uVar5;
  png_read_data(arg1, uVar4, uVar5);
  png_calculate_crc(arg1, uVar4, uVar5);
  if (*(code **)(arg1 + 0x3d0) == (code *)0x0) {
  LAB_00550f3a:
    png_set_unknown_chunks(arg1, arg2, arg1 + 0x450, 1);
  } else {
    iVar3 = (**(code **)(arg1 + 0x3d0))(arg1, arg1 + 0x450);
    if (iVar3 < 0) {
      png_chunk_error(arg1, "error in user chunk");
    } else if (iVar3 == 0) {
      if (((*(byte *)(arg1 + 0x22c) & 0x20) == 0) &&
          (iVar3 = png_handle_as_unknown(arg1, arg1 + 0x22c), iVar3 != 3)) {
        png_chunk_error(arg1, "unknown critical chunk");
      }
      goto LAB_00550f3a;
    }
  }
  png_free(arg1, *(uint64_t *)(arg1 + 0x458));
  *(uint64_t *)(arg1 + 0x458) = 0;
  uVar5 = 0;
LAB_00550f69:
  png_crc_finish(arg1, uVar5);
  return;
}

/* ======================================================================
 * png_check_chunk_name  (Ghidra `png_check_chunk_name` @ 00551090)
 * Signature: uint8_t png_check_chunk_name(void)
 * Calls: `png_chunk_error`
 * Called by: `png_push_handle_unknown`
 */
void png_check_chunk_name(uint64_t arg1, char *arg2)

{
  if ((5 < (byte)(*arg2 + 0xa5U)) && ((byte)(*arg2 + 0xbfU) < 0x3a)) {
    if ((5 < (byte)(arg2[1] + 0xa5U)) && ((byte)(arg2[1] + 0xbfU) < 0x3a)) {
      if ((5 < (byte)(arg2[2] + 0xa5U)) && ((byte)(arg2[2] + 0xbfU) < 0x3a)) {
        if ((5 < (byte)(arg2[3] + 0xa5U)) && ((byte)(arg2[3] + 0xbfU) < 0x3a)) {
          return;
        }
      }
    }
  }
  png_chunk_error(arg1, "invalid chunk type");
  return;
}

/* ======================================================================
 * png_combine_row  (Ghidra `png_combine_row` @ 005510f0)
 * Signature: uint8_t png_combine_row(void)
 * Calls: `memcpy`
 * Called by: `png_progressive_combine_row`, `png_read_row`
 */
void png_combine_row(long arg1, byte *arg2, uint arg3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  ulong __n;
  void *__src;
  bool bVar10;
  byte local_4c;

  if (arg3 != 0xff) {
    bVar4 = *(byte *)(arg1 + 0x213);
    if (bVar4 == 2) {
      iVar1 = *(int *)(arg1 + 0x1b4);
      uVar2 = *(uint *)(arg1 + 0x11c) & 0x10000;
      uVar8 = -(uint)(uVar2 == 0) & 6;
      if (iVar1 != 0) {
        pbVar7 = (byte *)(*(long *)(arg1 + 0x1e0) + 1);
        iVar9 = 0;
        uVar6 = 0x80;
        uVar3 = uVar8;
        do {
          if ((uVar6 & arg3) != 0) {
            bVar4 = (byte)uVar3;
            local_4c = (byte)(0x3f3f >> (6 - bVar4 & 0x1f));
            *arg2 = local_4c & *arg2 |
                    (byte)(((int)(uint)*pbVar7 >> (bVar4 & 0x1f) & 3U) << (bVar4 & 0x1f));
          }
          if (uVar3 == (~-(uint)(uVar2 == 0) & 6)) {
            pbVar7 = pbVar7 + 1;
            arg2 = arg2 + 1;
            uVar3 = uVar8;
          } else {
            uVar3 = uVar3 + (-(uint)(uVar2 == 0) & 0xfffffffc) + 2;
          }
          uVar5 = (int)uVar6 >> 1;
          bVar10 = uVar6 != 1;
          uVar6 = 0x80;
          if (bVar10) {
            uVar6 = uVar5;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar1);
      }
    } else if (bVar4 == 4) {
      iVar1 = *(int *)(arg1 + 0x1b4);
      uVar2 = *(uint *)(arg1 + 0x11c) & 0x10000;
      uVar8 = -(uint)(uVar2 == 0) & 4;
      if (iVar1 != 0) {
        pbVar7 = (byte *)(*(long *)(arg1 + 0x1e0) + 1);
        iVar9 = 0;
        uVar6 = 0x80;
        uVar3 = uVar8;
        do {
          if ((uVar6 & arg3) != 0) {
            bVar4 = (byte)uVar3;
            local_4c = (byte)(0xf0f >> (4 - bVar4 & 0x1f));
            *arg2 = local_4c & *arg2 |
                    (byte)(((int)(uint)*pbVar7 >> (bVar4 & 0x1f) & 0xfU) << (bVar4 & 0x1f));
          }
          if (uVar3 == (~-(uint)(uVar2 == 0) & 4)) {
            pbVar7 = pbVar7 + 1;
            arg2 = arg2 + 1;
            uVar3 = uVar8;
          } else {
            uVar3 = uVar3 + (-(uint)(uVar2 == 0) & 0xfffffff8) + 4;
          }
          uVar5 = (int)uVar6 >> 1;
          bVar10 = uVar6 != 1;
          uVar6 = 0x80;
          if (bVar10) {
            uVar6 = uVar5;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar1);
      }
    } else if (bVar4 == 1) {
      iVar1 = *(int *)(arg1 + 0x1b4);
      uVar2 = *(uint *)(arg1 + 0x11c) & 0x10000;
      uVar8 = -(uint)(uVar2 == 0) & 7;
      if (iVar1 != 0) {
        pbVar7 = (byte *)(*(long *)(arg1 + 0x1e0) + 1);
        iVar9 = 0;
        uVar6 = 0x80;
        uVar3 = uVar8;
        do {
          if ((uVar6 & arg3) != 0) {
            bVar4 = (byte)uVar3;
            local_4c = (byte)(0x7f7f >> (7 - bVar4 & 0x1f));
            *arg2 = local_4c & *arg2 |
                    (byte)(((int)(uint)*pbVar7 >> (bVar4 & 0x1f) & 1U) << (bVar4 & 0x1f));
          }
          if (uVar3 == (~-(uint)(uVar2 == 0) & 7)) {
            pbVar7 = pbVar7 + 1;
            arg2 = arg2 + 1;
            uVar3 = uVar8;
          } else {
            uVar3 = uVar3 + (-(uint)(uVar2 == 0) | 1);
          }
          uVar5 = (int)uVar6 >> 1;
          bVar10 = uVar6 != 1;
          uVar6 = 0x80;
          if (bVar10) {
            uVar6 = uVar5;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar1);
      }
    } else {
      iVar1 = *(int *)(arg1 + 0x1b4);
      __n = (ulong)(bVar4 >> 3);
      if (iVar1 != 0) {
        uVar2 = 0xffffff80;
        __src = (void *)(*(long *)(arg1 + 0x1e0) + 1);
        iVar9 = 0;
        uVar8 = 0xffffff80;
        do {
          bVar4 = (byte)uVar2;
          if ((uVar2 & 0xff & arg3) != 0) {
            memcpy(arg2, __src, __n);
            uVar8 = uVar8 & 0xff;
          }
          __src = (void *)((long)__src + __n);
          arg2 = arg2 + __n;
          uVar2 = uVar8;
          if (bVar4 != 1) {
            uVar2 = (uint)(bVar4 >> 1);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar1);
      }
    }
    return;
  }
  bVar4 = *(byte *)(arg1 + 0x213);
  if (bVar4 < 8) {
    uVar2 = (uint)bVar4 * *(int *)(arg1 + 0x1b4) + 7 >> 3;
  } else {
    uVar2 = (uint)(bVar4 >> 3) * *(int *)(arg1 + 0x1b4);
  }
  memcpy(arg2, (void *)(*(long *)(arg1 + 0x1e0) + 1), (ulong)uVar2);
  return;
}

/* ======================================================================
 * png_do_read_interlace  (Ghidra `png_do_read_interlace` @ 00551480)
 * Signature: uint8_t png_do_read_interlace(void)
 * Calls: `memcpy`
 * Called by: `png_push_process_row`, `png_read_row`
 */
void png_do_read_interlace(long arg1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  void *__dest;
  void *__src;
  uint uVar13;
  ulong __n;
  uint uVar14;
  long lVar15;
  bool bVar16;
  byte *local_70;
  void *local_68;
  uint8_t local_48[24];

  uVar6 = *(uint *)(arg1 + 0x11c);
  lVar4 = *(long *)(arg1 + 0x1e0) + 1;
  if (lVar4 == 0) {
    return;
  }
  if (arg1 == -0x208) {
    return;
  }
  uVar12 = *(uint *)(arg1 + 0x208);
  bVar5 = *(byte *)(arg1 + 0x213);
  iVar1 = (&png_pass_inc)[*(byte *)(arg1 + 0x234)];
  iVar3 = iVar1 * uVar12;
  if (bVar5 == 2) {
    if ((uVar6 & 0x10000) == 0) {
      iVar8 = 2;
      uVar10 = 6;
      uVar11 = 0;
      uVar6 = (~(uVar12 + 3) & 3) * 2;
      uVar13 = (~(iVar3 + 3U) & 3) * 2;
    } else {
      iVar8 = -2;
      uVar10 = 0;
      uVar11 = 6;
      uVar6 = uVar12 * 2 + 6 & 6;
      uVar13 = iVar3 * 2 + 6U & 6;
    }
    if (uVar12 != 0) {
      uVar14 = 0;
      local_70 = (byte *)((ulong)(uVar12 - 1 >> 2) + lVar4);
      pbVar7 = (byte *)((ulong)(iVar3 - 1U >> 2) + lVar4);
      do {
        bVar5 = *local_70;
        if (0 < iVar1) {
          iVar9 = 0;
          do {
            bVar2 = (byte)uVar13;
            uVar12 = uVar13 + iVar8;
            local_68._0_1_ =
                (byte)(((int)(uint)bVar5 >> ((byte)uVar6 & 0x1f) & 3U) << (bVar2 & 0x1f));
            bVar16 = uVar10 != uVar13;
            uVar13 = uVar11;
            if (bVar16) {
              uVar13 = uVar12;
            }
            *pbVar7 = (byte)(0x3f3f >> (6 - bVar2 & 0x1f)) & *pbVar7 | (byte)local_68;
            if (!bVar16) {
              pbVar7 = pbVar7 + -1;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != iVar1);
          uVar12 = *(uint *)(arg1 + 0x208);
        }
        if (uVar6 == uVar10) {
          local_70 = local_70 + -1;
          uVar6 = uVar11;
        } else {
          uVar6 = uVar6 + iVar8;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar12);
      bVar5 = *(byte *)(arg1 + 0x213);
      goto LAB_005515bb;
    }
  LAB_005515eb:
    *(int *)(arg1 + 0x208) = iVar3;
  } else {
    if (bVar5 == 4) {
      if ((uVar6 & 0x10000) == 0) {
        iVar8 = 4;
        uVar10 = 4;
        uVar6 = -(uint)((uVar12 + 1 & 1) == 0);
        uVar11 = 0;
        uVar13 = -(uint)((iVar3 + 1U & 1) == 0);
      } else {
        uVar6 = uVar12 * 4 + 4;
        iVar8 = -4;
        uVar10 = 0;
        uVar11 = 4;
        uVar13 = iVar3 * 4 + 4;
      }
      uVar13 = uVar13 & 4;
      uVar6 = uVar6 & 4;
      if (uVar12 == 0)
        goto LAB_005515eb;
      uVar14 = 0;
      local_70 = (byte *)((ulong)(uVar12 - 1 >> 1) + lVar4);
      pbVar7 = (byte *)((ulong)(iVar3 - 1U >> 1) + lVar4);
      do {
        bVar5 = *local_70;
        if (0 < iVar1) {
          iVar9 = 0;
          do {
            bVar2 = (byte)uVar13;
            uVar12 = uVar13 + iVar8;
            local_68._0_1_ =
                (byte)(((int)(uint)bVar5 >> ((byte)uVar6 & 0x1f) & 0xfU) << (bVar2 & 0x1f));
            bVar16 = uVar10 != uVar13;
            uVar13 = uVar11;
            if (bVar16) {
              uVar13 = uVar12;
            }
            *pbVar7 = (byte)(0xf0f >> (4 - bVar2 & 0x1f)) & *pbVar7 | (byte)local_68;
            if (!bVar16) {
              pbVar7 = pbVar7 + -1;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != iVar1);
          uVar12 = *(uint *)(arg1 + 0x208);
        }
        if (uVar6 == uVar10) {
          local_70 = local_70 + -1;
          uVar6 = uVar11;
        } else {
          uVar6 = uVar6 + iVar8;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar12);
      bVar5 = *(byte *)(arg1 + 0x213);
    } else if (bVar5 == 1) {
      uVar13 = uVar12 + 7;
      if ((uVar6 & 0x10000) == 0) {
        uVar13 = ~uVar13;
        iVar8 = 1;
        uVar10 = 7;
        uVar11 = 0;
        uVar6 = ~(iVar3 + 7U);
      } else {
        uVar6 = iVar3 + 7;
        iVar8 = -1;
        uVar10 = 0;
        uVar11 = 7;
      }
      uVar6 = uVar6 & 7;
      uVar13 = uVar13 & 7;
      if (uVar12 == 0)
        goto LAB_005515eb;
      uVar14 = 0;
      local_70 = (byte *)((ulong)(uVar12 - 1 >> 3) + lVar4);
      pbVar7 = (byte *)((ulong)(iVar3 - 1U >> 3) + lVar4);
      do {
        bVar5 = *local_70;
        if (0 < iVar1) {
          iVar9 = 0;
          do {
            bVar2 = (byte)uVar6;
            uVar12 = uVar6 + iVar8;
            local_68._0_1_ =
                (byte)(((int)(uint)bVar5 >> ((byte)uVar13 & 0x1f) & 1U) << (bVar2 & 0x1f));
            bVar16 = uVar10 != uVar6;
            uVar6 = uVar11;
            if (bVar16) {
              uVar6 = uVar12;
            }
            *pbVar7 = (byte)(0x7f7f >> (7 - bVar2 & 0x1f)) & *pbVar7 | (byte)local_68;
            if (!bVar16) {
              pbVar7 = pbVar7 + -1;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != iVar1);
          uVar12 = *(uint *)(arg1 + 0x208);
        }
        if (uVar13 == uVar10) {
          local_70 = local_70 + -1;
          uVar13 = uVar11;
        } else {
          uVar13 = uVar13 + iVar8;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar12);
      bVar5 = *(byte *)(arg1 + 0x213);
    } else if (uVar12 != 0) {
      uVar6 = 0;
      __n = (ulong)(bVar5 >> 3);
      lVar15 = -__n;
      __src = (void *)(lVar4 + (uVar12 - 1) * __n);
      local_68 = (void *)((iVar3 - 1) * __n + lVar4);
      do {
        memcpy(local_48, __src, __n);
        if (0 < iVar1) {
          iVar8 = 0;
          __dest = local_68;
          do {
            iVar8 = iVar8 + 1;
            memcpy(__dest, local_48, __n);
            __dest = (void *)((long)__dest + lVar15);
          } while (iVar8 != iVar1);
          local_68 = (void *)((long)local_68 + ((ulong)(iVar1 - 1) + 1) * lVar15);
          uVar12 = *(uint *)(arg1 + 0x208);
        }
        uVar6 = uVar6 + 1;
        __src = (void *)((long)__src + lVar15);
      } while (uVar6 < uVar12);
      bVar5 = *(byte *)(arg1 + 0x213);
    }
  LAB_005515bb:
    *(int *)(arg1 + 0x208) = iVar3;
    if (7 < bVar5) {
      uVar6 = (uint)(bVar5 >> 3) * iVar3;
      goto LAB_005515d6;
    }
  }
  uVar6 = (uint)bVar5 * iVar3 + 7 >> 3;
LAB_005515d6:
  *(uint *)(arg1 + 0x20c) = uVar6;
  return;
}

/* ======================================================================
 * png_read_filter_row  (Ghidra `png_read_filter_row` @ 005519d0)
 * Signature: uint8_t png_read_filter_row(void)
 * Calls: `png_warning`
 * Called by: `png_push_process_row`, `png_read_row`
 */
void png_read_filter_row(uint64_t arg1, long arg2, uint8_t *arg3, uint8_t *arg4, uint32_t arg5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint8_t auVar4[16];
  uint8_t auVar5[16];
  byte bVar6;
  uint8_t auVar7[15];
  uint8_t auVar8[14];
  uint8_t auVar9[14];
  uint8_t auVar10[15];
  uint8_t auVar11[15];
  uint8_t auVar12[15];
  uint8_t auVar13[15];
  uint8_t auVar14[15];
  uint8_t auVar15[15];
  uint8_t auVar16[14];
  uint8_t auVar17[14];
  uint8_t auVar18[13];
  uint8_t auVar19[13];
  uint8_t auVar20[13];
  uint8_t auVar21[13];
  uint8_t auVar22[13];
  uint8_t auVar23[13];
  uint8_t auVar24[15];
  uint8_t auVar25[15];
  uint8_t auVar26[15];
  uint8_t auVar27[15];
  uint8_t auVar28[15];
  uint8_t auVar29[15];
  uint8_t auVar30[15];
  uint8_t auVar31[15];
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  uint8_t auVar62[15];
  unkuint9 Var63;
  uint8_t auVar64[11];
  uint8_t auVar65[13];
  uint8_t auVar66[15];
  unkuint9 Var67;
  uint8_t auVar68[11];
  uint8_t auVar69[14];
  uint8_t auVar70[14];
  uint8_t auVar71[13];
  uint8_t auVar72[13];
  uint8_t auVar73[15];
  uint8_t auVar74[15];
  uint8_t auVar75[15];
  uint8_t auVar76[15];
  uint6 uVar77;
  uint6 uVar78;
  long lVar79;
  uint uVar80;
  int iVar81;
  uint uVar82;
  uint8_t *puVar83;
  uint uVar84;
  int iVar85;
  uint uVar86;
  uint uVar87;
  int iVar88;
  uint uVar89;
  byte bVar90;
  uint8_t *puVar91;
  uint uVar92;
  uint uVar93;

  switch (arg5) {
  case 0:
    break;
  case 1:
    uVar87 = *(uint *)(arg2 + 4);
    uVar86 = (int)(*(byte *)(arg2 + 0xb) + 7) >> 3;
    if (uVar86 < uVar87) {
      uVar80 = uVar87 - uVar86;
      puVar83 = arg3 + uVar86;
      uVar84 = uVar80 >> 4;
      uVar89 = uVar84 * 0x10;
      if ((uVar84 != 0) && (0xf < uVar80 && (arg3 + 0x10 < puVar83 || puVar83 + 0x10 < arg3))) {
        lVar79 = 0;
        uVar82 = 0;
        do {
          pcVar1 = arg3 + lVar79;
          cVar32 = pcVar1[1];
          cVar33 = pcVar1[2];
          cVar34 = pcVar1[3];
          cVar35 = pcVar1[4];
          cVar36 = pcVar1[5];
          cVar37 = pcVar1[6];
          cVar38 = pcVar1[7];
          cVar39 = pcVar1[8];
          cVar40 = pcVar1[9];
          cVar41 = pcVar1[10];
          cVar42 = pcVar1[0xb];
          cVar43 = pcVar1[0xc];
          cVar44 = pcVar1[0xd];
          cVar45 = pcVar1[0xe];
          cVar46 = pcVar1[0xf];
          uVar82 = uVar82 + 1;
          pcVar2 = puVar83 + lVar79;
          cVar47 = pcVar2[1];
          cVar48 = pcVar2[2];
          cVar49 = pcVar2[3];
          cVar50 = pcVar2[4];
          cVar51 = pcVar2[5];
          cVar52 = pcVar2[6];
          cVar53 = pcVar2[7];
          cVar54 = pcVar2[8];
          cVar55 = pcVar2[9];
          cVar56 = pcVar2[10];
          cVar57 = pcVar2[0xb];
          cVar58 = pcVar2[0xc];
          cVar59 = pcVar2[0xd];
          cVar60 = pcVar2[0xe];
          cVar61 = pcVar2[0xf];
          pcVar3 = puVar83 + lVar79;
          *pcVar3 = *pcVar1 + *pcVar2;
          pcVar3[1] = cVar32 + cVar47;
          pcVar3[2] = cVar33 + cVar48;
          pcVar3[3] = cVar34 + cVar49;
          pcVar3[4] = cVar35 + cVar50;
          pcVar3[5] = cVar36 + cVar51;
          pcVar3[6] = cVar37 + cVar52;
          pcVar3[7] = cVar38 + cVar53;
          pcVar3[8] = cVar39 + cVar54;
          pcVar3[9] = cVar40 + cVar55;
          pcVar3[10] = cVar41 + cVar56;
          pcVar3[0xb] = cVar42 + cVar57;
          pcVar3[0xc] = cVar43 + cVar58;
          pcVar3[0xd] = cVar44 + cVar59;
          pcVar3[0xe] = cVar45 + cVar60;
          pcVar3[0xf] = cVar46 + cVar61;
          lVar79 = lVar79 + 0x10;
        } while (uVar82 < uVar84);
        uVar86 = uVar89 + uVar86;
        puVar83 = puVar83 + uVar89;
        arg3 = arg3 + uVar89;
        if (uVar80 == uVar89) {
          return;
        }
      }
      lVar79 = 0;
      do {
        puVar83[lVar79] = puVar83[lVar79] + arg3[lVar79];
        lVar79 = lVar79 + 1;
      } while (uVar86 + (int)lVar79 < uVar87);
      return;
    }
    break;
  case 2:
    uVar86 = *(uint *)(arg2 + 4);
    if (uVar86 != 0) {
      uVar84 = uVar86 >> 4;
      uVar87 = uVar84 << 4;
      if ((uVar84 == 0) || (uVar86 < 0x10 || arg3 <= arg4 + 0x10 && arg4 <= arg3 + 0x10)) {
        uVar87 = 0;
      } else {
        lVar79 = 0;
        uVar89 = 0;
        do {
          pcVar1 = arg4 + lVar79;
          cVar32 = pcVar1[1];
          cVar33 = pcVar1[2];
          cVar34 = pcVar1[3];
          cVar35 = pcVar1[4];
          cVar36 = pcVar1[5];
          cVar37 = pcVar1[6];
          cVar38 = pcVar1[7];
          cVar39 = pcVar1[8];
          cVar40 = pcVar1[9];
          cVar41 = pcVar1[10];
          cVar42 = pcVar1[0xb];
          cVar43 = pcVar1[0xc];
          cVar44 = pcVar1[0xd];
          cVar45 = pcVar1[0xe];
          cVar46 = pcVar1[0xf];
          uVar89 = uVar89 + 1;
          pcVar2 = arg3 + lVar79;
          cVar47 = pcVar2[1];
          cVar48 = pcVar2[2];
          cVar49 = pcVar2[3];
          cVar50 = pcVar2[4];
          cVar51 = pcVar2[5];
          cVar52 = pcVar2[6];
          cVar53 = pcVar2[7];
          cVar54 = pcVar2[8];
          cVar55 = pcVar2[9];
          cVar56 = pcVar2[10];
          cVar57 = pcVar2[0xb];
          cVar58 = pcVar2[0xc];
          cVar59 = pcVar2[0xd];
          cVar60 = pcVar2[0xe];
          cVar61 = pcVar2[0xf];
          pcVar3 = arg3 + lVar79;
          *pcVar3 = *pcVar1 + *pcVar2;
          pcVar3[1] = cVar32 + cVar47;
          pcVar3[2] = cVar33 + cVar48;
          pcVar3[3] = cVar34 + cVar49;
          pcVar3[4] = cVar35 + cVar50;
          pcVar3[5] = cVar36 + cVar51;
          pcVar3[6] = cVar37 + cVar52;
          pcVar3[7] = cVar38 + cVar53;
          pcVar3[8] = cVar39 + cVar54;
          pcVar3[9] = cVar40 + cVar55;
          pcVar3[10] = cVar41 + cVar56;
          pcVar3[0xb] = cVar42 + cVar57;
          pcVar3[0xc] = cVar43 + cVar58;
          pcVar3[0xd] = cVar44 + cVar59;
          pcVar3[0xe] = cVar45 + cVar60;
          pcVar3[0xf] = cVar46 + cVar61;
          lVar79 = lVar79 + 0x10;
        } while (uVar89 < uVar84);
        arg3 = arg3 + uVar87;
        arg4 = arg4 + uVar87;
        if (uVar86 == uVar87) {
          return;
        }
      }
      lVar79 = 0;
      do {
        arg3[lVar79] = arg3[lVar79] + arg4[lVar79];
        lVar79 = lVar79 + 1;
      } while (uVar87 + (int)lVar79 < uVar86);
      return;
    }
    break;
  case 3:
    uVar86 = (int)(*(byte *)(arg2 + 0xb) + 7) >> 3;
    uVar87 = *(int *)(arg2 + 4) - uVar86;
    puVar83 = arg3;
    if (uVar86 != 0) {
      lVar79 = 0;
      do {
        arg3[lVar79] = arg3[lVar79] + ((byte)arg4[lVar79] >> 1);
        lVar79 = lVar79 + 1;
      } while ((uint)lVar79 < uVar86);
      lVar79 = (ulong)(uVar86 - 1) + 1;
      arg4 = arg4 + lVar79;
      puVar83 = arg3 + lVar79;
    }
    if (uVar87 != 0) {
      uVar86 = uVar87 >> 4;
      uVar84 = uVar86 << 4;
      if ((uVar86 == 0) || ((uVar87 < 0x10 || puVar83 <= arg4 + 0x10 && arg4 <= puVar83 + 0x10) ||
                            puVar83 <= arg3 + 0x10 && arg3 <= puVar83 + 0x10)) {
        uVar84 = 0;
      } else {
        lVar79 = 0;
        uVar89 = 0;
        do {
          auVar4 = *(uint8_t (*)[16])(arg4 + lVar79);
          uVar89 = uVar89 + 1;
          auVar5 = *(uint8_t (*)[16])(arg3 + lVar79);
          uVar92 = CONCAT13(0, CONCAT12(auVar4[9], (ushort)auVar4[8]));
          auVar10[0xd] = 0;
          auVar10._0_13_ = auVar4._0_13_;
          auVar10[0xe] = auVar4[7];
          auVar12[0xc] = auVar4[6];
          auVar12._0_12_ = auVar4._0_12_;
          auVar12._13_2_ = auVar10._13_2_;
          auVar14[0xb] = 0;
          auVar14._0_11_ = auVar4._0_11_;
          auVar14._12_3_ = auVar12._12_3_;
          uVar82 = auVar14._11_4_;
          auVar24[10] = auVar4[5];
          auVar24._0_10_ = auVar4._0_10_;
          auVar24._11_4_ = uVar82;
          auVar26[9] = 0;
          auVar26._0_9_ = auVar4._0_9_;
          auVar26._10_5_ = auVar24._10_5_;
          auVar28[8] = auVar4[4];
          auVar28._0_8_ = auVar4._0_8_;
          auVar28._9_6_ = auVar26._9_6_;
          auVar62._7_8_ = 0;
          auVar62._0_7_ = auVar28._8_7_;
          Var63 = CONCAT81(SUB158(auVar62 << 0x40, 7), auVar4[3]);
          auVar73._9_6_ = 0;
          auVar73._0_9_ = Var63;
          auVar64._1_10_ = SUB1510(auVar73 << 0x30, 5);
          auVar64[0] = auVar4[2];
          auVar74._11_4_ = 0;
          auVar74._0_11_ = auVar64;
          auVar65._1_12_ = SUB1512(auVar74 << 0x20, 3);
          auVar65[0] = auVar4[1];
          auVar31[1] = 0;
          auVar31[0] = auVar4[0];
          auVar31._2_13_ = auVar65;
          auVar7[0xd] = 0;
          auVar7._0_13_ = auVar5._0_13_;
          auVar7[0xe] = auVar5[7];
          auVar11[0xc] = auVar5[6];
          auVar11._0_12_ = auVar5._0_12_;
          auVar11._13_2_ = auVar7._13_2_;
          auVar13[0xb] = 0;
          auVar13._0_11_ = auVar5._0_11_;
          auVar13._12_3_ = auVar11._12_3_;
          uVar80 = auVar13._11_4_;
          auVar15[10] = auVar5[5];
          auVar15._0_10_ = auVar5._0_10_;
          auVar15._11_4_ = uVar80;
          auVar25[9] = 0;
          auVar25._0_9_ = auVar5._0_9_;
          auVar25._10_5_ = auVar15._10_5_;
          auVar27[8] = auVar5[4];
          auVar27._0_8_ = auVar5._0_8_;
          auVar27._9_6_ = auVar25._9_6_;
          auVar66._7_8_ = 0;
          auVar66._0_7_ = auVar27._8_7_;
          Var67 = CONCAT81(SUB158(auVar66 << 0x40, 7), auVar5[3]);
          auVar75._9_6_ = 0;
          auVar75._0_9_ = Var67;
          auVar68._1_10_ = SUB1510(auVar75 << 0x30, 5);
          auVar68[0] = auVar5[2];
          auVar76._11_4_ = 0;
          auVar76._0_11_ = auVar68;
          auVar29[2] = auVar5[1];
          auVar29._0_2_ = auVar5._0_2_;
          auVar29._3_12_ = SUB1512(auVar76 << 0x20, 3);
          auVar30._2_13_ = auVar29._2_13_;
          auVar30._0_2_ = auVar5._0_2_ & 0xff;
          uVar93 = CONCAT13(0, CONCAT12(auVar5[9], (ushort)auVar5[8]));
          auVar8._10_2_ = 0;
          auVar8._0_10_ = auVar31._0_10_;
          auVar8._12_2_ = (short)Var63;
          uVar77 = CONCAT42(auVar8._10_4_, auVar64._0_2_);
          auVar69._6_8_ = 0;
          auVar69._0_6_ = uVar77;
          auVar16._4_2_ = auVar65._0_2_;
          auVar16._0_4_ = auVar31._0_4_;
          auVar16._6_8_ = SUB148(auVar69 << 0x40, 6);
          auVar9._10_2_ = 0;
          auVar9._0_10_ = auVar30._0_10_;
          auVar9._12_2_ = (short)Var67;
          uVar78 = CONCAT42(auVar9._10_4_, auVar68._0_2_);
          auVar70._6_8_ = 0;
          auVar70._0_6_ = uVar78;
          auVar17._4_2_ = auVar29._2_2_;
          auVar17._0_4_ = auVar30._0_4_;
          auVar17._6_8_ = SUB148(auVar70 << 0x40, 6);
          auVar18[0xc] = auVar4[0xb];
          auVar18._0_12_ = ZEXT112(auVar4[0xc]) << 0x40;
          auVar19._10_3_ = auVar18._10_3_;
          auVar19._0_10_ = (unkuint10)auVar4[10] << 0x40;
          auVar71._5_8_ = 0;
          auVar71._0_5_ = auVar19._8_5_;
          auVar20[4] = auVar4[9];
          auVar20._0_4_ = uVar92;
          auVar20[5] = 0;
          auVar20._6_7_ = SUB137(auVar71 << 0x40, 6);
          auVar21[0xc] = auVar5[0xb];
          auVar21._0_12_ = ZEXT112(auVar5[0xc]) << 0x40;
          auVar22._10_3_ = auVar21._10_3_;
          auVar22._0_10_ = (unkuint10)auVar5[10] << 0x40;
          auVar72._5_8_ = 0;
          auVar72._0_5_ = auVar22._8_5_;
          auVar23[4] = auVar5[9];
          auVar23._0_4_ = uVar93;
          auVar23[5] = 0;
          auVar23._6_7_ = SUB137(auVar72 << 0x40, 6);
          pcVar1 = puVar83 + lVar79;
          cVar32 = pcVar1[1];
          cVar33 = pcVar1[2];
          cVar34 = pcVar1[3];
          cVar35 = pcVar1[4];
          cVar36 = pcVar1[5];
          cVar37 = pcVar1[6];
          cVar38 = pcVar1[7];
          cVar39 = pcVar1[8];
          cVar40 = pcVar1[9];
          cVar41 = pcVar1[10];
          cVar42 = pcVar1[0xb];
          cVar43 = pcVar1[0xc];
          cVar44 = pcVar1[0xd];
          cVar45 = pcVar1[0xe];
          cVar46 = pcVar1[0xf];
          pcVar2 = puVar83 + lVar79;
          *pcVar2 =
              (char)((int)((auVar30._0_4_ & 0xffff) + (auVar31._0_4_ & 0xffff)) >> 1) + *pcVar1;
          pcVar2[1] = (char)(auVar17._4_4_ + auVar16._4_4_ >> 1) + cVar32;
          pcVar2[2] = (char)((int)uVar78 + (int)uVar77 >> 1) + cVar33;
          pcVar2[3] =
              (char)((int)((auVar9._10_4_ >> 0x10) + (auVar8._10_4_ >> 0x10)) >> 1) + cVar34;
          pcVar2[4] = (char)((int)((uint)auVar28._8_2_ + (uint)auVar27._8_2_) >> 1) + cVar35;
          pcVar2[5] = (char)((int)((uint)auVar24._10_2_ + (uint)auVar15._10_2_) >> 1) + cVar36;
          pcVar2[6] = (char)((int)((uVar82 >> 8 & 0xffff) + (uVar80 >> 8 & 0xffff)) >> 1) + cVar37;
          pcVar2[7] = (char)((int)((uVar82 >> 0x18) + (uVar80 >> 0x18)) >> 1) + cVar38;
          pcVar2[8] = (char)((int)((uVar93 & 0xffff) + (uVar92 & 0xffff)) >> 1) + cVar39;
          pcVar2[9] = (char)(auVar23._4_4_ + auVar20._4_4_ >> 1) + cVar40;
          pcVar2[10] = (char)(auVar22._8_4_ + auVar19._8_4_ >> 1) + cVar41;
          pcVar2[0xb] = (char)((int)((uint)(uint3)(auVar21._10_3_ >> 0x10) +
                                     (uint)(uint3)(auVar18._10_3_ >> 0x10)) >>
                               1) +
                        cVar42;
          pcVar2[0xc] = (char)((int)((uint)auVar4[0xc] + (uint)auVar5[0xc]) >> 1) + cVar43;
          pcVar2[0xd] = (char)((int)((uint)auVar4[0xd] + (uint)auVar5[0xd]) >> 1) + cVar44;
          pcVar2[0xe] = (char)((int)((uint)auVar4[0xe] + (uint)auVar5[0xe]) >> 1) + cVar45;
          pcVar2[0xf] = (char)((int)((uint)auVar4[0xf] + (uint)auVar5[0xf]) >> 1) + cVar46;
          lVar79 = lVar79 + 0x10;
        } while (uVar89 < uVar86);
        puVar83 = puVar83 + uVar84;
        arg4 = arg4 + uVar84;
        arg3 = arg3 + uVar84;
        if (uVar87 == uVar84) {
          return;
        }
      }
      lVar79 = 0;
      do {
        puVar83[lVar79] = puVar83[lVar79] +
                          (char)((int)((uint)(byte)arg3[lVar79] + (uint)(byte)arg4[lVar79]) >> 1);
        lVar79 = lVar79 + 1;
      } while (uVar84 + (int)lVar79 < uVar87);
      return;
    }
    break;
  case 4:
    uVar86 = *(uint *)(arg2 + 4);
    uVar87 = (int)(*(byte *)(arg2 + 0xb) + 7) >> 3;
    puVar91 = arg3;
    puVar83 = arg4;
    if (uVar87 != 0) {
      uVar84 = uVar87 >> 4;
      uVar89 = uVar84 << 4;
      if ((uVar84 == 0) || (uVar87 < 0x10 || arg3 <= arg4 + 0x10 && arg4 <= arg3 + 0x10)) {
        uVar89 = 0;
        puVar83 = arg3;
        puVar91 = arg4;
      LAB_00551ca5:
        lVar79 = 0;
        do {
          puVar83[lVar79] = puVar83[lVar79] + puVar91[lVar79];
          lVar79 = lVar79 + 1;
        } while (uVar89 + (int)lVar79 < uVar87);
      } else {
        lVar79 = 0;
        uVar80 = 0;
        do {
          pcVar1 = arg4 + lVar79;
          cVar32 = pcVar1[1];
          cVar33 = pcVar1[2];
          cVar34 = pcVar1[3];
          cVar35 = pcVar1[4];
          cVar36 = pcVar1[5];
          cVar37 = pcVar1[6];
          cVar38 = pcVar1[7];
          cVar39 = pcVar1[8];
          cVar40 = pcVar1[9];
          cVar41 = pcVar1[10];
          cVar42 = pcVar1[0xb];
          cVar43 = pcVar1[0xc];
          cVar44 = pcVar1[0xd];
          cVar45 = pcVar1[0xe];
          cVar46 = pcVar1[0xf];
          uVar80 = uVar80 + 1;
          pcVar2 = arg3 + lVar79;
          cVar47 = pcVar2[1];
          cVar48 = pcVar2[2];
          cVar49 = pcVar2[3];
          cVar50 = pcVar2[4];
          cVar51 = pcVar2[5];
          cVar52 = pcVar2[6];
          cVar53 = pcVar2[7];
          cVar54 = pcVar2[8];
          cVar55 = pcVar2[9];
          cVar56 = pcVar2[10];
          cVar57 = pcVar2[0xb];
          cVar58 = pcVar2[0xc];
          cVar59 = pcVar2[0xd];
          cVar60 = pcVar2[0xe];
          cVar61 = pcVar2[0xf];
          pcVar3 = arg3 + lVar79;
          *pcVar3 = *pcVar1 + *pcVar2;
          pcVar3[1] = cVar32 + cVar47;
          pcVar3[2] = cVar33 + cVar48;
          pcVar3[3] = cVar34 + cVar49;
          pcVar3[4] = cVar35 + cVar50;
          pcVar3[5] = cVar36 + cVar51;
          pcVar3[6] = cVar37 + cVar52;
          pcVar3[7] = cVar38 + cVar53;
          pcVar3[8] = cVar39 + cVar54;
          pcVar3[9] = cVar40 + cVar55;
          pcVar3[10] = cVar41 + cVar56;
          pcVar3[0xb] = cVar42 + cVar57;
          pcVar3[0xc] = cVar43 + cVar58;
          pcVar3[0xd] = cVar44 + cVar59;
          pcVar3[0xe] = cVar45 + cVar60;
          pcVar3[0xf] = cVar46 + cVar61;
          lVar79 = lVar79 + 0x10;
        } while (uVar80 < uVar84);
        puVar83 = arg3 + uVar89;
        puVar91 = arg4 + uVar89;
        if (uVar87 != uVar89)
          goto LAB_00551ca5;
      }
      lVar79 = (ulong)(uVar87 - 1) + 1;
      puVar83 = arg4 + lVar79;
      puVar91 = arg3 + lVar79;
    }
    if (uVar86 != uVar87) {
      lVar79 = 0;
      do {
        bVar6 = arg4[lVar79];
        uVar89 = (uint)(byte)puVar83[lVar79] - (uint)bVar6;
        uVar84 = (uint)(byte)arg3[lVar79] - (uint)bVar6;
        iVar85 = ((int)uVar89 >> 0x1f ^ uVar89) - ((int)uVar89 >> 0x1f);
        iVar88 = ((int)uVar84 >> 0x1f ^ uVar84) - ((int)uVar84 >> 0x1f);
        uVar80 = (int)(uVar84 + uVar89) >> 0x1f;
        iVar81 = (uVar84 + uVar89 ^ uVar80) - uVar80;
        if (((iVar81 < iVar85) || (bVar90 = arg3[lVar79], iVar88 < iVar85)) &&
            (bVar90 = puVar83[lVar79], iVar81 < iVar88)) {
          bVar90 = bVar6;
        }
        puVar91[lVar79] = puVar91[lVar79] + bVar90;
        lVar79 = lVar79 + 1;
      } while ((uint)lVar79 < uVar86 - uVar87);
      return;
    }
    break;
  default:
    png_warning(arg1, "Ignoring bad adaptive filter type");
    *arg3 = 0;
  }
  return;
}

/* ======================================================================
 * png_read_finish_row  (Ghidra `png_read_finish_row` @ 00551f10)
 * Signature: uint8_t png_read_finish_row(void)
 * Calls: `inflate`, `inflateReset`, `memcmp`, `png_calculate_crc`, `png_crc_finish`, `png_error`, `png_memset_check`, `png_read_data`, `png_reset_crc`, `png_warning`
 * Called by: `png_read_row`
 */
void png_read_finish_row(long arg1)

{
  void *__s1;
  byte bVar1;
  uint64_t uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  char *pcVar8;
  ulong uVar9;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  uint8_t local_39[9];

  uVar3 = *(int *)(arg1 + 0x1d0) + 1;
  *(uint *)(arg1 + 0x1d0) = uVar3;
  if (*(uint *)(arg1 + 0x1bc) <= uVar3) {
    if (*(char *)(arg1 + 0x233) != '\0') {
      *(uint32_t *)(arg1 + 0x1d0) = 0;
      png_memset_check(arg1, *(uint64_t *)(arg1 + 0x1d8), 0, *(int *)(arg1 + 0x1c4) + 1);
      bVar7 = *(byte *)(arg1 + 0x234);
      while (bVar7 = bVar7 + 1, bVar7 < 7) {
        uVar6 = (ulong)bVar7;
        uVar3 = ((((&png_pass_inc)[uVar6] - 1) + *(int *)(arg1 + 0x1b4)) -
                 *(int *)(png_pass_start + uVar6 * 4)) /
                (uint)(&png_pass_inc)[uVar6];
        *(uint *)(arg1 + 0x1cc) = uVar3;
        bVar1 = *(byte *)(arg1 + 0x239);
        if (bVar1 < 8) {
          uVar5 = bVar1 * uVar3 + 7 >> 3;
        } else {
          uVar5 = (bVar1 >> 3) * uVar3;
        }
        *(uint *)(arg1 + 0x1c8) = uVar5 + 1;
        if (((*(byte *)(arg1 + 0x11c) & 2) != 0) ||
            (*(uint *)(arg1 + 0x1bc) = ((((&png_pass_yinc)[uVar6] - 1) + *(int *)(arg1 + 0x1b8)) -
                                        *(int *)(png_pass_ystart + uVar6 * 4)) /
                                       (uint)(&png_pass_yinc)[uVar6],
             uVar3 != 0)) {
          *(byte *)(arg1 + 0x234) = bVar7;
          return;
        }
      }
      *(byte *)(arg1 + 0x234) = bVar7;
    }
    if ((*(byte *)(arg1 + 0x118) & 0x20) == 0) {
      *(uint32_t *)(arg1 + 0x140) = 1;
      __s1 = (void *)(arg1 + 0x22c);
      *(uint8_t **)(arg1 + 0x138) = local_39;
      do {
        if (*(int *)(arg1 + 0x128) == 0) {
          uVar3 = *(uint *)(arg1 + 0x214);
          while (uVar3 == 0) {
            png_crc_finish(arg1, 0);
            png_read_data(arg1, &local_48, 4);
            iVar4 = (uint)local_48 * 0x1000000 + (uint)local_47 * 0x10000 + (uint)local_45 +
                    (uint)local_46 * 0x100;
            if (iVar4 < 0) {
              png_error(arg1, "PNG unsigned integer out of range.");
            }
            *(int *)(arg1 + 0x214) = iVar4;
            png_reset_crc(arg1);
            png_read_data(arg1, __s1, 4);
            png_calculate_crc(arg1, __s1, 4);
            iVar4 = memcmp(__s1, &png_IDAT, 4);
            if (iVar4 != 0) {
              png_error(arg1);
            }
            uVar3 = *(uint *)(arg1 + 0x214);
          }
          uVar6 = *(ulong *)(arg1 + 0x198);
          uVar2 = *(uint64_t *)(arg1 + 400);
          uVar9 = (ulong)uVar3;
          *(int *)(arg1 + 0x128) = (int)uVar6;
          *(uint64_t *)(arg1 + 0x120) = uVar2;
          if (uVar9 < uVar6) {
            *(uint *)(arg1 + 0x128) = uVar3;
          } else {
            uVar9 = uVar6 & 0xffffffff;
          }
          png_read_data(arg1, uVar2, uVar9);
          png_calculate_crc(arg1, uVar2, uVar9);
          *(int *)(arg1 + 0x214) = *(int *)(arg1 + 0x214) - *(int *)(arg1 + 0x128);
        }
        iVar4 = inflate(arg1 + 0x120, 1);
        if (iVar4 == 1) {
          if (((*(int *)(arg1 + 0x140) == 0) || (*(int *)(arg1 + 0x128) != 0)) ||
              (iVar4 = 0, *(int *)(arg1 + 0x214) != 0)) {
            png_warning(arg1, "Extra compressed data");
            iVar4 = *(int *)(arg1 + 0x214);
          }
          *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 8;
          *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 0x20;
          goto LAB_00552181;
        }
        if (iVar4 != 0) {
          pcVar8 = *(char **)(arg1 + 0x150);
          if (pcVar8 == (char *)0x0) {
            pcVar8 = "Decompression Error";
          }
          png_error(arg1, pcVar8);
        }
      } while (*(int *)(arg1 + 0x140) != 0);
      png_warning(arg1, "Extra compressed data.");
      *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 8;
      *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 0x20;
      iVar4 = *(int *)(arg1 + 0x214);
    LAB_00552181:
      *(uint32_t *)(arg1 + 0x140) = 0;
    } else {
      iVar4 = *(int *)(arg1 + 0x214);
    }
    if ((iVar4 != 0) || (*(int *)(arg1 + 0x128) != 0)) {
      png_warning(arg1, "Extra compression data");
    }
    inflateReset(arg1 + 0x120);
    *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 8;
  }
  return;
}

/* ======================================================================
 * png_read_start_row  (Ghidra `png_read_start_row` @ 005522e0)
 * Signature: uint8_t png_read_start_row(void)
 * Calls: `png_error`, `png_init_read_transformations`, `png_malloc`, `png_memset_check`
 * Called by: `png_read_png`, `png_read_row`, `png_read_update_info`, `png_start_read_image`
 */
void png_read_start_row(long arg1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint64_t uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;

  *(uint32_t *)(arg1 + 0x128) = 0;
  png_init_read_transformations();
  if (*(char *)(arg1 + 0x233) == '\0') {
    iVar8 = *(int *)(arg1 + 0x1b4);
    bVar6 = *(byte *)(arg1 + 0x239);
    uVar3 = *(uint *)(arg1 + 0x11c);
    *(uint32_t *)(arg1 + 0x1bc) = *(uint32_t *)(arg1 + 0x1b8);
    *(int *)(arg1 + 0x1cc) = iVar8;
    *(int *)(arg1 + 0x1c8) = *(int *)(arg1 + 0x1c4) + 1;
  } else {
    uVar3 = *(uint *)(arg1 + 0x11c);
    if ((uVar3 & 2) == 0) {
      *(uint *)(arg1 + 0x1bc) =
          (((png_pass_yinc - 1) + *(int *)(arg1 + 0x1b8)) - png_pass_ystart._0_4_) / png_pass_yinc;
    } else {
      *(uint32_t *)(arg1 + 0x1bc) = *(uint32_t *)(arg1 + 0x1b8);
    }
    iVar8 = *(int *)(arg1 + 0x1b4);
    uVar2 = (uint)((iVar8 + -1 + (&png_pass_inc)[*(byte *)(arg1 + 0x234)]) -
                   *(int *)(png_pass_start + (ulong) * (byte *)(arg1 + 0x234) * 4)) /
            (uint)(&png_pass_inc)[*(byte *)(arg1 + 0x234)];
    bVar6 = *(byte *)(arg1 + 0x239);
    *(uint *)(arg1 + 0x1cc) = uVar2;
    if (bVar6 < 8) {
      uVar2 = uVar2 * bVar6 + 7 >> 3;
    } else {
      uVar2 = uVar2 * (bVar6 >> 3);
    }
    *(uint *)(arg1 + 0x1c8) = uVar2 + 1;
  }
  uVar2 = (uint)bVar6;
  if (((uVar3 & 4) != 0) && (*(byte *)(arg1 + 0x237) < 8)) {
    uVar2 = 8;
  }
  if ((uVar3 & 0x1000) != 0) {
    cVar1 = *(char *)(arg1 + 0x236);
    if (cVar1 == '\x03') {
      uVar2 = (-(uint)(*(short *)(arg1 + 0x22a) == 0) & 0xfffffff8) + 0x20;
    } else if (cVar1 == '\0') {
      if (uVar2 < 8) {
        uVar2 = 8;
      }
      if (*(short *)(arg1 + 0x22a) != 0) {
        uVar2 = uVar2 * 2;
      }
    } else if ((cVar1 == '\x02') && (*(short *)(arg1 + 0x22a) != 0)) {
      uVar2 = (uVar2 * 4) / 3;
    }
  }
  uVar7 = uVar2;
  if ((uVar3 & 0x8000) != 0) {
    cVar1 = *(char *)(arg1 + 0x236);
    if (cVar1 == '\x03') {
      uVar7 = 0x20;
    } else if (cVar1 == '\0') {
      uVar7 = 0x10;
      if (8 < (int)uVar2) {
        uVar7 = 0x20;
      }
    } else if ((cVar1 == '\x02') && (uVar7 = 0x20, 0x20 < (int)uVar2)) {
      uVar7 = 0x40;
    }
  }
  uVar2 = uVar7;
  if ((uVar3 & 0x4000) != 0) {
    if ((((*(short *)(arg1 + 0x22a) == 0) || ((uVar3 & 0x1000) == 0)) && ((uVar3 & 0x8000) == 0)) &&
        (cVar1 = *(char *)(arg1 + 0x236), cVar1 != '\x04')) {
      if ((int)uVar7 < 9) {
        uVar2 = (uint)(cVar1 == '\x06') * 8 + 0x18;
      } else {
        uVar2 = 0x40;
        if (cVar1 != '\x06') {
          uVar2 = 0x30;
        }
      }
    } else {
      uVar2 = 0x20;
      if (0x10 < (int)uVar7) {
        uVar2 = 0x40;
      }
    }
  }
  if (((uVar3 & 0x100000) != 0) &&
      (uVar3 = (uint) * (byte *)(arg1 + 0x110) * (uint) * (byte *)(arg1 + 0x111),
       (int)uVar2 < (int)uVar3)) {
    uVar2 = uVar3;
  }
  uVar3 = iVar8 + 7U & 0xfffffff8;
  if ((int)uVar2 < 8) {
    uVar3 = uVar3 * uVar2 >> 3;
  } else {
    uVar3 = (uVar2 >> 3) * uVar3;
  }
  lVar4 = png_malloc(arg1, uVar3 + 0x41 + ((int)(uVar2 + 7) >> 3));
  iVar8 = *(int *)(arg1 + 0x1c4);
  *(long *)(arg1 + 0x420) = lVar4;
  *(long *)(arg1 + 0x1e0) = lVar4 + 0x20;
  if (iVar8 == -1) {
    png_error(arg1, "Row has too many bytes to allocate in memory.");
    iVar8 = *(int *)(arg1 + 0x1c4);
  }
  uVar5 = png_malloc(arg1, iVar8 + 1);
  *(uint64_t *)(arg1 + 0x1d8) = uVar5;
  png_memset_check(arg1, uVar5, 0, *(int *)(arg1 + 0x1c4) + 1);
  *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 0x40;
  return;
}

/* ======================================================================
 * png_set_bKGD  (Ghidra `png_set_bKGD` @ 00552640)
 * Signature: uint8_t png_set_bKGD(void)
 * Calls: (none)
 * Called by: `png_handle_bKGD`
 */
void png_set_bKGD(long arg1, long arg2, uint64_t *arg3)

{
  uint16_t uVar1;

  if ((arg2 != 0) && (arg1 != 0)) {
    *(uint64_t *)(arg2 + 0x6a) = *arg3;
    uVar1 = *(uint16_t *)(arg3 + 1);
    *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 0x20;
    *(uint16_t *)(arg2 + 0x72) = uVar1;
    return;
  }
  return;
}

/* ======================================================================
 * png_set_cHRM  (Ghidra `png_set_cHRM` @ 00552670)
 * Signature: uint8_t png_set_cHRM(void)
 * Calls: `png_warning`
 * Called by: `png_handle_cHRM`
 */
void png_set_cHRM(double arg1, double arg2, double arg3, double arg4, double arg5, double arg6,
                  double arg7, double arg8, long arg9, long arg10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;

  if (arg10 == 0) {
    return;
  }
  if (arg9 == 0) {
    return;
  }
  if ((((arg1 == 0.0) && (arg2 == 0.0)) && (arg3 == 0.0)) && (arg4 == 0.0)) {
    if (arg5 != 0.0)
      goto LAB_0055269d;
    if (((arg6 == 0.0) && (arg7 == 0.0)) && (arg8 == 0.0)) {
      png_warning(arg9, "Ignoring attempt to set all-zero chromaticity values");
      return;
    }
  } else {
    if (arg1 < 0.0)
      goto LAB_00552900;
  LAB_0055269d:
    if (arg2 < 0.0)
      goto LAB_00552900;
  }
  if (((0.0 <= arg3) && (0.0 <= arg4)) &&
      ((0.0 <= arg5 && (((0.0 <= arg6 && (0.0 <= arg7)) && (0.0 <= arg8)))))) {
    if (((arg1 <= DAT_005d3b70 /* R:1.9515639880220904e-20f */) &&
         (arg2 <= DAT_005d3b70 /* R:1.9515639880220904e-20f */)) &&
        ((arg3 <= DAT_005d3b70 /* R:1.9515639880220904e-20f */ &&
          (((arg4 <= DAT_005d3b70 /* R:1.9515639880220904e-20f */ &&
             (arg5 <= DAT_005d3b70 /* R:1.9515639880220904e-20f */)) &&
            ((arg6 <= DAT_005d3b70 /* R:1.9515639880220904e-20f */ &&
              ((arg7 <= DAT_005d3b70 /* R:1.9515639880220904e-20f */ &&
                (arg8 <= DAT_005d3b70 /* R:1.9515639880220904e-20f */)))))))))) {
      *(uint *)(arg10 + 8) = *(uint *)(arg10 + 8) | 4;
      dVar1 = DAT_005d2720 /* R:0.0f */;
      *(float *)(arg10 + 0x98) = (float)arg1;
      *(float *)(arg10 + 0x9c) = (float)arg2;
      *(float *)(arg10 + 0xa0) = (float)arg3;
      *(float *)(arg10 + 0xa4) = (float)arg4;
      *(float *)(arg10 + 0xa8) = (float)arg5;
      *(float *)(arg10 + 0xac) = (float)arg6;
      *(float *)(arg10 + 0xb0) = (float)arg7;
      *(float *)(arg10 + 0xb4) = (float)arg8;
      dVar2 = arg2 * dVar1 + DAT_005d2728 /* R:0.0f */;
      dVar3 = arg3 * dVar1 + DAT_005d2728 /* R:0.0f */;
      dVar4 = arg4 * dVar1 + DAT_005d2728 /* R:0.0f */;
      dVar5 = arg5 * dVar1 + DAT_005d2728 /* R:0.0f */;
      dVar6 = arg6 * dVar1 + DAT_005d2728 /* R:0.0f */;
      dVar7 = arg7 * dVar1 + DAT_005d2728 /* R:0.0f */;
      dVar8 = arg8 * dVar1 + DAT_005d2728 /* R:0.0f */;
      *(int *)(arg10 + 0x144) = (int)(arg1 * dVar1 + DAT_005d2728 /* R:0.0f */);
      *(int *)(arg10 + 0x148) = (int)dVar2;
      *(int *)(arg10 + 0x14c) = (int)dVar3;
      *(int *)(arg10 + 0x150) = (int)dVar4;
      *(int *)(arg10 + 0x154) = (int)dVar5;
      *(int *)(arg10 + 0x158) = (int)dVar6;
      *(int *)(arg10 + 0x15c) = (int)dVar7;
      *(int *)(arg10 + 0x160) = (int)dVar8;
      return;
    }
    png_warning(arg9, "Ignoring attempt to set chromaticity value exceeding 21474.83");
    return;
  }
LAB_00552900:
  png_warning(arg9, "Ignoring attempt to set negative chromaticity value");
  return;
}

/* ======================================================================
 * png_set_cHRM_fixed  (Ghidra `png_set_cHRM_fixed` @ 00552920)
 * Signature: uint8_t png_set_cHRM_fixed(void)
 * Calls: `png_warning`
 * Called by: `png_handle_cHRM`
 */
void png_set_cHRM_fixed(long arg1, long arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                        int arg8, int arg9, int arg10)

{
  double dVar1;

  if ((arg2 != 0) && (arg1 != 0)) {
    if (((((((arg4 == 0 && arg3 == 0) && arg5 == 0) && arg6 == 0) && arg7 == 0) && arg8 == 0) &&
         arg9 == 0) &&
        arg10 == 0) {
      png_warning(arg1, "Ignoring attempt to set all-zero chromaticity values");
      return;
    }
    if (((((arg4 < 0) || (arg3 < 0)) || (arg6 < 0)) || ((arg5 < 0 || (arg8 < 0)))) ||
        ((arg7 < 0 || ((arg10 < 0 || (arg9 < 0)))))) {
      png_warning(arg1, "Ignoring attempt to set negative chromaticity value");
      return;
    }
    *(ulong *)(arg2 + 0x144) = CONCAT44(arg4, arg3);
    *(ulong *)(arg2 + 0x14c) = CONCAT44(arg6, arg5);
    *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 4;
    *(ulong *)(arg2 + 0x154) = CONCAT44(arg8, arg7);
    *(ulong *)(arg2 + 0x15c) = CONCAT44(arg10, arg9);
    dVar1 = DAT_005d3b78 /* R:-1.3686737149039799e-33f */;
    *(float *)(arg2 + 0x98) = (float)((double)arg3 * DAT_005d3b78 /* R:-1.3686737149039799e-33f */);
    *(float *)(arg2 + 0x9c) = (float)((double)arg4 * dVar1);
    *(float *)(arg2 + 0xa0) = (float)((double)arg5 * dVar1);
    *(float *)(arg2 + 0xa4) = (float)((double)arg6 * dVar1);
    *(float *)(arg2 + 0xa8) = (float)((double)arg7 * dVar1);
    *(float *)(arg2 + 0xac) = (float)((double)arg8 * dVar1);
    *(float *)(arg2 + 0xb0) = (float)((double)arg9 * dVar1);
    *(float *)(arg2 + 0xb4) = (float)((double)arg10 * dVar1);
  }
  return;
}

/* ======================================================================
 * png_set_gAMA  (Ghidra `png_set_gAMA` @ 00552b50)
 * Signature: uint8_t png_set_gAMA(void)
 * Calls: `png_warning`
 * Called by: `png_handle_gAMA`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_set_gAMA(double arg1, long arg2, long arg3)

{
  bool bVar1;

  if ((arg3 != 0) && (arg2 != 0)) {
    if (DAT_005d3b70 /* R:1.9515639880220904e-20f */ < arg1) {
      png_warning(arg2, "Limiting gamma to 21474.83");
      *(uint *)(arg3 + 8) = *(uint *)(arg3 + 8) | 1;
      *(uint32_t *)(arg3 + 0x2c) = 0x46a7c5a9;
      *(uint32_t *)(arg3 + 0x140) = 0x7ffffd78;
    } else {
      *(uint *)(arg3 + 8) = *(uint *)(arg3 + 8) | 1;
      bVar1 = arg1 == _DAT_005d3b68 /* R:0.0f */;
      *(float *)(arg3 + 0x2c) = (float)arg1;
      *(int *)(arg3 + 0x140) = (int)(DAT_005d2720 /* R:0.0f */ * arg1 + DAT_005d2728 /* R:0.0f */);
      if (bVar1) {
        png_warning(arg2, "Setting gamma=0");
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * png_set_gAMA_fixed  (Ghidra `png_set_gAMA_fixed` @ 00552be0)
 * Signature: uint8_t png_set_gAMA_fixed(void)
 * Calls: `png_warning`
 * Called by: `png_handle_gAMA`
 */
void png_set_gAMA_fixed(long arg1, long arg2, int arg3)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    if (arg3 < 0) {
      png_warning(arg1, "Setting negative gamma to zero");
      *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 1;
      *(uint32_t *)(arg2 + 0x2c) = 0;
      *(uint32_t *)(arg2 + 0x140) = 0;
    } else {
      *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 1;
      *(int *)(arg2 + 0x140) = arg3;
      *(float *)(arg2 + 0x2c) =
          (float)((double)arg3 * DAT_005d3b78 /* R:-1.3686737149039799e-33f */);
      if (arg3 != 0) {
        return;
      }
    }
    png_warning(arg1, "Setting gamma=0");
    return;
  }
  return;
}

/* ======================================================================
 * png_set_hIST  (Ghidra `png_set_hIST` @ 00552c80)
 * Signature: uint8_t png_set_hIST(void)
 * Calls: `png_free_data`, `png_malloc_warn`, `png_warning`
 * Called by: `png_handle_hIST`
 */
void png_set_hIST(long arg1, long arg2, long arg3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;

  if ((arg2 != 0) && (arg1 != 0)) {
    pcVar4 = "Invalid palette size, hIST allocation skipped.";
    if ((ushort)(*(short *)(arg2 + 0x18) - 1U) < 0x100) {
      png_free_data(arg1, arg2, 8);
      lVar1 = png_malloc_warn(arg1, 0x200);
      *(long *)(arg1 + 0x380) = lVar1;
      if (lVar1 != 0) {
        lVar3 = 0;
        iVar2 = 0;
        if (*(short *)(arg2 + 0x18) != 0) {
          do {
            iVar2 = iVar2 + 1;
            *(uint16_t *)(lVar1 + lVar3) = *(uint16_t *)(arg3 + lVar3);
            lVar3 = lVar3 + 2;
            lVar1 = *(long *)(arg1 + 0x380);
          } while (iVar2 < (int)(uint) * (ushort *)(arg2 + 0x18));
        }
        *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 0x40;
        *(uint *)(arg2 + 0xdc) = *(uint *)(arg2 + 0xdc) | 8;
        *(long *)(arg2 + 0x90) = lVar1;
        return;
      }
      pcVar4 = "Insufficient memory for hIST chunk data.";
    }
    png_warning(arg1, pcVar4);
    return;
  }
  return;
}

/* ======================================================================
 * png_set_IHDR  (Ghidra `png_set_IHDR` @ 00552d30)
 * Signature: uint8_t png_set_IHDR(void)
 * Calls: `png_error`, `png_warning`
 * Called by: `png_handle_IHDR`
 */
void png_set_IHDR(long arg1, uint *arg2, ulong arg3, ulong arg4, int arg5, uint arg6, int arg7,
                  int arg8, int arg9)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  uVar3 = (uint)arg3;
  uVar5 = (uint)arg4;
  if (arg2 == (uint *)0x0) {
    return;
  }
  if (arg1 == 0) {
    return;
  }
  if ((uVar5 == 0) || (uVar3 == 0)) {
    png_error(arg1, "Image width or height is zero in IHDR");
  }
  if ((*(uint *)(arg1 + 0x444) < uVar3) || (*(uint *)(arg1 + 0x448) < uVar5)) {
    png_error(arg1, "image size exceeds user limits in IHDR");
  }
  if (((arg4 & 0xffffffff) >> 0x1f != 0) || ((arg3 >> 0x1f & 1) != 0)) {
    png_error(arg1, "Invalid image size in IHDR");
  }
  if (0x1fffff7e < uVar3) {
    png_warning(arg1, "Width is too large for libpng to process pixels");
  }
  if ((((1 < arg5 - 1U) && (arg5 != 4)) && (arg5 != 0x10)) && (arg5 != 8)) {
    png_error(arg1, "Invalid bit depth in IHDR");
  }
  if (((arg6 == 1) || ((int)arg6 < 0)) || ((6 < (int)arg6 || (arg6 == 5)))) {
    png_error(arg1, "Invalid color type in IHDR");
    if (arg6 == 3)
      goto LAB_00552fa7;
  LAB_00552e1e:
    if ((((arg6 != 4) && (arg6 != 2)) && (arg6 != 6)) || (7 < arg5))
      goto LAB_00552e38;
  } else {
    if (arg6 != 3)
      goto LAB_00552e1e;
  LAB_00552fa7:
    if (arg5 < 9)
      goto LAB_00552e1e;
  }
  png_error(arg1, "Invalid color type/bit depth combination in IHDR");
LAB_00552e38:
  if (1 < arg7) {
    png_error(arg1, "Unknown interlace method in IHDR");
  }
  if (arg8 != 0) {
    png_error(arg1, "Unknown compression method in IHDR");
  }
  if (((*(byte *)(arg1 + 0x115) & 0x10) != 0) && (*(int *)(arg1 + 0x3f0) != 0)) {
    png_warning(arg1, "MNG features are not allowed in a PNG datastream");
  }
  if (((arg9 != 0) && ((((arg9 != 0x40 || ((*(byte *)(arg1 + 0x3f0) & 4) == 0)) ||
                         ((*(byte *)(arg1 + 0x115) & 0x10) != 0)) ||
                        ((arg6 != 6 && (arg6 != 2)))))) &&
      (png_error(arg1, "Unknown filter method in IHDR"), (*(byte *)(arg1 + 0x115) & 0x10) != 0)) {
    png_warning(arg1, "Invalid filter method in IHDR");
  }
  *arg2 = uVar3;
  arg2[1] = uVar5;
  *(char *)(arg2 + 7) = (char)arg5;
  *(char *)((long)arg2 + 0x1d) = (char)arg6;
  *(uint8_t *)((long)arg2 + 0x1e) = (uint8_t)arg8;
  *(uint8_t *)((long)arg2 + 0x1f) = (uint8_t)arg9;
  *(uint8_t *)(arg2 + 8) = (uint8_t)arg7;
  if ((char)arg6 == '\x03') {
    *(uint8_t *)((long)arg2 + 0x21) = 1;
    iVar4 = 1;
  } else {
    if ((arg6 & 2) == 0) {
      *(uint8_t *)((long)arg2 + 0x21) = 1;
      iVar2 = 2;
      iVar4 = 1;
    } else {
      *(uint8_t *)((long)arg2 + 0x21) = 3;
      iVar2 = 4;
      iVar4 = 3;
    }
    if ((arg6 & 4) != 0) {
      *(char *)((long)arg2 + 0x21) = (char)iVar2;
      iVar4 = iVar2;
    }
  }
  bVar1 = (byte)(iVar4 * arg5);
  *(byte *)((long)arg2 + 0x22) = bVar1;
  if (uVar3 < 0x1fffff7f) {
    if (bVar1 < 8) {
      uVar3 = (iVar4 * arg5 & 0xffU) * uVar3 + 7 >> 3;
    } else {
      uVar3 = (bVar1 >> 3) * uVar3;
    }
    arg2[3] = uVar3;
  } else {
    arg2[3] = 0;
  }
  return;
}

/* ======================================================================
 * png_set_oFFs  (Ghidra `png_set_oFFs` @ 005530e0)
 * Signature: uint8_t png_set_oFFs(void)
 * Calls: (none)
 * Called by: `png_handle_oFFs`
 */
void png_set_oFFs(long arg1, long arg2, uint32_t arg3, uint32_t arg4, uint8_t arg5)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 0x100;
    *(uint32_t *)(arg2 + 0x74) = arg3;
    *(uint32_t *)(arg2 + 0x78) = arg4;
    *(uint8_t *)(arg2 + 0x7c) = arg5;
  }
  return;
}

/* ======================================================================
 * png_set_pCAL  (Ghidra `png_set_pCAL` @ 00553100)
 * Signature: uint8_t png_set_pCAL(void)
 * Calls: `memcpy`, `png_malloc_warn`, `png_warning`, `strlen`
 * Called by: `png_handle_pCAL`
 */
void png_set_pCAL(long arg1, long arg2, char *arg3, uint32_t arg4, uint32_t arg5, uint8_t arg6,
                  int arg7, char *arg8, long arg9)

{
  uint64_t *puVar1;
  long lVar2;
  size_t sVar3;
  void *pvVar4;
  long lVar5;
  uint64_t uVar6;
  uint uVar7;
  char *pcVar8;
  ulong __n;

  if ((arg2 == 0) || (arg1 == 0)) {
    return;
  }
  sVar3 = strlen(arg3);
  uVar7 = (int)sVar3 + 1;
  pvVar4 = (void *)png_malloc_warn(arg1, uVar7);
  *(void **)(arg2 + 0xb8) = pvVar4;
  pcVar8 = "Insufficient memory for pCAL purpose.";
  if (pvVar4 != (void *)0x0) {
    memcpy(pvVar4, arg3, (ulong)uVar7);
    *(char *)(arg2 + 0xd9) = (char)arg7;
    *(uint32_t *)(arg2 + 0xc0) = arg4;
    *(uint32_t *)(arg2 + 0xc4) = arg5;
    *(uint8_t *)(arg2 + 0xd8) = arg6;
    sVar3 = strlen(arg8);
    uVar7 = (int)sVar3 + 1;
    pvVar4 = (void *)png_malloc_warn(arg1, uVar7);
    *(void **)(arg2 + 200) = pvVar4;
    pcVar8 = "Insufficient memory for pCAL units.";
    if (pvVar4 != (void *)0x0) {
      memcpy(pvVar4, arg8, (ulong)uVar7);
      lVar5 = png_malloc_warn(arg1, arg7 * 8 + 8);
      *(long *)(arg2 + 0xd0) = lVar5;
      pcVar8 = "Insufficient memory for pCAL params.";
      if (lVar5 != 0) {
        *(uint64_t *)(lVar5 + (long)arg7 * 8) = 0;
        if (0 < arg7) {
          lVar5 = 0;
          do {
            sVar3 = strlen(*(char **)(arg9 + lVar5));
            lVar2 = *(long *)(arg2 + 0xd0);
            __n = (ulong)((int)sVar3 + 1);
            uVar6 = png_malloc_warn(arg1, __n);
            *(uint64_t *)(lVar5 + lVar2) = uVar6;
            pvVar4 = *(void **)(*(long *)(arg2 + 0xd0) + lVar5);
            if (pvVar4 == (void *)0x0) {
              pcVar8 = "Insufficient memory for pCAL parameter.";
              goto LAB_005532b9;
            }
            puVar1 = (uint64_t *)(arg9 + lVar5);
            lVar5 = lVar5 + 8;
            memcpy(pvVar4, (void *)*puVar1, __n);
          } while (lVar5 != (ulong)(arg7 - 1) * 8 + 8);
        }
        *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 0x400;
        *(uint *)(arg2 + 0xdc) = *(uint *)(arg2 + 0xdc) | 0x80;
        return;
      }
    }
  }
LAB_005532b9:
  png_warning(arg1, pcVar8);
  return;
}

/* ======================================================================
 * png_set_sCAL  (Ghidra `png_set_sCAL` @ 005532f0)
 * Signature: uint8_t png_set_sCAL(void)
 * Calls: (none)
 * Called by: `png_handle_sCAL`
 */
void png_set_sCAL(uint64_t arg1, uint64_t arg2, long arg3, long arg4, uint8_t arg5)

{
  if ((arg4 != 0) && (arg3 != 0)) {
    *(uint *)(arg4 + 8) = *(uint *)(arg4 + 8) | 0x4000;
    *(uint64_t *)(arg4 + 0x118) = arg1;
    *(uint8_t *)(arg4 + 0x114) = arg5;
    *(uint64_t *)(arg4 + 0x120) = arg2;
  }
  return;
}

/* ======================================================================
 * png_set_pHYs  (Ghidra `png_set_pHYs` @ 00553320)
 * Signature: uint8_t png_set_pHYs(void)
 * Calls: (none)
 * Called by: `png_handle_pHYs`
 */
void png_set_pHYs(long arg1, long arg2, uint32_t arg3, uint32_t arg4, uint8_t arg5)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 0x80;
    *(uint32_t *)(arg2 + 0x80) = arg3;
    *(uint32_t *)(arg2 + 0x84) = arg4;
    *(uint8_t *)(arg2 + 0x88) = arg5;
  }
  return;
}

/* ======================================================================
 * png_set_PLTE  (Ghidra `png_set_PLTE` @ 00553350)
 * Signature: uint8_t png_set_PLTE(void)
 * Calls: `memcpy`, `png_error`, `png_free_data`, `png_malloc`, `png_warning`
 * Called by: `png_handle_PLTE`
 */
void png_set_PLTE(long arg1, long arg2, void *arg3, uint arg4)

{
  uint64_t *puVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  byte bVar5;

  bVar5 = 0;
  if ((arg2 != 0) && (arg1 != 0)) {
    if (0x100 < arg4) {
      if (*(char *)(arg2 + 0x1d) != '\x03') {
        png_warning();
        return;
      }
      png_error(arg1, "Invalid palette length");
    }
    png_free_data(arg1, arg2, 0x1000, 0);
    puVar1 = (uint64_t *)png_malloc(arg1, 0x300);
    bVar4 = ((ulong)puVar1 & 1) != 0;
    *(uint64_t **)(arg1 + 0x220) = puVar1;
    uVar3 = 0x300;
    if (bVar4) {
      *(uint8_t *)puVar1 = 0;
      puVar1 = (uint64_t *)((long)puVar1 + 1);
      uVar3 = 0x2ff;
    }
    if (((ulong)puVar1 & 2) != 0) {
      *(uint16_t *)puVar1 = 0;
      uVar3 = (ulong)((int)uVar3 - 2);
      puVar1 = (uint64_t *)((long)puVar1 + 2);
    }
    if (((ulong)puVar1 & 4) != 0) {
      *(uint32_t *)puVar1 = 0;
      uVar3 = (ulong)((int)uVar3 - 4);
      puVar1 = (uint64_t *)((long)puVar1 + 4);
    }
    for (uVar2 = uVar3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + (ulong)bVar5 * -2 + 1;
    }
    if ((uVar3 & 4) != 0) {
      *(uint32_t *)puVar1 = 0;
      puVar1 = (uint64_t *)((long)puVar1 + 4);
    }
    if ((uVar3 & 2) != 0) {
      *(uint16_t *)puVar1 = 0;
      puVar1 = (uint64_t *)((long)puVar1 + 2);
    }
    if (bVar4) {
      *(uint8_t *)puVar1 = 0;
    }
    memcpy(*(void **)(arg1 + 0x220), arg3, (long)(int)arg4 * 3);
    *(uint64_t *)(arg2 + 0x10) = *(uint64_t *)(arg1 + 0x220);
    *(short *)(arg1 + 0x228) = (short)arg4;
    *(uint *)(arg2 + 0xdc) = *(uint *)(arg2 + 0xdc) | 0x1000;
    *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 8;
    *(short *)(arg2 + 0x18) = (short)arg4;
  }
  return;
}

/* ======================================================================
 * png_set_sBIT  (Ghidra `png_set_sBIT` @ 005534e0)
 * Signature: uint8_t png_set_sBIT(void)
 * Calls: (none)
 * Called by: `png_handle_sBIT`
 */
void png_set_sBIT(long arg1, long arg2, uint32_t *arg3)

{
  uint8_t uVar1;

  if ((arg2 != 0) && (arg1 != 0)) {
    *(uint32_t *)(arg2 + 0x50) = *arg3;
    uVar1 = *(uint8_t *)(arg3 + 1);
    *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 2;
    *(uint8_t *)(arg2 + 0x54) = uVar1;
    return;
  }
  return;
}

/* ======================================================================
 * png_set_sRGB  (Ghidra `png_set_sRGB` @ 00553510)
 * Signature: uint8_t png_set_sRGB(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_sRGB(long arg1, long arg2, uint8_t arg3)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 0x800;
    *(uint8_t *)(arg2 + 0x30) = arg3;
  }
  return;
}

/* ======================================================================
 * png_set_sRGB_gAMA_and_cHRM  (Ghidra `png_set_sRGB_gAMA_and_cHRM` @ 00553530)
 * Signature: uint8_t png_set_sRGB_gAMA_and_cHRM(void)
 * Calls: (none)
 * Called by: `png_handle_sRGB`
 */
void png_set_sRGB_gAMA_and_cHRM(long arg1, long arg2, uint8_t arg3)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    *(uint8_t *)(arg2 + 0x30) = arg3;
    *(uint32_t *)(arg2 + 0x2c) = 0x3ee8bac7;
    *(uint32_t *)(arg2 + 0x140) = 0xb18f;
    *(uint32_t *)(arg2 + 0x98) = 0x3ea01a37;
    *(uint32_t *)(arg2 + 0x9c) = 0x3ea872b0;
    *(uint32_t *)(arg2 + 0xa0) = 0x3f23d70a;
    *(uint32_t *)(arg2 + 0xa4) = 0x3ea8f5c3;
    *(uint32_t *)(arg2 + 0xa8) = 0x3e99999a;
    *(uint32_t *)(arg2 + 0xac) = 0x3f19999a;
    *(uint32_t *)(arg2 + 0xb0) = 0x3e19999a;
    *(uint32_t *)(arg2 + 0xb4) = 0x3d75c28f;
    *(uint32_t *)(arg2 + 0x144) = 0x7a26;
    *(uint32_t *)(arg2 + 0x148) = 0x8084;
    *(uint32_t *)(arg2 + 0x14c) = 64000;
    *(uint32_t *)(arg2 + 0x150) = 33000;
    *(uint32_t *)(arg2 + 0x154) = 30000;
    *(uint32_t *)(arg2 + 0x158) = 60000;
    *(uint32_t *)(arg2 + 0x15c) = 15000;
    *(uint32_t *)(arg2 + 0x160) = 6000;
    *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 0x805;
  }
  return;
}

/* ======================================================================
 * png_set_iCCP  (Ghidra `png_set_iCCP` @ 00553610)
 * Signature: uint8_t png_set_iCCP(void)
 * Calls: `memcpy`, `png_free`, `png_free_data`, `png_malloc_warn`, `png_warning`, `strlen`
 * Called by: `png_handle_iCCP`
 */
void png_set_iCCP(long arg1, long arg2, char *arg3, uint8_t arg4, void *arg5, uint arg6)

{
  size_t sVar1;
  void *__dest;
  void *__dest_00;
  uint uVar2;
  char *pcVar3;

  if ((((arg2 != 0) && (arg1 != 0)) && (arg5 != (void *)0x0)) && (arg3 != (char *)0x0)) {
    sVar1 = strlen(arg3);
    uVar2 = (int)sVar1 + 1;
    __dest = (void *)png_malloc_warn(arg1, uVar2);
    pcVar3 = "Insufficient memory to process iCCP chunk.";
    if (__dest != (void *)0x0) {
      memcpy(__dest, arg3, (ulong)uVar2);
      __dest_00 = (void *)png_malloc_warn(arg1, arg6);
      if (__dest_00 != (void *)0x0) {
        memcpy(__dest_00, arg5, (ulong)arg6);
        png_free_data(arg1, arg2, 0x10, 0);
        *(uint *)(arg2 + 0x100) = arg6;
        *(void **)(arg2 + 0xf0) = __dest;
        *(void **)(arg2 + 0xf8) = __dest_00;
        *(uint8_t *)(arg2 + 0x104) = arg4;
        *(uint *)(arg2 + 0xdc) = *(uint *)(arg2 + 0xdc) | 0x10;
        *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 0x1000;
        return;
      }
      png_free(arg1, __dest);
      pcVar3 = "Insufficient memory to process iCCP profile.";
    }
    png_warning(arg1, pcVar3);
    return;
  }
  return;
}

/* ======================================================================
 * png_set_text_2  (Ghidra `png_set_text_2` @ 00553770)
 * Signature: uint8_t png_set_text_2(void)
 * Calls: `memcpy`, `png_free`, `png_malloc_warn`, `png_warning`, `strlen`
 * Called by: `png_handle_tEXt`, `png_handle_zTXt`, `png_push_read_tEXt`, `png_push_read_zTXt`, `png_set_text`
 */
uint64_t png_set_text_2(long arg1, long arg2, int *arg3, int arg4)

{
  int iVar1;
  char *__s;
  int iVar2;
  size_t __n;
  size_t __n_00;
  void *pvVar3;
  void *__dest;
  long lVar4;
  int iVar5;
  int *piVar6;

  if (arg2 == 0) {
    return 0;
  }
  if (arg1 == 0) {
    return 0;
  }
  if (arg4 == 0) {
    return 0;
  }
  iVar5 = *(int *)(arg2 + 0x38);
  iVar2 = *(int *)(arg2 + 0x34) + arg4;
  if (iVar5 < iVar2) {
    pvVar3 = *(void **)(arg2 + 0x40);
    if (pvVar3 == (void *)0x0) {
      *(uint32_t *)(arg2 + 0x34) = 0;
      *(int *)(arg2 + 0x38) = arg4 + 8;
      lVar4 = png_malloc_warn(arg1, (arg4 + 8) * 0x20);
      *(long *)(arg2 + 0x40) = lVar4;
      if (lVar4 == 0) {
        return 1;
      }
      *(uint *)(arg2 + 0xdc) = *(uint *)(arg2 + 0xdc) | 0x4000;
    } else {
      iVar2 = iVar2 + 8;
      *(int *)(arg2 + 0x38) = iVar2;
      __dest = (void *)png_malloc_warn(arg1, iVar2 * 0x20);
      *(void **)(arg2 + 0x40) = __dest;
      if (__dest == (void *)0x0) {
        png_free(arg1, pvVar3);
        return 1;
      }
      memcpy(__dest, pvVar3, (long)iVar5 << 5);
      png_free(arg1, pvVar3);
    }
  }
  iVar5 = 0;
  if (0 < arg4) {
    do {
      while (true) {
        lVar4 = *(long *)(arg2 + 0x40);
        iVar2 = *(int *)(arg2 + 0x34);
        if (*(char **)(arg3 + 2) != (char *)0x0)
          break;
      LAB_005537df:
        iVar5 = iVar5 + 1;
        arg3 = arg3 + 8;
        if (iVar5 == arg4) {
          return 0;
        }
      }
      __n = strlen(*(char **)(arg3 + 2));
      iVar1 = *arg3;
      if (0 < iVar1) {
        png_warning(arg1, "iTXt chunk not supported.");
        goto LAB_005537df;
      }
      __s = *(char **)(arg3 + 4);
      piVar6 = (int *)((long)iVar2 * 0x20 + lVar4);
      if ((__s == (char *)0x0) || (*__s == '\0')) {
        *piVar6 = -1;
        iVar2 = 0;
        __n_00 = 0;
      } else {
        __n_00 = strlen(__s);
        iVar2 = (int)__n_00;
        *piVar6 = iVar1;
      }
      pvVar3 = (void *)png_malloc_warn(arg1, iVar2 + 4 + (int)__n);
      *(void **)(piVar6 + 2) = pvVar3;
      if (pvVar3 == (void *)0x0) {
        return 1;
      }
      memcpy(pvVar3, *(void **)(arg3 + 2), __n);
      *(uint8_t *)(*(long *)(piVar6 + 2) + __n) = 0;
      pvVar3 = (void *)(__n + 1 + *(long *)(piVar6 + 2));
      *(void **)(piVar6 + 4) = pvVar3;
      if (__n_00 != 0) {
        memcpy(pvVar3, *(void **)(arg3 + 4), __n_00);
        pvVar3 = *(void **)(piVar6 + 4);
      }
      *(uint8_t *)((long)pvVar3 + __n_00) = 0;
      iVar5 = iVar5 + 1;
      *(size_t *)(piVar6 + 6) = __n_00;
      arg3 = arg3 + 8;
      *(int *)(arg2 + 0x34) = *(int *)(arg2 + 0x34) + 1;
    } while (iVar5 != arg4);
  }
  return 0;
}

/* ======================================================================
 * png_set_text  (Ghidra `png_set_text` @ 005539b0)
 * Signature: uint8_t png_set_text(void)
 * Calls: `png_error`, `png_set_text_2`
 * Called by: (none)
 */
void png_set_text(uint64_t arg1)

{
  int iVar1;

  iVar1 = png_set_text_2();
  if (iVar1 == 0) {
    return;
  }
  png_error(arg1, "Insufficient memory to store text");
  return;
}

/* ======================================================================
 * png_set_tIME  (Ghidra `png_set_tIME` @ 005539d0)
 * Signature: uint8_t png_set_tIME(void)
 * Calls: (none)
 * Called by: `png_handle_tIME`
 */
void png_set_tIME(long arg1, long arg2, uint64_t *arg3)

{
  uint64_t uVar1;

  if (((arg2 != 0) && (arg1 != 0)) && ((*(byte *)(arg1 + 0x115) & 2) == 0)) {
    uVar1 = *arg3;
    *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 0x200;
    *(uint64_t *)(arg2 + 0x48) = uVar1;
    return;
  }
  return;
}

/* ======================================================================
 * png_set_tRNS  (Ghidra `png_set_tRNS` @ 00553a00)
 * Signature: uint8_t png_set_tRNS(void)
 * Calls: `memcpy`, `png_free_data`, `png_malloc`
 * Called by: `png_handle_tRNS`
 */
void png_set_tRNS(long arg1, long arg2, void *arg3, int arg4, uint64_t *arg5)

{
  uint16_t uVar1;
  uint64_t uVar2;

  if ((arg2 != 0) && (arg1 != 0)) {
    if (arg3 != (void *)0x0) {
      png_free_data(arg1, arg2, 0x2000, 0);
      uVar2 = png_malloc(arg1, 0x100);
      *(uint64_t *)(arg2 + 0x58) = uVar2;
      *(uint64_t *)(arg1 + 0x2c0) = uVar2;
      if (arg4 < 0x101) {
        memcpy(*(void **)(arg2 + 0x58), arg3, (long)arg4);
      }
      *(uint *)(arg2 + 0xdc) = *(uint *)(arg2 + 0xdc) | 0x2000;
    }
    uVar1 = (short)arg4;
    if (arg5 != (uint64_t *)0x0) {
      *(uint64_t *)(arg2 + 0x60) = *arg5;
      *(uint16_t *)(arg2 + 0x68) = *(uint16_t *)(arg5 + 1);
      uVar1 = 1;
      if (arg4 != 0) {
        uVar1 = (short)arg4;
      }
    }
    *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 0x10;
    *(uint16_t *)(arg2 + 0x1a) = uVar1;
  }
  return;
}

/* ======================================================================
 * png_set_sPLT  (Ghidra `png_set_sPLT` @ 00553ae0)
 * Signature: uint8_t png_set_sPLT(void)
 * Calls: `memcpy`, `png_free`, `png_malloc_warn`, `png_warning`, `strlen`
 * Called by: `png_handle_sPLT`
 */
void png_set_sPLT(long arg1, long arg2, uint64_t *arg3, int arg4)

{
  uint uVar1;
  void *__dest;
  size_t sVar2;
  void *pvVar3;
  uint uVar4;
  uint64_t *puVar5;
  long local_40;

  if ((arg2 != 0) && (arg1 != 0)) {
    __dest = (void *)png_malloc_warn(arg1, (*(int *)(arg2 + 0x110) + arg4) * 0x20);
    if (__dest != (void *)0x0) {
      memcpy(__dest, *(void **)(arg2 + 0x108), (ulong) * (uint *)(arg2 + 0x110) << 5);
      png_free(arg1, *(uint64_t *)(arg2 + 0x108));
      *(uint64_t *)(arg2 + 0x108) = 0;
      if (0 < arg4) {
        local_40 = 0;
        do {
          uVar1 = *(uint *)(arg2 + 0x110);
          sVar2 = strlen((char *)*arg3);
          uVar4 = (int)sVar2 + 1;
          puVar5 = (uint64_t *)(((ulong)uVar1 + local_40) * 0x20 + (long)__dest);
          pvVar3 = (void *)png_malloc_warn(arg1, uVar4);
          *puVar5 = pvVar3;
          if (pvVar3 == (void *)0x0) {
            png_warning(arg1, "Out of memory while processing sPLT chunk");
          } else {
            memcpy(pvVar3, (void *)*arg3, (ulong)uVar4);
            pvVar3 = (void *)png_malloc_warn(arg1, *(int *)(arg3 + 3) * 10);
            puVar5[2] = pvVar3;
            if (pvVar3 == (void *)0x0) {
              png_warning(arg1, "Out of memory while processing sPLT chunk");
              png_free(arg1, *puVar5);
              *puVar5 = 0;
            } else {
              memcpy(pvVar3, (void *)arg3[2], (long)*(int *)(arg3 + 3) * 10);
              *(uint32_t *)(puVar5 + 3) = *(uint32_t *)(arg3 + 3);
              *(uint8_t *)(puVar5 + 1) = *(uint8_t *)(arg3 + 1);
            }
          }
          local_40 = local_40 + 1;
          arg3 = arg3 + 4;
        } while ((int)local_40 < arg4);
      }
      *(void **)(arg2 + 0x108) = __dest;
      *(int *)(arg2 + 0x110) = *(int *)(arg2 + 0x110) + arg4;
      *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 0x2000;
      *(uint *)(arg2 + 0xdc) = *(uint *)(arg2 + 0xdc) | 0x20;
      return;
    }
    png_warning(arg1, "No memory for sPLT palettes.");
    return;
  }
  return;
}

/* ======================================================================
 * png_set_unknown_chunks  (Ghidra `png_set_unknown_chunks` @ 00553cb0)
 * Signature: uint8_t png_set_unknown_chunks(void)
 * Calls: `memcpy`, `png_free`, `png_malloc_warn`, `png_warning`
 * Called by: `png_handle_unknown`, `png_push_handle_unknown`
 */
void png_set_unknown_chunks(long arg1, long arg2, uint32_t *arg3, int arg4)

{
  uint64_t *puVar1;
  void *__dest;
  void *__dest_00;
  uint32_t *puVar2;
  long local_48;

  if (((arg2 != 0) && (arg1 != 0)) && (arg4 != 0)) {
    __dest = (void *)png_malloc_warn(arg1, (arg4 + (int)*(uint64_t *)(arg2 + 0xe8)) * 0x20);
    if (__dest == (void *)0x0) {
      png_warning(arg1, "Out of memory while processing unknown chunk.");
      return;
    }
    memcpy(__dest, *(void **)(arg2 + 0xe0), *(long *)(arg2 + 0xe8) << 5);
    png_free(arg1, *(uint64_t *)(arg2 + 0xe0));
    *(uint64_t *)(arg2 + 0xe0) = 0;
    if (0 < arg4) {
      local_48 = 0;
      do {
        while (true) {
          puVar2 = (uint32_t *)((local_48 + *(long *)(arg2 + 0xe8)) * 0x20 + (long)__dest);
          *puVar2 = *arg3;
          *(uint8_t *)(puVar2 + 1) = 0;
          __dest_00 = (void *)png_malloc_warn(arg1, *(uint64_t *)(arg3 + 4));
          *(void **)(puVar2 + 2) = __dest_00;
          if (__dest_00 != (void *)0x0)
            break;
          arg3 = arg3 + 8;
          png_warning(arg1, "Out of memory while processing unknown chunk.");
          local_48 = local_48 + 1;
          if (arg4 <= (int)local_48)
            goto LAB_00553e08;
        }
        memcpy(__dest_00, *(void **)(arg3 + 2), *(size_t *)(arg3 + 4));
        puVar1 = (uint64_t *)(arg3 + 4);
        local_48 = local_48 + 1;
        arg3 = arg3 + 8;
        *(uint64_t *)(puVar2 + 4) = *puVar1;
        *(char *)(puVar2 + 6) = (char)*(uint32_t *)(arg1 + 0x114);
      } while ((int)local_48 < arg4);
    }
  LAB_00553e08:
    *(void **)(arg2 + 0xe0) = __dest;
    *(long *)(arg2 + 0xe8) = *(long *)(arg2 + 0xe8) + (long)arg4;
    *(uint *)(arg2 + 0xdc) = *(uint *)(arg2 + 0xdc) | 0x200;
  }
  return;
}

/* ======================================================================
 * png_set_unknown_chunk_location  (Ghidra `png_set_unknown_chunk_location` @ 00553e60)
 * Signature: uint8_t png_set_unknown_chunk_location(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_unknown_chunk_location(long arg1, long arg2, int arg3, uint8_t arg4)

{
  if ((((arg2 != 0) && (arg1 != 0)) && (-1 < arg3)) && (arg3 < *(int *)(arg2 + 0xe8))) {
    *(uint8_t *)((long)arg3 * 0x20 + *(long *)(arg2 + 0xe0) + 0x18) = arg4;
  }
  return;
}

/* ======================================================================
 * png_permit_empty_plte  (Ghidra `png_permit_empty_plte` @ 00553e90)
 * Signature: uint8_t png_permit_empty_plte(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_permit_empty_plte(long arg1, uint arg2)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x3f0) = arg2 & 1 | *(uint *)(arg1 + 0x3f0) & 0xfe;
  }
  return;
}

/* ======================================================================
 * png_permit_mng_features  (Ghidra `png_permit_mng_features` @ 00553eb0)
 * Signature: uint8_t png_permit_mng_features(void)
 * Calls: (none)
 * Called by: (none)
 */
uint png_permit_mng_features(long arg1, uint arg2)

{
  uint uVar1;

  uVar1 = 0;
  if (arg1 != 0) {
    uVar1 = arg2 & 5;
    *(uint *)(arg1 + 0x3f0) = uVar1;
  }
  return uVar1;
}

/* ======================================================================
 * png_set_keep_unknown_chunks  (Ghidra `png_set_keep_unknown_chunks` @ 00553ed0)
 * Signature: uint8_t png_set_keep_unknown_chunks(void)
 * Calls: `memcpy`, `png_free`, `png_malloc`
 * Called by: (none)
 */
void png_set_keep_unknown_chunks(long arg1, int arg2, void *arg3, int arg4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  uint8_t *puVar4;
  size_t __n;
  uint8_t *puVar5;
  int iVar6;

  if (arg1 != 0) {
    if (arg4 == 0) {
      if (arg2 - 2U < 2) {
        uVar2 = *(uint *)(arg1 + 0x118);
        uVar3 = uVar2 | 0x8000;
        *(uint *)(arg1 + 0x118) = uVar3;
        if (arg2 == 3) {
          *(uint *)(arg1 + 0x118) = uVar2 | 0x18000;
          return;
        }
      } else {
        uVar3 = *(uint *)(arg1 + 0x118) & 0xffff7fff;
      }
      *(uint *)(arg1 + 0x118) = uVar3 & 0xfffeffff;
    } else if (arg3 != (void *)0x0) {
      iVar1 = *(int *)(arg1 + 0x3d8);
      iVar6 = arg4 + iVar1;
      __dest = (void *)png_malloc(arg1, iVar6 * 5);
      __n = (size_t)(iVar1 * 5);
      if (*(void **)(arg1 + 0x3e0) != (void *)0x0) {
        memcpy(__dest, *(void **)(arg1 + 0x3e0), __n);
        png_free(arg1, *(uint64_t *)(arg1 + 0x3e0));
        *(uint64_t *)(arg1 + 0x3e0) = 0;
      }
      memcpy((void *)((long)__dest + __n), arg3, (long)(arg4 * 5));
      if (0 < arg4) {
        puVar4 = (uint8_t *)((long)__dest + __n + 4);
        puVar5 = puVar4 + (ulong)(arg4 - 1) * 5 + 5;
        do {
          *puVar4 = (char)arg2;
          puVar4 = puVar4 + 5;
        } while (puVar4 != puVar5);
      }
      *(uint *)(arg1 + 0x3c0) = *(uint *)(arg1 + 0x3c0) | 0x400;
      *(int *)(arg1 + 0x3d8) = iVar6;
      *(void **)(arg1 + 0x3e0) = __dest;
    }
  }
  return;
}

/* ======================================================================
 * png_set_read_user_chunk_fn  (Ghidra `png_set_read_user_chunk_fn` @ 00554050)
 * Signature: uint8_t png_set_read_user_chunk_fn(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_read_user_chunk_fn(long arg1, uint64_t arg2, uint64_t arg3)

{
  if (arg1 != 0) {
    *(uint64_t *)(arg1 + 0x3d0) = arg3;
    *(uint64_t *)(arg1 + 0x3c8) = arg2;
  }
  return;
}

/* ======================================================================
 * png_set_rows  (Ghidra `png_set_rows` @ 00554070)
 * Signature: uint8_t png_set_rows(void)
 * Calls: `png_free_data`
 * Called by: (none)
 */
void png_set_rows(long arg1, long arg2, long arg3)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    if ((*(long *)(arg2 + 0x138) != 0) && (*(long *)(arg2 + 0x138) != arg3)) {
      png_free_data(arg1, arg2, 0x40, 0);
    }
    *(long *)(arg2 + 0x138) = arg3;
    if (arg3 != 0) {
      *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) | 0x8000;
    }
  }
  return;
}

/* ======================================================================
 * png_set_compression_buffer_size  (Ghidra `png_set_compression_buffer_size` @ 005540d0)
 * Signature: uint8_t png_set_compression_buffer_size(void)
 * Calls: `png_free`, `png_malloc`
 * Called by: (none)
 */
void png_set_compression_buffer_size(long arg1, uint arg2)

{
  uint64_t uVar1;

  if (arg1 != 0) {
    if (*(long *)(arg1 + 400) != 0) {
      png_free();
    }
    *(ulong *)(arg1 + 0x198) = (ulong)arg2;
    uVar1 = png_malloc(arg1, arg2);
    *(uint64_t *)(arg1 + 400) = uVar1;
    *(uint64_t *)(arg1 + 0x138) = uVar1;
    *(int *)(arg1 + 0x140) = (int)*(uint64_t *)(arg1 + 0x198);
  }
  return;
}

/* ======================================================================
 * png_set_invalid  (Ghidra `png_set_invalid` @ 00554140)
 * Signature: uint8_t png_set_invalid(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_invalid(long arg1, long arg2, uint arg3)

{
  if ((arg2 != 0) && (arg1 != 0)) {
    *(uint *)(arg2 + 8) = *(uint *)(arg2 + 8) & ~arg3;
  }
  return;
}

/* ======================================================================
 * png_set_asm_flags  (Ghidra `png_set_asm_flags` @ 00554160)
 * Signature: uint8_t png_set_asm_flags(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_asm_flags(long arg1)

{
  if (arg1 != 0) {
    *(uint32_t *)(arg1 + 0x400) = 0;
  }
  return;
}

/* ======================================================================
 * png_set_mmx_thresholds  (Ghidra `png_set_mmx_thresholds` @ 00554180)
 * Signature: uint8_t png_set_mmx_thresholds(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_mmx_thresholds(void)

{
  return;
}

/* ======================================================================
 * png_set_user_limits  (Ghidra `png_set_user_limits` @ 00554190)
 * Signature: uint8_t png_set_user_limits(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_user_limits(long arg1, uint32_t arg2, uint32_t arg3)

{
  if (arg1 != 0) {
    *(uint32_t *)(arg1 + 0x444) = arg2;
    *(uint32_t *)(arg1 + 0x448) = arg3;
  }
  return;
}

/* ======================================================================
 * png_set_bgr  (Ghidra `png_set_bgr` @ 005541b0)
 * Signature: uint8_t png_set_bgr(void)
 * Calls: (none)
 * Called by: `png_read_png`, `png_write_png`
 */
void png_set_bgr(long arg1)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 1;
  }
  return;
}

/* ======================================================================
 * png_set_swap  (Ghidra `png_set_swap` @ 005541c0)
 * Signature: uint8_t png_set_swap(void)
 * Calls: (none)
 * Called by: `png_read_png`, `png_write_png`
 */
void png_set_swap(long arg1)

{
  if ((arg1 != 0) && (*(char *)(arg1 + 0x237) == '\x10')) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x10;
    return;
  }
  return;
}

/* ======================================================================
 * png_set_packing  (Ghidra `png_set_packing` @ 005541e0)
 * Signature: uint8_t png_set_packing(void)
 * Calls: (none)
 * Called by: `png_write_png`
 */
void png_set_packing(long arg1)

{
  if ((arg1 != 0) && (*(byte *)(arg1 + 0x237) < 8)) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 4;
    *(uint8_t *)(arg1 + 0x238) = 8;
  }
  return;
}

/* ======================================================================
 * png_set_packswap  (Ghidra `png_set_packswap` @ 00554200)
 * Signature: uint8_t png_set_packswap(void)
 * Calls: (none)
 * Called by: `png_read_png`, `png_write_png`
 */
void png_set_packswap(long arg1)

{
  if ((arg1 != 0) && (*(byte *)(arg1 + 0x237) < 8)) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x10000;
  }
  return;
}

/* ======================================================================
 * png_set_shift  (Ghidra `png_set_shift` @ 00554220)
 * Signature: uint8_t png_set_shift(void)
 * Calls: (none)
 * Called by: `png_read_png`, `png_write_png`
 */
void png_set_shift(long arg1, uint32_t *arg2)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 8;
    *(uint32_t *)(arg1 + 0x2b5) = *arg2;
    *(uint8_t *)(arg1 + 0x2b9) = *(uint8_t *)(arg2 + 1);
  }
  return;
}

/* ======================================================================
 * png_set_interlace_handling  (Ghidra `png_set_interlace_handling` @ 00554240)
 * Signature: uint8_t png_set_interlace_handling(void)
 * Calls: (none)
 * Called by: `png_read_image`, `png_read_png`, `png_write_image`, `png_write_png`
 */
uint64_t png_set_interlace_handling(long arg1)

{
  uint64_t uVar1;

  uVar1 = 1;
  if ((arg1 != 0) && (*(char *)(arg1 + 0x233) != '\0')) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 2;
    uVar1 = 7;
  }
  return uVar1;
}

/* ======================================================================
 * png_set_filler  (Ghidra `png_set_filler` @ 00554260)
 * Signature: uint8_t png_set_filler(void)
 * Calls: (none)
 * Called by: `png_write_png`
 */
void png_set_filler(long arg1, byte arg2, int arg3)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x8000;
    *(ushort *)(arg1 + 0x23e) = (ushort)arg2;
    if (arg3 == 1) {
      *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 0x80;
    } else {
      *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) & 0xffffff7f;
    }
    if (*(char *)(arg1 + 0x236) == '\x02') {
      *(uint8_t *)(arg1 + 0x23b) = 4;
      return;
    }
    if ((*(char *)(arg1 + 0x236) == '\0') && (7 < *(byte *)(arg1 + 0x237))) {
      *(uint8_t *)(arg1 + 0x23b) = 2;
    }
  }
  return;
}

/* ======================================================================
 * png_set_add_alpha  (Ghidra `png_set_add_alpha` @ 005542d0)
 * Signature: uint8_t png_set_add_alpha(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_add_alpha(long arg1, byte arg2, int arg3)

{
  uint uVar1;

  if (arg1 != 0) {
    uVar1 = *(uint *)(arg1 + 0x11c);
    *(ushort *)(arg1 + 0x23e) = (ushort)arg2;
    *(uint *)(arg1 + 0x11c) = uVar1 | 0x8000;
    if (arg3 == 1) {
      *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 0x80;
    } else {
      *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) & 0xffffff7f;
    }
    if (*(char *)(arg1 + 0x236) == '\x02') {
      *(uint8_t *)(arg1 + 0x23b) = 4;
      *(uint *)(arg1 + 0x11c) = uVar1 | 0x1008000;
    } else {
      if ((*(char *)(arg1 + 0x236) == '\0') && (7 < *(byte *)(arg1 + 0x237))) {
        *(uint8_t *)(arg1 + 0x23b) = 2;
      }
      *(uint *)(arg1 + 0x11c) = uVar1 | 0x1008000;
    }
  }
  return;
}

/* ======================================================================
 * png_set_swap_alpha  (Ghidra `png_set_swap_alpha` @ 00554360)
 * Signature: uint8_t png_set_swap_alpha(void)
 * Calls: (none)
 * Called by: `png_read_png`, `png_write_png`
 */
void png_set_swap_alpha(long arg1)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x20000;
  }
  return;
}

/* ======================================================================
 * png_set_invert_alpha  (Ghidra `png_set_invert_alpha` @ 00554380)
 * Signature: uint8_t png_set_invert_alpha(void)
 * Calls: (none)
 * Called by: `png_read_png`, `png_write_png`
 */
void png_set_invert_alpha(long arg1)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x80000;
  }
  return;
}

/* ======================================================================
 * png_set_invert_mono  (Ghidra `png_set_invert_mono` @ 005543a0)
 * Signature: uint8_t png_set_invert_mono(void)
 * Calls: (none)
 * Called by: `png_read_png`, `png_write_png`
 */
void png_set_invert_mono(long arg1)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x20;
  }
  return;
}

/* ======================================================================
 * png_do_invert  (Ghidra `png_do_invert` @ 005543b0)
 * Signature: uint8_t png_do_invert(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`, `png_do_write_transformations`
 */
void png_do_invert(long arg1, byte *arg2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;

  iVar11 = (int)arg2;
  if (*(char *)(arg1 + 8) == '\0') {
    uVar3 = *(uint *)(arg1 + 4);
    if (uVar3 != 0) {
      uVar8 = -iVar11 & 0xf;
      if (uVar3 < uVar8) {
        uVar8 = uVar3;
      }
      uVar10 = 0;
      pbVar7 = arg2;
      if (uVar8 != 0) {
        do {
          uVar10 = uVar10 + 1;
          *pbVar7 = ~*pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (uVar10 < uVar8);
        if (uVar8 == uVar3) {
          return;
        }
      }
      uVar13 = uVar3 - uVar8 >> 4;
      uVar14 = uVar13 * 0x10;
      if (uVar13 != 0) {
        lVar9 = 0;
        uVar12 = 0;
        do {
          puVar1 = (uint *)(arg2 + lVar9 + (ulong)uVar8);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          uVar12 = uVar12 + 1;
          puVar2 = (uint *)(arg2 + lVar9 + (ulong)uVar8);
          *puVar2 = *puVar1 ^ 0xffffffff;
          puVar2[1] = uVar4 ^ 0xffffffff;
          puVar2[2] = uVar5 ^ 0xffffffff;
          puVar2[3] = uVar6 ^ 0xffffffff;
          lVar9 = lVar9 + 0x10;
        } while (uVar12 < uVar13);
        uVar10 = uVar10 + uVar14;
        pbVar7 = pbVar7 + uVar14;
        if (uVar3 - uVar8 == uVar14) {
          return;
        }
      }
      do {
        uVar10 = uVar10 + 1;
        *pbVar7 = ~*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar10 < uVar3);
      return;
    }
  } else if (*(short *)(arg1 + 8) == 0x804) {
    uVar3 = *(uint *)(arg1 + 4);
    if (uVar3 != 0) {
      lVar9 = 0;
      do {
        arg2[lVar9] = ~arg2[lVar9];
        lVar9 = lVar9 + 2;
      } while ((uint)lVar9 < uVar3);
      return;
    }
  } else if ((*(short *)(arg1 + 8) == 0x1004) && (uVar3 = *(uint *)(arg1 + 4), uVar3 != 0)) {
    do {
      *arg2 = ~*arg2;
      arg2[1] = ~arg2[1];
      arg2 = arg2 + 4;
    } while ((uint)((int)arg2 - iVar11) < uVar3);
    return;
  }
  return;
}

/* ======================================================================
 * png_do_swap  (Ghidra `png_do_swap` @ 005544c0)
 * Signature: uint8_t png_do_swap(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`, `png_do_write_transformations`
 */
void png_do_swap(int *arg1, uint8_t *arg2)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  uint8_t uVar7;
  uint8_t uVar8;
  uint8_t uVar9;
  uint8_t uVar10;
  uint8_t uVar11;
  uint8_t uVar12;
  uint8_t uVar13;
  uint8_t uVar14;
  uint8_t uVar15;
  uint8_t uVar16;
  uint uVar17;
  uint8_t *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;

  if ((*(char *)((long)arg1 + 9) != '\x10') ||
      (uVar20 = (uint) * (byte *)((long)arg1 + 10) * *arg1, uVar20 == 0)) {
    return;
  }
  uVar21 = uVar20 >> 4;
  uVar17 = uVar21 << 4;
  if ((uVar20 < 0x10) || (uVar21 == 0)) {
    uVar17 = 0;
  } else {
    uVar19 = 0;
    puVar18 = arg2;
    do {
      uVar1 = *puVar18;
      uVar2 = puVar18[2];
      uVar3 = puVar18[4];
      uVar4 = puVar18[6];
      uVar5 = puVar18[8];
      uVar6 = puVar18[10];
      uVar7 = puVar18[0xc];
      uVar8 = puVar18[0xe];
      uVar19 = uVar19 + 1;
      uVar9 = puVar18[0x10];
      uVar10 = puVar18[0x12];
      uVar11 = puVar18[0x14];
      uVar12 = puVar18[0x16];
      uVar13 = puVar18[0x18];
      uVar14 = puVar18[0x1a];
      uVar15 = puVar18[0x1c];
      uVar16 = puVar18[0x1e];
      puVar18[0x10] = puVar18[0x11];
      puVar18[0x11] = uVar9;
      puVar18[0x12] = puVar18[0x13];
      puVar18[0x13] = uVar10;
      puVar18[0x14] = puVar18[0x15];
      puVar18[0x15] = uVar11;
      puVar18[0x16] = puVar18[0x17];
      puVar18[0x17] = uVar12;
      puVar18[0x18] = puVar18[0x19];
      puVar18[0x19] = uVar13;
      puVar18[0x1a] = puVar18[0x1b];
      puVar18[0x1b] = uVar14;
      puVar18[0x1c] = puVar18[0x1d];
      puVar18[0x1d] = uVar15;
      puVar18[0x1e] = puVar18[0x1f];
      puVar18[0x1f] = uVar16;
      *puVar18 = puVar18[1];
      puVar18[1] = uVar1;
      puVar18[2] = puVar18[3];
      puVar18[3] = uVar2;
      puVar18[4] = puVar18[5];
      puVar18[5] = uVar3;
      puVar18[6] = puVar18[7];
      puVar18[7] = uVar4;
      puVar18[8] = puVar18[9];
      puVar18[9] = uVar5;
      puVar18[10] = puVar18[0xb];
      puVar18[0xb] = uVar6;
      puVar18[0xc] = puVar18[0xd];
      puVar18[0xd] = uVar7;
      puVar18[0xe] = puVar18[0xf];
      puVar18[0xf] = uVar8;
      puVar18 = puVar18 + 0x20;
    } while (uVar19 < uVar21);
    arg2 = arg2 + (ulong)uVar17 * 2;
    if (uVar17 == uVar20) {
      return;
    }
  }
  do {
    uVar1 = *arg2;
    uVar17 = uVar17 + 1;
    *arg2 = arg2[1];
    arg2[1] = uVar1;
    arg2 = arg2 + 2;
  } while (uVar17 < uVar20);
  return;
}

/* ======================================================================
 * png_do_packswap  (Ghidra `png_do_packswap` @ 005545b0)
 * Signature: uint8_t png_do_packswap(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`, `png_do_write_transformations`
 */
void png_do_packswap(long arg1, byte *arg2)

{
  byte bVar1;
  uint8_t *puVar2;
  byte *pbVar3;

  bVar1 = *(byte *)(arg1 + 9);
  if (bVar1 < 8) {
    if (bVar1 == 1) {
      puVar2 = onebppswaptable;
    } else if (bVar1 == 2) {
      puVar2 = twobppswaptable;
    } else {
      puVar2 = fourbppswaptable;
      if (bVar1 != 4) {
        return;
      }
    }
    pbVar3 = arg2 + *(uint *)(arg1 + 4);
    if (arg2 < pbVar3) {
      do {
        *arg2 = puVar2[*arg2];
        arg2 = arg2 + 1;
      } while (arg2 != pbVar3);
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_do_strip_filler  (Ghidra `png_do_strip_filler` @ 00554600)
 * Signature: uint8_t png_do_strip_filler(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`, `png_do_write_transformations`
 */
void png_do_strip_filler(uint *arg1, uint8_t *arg2, uint arg3)

{
  uint8_t *puVar1;
  char cVar2;
  uint uVar3;
  uint8_t uVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  uint8_t uVar7;
  uint8_t uVar8;
  uint8_t uVar9;
  uint8_t uVar10;
  uint8_t uVar11;
  uint8_t uVar12;
  uint8_t uVar13;
  uint8_t uVar14;
  uint8_t uVar15;
  uint8_t uVar16;
  uint8_t uVar17;
  uint8_t uVar18;
  uint8_t uVar19;
  uint8_t uVar20;
  uint8_t uVar21;
  uint8_t uVar22;
  uint8_t uVar23;
  uint8_t uVar24;
  uint8_t uVar25;
  uint8_t uVar26;
  uint8_t uVar27;
  uint8_t uVar28;
  uint8_t uVar29;
  uint8_t uVar30;
  uint8_t uVar31;
  uint8_t uVar32;
  uint8_t uVar33;
  uint8_t uVar34;
  long lVar35;
  uint8_t *puVar36;
  uint uVar37;
  uint8_t *puVar38;
  uint uVar39;
  uint uVar40;
  uint8_t *puVar41;
  uint uVar42;
  uint uVar43;

  cVar2 = (char)arg1[2];
  uVar39 = arg3 & 0x400000;
  uVar3 = *arg1;
  if (cVar2 == '\x02') {
  LAB_00554655:
    if (*(char *)((long)arg1 + 10) == '\x04') {
      if (*(char *)((long)arg1 + 9) == '\b') {
        if ((arg3 & 0x80) == 0) {
          if (uVar3 != 0) {
            puVar38 = arg2 + (ulong)(uVar3 - 1) * 3 + 3;
            puVar36 = arg2;
            do {
              *puVar36 = arg2[1];
              puVar36[1] = arg2[2];
              puVar41 = arg2 + 3;
              arg2 = arg2 + 4;
              puVar36[2] = *puVar41;
              puVar36 = puVar36 + 3;
            } while (puVar36 != puVar38);
          }
        } else if (1 < uVar3) {
          puVar36 = arg2 + 4;
          puVar38 = arg2;
          do {
            puVar38[3] = *puVar36;
            puVar38[4] = puVar36[1];
            puVar41 = puVar36 + 2;
            puVar36 = puVar36 + 4;
            puVar38[5] = *puVar41;
            puVar38 = puVar38 + 3;
          } while (arg2 + (ulong)(uVar3 - 2) * 4 + 8 != puVar36);
        }
        *(uint8_t *)((long)arg1 + 0xb) = 0x18;
        arg1[1] = uVar3 * 3;
      } else {
        if ((arg3 & 0x80) == 0) {
          if (uVar3 != 0) {
            puVar36 = arg2 + (ulong)(uVar3 - 1) * 8 + 8;
            puVar38 = arg2;
            do {
              *puVar38 = arg2[2];
              puVar38[1] = arg2[3];
              puVar38[2] = arg2[4];
              puVar38[3] = arg2[5];
              puVar38[4] = arg2[6];
              puVar41 = arg2 + 7;
              arg2 = arg2 + 8;
              puVar38[5] = *puVar41;
              puVar38 = puVar38 + 6;
            } while (puVar36 != arg2);
          }
        } else if (1 < uVar3) {
          puVar36 = arg2 + 6;
          puVar38 = arg2;
          do {
            *puVar36 = puVar38[8];
            puVar36[1] = puVar38[9];
            puVar36[2] = puVar38[10];
            puVar36[3] = puVar38[0xb];
            puVar36[4] = puVar38[0xc];
            puVar36[5] = puVar38[0xd];
            puVar36 = puVar36 + 6;
            puVar38 = puVar38 + 8;
          } while (puVar36 != arg2 + (ulong)(uVar3 - 2) * 6 + 0xc);
        }
        *(uint8_t *)((long)arg1 + 0xb) = 0x30;
        arg1[1] = uVar3 * 6;
      }
      *(uint8_t *)((long)arg1 + 10) = 3;
      goto LAB_0055462a;
    }
  } else if (cVar2 == '\x06') {
    if (uVar39 == 0) {
      return;
    }
    goto LAB_00554655;
  }
  if (cVar2 != '\0') {
    if (cVar2 != '\x04')
      goto LAB_0055462a;
    if (uVar39 == 0) {
      return;
    }
  }
  if (*(char *)((long)arg1 + 10) != '\x02')
    goto LAB_0055462a;
  if (*(char *)((long)arg1 + 9) == '\b') {
    if ((arg3 & 0x80) == 0) {
      if (uVar3 != 0) {
        uVar42 = uVar3 - 1 >> 4;
        uVar37 = uVar42 << 4;
        if ((uVar42 == 0) ||
            (uVar3 < 0x10 || arg2 <= arg2 + 1 + (ulong)uVar3 * 2 && arg2 + 1 <= arg2 + uVar3)) {
          uVar37 = 0;
          puVar36 = arg2;
        } else {
          lVar35 = 0;
          uVar40 = 0;
          do {
            puVar38 = arg2 + lVar35 * 2 + 1;
            uVar4 = puVar38[2];
            uVar5 = puVar38[4];
            uVar6 = puVar38[6];
            uVar7 = puVar38[8];
            uVar8 = puVar38[10];
            uVar9 = puVar38[0xc];
            uVar10 = puVar38[0xe];
            uVar40 = uVar40 + 1;
            puVar36 = arg2 + lVar35 * 2 + 0x11;
            uVar11 = *puVar36;
            uVar12 = puVar36[2];
            uVar13 = puVar36[4];
            uVar14 = puVar36[6];
            uVar15 = puVar36[8];
            uVar16 = puVar36[10];
            uVar17 = puVar36[0xc];
            uVar18 = puVar36[0xe];
            puVar36 = arg2 + lVar35;
            *puVar36 = *puVar38;
            puVar36[1] = uVar4;
            puVar36[2] = uVar5;
            puVar36[3] = uVar6;
            puVar36[4] = uVar7;
            puVar36[5] = uVar8;
            puVar36[6] = uVar9;
            puVar36[7] = uVar10;
            puVar36[8] = uVar11;
            puVar36[9] = uVar12;
            puVar36[10] = uVar13;
            puVar36[0xb] = uVar14;
            puVar36[0xc] = uVar15;
            puVar36[0xd] = uVar16;
            puVar36[0xe] = uVar17;
            puVar36[0xf] = uVar18;
            lVar35 = lVar35 + 0x10;
          } while (uVar40 < uVar42);
          puVar36 = arg2 + (ulong)uVar37 * 2;
          arg2 = arg2 + uVar37;
          if (uVar3 == uVar37)
            goto LAB_00554bb5;
        }
        lVar35 = 0;
        do {
          arg2[lVar35] = puVar36[lVar35 * 2 + 1];
          lVar35 = lVar35 + 1;
        } while (uVar37 + (int)lVar35 < uVar3);
      }
    } else if (uVar3 != 0) {
      uVar42 = uVar3 - 1 >> 4;
      uVar37 = uVar42 << 4;
      if ((uVar42 == 0) ||
          (!CARRY8((ulong)arg2, (ulong)uVar3) && arg2 <= arg2 + (ulong)uVar3 * 2 || uVar3 < 0x10)) {
        uVar37 = 0;
        puVar36 = arg2;
      } else {
        lVar35 = 0;
        uVar40 = 0;
        do {
          puVar36 = arg2 + lVar35 * 2;
          uVar4 = puVar36[2];
          uVar5 = puVar36[4];
          uVar6 = puVar36[6];
          uVar7 = puVar36[8];
          uVar8 = puVar36[10];
          uVar9 = puVar36[0xc];
          uVar10 = puVar36[0xe];
          uVar40 = uVar40 + 1;
          puVar38 = arg2 + lVar35 * 2 + 0x10;
          uVar11 = *puVar38;
          uVar12 = puVar38[2];
          uVar13 = puVar38[4];
          uVar14 = puVar38[6];
          uVar15 = puVar38[8];
          uVar16 = puVar38[10];
          uVar17 = puVar38[0xc];
          uVar18 = puVar38[0xe];
          puVar38 = arg2 + lVar35;
          *puVar38 = *puVar36;
          puVar38[1] = uVar4;
          puVar38[2] = uVar5;
          puVar38[3] = uVar6;
          puVar38[4] = uVar7;
          puVar38[5] = uVar8;
          puVar38[6] = uVar9;
          puVar38[7] = uVar10;
          puVar38[8] = uVar11;
          puVar38[9] = uVar12;
          puVar38[10] = uVar13;
          puVar38[0xb] = uVar14;
          puVar38[0xc] = uVar15;
          puVar38[0xd] = uVar16;
          puVar38[0xe] = uVar17;
          puVar38[0xf] = uVar18;
          lVar35 = lVar35 + 0x10;
        } while (uVar40 < uVar42);
        puVar36 = arg2 + (ulong)uVar37 * 2;
        arg2 = arg2 + uVar37;
        if (uVar3 == uVar37)
          goto LAB_00554bb5;
      }
      lVar35 = 0;
      do {
        arg2[lVar35] = puVar36[lVar35 * 2];
        lVar35 = lVar35 + 1;
      } while (uVar37 + (int)lVar35 < uVar3);
    }
  LAB_00554bb5:
    *(uint8_t *)((long)arg1 + 0xb) = 8;
    arg1[1] = uVar3;
  } else {
    if ((arg3 & 0x80) == 0) {
      if (uVar3 != 0) {
        uVar42 = uVar3 - 1 >> 4;
        uVar37 = uVar42 << 4;
        if ((uVar42 == 0) || (uVar3 < 0x10 || arg2 <= arg2 + 2 + (ulong)uVar3 * 4 &&
                                                  arg2 + 2 <= arg2 + (ulong)uVar3 * 2)) {
          uVar37 = 0;
          puVar36 = arg2;
        } else {
          lVar35 = 0;
          uVar40 = 0;
          do {
            puVar38 = arg2 + lVar35 * 2 + 2;
            uVar4 = puVar38[1];
            uVar5 = puVar38[4];
            uVar6 = puVar38[5];
            uVar7 = puVar38[8];
            uVar8 = puVar38[9];
            uVar9 = puVar38[0xc];
            uVar10 = puVar38[0xd];
            uVar40 = uVar40 + 1;
            puVar36 = arg2 + lVar35 * 2 + 0x12;
            uVar11 = *puVar36;
            uVar12 = puVar36[1];
            uVar13 = puVar36[4];
            uVar14 = puVar36[5];
            uVar15 = puVar36[8];
            uVar16 = puVar36[9];
            uVar17 = puVar36[0xc];
            uVar18 = puVar36[0xd];
            puVar36 = arg2 + lVar35 * 2 + 0x22;
            uVar19 = *puVar36;
            uVar20 = puVar36[1];
            uVar21 = puVar36[4];
            uVar22 = puVar36[5];
            uVar23 = puVar36[8];
            uVar24 = puVar36[9];
            uVar25 = puVar36[0xc];
            uVar26 = puVar36[0xd];
            puVar36 = arg2 + lVar35 * 2 + 0x32;
            uVar27 = *puVar36;
            uVar28 = puVar36[1];
            uVar29 = puVar36[4];
            uVar30 = puVar36[5];
            uVar31 = puVar36[8];
            uVar32 = puVar36[9];
            uVar33 = puVar36[0xc];
            uVar34 = puVar36[0xd];
            puVar36 = arg2 + lVar35;
            *puVar36 = *puVar38;
            puVar36[1] = uVar4;
            puVar36[2] = uVar5;
            puVar36[3] = uVar6;
            puVar36[4] = uVar7;
            puVar36[5] = uVar8;
            puVar36[6] = uVar9;
            puVar36[7] = uVar10;
            puVar36[8] = uVar11;
            puVar36[9] = uVar12;
            puVar36[10] = uVar13;
            puVar36[0xb] = uVar14;
            puVar36[0xc] = uVar15;
            puVar36[0xd] = uVar16;
            puVar36[0xe] = uVar17;
            puVar36[0xf] = uVar18;
            puVar36 = arg2 + lVar35 + 0x10;
            *puVar36 = uVar19;
            puVar36[1] = uVar20;
            puVar36[2] = uVar21;
            puVar36[3] = uVar22;
            puVar36[4] = uVar23;
            puVar36[5] = uVar24;
            puVar36[6] = uVar25;
            puVar36[7] = uVar26;
            puVar36[8] = uVar27;
            puVar36[9] = uVar28;
            puVar36[10] = uVar29;
            puVar36[0xb] = uVar30;
            puVar36[0xc] = uVar31;
            puVar36[0xd] = uVar32;
            puVar36[0xe] = uVar33;
            puVar36[0xf] = uVar34;
            lVar35 = lVar35 + 0x20;
          } while (uVar40 < uVar42);
          puVar36 = arg2 + (ulong)uVar37 * 4;
          arg2 = arg2 + (ulong)uVar37 * 2;
          if (uVar3 == uVar37)
            goto LAB_005548a8;
        }
        do {
          uVar37 = uVar37 + 1;
          *arg2 = puVar36[2];
          arg2[1] = puVar36[3];
          arg2 = arg2 + 2;
          puVar36 = puVar36 + 4;
        } while (uVar37 < uVar3);
      }
    } else if (1 < uVar3) {
      uVar37 = uVar3 - 1;
      puVar36 = arg2 + 4;
      puVar38 = arg2 + 2;
      uVar40 = uVar3 - 2 >> 4;
      uVar42 = uVar40 * 0x10;
      if ((uVar40 == 0) || (uVar37 < 0x10 || puVar38 <= puVar36 + (ulong)uVar37 * 4 &&
                                                 puVar36 <= puVar38 + (ulong)uVar37 * 2)) {
        uVar40 = 1;
      } else {
        uVar43 = 0;
        puVar41 = arg2;
        do {
          puVar1 = arg2 + 4;
          uVar4 = arg2[5];
          uVar5 = arg2[8];
          uVar6 = arg2[9];
          uVar7 = arg2[0xc];
          uVar8 = arg2[0xd];
          uVar9 = arg2[0x10];
          uVar10 = arg2[0x11];
          uVar43 = uVar43 + 1;
          uVar11 = arg2[0x14];
          uVar12 = arg2[0x15];
          uVar13 = arg2[0x18];
          uVar14 = arg2[0x19];
          uVar15 = arg2[0x1c];
          uVar16 = arg2[0x1d];
          uVar17 = arg2[0x20];
          uVar18 = arg2[0x21];
          uVar19 = arg2[0x24];
          uVar20 = arg2[0x25];
          uVar21 = arg2[0x28];
          uVar22 = arg2[0x29];
          uVar23 = arg2[0x2c];
          uVar24 = arg2[0x2d];
          uVar25 = arg2[0x30];
          uVar26 = arg2[0x31];
          uVar27 = arg2[0x34];
          uVar28 = arg2[0x35];
          uVar29 = arg2[0x38];
          uVar30 = arg2[0x39];
          uVar31 = arg2[0x3c];
          uVar32 = arg2[0x3d];
          uVar33 = arg2[0x40];
          uVar34 = arg2[0x41];
          arg2 = arg2 + 0x40;
          puVar41[2] = *puVar1;
          puVar41[3] = uVar4;
          puVar41[4] = uVar5;
          puVar41[5] = uVar6;
          puVar41[6] = uVar7;
          puVar41[7] = uVar8;
          puVar41[8] = uVar9;
          puVar41[9] = uVar10;
          puVar41[10] = uVar11;
          puVar41[0xb] = uVar12;
          puVar41[0xc] = uVar13;
          puVar41[0xd] = uVar14;
          puVar41[0xe] = uVar15;
          puVar41[0xf] = uVar16;
          puVar41[0x10] = uVar17;
          puVar41[0x11] = uVar18;
          puVar41[0x12] = uVar19;
          puVar41[0x13] = uVar20;
          puVar41[0x14] = uVar21;
          puVar41[0x15] = uVar22;
          puVar41[0x16] = uVar23;
          puVar41[0x17] = uVar24;
          puVar41[0x18] = uVar25;
          puVar41[0x19] = uVar26;
          puVar41[0x1a] = uVar27;
          puVar41[0x1b] = uVar28;
          puVar41[0x1c] = uVar29;
          puVar41[0x1d] = uVar30;
          puVar41[0x1e] = uVar31;
          puVar41[0x1f] = uVar32;
          puVar41[0x20] = uVar33;
          puVar41[0x21] = uVar34;
          puVar41 = puVar41 + 0x20;
        } while (uVar43 < uVar40);
        puVar36 = puVar36 + (ulong)uVar42 * 4;
        puVar38 = puVar38 + (ulong)uVar42 * 2;
        uVar40 = uVar42 + 1;
        if (uVar37 == uVar42)
          goto LAB_005548a8;
      }
      do {
        uVar40 = uVar40 + 1;
        *puVar38 = *puVar36;
        puVar41 = puVar36 + 1;
        puVar36 = puVar36 + 4;
        puVar38[1] = *puVar41;
        puVar38 = puVar38 + 2;
      } while (uVar40 < uVar3);
    }
  LAB_005548a8:
    *(uint8_t *)((long)arg1 + 0xb) = 0x10;
    arg1[1] = uVar3 * 2;
  }
  *(uint8_t *)((long)arg1 + 10) = 1;
LAB_0055462a:
  if (uVar39 != 0) {
    *(byte *)(arg1 + 2) = (byte)arg1[2] & 0xfb;
  }
  return;
}

/* ======================================================================
 * png_do_bgr  (Ghidra `png_do_bgr` @ 00554d60)
 * Signature: uint8_t png_do_bgr(void)
 * Calls: (none)
 * Called by: `png_do_read_transformations`, `png_do_write_transformations`
 */
void png_do_bgr(int *arg1, uint8_t *arg2)

{
  byte bVar1;
  uint8_t uVar2;
  int iVar3;
  uint8_t *puVar4;

  bVar1 = *(byte *)(arg1 + 2);
  if ((bVar1 & 2) != 0) {
    iVar3 = *arg1;
    if (*(char *)((long)arg1 + 9) == '\b') {
      if (bVar1 == 2) {
        if (iVar3 != 0) {
          puVar4 = arg2 + (ulong)(iVar3 - 1) * 3 + 3;
          do {
            uVar2 = arg2[2];
            arg2[2] = *arg2;
            *arg2 = uVar2;
            arg2 = arg2 + 3;
          } while (arg2 != puVar4);
          return;
        }
      } else if ((bVar1 == 6) && (iVar3 != 0)) {
        puVar4 = arg2 + (ulong)(iVar3 - 1) * 4 + 4;
        do {
          uVar2 = arg2[2];
          arg2[2] = *arg2;
          *arg2 = uVar2;
          arg2 = arg2 + 4;
        } while (arg2 != puVar4);
        return;
      }
    } else if (*(char *)((long)arg1 + 9) == '\x10') {
      if (bVar1 == 2) {
        if (iVar3 != 0) {
          puVar4 = arg2 + (ulong)(iVar3 - 1) * 6 + 6;
          do {
            uVar2 = arg2[4];
            arg2[4] = *arg2;
            *arg2 = uVar2;
            uVar2 = arg2[5];
            arg2[5] = arg2[1];
            arg2[1] = uVar2;
            arg2 = arg2 + 6;
          } while (arg2 != puVar4);
          return;
        }
      } else if ((bVar1 == 6) && (iVar3 != 0)) {
        puVar4 = arg2 + (ulong)(iVar3 - 1) * 8 + 8;
        do {
          uVar2 = arg2[4];
          arg2[4] = *arg2;
          *arg2 = uVar2;
          uVar2 = arg2[5];
          arg2[5] = arg2[1];
          arg2[1] = uVar2;
          arg2 = arg2 + 8;
        } while (arg2 != puVar4);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * png_set_user_transform_info  (Ghidra `png_set_user_transform_info` @ 00554e60)
 * Signature: uint8_t png_set_user_transform_info(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_user_transform_info(long arg1, uint64_t arg2, uint8_t arg3, uint8_t arg4)

{
  if (arg1 != 0) {
    *(uint64_t *)(arg1 + 0x108) = arg2;
    *(uint8_t *)(arg1 + 0x110) = arg3;
    *(uint8_t *)(arg1 + 0x111) = arg4;
  }
  return;
}

/* ======================================================================
 * png_get_user_transform_ptr  (Ghidra `png_get_user_transform_ptr` @ 00554e80)
 * Signature: uint8_t png_get_user_transform_ptr(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t png_get_user_transform_ptr(long arg1)

{
  if (arg1 != 0) {
    return *(uint64_t *)(arg1 + 0x108);
  }
  return 0;
}

/* ======================================================================
 * png_default_flush  (Ghidra `png_default_flush` @ 00554ea0)
 * Signature: uint8_t png_default_flush(void)
 * Calls: `fflush`
 * Called by: `png_set_write_fn`
 */
void png_default_flush(long arg1)

{
  if ((arg1 != 0) && (*(FILE **)(arg1 + 0xf0) != (FILE *)0x0)) {
    fflush(*(FILE **)(arg1 + 0xf0));
    return;
  }
  return;
}

/* ======================================================================
 * png_default_write_data  (Ghidra `png_default_write_data` @ 00554ed0)
 * Signature: uint8_t png_default_write_data(void)
 * Calls: `fwrite`, `png_error`
 * Called by: `png_set_write_fn`
 */
void png_default_write_data(long arg1, void *arg2, size_t arg3)

{
  size_t sVar1;

  if (arg1 != 0) {
    sVar1 = fwrite(arg2, 1, arg3, *(FILE **)(arg1 + 0xf0));
    if ((sVar1 & 0xffffffff) != arg3) {
      png_error(arg1, "Write Error");
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_write_data  (Ghidra `png_write_data` @ 00554f30)
 * Signature: uint8_t png_write_data(void)
 * Calls: `png_error`
 * Called by: `png_write_PLTE`, `png_write_chunk`, `png_write_chunk_data`, `png_write_chunk_end`, `png_write_chunk_start`, `png_write_compressed_data_out_part_1`, `png_write_hIST`, `png_write_iCCP`, `png_write_pCAL`, `png_write_sPLT` (+3 more)
 */
void png_write_data(long arg1)

{
  if (*(code **)(arg1 + 0xe0) != (code *)0x0) {
    /* WARNING: Could not recover jumptable at 0x00554f3c. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(arg1 + 0xe0))();
    return;
  }
  png_error(arg1, "Call to NULL write function");
  return;
}

/* ======================================================================
 * png_flush  (Ghidra `png_flush` @ 00554f50)
 * Signature: uint8_t png_flush(void)
 * Calls: (none)
 * Called by: `png_write_flush`
 */
void png_flush(long arg1)

{
  if (*(code **)(arg1 + 0x260) != (code *)0x0) {
    /* WARNING: Could not recover jumptable at 0x00554f5c. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(arg1 + 0x260))();
    return;
  }
  return;
}

/* ======================================================================
 * png_set_write_fn  (Ghidra `png_set_write_fn` @ 00554f70)
 * Signature: uint8_t png_set_write_fn(void)
 * Calls: `png_default_flush`, `png_default_write_data`, `png_warning`
 * Called by: `png_create_write_struct`, `png_create_write_struct_2`, `png_create_write_struct_2_constprop_3`, `png_write_init`, `png_write_init_2_constprop_0`, `png_write_init_3`
 */
void png_set_write_fn(long arg1, uint64_t arg2, code *arg3, code *arg4)

{
  if (arg1 != 0) {
    *(uint64_t *)(arg1 + 0xf0) = arg2;
    if (arg3 == (code *)0x0) {
      arg3 = png_default_write_data;
    }
    if (arg4 == (code *)0x0) {
      arg4 = png_default_flush;
    }
    *(code **)(arg1 + 0xe0) = arg3;
    *(code **)(arg1 + 0x260) = arg4;
    if (*(long *)(arg1 + 0xe8) != 0) {
      *(uint64_t *)(arg1 + 0xe8) = 0;
      png_warning(arg1, "Attempted to set both read_data_fn and write_data_fn in");
      png_warning(arg1, "the same structure.  Resetting read_data_fn to NULL.");
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_set_filter_heuristics_constprop_2  (Ghidra `png_set_filter_heuristics.constprop.2` @ 00554fe0)
 * Signature: uint8_t png_set_filter_heuristics.constprop.2(void)
 * Calls: `png_malloc`
 * Called by: `png_create_write_struct`, `png_create_write_struct_2`, `png_create_write_struct_2_constprop_3`, `png_write_init`, `png_write_init_2_constprop_0`, `png_write_init_3`
 */
void png_set_filter_heuristics_constprop_2(long arg1)

{
  uint16_t *puVar1;
  long lVar2;
  uint64_t uVar3;
  uint16_t *puVar4;

  if (arg1 != 0) {
    puVar4 = *(uint16_t **)(arg1 + 0x3a8);
    *(uint8_t *)(arg1 + 0x389) = 0;
    *(uint8_t *)(arg1 + 0x388) = 1;
    if (puVar4 == (uint16_t *)0x0) {
      uVar3 = png_malloc(arg1, 10);
      *(uint64_t *)(arg1 + 0x3a8) = uVar3;
      puVar4 = (uint16_t *)png_malloc(arg1, 10);
      *(uint16_t **)(arg1 + 0x3b0) = puVar4;
      **(uint16_t **)(arg1 + 0x3a8) = 8;
      *puVar4 = 8;
      lVar2 = *(long *)(arg1 + 0x3b0);
      *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 2) = 8;
      *(uint16_t *)(lVar2 + 2) = 8;
      lVar2 = *(long *)(arg1 + 0x3b0);
      *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 4) = 8;
      *(uint16_t *)(lVar2 + 4) = 8;
      lVar2 = *(long *)(arg1 + 0x3b0);
      *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 6) = 8;
      *(uint16_t *)(lVar2 + 6) = 8;
      lVar2 = *(long *)(arg1 + 0x3b0);
      *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 8) = 8;
      *(uint16_t *)(lVar2 + 8) = 8;
      puVar4 = *(uint16_t **)(arg1 + 0x3a8);
    }
    puVar1 = *(uint16_t **)(arg1 + 0x3b0);
    *puVar4 = 8;
    *puVar1 = 8;
    lVar2 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 2) = 8;
    *(uint16_t *)(lVar2 + 2) = 8;
    lVar2 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 4) = 8;
    *(uint16_t *)(lVar2 + 4) = 8;
    lVar2 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 6) = 8;
    *(uint16_t *)(lVar2 + 6) = 8;
    lVar2 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 8) = 8;
    *(uint16_t *)(lVar2 + 8) = 8;
  }
  return;
}

/* ======================================================================
 * png_write_init_2_constprop_0  (Ghidra `png_write_init_2.constprop.0` @ 00555140)
 * Signature: uint8_t png_write_init_2.constprop.0(void)
 * Calls: `png_create_struct`, `png_destroy_struct`, `png_error`, `png_malloc`, `png_set_filter_heuristics_constprop_2`, `png_set_write_fn`, `png_warning`, `snprintf`
 * Called by: (none)
 */
void png_write_init_2_constprop_0(uint64_t *arg1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  char *pcVar7;
  uint64_t *puVar8;
  bool bVar9;
  byte bVar10;
  char acStack_e8[216];

  bVar10 = 0;
  if (arg1 != (uint64_t *)0x0) {
    arg1[0x1a] = 0;
    snprintf(acStack_e8, 0x50, "Application was compiled with png.h from libpng-%.20s",
             "1.0.6 or earlier");
    png_warning(arg1, acStack_e8);
    snprintf(acStack_e8, 0x50, "Application  is  running with png.c from libpng-%.20s",
             &png_libpng_ver);
    png_warning(arg1, acStack_e8);
    arg1[0x19] = 0;
    *(uint32_t *)(arg1 + 0x23) = 0;
    png_error(arg1, "The png struct allocated by the application for writing is too small.");
    arg1[0x19] = 0;
    *(uint32_t *)(arg1 + 0x23) = 0;
    png_error(arg1, "The info struct allocated by the application for writing is too small.");
    lVar3 = 0;
    cVar5 = s_1_0_6_or_earlier_005d20c8[0];
    if (s_1_0_6_or_earlier_005d20c8[0] == png_libpng_ver) {
      do {
        if (cVar5 == '\0')
          goto LAB_0055522f;
        cVar5 = "1.0.6 or earlier"[lVar3 + 1];
        pcVar7 = &DAT_005d1d11 /* R:1.0139542538922797e-08f */ + lVar3;
        lVar3 = lVar3 + 1;
      } while (cVar5 == *pcVar7);
    }
    arg1[0x1a] = 0;
    png_warning(arg1, "Application uses deprecated png_write_init() and should be recompiled.");
  LAB_0055522f:
    puVar8 = arg1;
    pcVar7 = acStack_e8;
    for (lVar3 = 0x19; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(uint64_t *)pcVar7 = *puVar8;
      puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
      pcVar7 = (char *)((long)pcVar7 + ((ulong)bVar10 * -2 + 1) * 8);
    }
    png_destroy_struct(arg1);
    puVar1 = (uint64_t *)png_create_struct(1);
    bVar9 = ((ulong)puVar1 & 1) != 0;
    uVar6 = 0x470;
    puVar8 = puVar1;
    if (bVar9) {
      *(uint8_t *)puVar1 = 0;
      puVar8 = (uint64_t *)((long)puVar1 + 1);
      uVar6 = 0x46f;
    }
    if (((ulong)puVar8 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      uVar6 = (ulong)((int)uVar6 - 2);
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (((ulong)puVar8 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      uVar6 = (ulong)((int)uVar6 - 4);
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    for (uVar4 = uVar6 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
    }
    if ((uVar6 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    if ((uVar6 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (bVar9) {
      *(uint8_t *)puVar8 = 0;
    }
    *(uint32_t *)((long)puVar1 + 0x444) = 1000000;
    *(uint32_t *)(puVar1 + 0x89) = 1000000;
    pcVar7 = acStack_e8;
    puVar8 = puVar1;
    for (lVar3 = 0x19; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar8 = *(uint64_t *)pcVar7;
      pcVar7 = (char *)((long)pcVar7 + ((ulong)bVar10 * -2 + 1) * 8);
      puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
    }
    png_set_write_fn(puVar1, 0, 0);
    puVar1[0x33] = 0x2000;
    uVar2 = png_malloc(puVar1, 0x2000);
    puVar1[0x32] = uVar2;
    png_set_filter_heuristics_constprop_2(puVar1);
  }
  return;
}

/* ======================================================================
 * png_create_write_struct_2_constprop_3  (Ghidra `png_create_write_struct_2.constprop.3` @ 00555360)
 * Signature: uint8_t png_create_write_struct_2.constprop.3(void)
 * Calls: `abort`, `png_create_struct_2`, `png_destroy_struct`, `png_error`, `png_free`, `png_malloc`, `png_set_error_fn`, `png_set_filter_heuristics_constprop_2`, `png_set_mem_fn`, `png_set_write_fn` (+2 more)
 * Called by: (none)
 */
__jmp_buf_tag *png_create_write_struct_2_constprop_3(char *arg1, uint64_t arg2, uint64_t arg3,
                                                     uint64_t arg4)

{
  char cVar1;
  int iVar2;
  __jmp_buf_tag *__env;
  long lVar3;
  uint uVar4;
  char local_58[88];

  __env = (__jmp_buf_tag *)png_create_struct_2(1, 0, 0);
  if (__env == (__jmp_buf_tag *)0x0) {
    return (__jmp_buf_tag *)0x0;
  }
  *(uint32_t *)((long)__env[5].__saved_mask.__val + 0x14) = 1000000;
  *(uint32_t *)(__env[5].__saved_mask.__val + 3) = 1000000;
  iVar2 = _setjmp(__env);
  if (iVar2 != 0) {
    png_free(__env, __env[2].__jmpbuf[0]);
    __env[2].__jmpbuf[0] = 0;
    png_destroy_struct(__env);
    return (__jmp_buf_tag *)0x0;
  }
  png_set_mem_fn(__env, 0, 0, 0);
  png_set_error_fn(__env, arg2, arg3, arg4);
  uVar4 = (uint)__env[1].__saved_mask.__val[1];
  lVar3 = 0;
  if (arg1 != (char *)0x0) {
    do {
      cVar1 = (&png_libpng_ver)[lVar3];
      if (arg1[lVar3] != cVar1) {
        uVar4 = uVar4 | 0x20000;
        *(uint *)(__env[1].__saved_mask.__val + 1) = uVar4;
      }
      lVar3 = lVar3 + 1;
    } while (cVar1 != '\0');
  }
  if ((uVar4 & 0x20000) == 0)
    goto LAB_005554be;
  if (arg1 != (char *)0x0) {
    cVar1 = *arg1;
    if (cVar1 == png_libpng_ver) {
      if (cVar1 == '1') {
        if (arg1[2] == DAT_005d1d12 /* R:6.637739033976686e-07f */)
          goto LAB_005554be;
      } else if ((cVar1 != '0') || ('8' < arg1[2]))
        goto LAB_005554be;
    }
    snprintf(local_58, 0x50, "Application was compiled with png.h from libpng-%.20s", arg1);
    png_warning(__env, local_58);
  }
  snprintf(local_58, 0x50, "Application  is  running with png.c from libpng-%.20s",
           &png_libpng_ver);
  png_warning(__env, local_58);
  *(uint32_t *)(__env[1].__saved_mask.__val + 1) = 0;
  png_error(__env, "Incompatible libpng version in application and library");
LAB_005554be:
  __env[2].__jmpbuf[1] = 0x2000;
  lVar3 = png_malloc(__env, 0x2000);
  __env[2].__jmpbuf[0] = lVar3;
  png_set_write_fn(__env, 0, 0, 0);
  png_set_filter_heuristics_constprop_2(__env);
  iVar2 = _setjmp(__env);
  if (iVar2 == 0) {
    return __env;
  }
  /* WARNING: Subroutine does not return */
  abort();
}

/* ======================================================================
 * png_write_info_before_PLTE  (Ghidra `png_write_info_before_PLTE` @ 00555580)
 * Signature: uint8_t png_write_info_before_PLTE(void)
 * Calls: `png_handle_as_unknown`, `png_warning`, `png_write_IHDR`, `png_write_cHRM`, `png_write_chunk`, `png_write_gAMA`, `png_write_iCCP`, `png_write_sBIT`, `png_write_sRGB`, `png_write_sig`
 * Called by: `png_write_info`
 */
void png_write_info_before_PLTE(long arg1, uint32_t *arg2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;

  if (((arg2 != (uint32_t *)0x0) && (arg1 != 0)) && ((*(byte *)(arg1 + 0x115) & 4) == 0)) {
    png_write_sig();
    if (((*(byte *)(arg1 + 0x115) & 0x10) != 0) && (*(int *)(arg1 + 0x3f0) != 0)) {
      png_warning(arg1, "MNG features are not allowed in a PNG datastream");
      *(uint32_t *)(arg1 + 0x3f0) = 0;
    }
    png_write_IHDR(arg1, *arg2, arg2[1], *(uint8_t *)(arg2 + 7), *(uint8_t *)((long)arg2 + 0x1d),
                   *(uint8_t *)((long)arg2 + 0x1e), *(uint8_t *)((long)arg2 + 0x1f),
                   *(uint8_t *)(arg2 + 8));
    uVar1 = arg2[2];
    if ((uVar1 & 1) != 0) {
      png_write_gAMA((double)(float)arg2[0xb], arg1);
      uVar1 = arg2[2];
    }
    if ((uVar1 & 0x800) != 0) {
      png_write_sRGB(arg1, *(uint8_t *)(arg2 + 0xc));
      uVar1 = arg2[2];
    }
    if ((uVar1 & 0x1000) != 0) {
      png_write_iCCP(arg1, *(uint64_t *)(arg2 + 0x3c), 0, *(uint64_t *)(arg2 + 0x3e), arg2[0x40]);
      uVar1 = arg2[2];
    }
    if ((uVar1 & 2) != 0) {
      png_write_sBIT(arg1, arg2 + 0x14, *(uint8_t *)((long)arg2 + 0x1d));
      uVar1 = arg2[2];
    }
    if ((uVar1 & 4) != 0) {
      png_write_cHRM((double)(float)arg2[0x26], (double)(float)arg2[0x27],
                     (double)(float)arg2[0x28], (double)(float)arg2[0x29],
                     (double)(float)arg2[0x2a], (double)(float)arg2[0x2b],
                     (double)(float)arg2[0x2c], (double)(float)arg2[0x2d], arg1);
    }
    if ((*(long *)(arg2 + 0x3a) != 0) &&
        (uVar3 = *(ulong *)(arg2 + 0x38), uVar3 < *(long *)(arg2 + 0x3a) * 0x20 + uVar3)) {
      do {
        iVar2 = png_handle_as_unknown(arg1, uVar3);
        if (iVar2 != 1) {
          if (((*(byte *)(uVar3 + 0x18) != 0) && ((*(byte *)(uVar3 + 0x18) & 6) == 0)) &&
              (((*(byte *)(uVar3 + 3) & 0x20) != 0 ||
                ((iVar2 == 3 || ((*(byte *)(arg1 + 0x11a) & 1) != 0)))))) {
            png_write_chunk(arg1, uVar3, *(uint64_t *)(uVar3 + 8), *(uint64_t *)(uVar3 + 0x10));
          }
        }
        uVar3 = uVar3 + 0x20;
      } while (uVar3 < (ulong)(*(long *)(arg2 + 0x3a) * 0x20 + *(long *)(arg2 + 0x38)));
    }
    *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 0x400;
  }
  return;
}

/* ======================================================================
 * png_write_info  (Ghidra `png_write_info` @ 005557f0)
 * Signature: uint8_t png_write_info(void)
 * Calls: `png_error`, `png_handle_as_unknown`, `png_warning`, `png_write_PLTE`, `png_write_bKGD`, `png_write_chunk`, `png_write_hIST`, `png_write_info_before_PLTE`, `png_write_oFFs`, `png_write_pCAL` (+7 more)
 * Called by: `png_write_png`
 */
/* WARNING: Type propagation algorithm not settling */

void png_write_info(long arg1, long arg2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  ushort uVar5;
  byte *pbVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;

  if ((arg2 != 0) && (arg1 != 0)) {
    png_write_info_before_PLTE();
    uVar2 = *(uint *)(arg2 + 8);
    if ((uVar2 & 8) == 0) {
      if (*(char *)(arg2 + 0x1d) == '\x03') {
        png_error(arg1, "Valid palette required for paletted images");
        uVar2 = *(uint *)(arg2 + 8);
      }
    } else {
      png_write_PLTE(arg1, *(uint64_t *)(arg2 + 0x10), *(uint16_t *)(arg2 + 0x18));
      uVar2 = *(uint *)(arg2 + 8);
    }
    if ((uVar2 & 0x10) != 0) {
      cVar8 = *(char *)(arg2 + 0x1d);
      if (((*(byte *)(arg1 + 0x11e) & 8) == 0) || (cVar8 != '\x03')) {
        uVar5 = *(ushort *)(arg2 + 0x1a);
      } else {
        uVar5 = 0;
        if (*(short *)(arg2 + 0x1a) != 0) {
          lVar9 = 0;
          do {
            pbVar6 = (byte *)(lVar9 + *(long *)(arg2 + 0x58));
            *pbVar6 = ~*pbVar6;
            iVar3 = (int)lVar9;
            lVar9 = lVar9 + 1;
            uVar5 = *(ushort *)(arg2 + 0x1a);
          } while (iVar3 + 1 < (int)(uint)uVar5);
          cVar8 = *(char *)(arg2 + 0x1d);
        }
      }
      png_write_tRNS(arg1, *(uint64_t *)(arg2 + 0x58), arg2 + 0x60, uVar5, cVar8);
      uVar2 = *(uint *)(arg2 + 8);
    }
    if ((uVar2 & 0x20) != 0) {
      png_write_bKGD(arg1, arg2 + 0x6a, *(uint8_t *)(arg2 + 0x1d));
      uVar2 = *(uint *)(arg2 + 8);
    }
    if ((uVar2 & 0x40) != 0) {
      png_write_hIST(arg1, *(uint64_t *)(arg2 + 0x90), *(uint16_t *)(arg2 + 0x18));
      uVar2 = *(uint *)(arg2 + 8);
    }
    if ((uVar2 & 0x100) != 0) {
      png_write_oFFs(arg1, *(uint32_t *)(arg2 + 0x74), *(uint32_t *)(arg2 + 0x78),
                     *(uint8_t *)(arg2 + 0x7c));
      uVar2 = *(uint *)(arg2 + 8);
    }
    if ((uVar2 & 0x400) != 0) {
      png_write_pCAL(arg1, *(uint64_t *)(arg2 + 0xb8), *(uint32_t *)(arg2 + 0xc0),
                     *(uint32_t *)(arg2 + 0xc4), *(uint8_t *)(arg2 + 0xd8),
                     *(uint8_t *)(arg2 + 0xd9), *(uint64_t *)(arg2 + 200),
                     *(uint64_t *)(arg2 + 0xd0));
      uVar2 = *(uint *)(arg2 + 8);
    }
    if ((uVar2 & 0x4000) != 0) {
      png_write_sCAL(*(uint64_t *)(arg2 + 0x118), *(uint64_t *)(arg2 + 0x120), arg1,
                     *(uint8_t *)(arg2 + 0x114));
      uVar2 = *(uint *)(arg2 + 8);
    }
    if ((uVar2 & 0x80) != 0) {
      png_write_pHYs(arg1, *(uint32_t *)(arg2 + 0x80), *(uint32_t *)(arg2 + 0x84),
                     *(uint8_t *)(arg2 + 0x88));
      uVar2 = *(uint *)(arg2 + 8);
    }
    if ((uVar2 & 0x200) != 0) {
      png_write_tIME(arg1, arg2 + 0x48);
      *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 0x200;
      uVar2 = *(uint *)(arg2 + 8);
    }
    if ((uVar2 & 0x2000) != 0) {
      lVar9 = 0;
      iVar3 = 0;
      if (0 < *(int *)(arg2 + 0x110)) {
        do {
          lVar7 = lVar9 + *(long *)(arg2 + 0x108);
          iVar3 = iVar3 + 1;
          lVar9 = lVar9 + 0x20;
          png_write_sPLT(arg1, lVar7);
        } while (iVar3 < *(int *)(arg2 + 0x110));
      }
    }
    iVar3 = *(int *)(arg2 + 0x34);
    lVar9 = 0;
    iVar11 = 0;
    if (0 < iVar3) {
      do {
        while (true) {
          piVar4 = (int *)(lVar9 + *(long *)(arg2 + 0x40));
          iVar1 = *piVar4;
          if (iVar1 < 1)
            break;
          png_warning(arg1, "Unable to write international text");
          *(uint32_t *)(*(long *)(arg2 + 0x40) + lVar9) = 0xfffffffd;
          iVar3 = *(int *)(arg2 + 0x34);
        LAB_005558ac:
          iVar11 = iVar11 + 1;
          lVar9 = lVar9 + 0x20;
          if (iVar3 <= iVar11)
            goto LAB_00555900;
        }
        if (iVar1 == 0) {
          png_write_zTXt(arg1, *(uint64_t *)(piVar4 + 2), *(uint64_t *)(piVar4 + 4), 0, 0);
          *(uint32_t *)(*(long *)(arg2 + 0x40) + lVar9) = 0xfffffffe;
          iVar3 = *(int *)(arg2 + 0x34);
          goto LAB_005558ac;
        }
        if (iVar1 != -1)
          goto LAB_005558ac;
        iVar11 = iVar11 + 1;
        png_write_tEXt(arg1, *(uint64_t *)(piVar4 + 2), *(uint64_t *)(piVar4 + 4), 0);
        *(uint32_t *)(*(long *)(arg2 + 0x40) + lVar9) = 0xfffffffd;
        iVar3 = *(int *)(arg2 + 0x34);
        lVar9 = lVar9 + 0x20;
      } while (iVar11 < iVar3);
    }
  LAB_00555900:
    if ((*(long *)(arg2 + 0xe8) != 0) &&
        (uVar10 = *(ulong *)(arg2 + 0xe0), uVar10 < *(long *)(arg2 + 0xe8) * 0x20 + uVar10)) {
      do {
        iVar3 = png_handle_as_unknown(arg1, uVar10);
        if (((iVar3 != 1) &&
             ((*(byte *)(uVar10 + 0x18) != 0 && ((*(byte *)(uVar10 + 0x18) & 6) == 2)))) &&
            (((*(byte *)(uVar10 + 3) & 0x20) != 0 ||
              ((iVar3 == 3 || ((*(byte *)(arg1 + 0x11a) & 1) != 0)))))) {
          png_write_chunk(arg1, uVar10, *(uint64_t *)(uVar10 + 8), *(uint64_t *)(uVar10 + 0x10));
        }
        uVar10 = uVar10 + 0x20;
      } while (uVar10 < (ulong)(*(long *)(arg2 + 0xe8) * 0x20 + *(long *)(arg2 + 0xe0)));
    }
  }
  return;
}

/* ======================================================================
 * png_write_end  (Ghidra `png_write_end` @ 00555bd0)
 * Signature: uint8_t png_write_end(void)
 * Calls: `png_error`, `png_handle_as_unknown`, `png_warning`, `png_write_IEND`, `png_write_chunk`, `png_write_tEXt`, `png_write_tIME`, `png_write_zTXt`
 * Called by: `png_write_png`
 */
void png_write_end(long arg1, long arg2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;

  if (arg1 == 0) {
    return;
  }
  if ((*(byte *)(arg1 + 0x114) & 4) == 0) {
    png_error(arg1, "No IDATs written into file");
  }
  if (arg2 != 0) {
    if (((*(byte *)(arg2 + 9) & 2) != 0) && ((*(byte *)(arg1 + 0x115) & 2) == 0)) {
      png_write_tIME(arg1, arg2 + 0x48);
    }
    iVar2 = *(int *)(arg2 + 0x34);
    if (0 < iVar2) {
      lVar4 = 0;
      iVar6 = 0;
    LAB_00555c49:
      do {
        piVar3 = (int *)(lVar4 + *(long *)(arg2 + 0x40));
        iVar1 = *piVar3;
        if (iVar1 < 1) {
          if (iVar1 == 0) {
            iVar6 = iVar6 + 1;
            png_write_zTXt(arg1, *(uint64_t *)(piVar3 + 2), *(uint64_t *)(piVar3 + 4), 0, 0);
            *(uint32_t *)(*(long *)(arg2 + 0x40) + lVar4) = 0xfffffffe;
            iVar2 = *(int *)(arg2 + 0x34);
            lVar4 = lVar4 + 0x20;
            if (iVar2 <= iVar6)
              break;
            goto LAB_00555c49;
          }
          if (iVar1 == -1) {
            png_write_tEXt(arg1, *(uint64_t *)(piVar3 + 2), *(uint64_t *)(piVar3 + 4), 0);
            *(uint32_t *)(*(long *)(arg2 + 0x40) + lVar4) = 0xfffffffd;
            iVar2 = *(int *)(arg2 + 0x34);
          }
        } else {
          png_warning(arg1, "Unable to write international text");
          *(uint32_t *)(*(long *)(arg2 + 0x40) + lVar4) = 0xfffffffd;
          iVar2 = *(int *)(arg2 + 0x34);
        }
        iVar6 = iVar6 + 1;
        lVar4 = lVar4 + 0x20;
      } while (iVar6 < iVar2);
    }
    if ((*(long *)(arg2 + 0xe8) != 0) &&
        (uVar5 = *(ulong *)(arg2 + 0xe0), uVar5 < *(long *)(arg2 + 0xe8) * 0x20 + uVar5)) {
      do {
        iVar2 = png_handle_as_unknown(arg1, uVar5);
        if (iVar2 != 1) {
          if (((*(byte *)(uVar5 + 0x18) != 0) && ((*(byte *)(uVar5 + 0x18) & 8) != 0)) &&
              (((*(byte *)(uVar5 + 3) & 0x20) != 0 ||
                ((iVar2 == 3 || ((*(byte *)(arg1 + 0x11a) & 1) != 0)))))) {
            png_write_chunk(arg1, uVar5, *(uint64_t *)(uVar5 + 8), *(uint64_t *)(uVar5 + 0x10));
          }
        }
        uVar5 = uVar5 + 0x20;
      } while (uVar5 < (ulong)(*(long *)(arg2 + 0xe8) * 0x20 + *(long *)(arg2 + 0xe0)));
    }
  }
  *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 8;
  png_write_IEND(arg1);
  return;
}

/* ======================================================================
 * png_convert_from_struct_tm  (Ghidra `png_convert_from_struct_tm` @ 00555db0)
 * Signature: uint8_t png_convert_from_struct_tm(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_convert_from_struct_tm(short *arg1, uint32_t *arg2)

{
  *arg1 = (short)arg2[5] + 0x76c;
  *(char *)(arg1 + 1) = (char)arg2[4] + '\x01';
  *(char *)((long)arg1 + 3) = (char)arg2[3];
  *(char *)(arg1 + 2) = (char)arg2[2];
  *(char *)((long)arg1 + 5) = (char)arg2[1];
  *(char *)(arg1 + 3) = (char)*arg2;
  return;
}

/* ======================================================================
 * png_convert_from_time_t  (Ghidra `png_convert_from_time_t` @ 00555de0)
 * Signature: uint8_t png_convert_from_time_t(void)
 * Calls: `gmtime`
 * Called by: (none)
 */
void png_convert_from_time_t(short *arg1, time_t arg2)

{
  tm *ptVar1;
  time_t local_10;

  local_10 = arg2;
  ptVar1 = gmtime(&local_10);
  *arg1 = (short)ptVar1->tm_year + 0x76c;
  *(char *)(arg1 + 1) = (char)ptVar1->tm_mon + '\x01';
  *(char *)((long)arg1 + 3) = (char)ptVar1->tm_mday;
  *(char *)(arg1 + 2) = (char)ptVar1->tm_hour;
  *(char *)((long)arg1 + 5) = (char)ptVar1->tm_min;
  *(char *)(arg1 + 3) = (char)ptVar1->tm_sec;
  return;
}

/* ======================================================================
 * png_create_write_struct  (Ghidra `png_create_write_struct` @ 00555e30)
 * Signature: uint8_t png_create_write_struct(void)
 * Calls: `abort`, `png_create_struct_2`, `png_destroy_struct`, `png_error`, `png_free`, `png_malloc`, `png_set_error_fn`, `png_set_filter_heuristics_constprop_2`, `png_set_mem_fn`, `png_set_write_fn` (+2 more)
 * Called by: (none)
 */
__jmp_buf_tag *png_create_write_struct(char *arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)

{
  char cVar1;
  int iVar2;
  __jmp_buf_tag *__env;
  long lVar3;
  uint uVar4;
  char acStack_58[88];

  __env = (__jmp_buf_tag *)png_create_struct_2(1, 0, 0);
  if (__env == (__jmp_buf_tag *)0x0) {
    return (__jmp_buf_tag *)0x0;
  }
  *(uint32_t *)((long)__env[5].__saved_mask.__val + 0x14) = 1000000;
  *(uint32_t *)(__env[5].__saved_mask.__val + 3) = 1000000;
  iVar2 = _setjmp(__env);
  if (iVar2 != 0) {
    png_free(__env, __env[2].__jmpbuf[0]);
    __env[2].__jmpbuf[0] = 0;
    png_destroy_struct(__env);
    return (__jmp_buf_tag *)0x0;
  }
  png_set_mem_fn(__env, 0, 0, 0);
  png_set_error_fn(__env, arg2, arg3, arg4);
  uVar4 = (uint)__env[1].__saved_mask.__val[1];
  lVar3 = 0;
  if (arg1 != (char *)0x0) {
    do {
      cVar1 = (&png_libpng_ver)[lVar3];
      if (arg1[lVar3] != cVar1) {
        uVar4 = uVar4 | 0x20000;
        *(uint *)(__env[1].__saved_mask.__val + 1) = uVar4;
      }
      lVar3 = lVar3 + 1;
    } while (cVar1 != '\0');
  }
  if ((uVar4 & 0x20000) == 0)
    goto LAB_005554be;
  if (arg1 != (char *)0x0) {
    cVar1 = *arg1;
    if (cVar1 == png_libpng_ver) {
      if (cVar1 == '1') {
        if (arg1[2] == DAT_005d1d12 /* R:6.637739033976686e-07f */)
          goto LAB_005554be;
      } else if ((cVar1 != '0') || ('8' < arg1[2]))
        goto LAB_005554be;
    }
    snprintf(acStack_58, 0x50, "Application was compiled with png.h from libpng-%.20s", arg1);
    png_warning(__env, acStack_58);
  }
  snprintf(acStack_58, 0x50, "Application  is  running with png.c from libpng-%.20s",
           &png_libpng_ver);
  png_warning(__env, acStack_58);
  *(uint32_t *)(__env[1].__saved_mask.__val + 1) = 0;
  png_error(__env, "Incompatible libpng version in application and library");
LAB_005554be:
  __env[2].__jmpbuf[1] = 0x2000;
  lVar3 = png_malloc(__env, 0x2000);
  __env[2].__jmpbuf[0] = lVar3;
  png_set_write_fn(__env, 0, 0, 0);
  png_set_filter_heuristics_constprop_2(__env);
  iVar2 = _setjmp(__env);
  if (iVar2 == 0) {
    return __env;
  }
  /* WARNING: Subroutine does not return */
  abort();
}

/* ======================================================================
 * png_create_write_struct_2  (Ghidra `png_create_write_struct_2` @ 00555e40)
 * Signature: uint8_t png_create_write_struct_2(void)
 * Calls: `abort`, `png_create_struct_2`, `png_destroy_struct`, `png_error`, `png_free`, `png_malloc`, `png_set_error_fn`, `png_set_filter_heuristics_constprop_2`, `png_set_mem_fn`, `png_set_write_fn` (+2 more)
 * Called by: (none)
 */
__jmp_buf_tag *png_create_write_struct_2(char *arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4,
                                         uint64_t arg5, uint64_t arg6, uint64_t arg7)

{
  char cVar1;
  int iVar2;
  __jmp_buf_tag *__env;
  long lVar3;
  uint uVar4;
  char local_58[88];

  __env = (__jmp_buf_tag *)png_create_struct_2(1, arg6, arg5);
  if (__env == (__jmp_buf_tag *)0x0) {
    return (__jmp_buf_tag *)0x0;
  }
  *(uint32_t *)((long)__env[5].__saved_mask.__val + 0x14) = 1000000;
  *(uint32_t *)(__env[5].__saved_mask.__val + 3) = 1000000;
  iVar2 = _setjmp(__env);
  if (iVar2 != 0) {
    png_free(__env, __env[2].__jmpbuf[0]);
    __env[2].__jmpbuf[0] = 0;
    png_destroy_struct(__env);
    return (__jmp_buf_tag *)0x0;
  }
  png_set_mem_fn(__env, arg5, arg6, arg7);
  png_set_error_fn(__env, arg2, arg3, arg4);
  uVar4 = (uint)__env[1].__saved_mask.__val[1];
  lVar3 = 0;
  if (arg1 != (char *)0x0) {
    do {
      cVar1 = (&png_libpng_ver)[lVar3];
      if (arg1[lVar3] != cVar1) {
        uVar4 = uVar4 | 0x20000;
        *(uint *)(__env[1].__saved_mask.__val + 1) = uVar4;
      }
      lVar3 = lVar3 + 1;
    } while (cVar1 != '\0');
  }
  if ((uVar4 & 0x20000) == 0)
    goto LAB_00555fb6;
  if (arg1 != (char *)0x0) {
    cVar1 = *arg1;
    if (cVar1 == png_libpng_ver) {
      if (cVar1 == '1') {
        if (arg1[2] == DAT_005d1d12 /* R:6.637739033976686e-07f */)
          goto LAB_00555fb6;
      } else if ((cVar1 != '0') || ('8' < arg1[2]))
        goto LAB_00555fb6;
    }
    snprintf(local_58, 0x50, "Application was compiled with png.h from libpng-%.20s", arg1);
    png_warning(__env, local_58);
  }
  snprintf(local_58, 0x50, "Application  is  running with png.c from libpng-%.20s",
           &png_libpng_ver);
  png_warning(__env, local_58);
  *(uint32_t *)(__env[1].__saved_mask.__val + 1) = 0;
  png_error(__env, "Incompatible libpng version in application and library");
LAB_00555fb6:
  __env[2].__jmpbuf[1] = 0x2000;
  lVar3 = png_malloc(__env, 0x2000);
  __env[2].__jmpbuf[0] = lVar3;
  png_set_write_fn(__env, 0, 0, 0);
  png_set_filter_heuristics_constprop_2(__env);
  iVar2 = _setjmp(__env);
  if (iVar2 == 0) {
    return __env;
  }
  /* WARNING: Subroutine does not return */
  abort();
}

/* ======================================================================
 * png_write_init  (Ghidra `png_write_init` @ 00556080)
 * Signature: uint8_t png_write_init(void)
 * Calls: `png_create_struct`, `png_destroy_struct`, `png_error`, `png_malloc`, `png_set_filter_heuristics_constprop_2`, `png_set_write_fn`, `png_warning`, `snprintf`
 * Called by: (none)
 */
void png_write_init(uint64_t *arg1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  char *pcVar7;
  uint64_t *puVar8;
  bool bVar9;
  byte bVar10;
  char acStack_e8[216];

  bVar10 = 0;
  if (arg1 != (uint64_t *)0x0) {
    arg1[0x1a] = 0;
    snprintf(acStack_e8, 0x50, "Application was compiled with png.h from libpng-%.20s",
             "1.0.6 or earlier");
    png_warning(arg1, acStack_e8);
    snprintf(acStack_e8, 0x50, "Application  is  running with png.c from libpng-%.20s",
             &png_libpng_ver);
    png_warning(arg1, acStack_e8);
    arg1[0x19] = 0;
    *(uint32_t *)(arg1 + 0x23) = 0;
    png_error(arg1, "The png struct allocated by the application for writing is too small.");
    arg1[0x19] = 0;
    *(uint32_t *)(arg1 + 0x23) = 0;
    png_error(arg1, "The info struct allocated by the application for writing is too small.");
    lVar3 = 0;
    cVar5 = s_1_0_6_or_earlier_005d20c8[0];
    if (s_1_0_6_or_earlier_005d20c8[0] == png_libpng_ver) {
      do {
        if (cVar5 == '\0')
          goto LAB_0055522f;
        cVar5 = "1.0.6 or earlier"[lVar3 + 1];
        pcVar7 = &DAT_005d1d11 /* R:1.0139542538922797e-08f */ + lVar3;
        lVar3 = lVar3 + 1;
      } while (cVar5 == *pcVar7);
    }
    arg1[0x1a] = 0;
    png_warning(arg1, "Application uses deprecated png_write_init() and should be recompiled.");
  LAB_0055522f:
    puVar8 = arg1;
    pcVar7 = acStack_e8;
    for (lVar3 = 0x19; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(uint64_t *)pcVar7 = *puVar8;
      puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
      pcVar7 = (char *)((long)pcVar7 + ((ulong)bVar10 * -2 + 1) * 8);
    }
    png_destroy_struct(arg1);
    puVar1 = (uint64_t *)png_create_struct(1);
    bVar9 = ((ulong)puVar1 & 1) != 0;
    uVar6 = 0x470;
    puVar8 = puVar1;
    if (bVar9) {
      *(uint8_t *)puVar1 = 0;
      puVar8 = (uint64_t *)((long)puVar1 + 1);
      uVar6 = 0x46f;
    }
    if (((ulong)puVar8 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      uVar6 = (ulong)((int)uVar6 - 2);
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (((ulong)puVar8 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      uVar6 = (ulong)((int)uVar6 - 4);
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    for (uVar4 = uVar6 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
    }
    if ((uVar6 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    if ((uVar6 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (bVar9) {
      *(uint8_t *)puVar8 = 0;
    }
    *(uint32_t *)((long)puVar1 + 0x444) = 1000000;
    *(uint32_t *)(puVar1 + 0x89) = 1000000;
    pcVar7 = acStack_e8;
    puVar8 = puVar1;
    for (lVar3 = 0x19; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar8 = *(uint64_t *)pcVar7;
      pcVar7 = (char *)((long)pcVar7 + ((ulong)bVar10 * -2 + 1) * 8);
      puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
    }
    png_set_write_fn(puVar1, 0, 0);
    puVar1[0x33] = 0x2000;
    uVar2 = png_malloc(puVar1, 0x2000);
    puVar1[0x32] = uVar2;
    png_set_filter_heuristics_constprop_2(puVar1);
  }
  return;
}

/* ======================================================================
 * png_write_init_3  (Ghidra `png_write_init_3` @ 00556090)
 * Signature: uint8_t png_write_init_3(void)
 * Calls: `png_create_struct`, `png_destroy_struct`, `png_malloc`, `png_set_filter_heuristics_constprop_2`, `png_set_write_fn`, `png_warning`
 * Called by: `png_write_init_2`
 */
void png_write_init_3(uint64_t *arg1, long arg2, ulong arg3)

{
  char *pcVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  bool bVar9;
  byte bVar10;
  uint64_t auStack_f8[27];

  bVar10 = 0;
  puVar3 = (uint64_t *)*arg1;
  if (puVar3 == (uint64_t *)0x0) {
    return;
  }
  lVar4 = 0;
  do {
    pcVar1 = (char *)(arg2 + lVar4);
    if (*pcVar1 != (&png_libpng_ver)[lVar4]) {
      puVar3[0x1a] = 0;
      png_warning(puVar3, "Application uses deprecated png_write_init() and should be recompiled.");
      break;
    }
    lVar4 = lVar4 + 1;
  } while (*pcVar1 != '\0');
  puVar8 = puVar3;
  puVar7 = auStack_f8;
  for (lVar4 = 0x19; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
    puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
  }
  if (arg3 < 0x470) {
    png_destroy_struct(puVar3);
    puVar3 = (uint64_t *)png_create_struct(1);
    *arg1 = puVar3;
  }
  bVar9 = ((ulong)puVar3 & 1) != 0;
  uVar6 = 0x470;
  puVar8 = puVar3;
  if (bVar9) {
    *(uint8_t *)puVar3 = 0;
    puVar8 = (uint64_t *)((long)puVar3 + 1);
    uVar6 = 0x46f;
  }
  if (((ulong)puVar8 & 2) != 0) {
    *(uint16_t *)puVar8 = 0;
    uVar6 = (ulong)((int)uVar6 - 2);
    puVar8 = (uint64_t *)((long)puVar8 + 2);
  }
  if (((ulong)puVar8 & 4) != 0) {
    *(uint32_t *)puVar8 = 0;
    uVar6 = (ulong)((int)uVar6 - 4);
    puVar8 = (uint64_t *)((long)puVar8 + 4);
  }
  for (uVar5 = uVar6 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
  }
  if ((uVar6 & 4) != 0) {
    *(uint32_t *)puVar8 = 0;
    puVar8 = (uint64_t *)((long)puVar8 + 4);
  }
  if ((uVar6 & 2) != 0) {
    *(uint16_t *)puVar8 = 0;
    puVar8 = (uint64_t *)((long)puVar8 + 2);
  }
  if (bVar9) {
    *(uint8_t *)puVar8 = 0;
  }
  *(uint32_t *)((long)puVar3 + 0x444) = 1000000;
  *(uint32_t *)(puVar3 + 0x89) = 1000000;
  puVar8 = auStack_f8;
  puVar7 = puVar3;
  for (lVar4 = 0x19; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
    puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
  }
  png_set_write_fn(puVar3, 0, 0);
  puVar3[0x33] = 0x2000;
  uVar2 = png_malloc(puVar3, 0x2000);
  puVar3[0x32] = uVar2;
  png_set_filter_heuristics_constprop_2(puVar3);
  return;
}

/* ======================================================================
 * png_write_init_2  (Ghidra `png_write_init_2` @ 00556250)
 * Signature: uint8_t png_write_init_2(void)
 * Calls: `png_error`, `png_warning`, `png_write_init_3`, `snprintf`
 * Called by: (none)
 */
void png_write_init_2(long arg1, long arg2, ulong arg3, ulong arg4)

{
  long local_80;
  char local_78[88];

  if (arg1 != 0) {
    local_80 = arg1;
    if ((arg4 < 0x168) || (arg3 < 0x470)) {
      *(uint64_t *)(arg1 + 0xd0) = 0;
      if (arg2 != 0) {
        snprintf(local_78, 0x50, "Application was compiled with png.h from libpng-%.20s", arg2);
        png_warning(local_80, local_78);
      }
      snprintf(local_78, 0x50, "Application  is  running with png.c from libpng-%.20s",
               &png_libpng_ver);
      png_warning(local_80, local_78);
      if (arg3 < 0x470) {
        *(uint64_t *)(local_80 + 200) = 0;
        *(uint32_t *)(local_80 + 0x118) = 0;
        png_error(local_80,
                  "The png struct allocated by the application for writing is too small.");
      }
      if (arg4 < 0x168) {
        *(uint64_t *)(local_80 + 200) = 0;
        *(uint32_t *)(local_80 + 0x118) = 0;
        png_error(local_80,
                  "The info struct allocated by the application for writing is too small.");
      }
    }
    png_write_init_3(&local_80, arg2, arg3);
  }
  return;
}

/* ======================================================================
 * png_write_row  (Ghidra `png_write_row` @ 00556390)
 * Signature: uint8_t png_write_row(void)
 * Calls: `png_do_write_interlace`, `png_do_write_intrapixel`, `png_do_write_transformations`, `png_error`, `png_memcpy_check`, `png_write_find_filter`, `png_write_finish_row`, `png_write_start_row`
 * Called by: `png_write_image`, `png_write_png`, `png_write_rows`
 */
void png_write_row(long arg1, uint64_t arg2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;

  if (arg1 != 0) {
    if ((*(int *)(arg1 + 0x1d0) == 0) && (*(char *)(arg1 + 0x234) == '\0')) {
      if ((*(byte *)(arg1 + 0x115) & 4) == 0) {
        png_error(arg1, "png_write_info was never called before png_write_row.");
      }
      png_write_start_row(arg1);
    }
    if ((*(char *)(arg1 + 0x233) != '\0') && ((*(byte *)(arg1 + 0x11c) & 2) != 0)) {
      switch (*(uint8_t *)(arg1 + 0x234)) {
      case 0:
        if ((*(byte *)(arg1 + 0x1d0) & 7) != 0)
          goto LAB_00556598;
        break;
      case 1:
        if (((*(byte *)(arg1 + 0x1d0) & 7) != 0) || (*(uint *)(arg1 + 0x1b4) < 5))
          goto LAB_00556598;
        break;
      case 2:
        if ((*(uint *)(arg1 + 0x1d0) & 7) != 4)
          goto LAB_00556598;
        break;
      case 3:
        if (((*(byte *)(arg1 + 0x1d0) & 3) != 0) || (*(uint *)(arg1 + 0x1b4) < 3))
          goto LAB_00556598;
        break;
      case 4:
        if ((*(uint *)(arg1 + 0x1d0) & 3) != 2)
          goto LAB_00556598;
        break;
      case 5:
        if (((*(byte *)(arg1 + 0x1d0) & 1) != 0) || (*(uint *)(arg1 + 0x1b4) < 2))
          goto LAB_00556598;
        break;
      case 6:
        if ((*(byte *)(arg1 + 0x1d0) & 1) == 0)
          goto LAB_00556598;
      }
    }
    iVar1 = *(int *)(arg1 + 0x1c0);
    *(uint8_t *)(arg1 + 0x210) = *(uint8_t *)(arg1 + 0x236);
    *(char *)(arg1 + 0x212) = *(char *)(arg1 + 0x23b);
    *(int *)(arg1 + 0x208) = iVar1;
    *(char *)(arg1 + 0x211) = *(char *)(arg1 + 0x238);
    bVar2 = *(char *)(arg1 + 0x238) * *(char *)(arg1 + 0x23b);
    *(byte *)(arg1 + 0x213) = bVar2;
    if (bVar2 < 8) {
      uVar3 = (uint)bVar2 * iVar1 + 7 >> 3;
    } else {
      uVar3 = (uint)(bVar2 >> 3) * iVar1;
    }
    *(uint *)(arg1 + 0x20c) = uVar3;
    png_memcpy_check(arg1, *(long *)(arg1 + 0x1e0) + 1, arg2);
    if (*(char *)(arg1 + 0x233) == '\0') {
      uVar3 = *(uint *)(arg1 + 0x11c);
    } else {
      uVar3 = *(uint *)(arg1 + 0x11c);
      if ((*(byte *)(arg1 + 0x234) < 6) && ((uVar3 & 2) != 0)) {
        png_do_write_interlace(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1, *(byte *)(arg1 + 0x234));
        if (*(int *)(arg1 + 0x208) == 0) {
        LAB_00556598:
          png_write_finish_row(arg1);
          return;
        }
        uVar3 = *(uint *)(arg1 + 0x11c);
      }
    }
    if (uVar3 != 0) {
      png_do_write_transformations(arg1);
    }
    if (((*(byte *)(arg1 + 0x3f0) & 4) != 0) && (*(char *)(arg1 + 0x3f8) == '@')) {
      png_do_write_intrapixel(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
    }
    png_write_find_filter(arg1, arg1 + 0x208);
    if (*(code **)(arg1 + 0x2e0) != (code *)0x0) {
      /* WARNING: Could not recover jumptable at 0x005564dc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      (**(code **)(arg1 + 0x2e0))(arg1, *(uint32_t *)(arg1 + 0x1d0), *(uint8_t *)(arg1 + 0x234));
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_write_image  (Ghidra `png_write_image` @ 00556680)
 * Signature: uint8_t png_write_image(void)
 * Calls: `png_set_interlace_handling`, `png_write_row`
 * Called by: (none)
 */
void png_write_image(long arg1, uint64_t *arg2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint64_t *puVar4;
  int iVar5;

  if ((arg1 != 0) && (iVar1 = png_set_interlace_handling(), 0 < iVar1)) {
    uVar2 = *(uint *)(arg1 + 0x1b8);
    iVar5 = 0;
    do {
      uVar3 = 0;
      puVar4 = arg2;
      if (uVar2 != 0) {
        do {
          uVar3 = uVar3 + 1;
          png_write_row(arg1, *puVar4);
          uVar2 = *(uint *)(arg1 + 0x1b8);
          puVar4 = puVar4 + 1;
        } while (uVar3 < uVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar1);
  }
  return;
}

/* ======================================================================
 * png_write_rows  (Ghidra `png_write_rows` @ 00556700)
 * Signature: uint8_t png_write_rows(void)
 * Calls: `png_write_row`
 * Called by: (none)
 */
void png_write_rows(long arg1, long arg2, uint arg3)

{
  long lVar1;
  long lVar2;

  if ((arg1 != 0) && (arg3 != 0)) {
    lVar2 = 0;
    do {
      lVar1 = lVar2 * 8;
      lVar2 = lVar2 + 1;
      png_write_row(arg1, *(uint64_t *)(arg2 + lVar1));
    } while ((uint)lVar2 < arg3);
  }
  return;
}

/* ======================================================================
 * png_set_flush  (Ghidra `png_set_flush` @ 00556750)
 * Signature: uint8_t png_set_flush(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_flush(long arg1, int arg2)

{
  int iVar1;

  if (arg1 != 0) {
    iVar1 = 0;
    if (-1 < arg2) {
      iVar1 = arg2;
    }
    *(int *)(arg1 + 0x268) = iVar1;
  }
  return;
}

/* ======================================================================
 * png_write_flush  (Ghidra `png_write_flush` @ 00556770)
 * Signature: uint8_t png_write_flush(void)
 * Calls: `deflate`, `png_error`, `png_flush`, `png_write_IDAT`
 * Called by: `png_write_filtered_row`
 */
void png_write_flush(long arg1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;

  if ((arg1 != 0) && (*(uint *)(arg1 + 0x1d0) < *(uint *)(arg1 + 0x1bc))) {
    while (true) {
      iVar2 = deflate(arg1 + 0x120, 2);
      if (iVar2 != 0) {
        pcVar3 = *(char **)(arg1 + 0x150);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "zlib error";
        }
        png_error(arg1, pcVar3);
      }
      uVar1 = *(uint *)(arg1 + 0x140);
      if (uVar1 != 0)
        break;
      png_write_IDAT(arg1, *(uint64_t *)(arg1 + 400));
      *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 400);
      *(int *)(arg1 + 0x140) = (int)*(uint64_t *)(arg1 + 0x198);
    }
    if (*(ulong *)(arg1 + 0x198) != (ulong)uVar1) {
      png_write_IDAT(arg1, *(uint64_t *)(arg1 + 400), *(ulong *)(arg1 + 0x198) - (ulong)uVar1);
      *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 400);
      *(int *)(arg1 + 0x140) = (int)*(uint64_t *)(arg1 + 0x198);
    }
    *(uint32_t *)(arg1 + 0x26c) = 0;
    png_flush(arg1);
    return;
  }
  return;
}

/* ======================================================================
 * png_write_destroy  (Ghidra `png_write_destroy` @ 00556880)
 * Signature: uint8_t png_write_destroy(void)
 * Calls: `deflateEnd`, `png_free`
 * Called by: `png_destroy_write_struct`
 */
void png_write_destroy(uint64_t *arg1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  uint64_t *puVar10;
  uint64_t *puVar11;
  bool bVar12;
  byte bVar13;
  uint64_t auStack_d8[26];
  ulong uVar9;

  bVar13 = 0;
  deflateEnd(arg1 + 0x24);
  png_free(arg1, arg1[0x32]);
  png_free(arg1, arg1[0x3c]);
  png_free(arg1, arg1[0x3b]);
  png_free(arg1, arg1[0x3d]);
  png_free(arg1, arg1[0x3e]);
  png_free(arg1, arg1[0x3f]);
  png_free(arg1, arg1[0x40]);
  png_free(arg1, arg1[0x77]);
  png_free(arg1, arg1[0x72]);
  png_free(arg1, arg1[0x73]);
  png_free(arg1, arg1[0x74]);
  png_free(arg1, arg1[0x75]);
  png_free(arg1, arg1[0x76]);
  puVar11 = arg1;
  puVar10 = auStack_d8;
  for (lVar5 = 0x19; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar10 = *puVar11;
    puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
    puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
  }
  bVar12 = ((ulong)arg1 & 1) != 0;
  uVar9 = 0x470;
  iVar7 = 0x470;
  uVar1 = arg1[0x19];
  uVar2 = arg1[0x1a];
  uVar3 = arg1[0x1b];
  uVar4 = arg1[0x83];
  puVar11 = arg1;
  if (bVar12) {
    *(uint8_t *)arg1 = 0;
    uVar9 = 0x46f;
    iVar7 = 0x46f;
    puVar11 = (uint64_t *)((long)arg1 + 1);
  }
  if (((ulong)puVar11 & 2) == 0) {
    uVar8 = (uint)uVar9;
  } else {
    *(uint16_t *)puVar11 = 0;
    puVar11 = (uint64_t *)((long)puVar11 + 2);
    uVar8 = iVar7 - 2;
    uVar9 = (ulong)uVar8;
  }
  if (((ulong)puVar11 & 4) != 0) {
    *(uint32_t *)puVar11 = 0;
    uVar9 = (ulong)(uVar8 - 4);
    puVar11 = (uint64_t *)((long)puVar11 + 4);
  }
  for (uVar6 = uVar9 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
  }
  if ((uVar9 & 4) != 0) {
    *(uint32_t *)puVar11 = 0;
    puVar11 = (uint64_t *)((long)puVar11 + 4);
  }
  if ((uVar9 & 2) != 0) {
    *(uint16_t *)puVar11 = 0;
    puVar11 = (uint64_t *)((long)puVar11 + 2);
  }
  if (bVar12) {
    *(uint8_t *)puVar11 = 0;
  }
  arg1[0x19] = uVar1;
  arg1[0x1a] = uVar2;
  arg1[0x1b] = uVar3;
  arg1[0x83] = uVar4;
  puVar11 = auStack_d8;
  for (lVar5 = 0x19; lVar5 != 0; lVar5 = lVar5 + -1) {
    *arg1 = *puVar11;
    puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
    arg1 = arg1 + (ulong)bVar13 * -2 + 1;
  }
  return;
}

/* ======================================================================
 * png_destroy_write_struct  (Ghidra `png_destroy_write_struct` @ 00556a60)
 * Signature: uint8_t png_destroy_write_struct(void)
 * Calls: `png_destroy_struct_2`, `png_free`, `png_free_data`, `png_write_destroy`
 * Called by: (none)
 */
void png_destroy_write_struct(long *arg1, long *arg2)

{
  long lVar1;
  long lVar2;
  uint64_t uVar3;
  uint64_t uVar4;

  if (arg1 == (long *)0x0) {
    lVar2 = 0;
    uVar4 = 0;
    uVar3 = 0;
  } else {
    lVar2 = *arg1;
    uVar3 = *(uint64_t *)(lVar2 + 0x418);
    uVar4 = *(uint64_t *)(lVar2 + 0x408);
  }
  if ((arg2 != (long *)0x0) && (lVar1 = *arg2, lVar1 != 0)) {
    if (lVar2 != 0) {
      png_free_data(lVar2, lVar1, 0x7fff, 0xffffffff);
      if (*(int *)(lVar2 + 0x3d8) != 0) {
        png_free(lVar2, *(uint64_t *)(lVar2 + 0x3e0));
        *(uint64_t *)(lVar2 + 0x3e0) = 0;
        *(uint32_t *)(lVar2 + 0x3d8) = 0;
      }
    }
    png_destroy_struct_2(lVar1, uVar3, uVar4);
    *arg2 = 0;
  }
  if (lVar2 != 0) {
    png_write_destroy(lVar2);
    png_destroy_struct_2(lVar2, uVar3, uVar4);
    *arg1 = 0;
  }
  return;
}

/* ======================================================================
 * png_set_filter  (Ghidra `png_set_filter` @ 00556b70)
 * Signature: uint8_t png_set_filter(void)
 * Calls: `png_error`, `png_malloc`, `png_warning`
 * Called by: (none)
 */
void png_set_filter(long arg1, int arg2, byte arg3)

{
  uint8_t *puVar1;

  if (arg1 != 0) {
    if (((arg2 != 0x40) || ((*(byte *)(arg1 + 0x3f0) & 4) == 0)) && (arg2 != 0)) {
      png_error(arg1, "Unknown custom filter method");
      return;
    }
    switch (arg3) {
    case 1:
      *(uint8_t *)(arg1 + 0x235) = 0x10;
      arg3 = 0x10;
      break;
    case 2:
      *(uint8_t *)(arg1 + 0x235) = 0x20;
      arg3 = 0x20;
      break;
    case 3:
      *(uint8_t *)(arg1 + 0x235) = 0x40;
      arg3 = 0x40;
      break;
    case 4:
      *(uint8_t *)(arg1 + 0x235) = 0x80;
      arg3 = 0x80;
      break;
    case 5:
    case 6:
    case 7:
      png_warning(arg1, "Unknown row filter for method 0");
    case 0:
      *(uint8_t *)(arg1 + 0x235) = 8;
      arg3 = 8;
      break;
    default:
      *(byte *)(arg1 + 0x235) = arg3;
    }
    if (*(long *)(arg1 + 0x1e0) != 0) {
      if (((arg3 & 0x10) != 0) && (*(long *)(arg1 + 0x1e8) == 0)) {
        puVar1 = (uint8_t *)png_malloc(arg1, *(int *)(arg1 + 0x1c4) + 1);
        *(uint8_t **)(arg1 + 0x1e8) = puVar1;
        *puVar1 = 1;
        arg3 = *(byte *)(arg1 + 0x235);
      }
      if (((arg3 & 0x20) != 0) && (*(long *)(arg1 + 0x1f0) == 0)) {
        if (*(long *)(arg1 + 0x1d8) == 0) {
          png_warning(arg1, "Can\'t add Up filter after starting");
          arg3 = *(byte *)(arg1 + 0x235) & 0xdf;
          *(byte *)(arg1 + 0x235) = arg3;
        } else {
          puVar1 = (uint8_t *)png_malloc(arg1, *(int *)(arg1 + 0x1c4) + 1);
          *(uint8_t **)(arg1 + 0x1f0) = puVar1;
          *puVar1 = 2;
          arg3 = *(byte *)(arg1 + 0x235);
        }
      }
      if (((arg3 & 0x40) != 0) && (*(long *)(arg1 + 0x1f8) == 0)) {
        if (*(long *)(arg1 + 0x1d8) == 0) {
          png_warning(arg1, "Can\'t add Average filter after starting");
          arg3 = *(byte *)(arg1 + 0x235) & 0xbf;
          *(byte *)(arg1 + 0x235) = arg3;
        } else {
          puVar1 = (uint8_t *)png_malloc(arg1, *(int *)(arg1 + 0x1c4) + 1);
          *(uint8_t **)(arg1 + 0x1f8) = puVar1;
          *puVar1 = 3;
          arg3 = *(byte *)(arg1 + 0x235);
        }
      }
      if (((char)arg3 < '\0') && (*(long *)(arg1 + 0x200) == 0)) {
        if (*(long *)(arg1 + 0x1d8) == 0) {
          png_warning(arg1, "Can\'t add Paeth filter after starting");
          arg3 = *(byte *)(arg1 + 0x235) & 0x7f;
          *(byte *)(arg1 + 0x235) = arg3;
        } else {
          puVar1 = (uint8_t *)png_malloc(arg1, *(int *)(arg1 + 0x1c4) + 1);
          *(uint8_t **)(arg1 + 0x200) = puVar1;
          *puVar1 = 4;
          arg3 = *(byte *)(arg1 + 0x235);
        }
      }
      if (arg3 == 0) {
        *(uint8_t *)(arg1 + 0x235) = 8;
      }
    }
  }
  return;
}

/* ======================================================================
 * png_set_filter_heuristics  (Ghidra `png_set_filter_heuristics` @ 00556df0)
 * Signature: uint8_t png_set_filter_heuristics(void)
 * Calls: `png_malloc`, `png_warning`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_set_filter_heuristics(long arg1, int arg2, ulong arg3, long arg4, double *arg5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  long lVar4;
  uint64_t uVar5;
  uint16_t *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;

  iVar7 = (int)arg3;
  if (arg1 == 0) {
    return;
  }
  if (2 < arg2) {
    png_warning(arg1, "Unknown filter heuristic method");
    return;
  }
  if (arg2 == 0) {
    arg2 = 1;
  }
  if (((arg4 == 0) || ((arg3 >> 0x1f & 1) != 0)) || (arg2 == 1)) {
    *(uint8_t *)(arg1 + 0x389) = 0;
    *(char *)(arg1 + 0x388) = (char)arg2;
  } else {
    *(char *)(arg1 + 0x389) = (char)arg3;
    *(char *)(arg1 + 0x388) = (char)arg2;
    if (iVar7 != 0) {
      if (*(long *)(arg1 + 0x390) == 0) {
        lVar4 = png_malloc(arg1);
        lVar9 = 0;
        *(long *)(arg1 + 0x390) = lVar4;
        while (true) {
          *(uint8_t *)(lVar4 + lVar9) = 0xff;
          lVar9 = lVar9 + 1;
          if (iVar7 <= (int)lVar9)
            break;
          lVar4 = *(long *)(arg1 + 0x390);
        }
      }
      if (*(long *)(arg1 + 0x398) == 0) {
        uVar5 = png_malloc(arg1, iVar7 * 2);
        *(uint64_t *)(arg1 + 0x398) = uVar5;
        lVar4 = png_malloc(arg1);
        lVar9 = 0;
        *(long *)(arg1 + 0x3a0) = lVar4;
        while (true) {
          *(uint16_t *)(*(long *)(arg1 + 0x398) + lVar9 * 2) = 0x100;
          *(uint16_t *)(lVar4 + lVar9 * 2) = 0x100;
          lVar9 = lVar9 + 1;
          if (iVar7 <= (int)lVar9)
            break;
          lVar4 = *(long *)(arg1 + 0x3a0);
        }
      }
      dVar3 = DAT_005d42b8 /* R:0.0f */;
      dVar2 = DAT_005d2728 /* R:0.0f */;
      lVar4 = 0;
      iVar8 = 0;
      do {
        dVar1 = *(double *)(arg4 + lVar4 * 4);
        if (0.0 <= dVar1) {
          *(short *)(*(long *)(arg1 + 0x3a0) + lVar4) = (short)(int)(dVar1 * dVar3 + dVar2);
          *(short *)(*(long *)(arg1 + 0x398) + lVar4) =
              (short)(int)(dVar3 / *(double *)(arg4 + lVar4 * 4) + dVar2);
        } else {
          lVar9 = *(long *)(arg1 + 0x3a0);
          *(uint16_t *)(*(long *)(arg1 + 0x398) + lVar4) = 0x100;
          *(uint16_t *)(lVar4 + lVar9) = 0x100;
        }
        iVar8 = iVar8 + 1;
        lVar4 = lVar4 + 2;
      } while (iVar8 < iVar7);
    }
  }
  if (*(long *)(arg1 + 0x3a8) == 0) {
    uVar5 = png_malloc(arg1, 10);
    *(uint64_t *)(arg1 + 0x3a8) = uVar5;
    puVar6 = (uint16_t *)png_malloc(arg1, 10);
    *(uint16_t **)(arg1 + 0x3b0) = puVar6;
    **(uint16_t **)(arg1 + 0x3a8) = 8;
    *puVar6 = 8;
    lVar4 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 2) = 8;
    *(uint16_t *)(lVar4 + 2) = 8;
    lVar4 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 4) = 8;
    *(uint16_t *)(lVar4 + 4) = 8;
    lVar4 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 6) = 8;
    *(uint16_t *)(lVar4 + 6) = 8;
    lVar4 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 8) = 8;
    *(uint16_t *)(lVar4 + 8) = 8;
  }
  dVar3 = _DAT_005d42c0 /* R:0.0f */;
  dVar2 = DAT_005d2728 /* R:0.0f */;
  if (arg5 == (double *)0x0) {
    puVar6 = *(uint16_t **)(arg1 + 0x3b0);
    **(uint16_t **)(arg1 + 0x3a8) = 8;
    *puVar6 = 8;
    lVar4 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 2) = 8;
    *(uint16_t *)(lVar4 + 2) = 8;
    lVar4 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 4) = 8;
    *(uint16_t *)(lVar4 + 4) = 8;
    lVar4 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 6) = 8;
    *(uint16_t *)(lVar4 + 6) = 8;
    lVar4 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 8) = 8;
    *(uint16_t *)(lVar4 + 8) = 8;
    return;
  }
  dVar1 = *arg5;
  if (dVar1 < 0.0) {
    puVar6 = *(uint16_t **)(arg1 + 0x3b0);
    **(uint16_t **)(arg1 + 0x3a8) = 8;
    *puVar6 = 8;
  } else if (DAT_005c7318 /* R:0.0f */ <= dVar1) {
    **(uint16_t **)(arg1 + 0x3b0) =
        (short)(int)(_DAT_005d42c0 /* R:0.0f */ / dVar1 + DAT_005d2728 /* R:0.0f */);
    **(uint16_t **)(arg1 + 0x3a8) = (short)(int)(*arg5 * dVar3 + dVar2);
  }
  dVar1 = _DAT_005d42c0 /* R:0.0f */;
  dVar3 = DAT_005d2728 /* R:0.0f */;
  dVar2 = arg5[1];
  if (dVar2 < 0.0) {
    lVar4 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 2) = 8;
    *(uint16_t *)(lVar4 + 2) = 8;
  } else if (DAT_005c7318 /* R:0.0f */ <= dVar2) {
    *(short *)(*(long *)(arg1 + 0x3b0) + 2) =
        (short)(int)(_DAT_005d42c0 /* R:0.0f */ / dVar2 + DAT_005d2728 /* R:0.0f */);
    *(short *)(*(long *)(arg1 + 0x3a8) + 2) = (short)(int)(arg5[1] * dVar1 + dVar3);
  }
  dVar1 = _DAT_005d42c0 /* R:0.0f */;
  dVar3 = DAT_005d2728 /* R:0.0f */;
  dVar2 = arg5[2];
  if (dVar2 < 0.0) {
    lVar4 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 4) = 8;
    *(uint16_t *)(lVar4 + 4) = 8;
    dVar2 = arg5[3];
    dVar3 = DAT_005d2728 /* R:0.0f */;
    dVar1 = _DAT_005d42c0 /* R:0.0f */;
  } else {
    if (DAT_005c7318 /* R:0.0f */ <= dVar2) {
      *(short *)(*(long *)(arg1 + 0x3b0) + 4) =
          (short)(int)(_DAT_005d42c0 /* R:0.0f */ / dVar2 + DAT_005d2728 /* R:0.0f */);
      *(short *)(*(long *)(arg1 + 0x3a8) + 4) = (short)(int)(arg5[2] * dVar1 + dVar3);
    }
    dVar2 = arg5[3];
    dVar3 = DAT_005d2728 /* R:0.0f */;
    dVar1 = _DAT_005d42c0 /* R:0.0f */;
  }
  DAT_005d2728 /* R:0.0f */ = dVar3;
  _DAT_005d42c0 /* R:0.0f */ = dVar1;
  if (0.0 <= dVar2) {
    if (DAT_005c7318 /* R:0.0f */ <= dVar2) {
      *(short *)(*(long *)(arg1 + 0x3b0) + 6) = (short)(int)(dVar1 / dVar2 + dVar3);
      *(short *)(*(long *)(arg1 + 0x3a8) + 6) = (short)(int)(arg5[3] * dVar1 + dVar3);
    }
    dVar2 = arg5[4];
    dVar3 = DAT_005d2728 /* R:0.0f */;
    dVar1 = _DAT_005d42c0 /* R:0.0f */;
  } else {
    lVar4 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 6) = 8;
    *(uint16_t *)(lVar4 + 6) = 8;
    dVar2 = arg5[4];
    dVar3 = DAT_005d2728 /* R:0.0f */;
    dVar1 = _DAT_005d42c0 /* R:0.0f */;
  }
  DAT_005d2728 /* R:0.0f */ = dVar3;
  _DAT_005d42c0 /* R:0.0f */ = dVar1;
  if (dVar2 < 0.0) {
    lVar4 = *(long *)(arg1 + 0x3b0);
    *(uint16_t *)(*(long *)(arg1 + 0x3a8) + 8) = 8;
    *(uint16_t *)(lVar4 + 8) = 8;
    return;
  }
  if (DAT_005c7318 /* R:0.0f */ <= dVar2) {
    *(short *)(*(long *)(arg1 + 0x3b0) + 8) = (short)(int)(dVar1 / dVar2 + dVar3);
    *(short *)(*(long *)(arg1 + 0x3a8) + 8) = (short)(int)(arg5[4] * dVar1 + dVar3);
  }
  return;
}

/* ======================================================================
 * png_set_compression_level  (Ghidra `png_set_compression_level` @ 005573f0)
 * Signature: uint8_t png_set_compression_level(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_compression_level(long arg1, uint32_t arg2)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 2;
    *(uint32_t *)(arg1 + 0x1a0) = arg2;
  }
  return;
}

/* ======================================================================
 * png_set_compression_mem_level  (Ghidra `png_set_compression_mem_level` @ 00557410)
 * Signature: uint8_t png_set_compression_mem_level(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_compression_mem_level(long arg1, uint32_t arg2)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 4;
    *(uint32_t *)(arg1 + 0x1ac) = arg2;
  }
  return;
}

/* ======================================================================
 * png_set_compression_strategy  (Ghidra `png_set_compression_strategy` @ 00557430)
 * Signature: uint8_t png_set_compression_strategy(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_compression_strategy(long arg1, uint32_t arg2)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 1;
    *(uint32_t *)(arg1 + 0x1b0) = arg2;
  }
  return;
}

/* ======================================================================
 * png_set_compression_window_bits  (Ghidra `png_set_compression_window_bits` @ 00557450)
 * Signature: uint8_t png_set_compression_window_bits(void)
 * Calls: `png_warning`
 * Called by: (none)
 */
void png_set_compression_window_bits(long arg1, uint64_t arg2)

{
  int iVar1;

  iVar1 = (int)arg2;
  if (arg1 != 0) {
    if (iVar1 < 0x10) {
      if (iVar1 < 8) {
        png_warning(arg1, "Only compression windows >= 256 supported by PNG");
      } else if (iVar1 == 8) {
        iVar1 = (int)CONCAT71((uint7)((ulong)arg2 >> 8) & 0xffffff, 9);
        png_warning(arg1, "Compression window is being reset to 512");
      }
    } else {
      png_warning(arg1, "Only compression windows <= 32k supported by PNG");
    }
    *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 8;
    *(int *)(arg1 + 0x1a8) = iVar1;
  }
  return;
}

/* ======================================================================
 * png_set_compression_method  (Ghidra `png_set_compression_method` @ 005574d0)
 * Signature: uint8_t png_set_compression_method(void)
 * Calls: `png_warning`
 * Called by: (none)
 */
void png_set_compression_method(long arg1, int arg2)

{
  if (arg1 != 0) {
    if (arg2 != 8) {
      png_warning(arg1, "Only compression method 8 is supported by PNG");
    }
    *(uint *)(arg1 + 0x118) = *(uint *)(arg1 + 0x118) | 0x10;
    *(int *)(arg1 + 0x1a4) = arg2;
  }
  return;
}

/* ======================================================================
 * png_set_write_status_fn  (Ghidra `png_set_write_status_fn` @ 00557520)
 * Signature: uint8_t png_set_write_status_fn(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_write_status_fn(long arg1, uint64_t arg2)

{
  if (arg1 != 0) {
    *(uint64_t *)(arg1 + 0x2e0) = arg2;
  }
  return;
}

/* ======================================================================
 * png_set_write_user_transform_fn  (Ghidra `png_set_write_user_transform_fn` @ 00557530)
 * Signature: uint8_t png_set_write_user_transform_fn(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_set_write_user_transform_fn(long arg1, uint64_t arg2)

{
  if (arg1 != 0) {
    *(uint *)(arg1 + 0x11c) = *(uint *)(arg1 + 0x11c) | 0x100000;
    *(uint64_t *)(arg1 + 0x100) = arg2;
  }
  return;
}

/* ======================================================================
 * png_write_png  (Ghidra `png_write_png` @ 00557550)
 * Signature: uint8_t png_write_png(void)
 * Calls: `png_set_bgr`, `png_set_filler`, `png_set_interlace_handling`, `png_set_invert_alpha`, `png_set_invert_mono`, `png_set_packing`, `png_set_packswap`, `png_set_shift`, `png_set_swap`, `png_set_swap_alpha` (+3 more)
 * Called by: (none)
 */
/* WARNING: Type propagation algorithm not settling */

void png_write_png(long arg1, long arg2, ulong arg3)

{
  byte bVar1;
  uint64_t *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint64_t *puVar6;
  int iVar7;

  if ((arg2 != 0) && (arg1 != 0)) {
    if ((arg3 & 0x400) != 0) {
      png_set_invert_alpha();
    }
    png_write_info(arg1, arg2);
    if ((arg3 & 0x20) != 0) {
      png_set_invert_mono(arg1);
    }
    if (((arg3 & 0x40) != 0) && ((*(byte *)(arg2 + 8) & 2) != 0)) {
      png_set_shift(arg1, arg2 + 0x50);
    }
    if ((arg3 & 4) != 0) {
      png_set_packing(arg1);
    }
    if ((arg3 & 0x100) != 0) {
      png_set_swap_alpha(arg1);
    }
    if ((arg3 & 0x800) != 0) {
      png_set_filler(arg1, 0, 0);
    }
    if ((arg3 & 0x80) != 0) {
      png_set_bgr(arg1);
    }
    if ((arg3 & 0x200) != 0) {
      png_set_swap(arg1);
    }
    if ((arg3 & 8) == 0) {
      bVar1 = *(byte *)(arg2 + 9);
    } else {
      png_set_packswap(arg1);
      bVar1 = *(byte *)(arg2 + 9);
    }
    if ((bVar1 & 0x80) != 0) {
      puVar2 = *(uint64_t **)(arg2 + 0x138);
      iVar3 = png_set_interlace_handling(arg1);
      if (0 < iVar3) {
        uVar4 = *(uint *)(arg1 + 0x1b8);
        iVar7 = 0;
        do {
          uVar5 = 0;
          puVar6 = puVar2;
          if (uVar4 != 0) {
            do {
              uVar5 = uVar5 + 1;
              png_write_row(arg1, *puVar6);
              uVar4 = *(uint *)(arg1 + 0x1b8);
              puVar6 = puVar6 + 1;
            } while (uVar5 < uVar4);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != iVar3);
      }
    }
    png_write_end(arg1, arg2);
    return;
  }
  return;
}

/* ======================================================================
 * png_do_pack  (Ghidra `png_do_pack` @ 00557740)
 * Signature: uint8_t png_do_pack(void)
 * Calls: (none)
 * Called by: `png_do_write_transformations`
 */
void png_do_pack(uint *arg1, uint8_t *arg2, int arg3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint8_t *puVar7;

  if ((arg1[2] & 0xffff00) != 0x10800) {
    return;
  }
  if (arg3 == 2) {
    uVar2 = *arg1;
    uVar4 = 0;
    if (uVar2 == 0)
      goto LAB_0055776d;
    lVar3 = 0;
    uVar4 = 0;
    uVar6 = 6;
    puVar7 = arg2;
    do {
      uVar4 = uVar4 | ((byte)arg2[lVar3] & 3) << ((byte)uVar6 & 0x1f);
      if ((int)uVar6 == 0) {
        *puVar7 = (char)uVar4;
        uVar6 = CONCAT71((int7)(uVar6 >> 8), 6);
        puVar7 = puVar7 + 1;
        uVar4 = 0;
      } else {
        uVar6 = (ulong)((int)uVar6 - 2);
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < uVar2);
    if ((int)uVar6 != 6) {
      *puVar7 = (char)uVar4;
      uVar4 = *arg1;
      goto LAB_0055776d;
    }
  } else if (arg3 == 4) {
    uVar2 = *arg1;
    uVar4 = 0;
    if (uVar2 == 0)
      goto LAB_0055776d;
    lVar3 = 0;
    uVar4 = 0;
    uVar6 = 4;
    puVar7 = arg2;
    do {
      uVar4 = uVar4 | ((byte)arg2[lVar3] & 0xf) << ((byte)uVar6 & 0x1f);
      if ((int)uVar6 == 0) {
        *puVar7 = (char)uVar4;
        uVar6 = CONCAT71((int7)(uVar6 >> 8), 4);
        puVar7 = puVar7 + 1;
        uVar4 = 0;
      } else {
        uVar6 = (ulong)((int)uVar6 - 4);
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < uVar2);
    if ((int)uVar6 != 4) {
      *puVar7 = (char)uVar4;
    }
  } else if (arg3 == 1) {
    uVar2 = *arg1;
    uVar4 = 0;
    if (uVar2 == 0)
      goto LAB_0055776d;
    lVar3 = 0;
    uVar4 = 0;
    uVar5 = 0x80;
    puVar7 = arg2;
    do {
      if (arg2[lVar3] != '\0') {
        uVar4 = uVar4 | uVar5;
      }
      if (uVar5 < 2) {
        *puVar7 = (char)uVar4;
        uVar5 = 0x80;
        puVar7 = puVar7 + 1;
        uVar4 = 0;
      } else {
        uVar5 = (int)uVar5 >> 1;
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < uVar2);
    if (uVar5 != 0x80) {
      *puVar7 = (char)uVar4;
      uVar4 = *arg1;
      goto LAB_0055776d;
    }
  }
  uVar4 = *arg1;
LAB_0055776d:
  *(char *)((long)arg1 + 9) = (char)arg3;
  uVar2 = (uint) * (byte *)((long)arg1 + 10) * arg3;
  bVar1 = (byte)uVar2;
  *(byte *)((long)arg1 + 0xb) = bVar1;
  if (bVar1 < 8) {
    uVar4 = uVar4 * (uVar2 & 0xff) + 7 >> 3;
  } else {
    uVar4 = uVar4 * (bVar1 >> 3);
  }
  arg1[1] = uVar4;
  return;
}

/* ======================================================================
 * png_do_shift  (Ghidra `png_do_shift` @ 005578f0)
 * Signature: uint8_t png_do_shift(void)
 * Calls: (none)
 * Called by: `png_do_write_transformations`
 */
void png_do_shift(int *arg1, byte *arg2, byte *arg3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  int local_48[4];
  uint local_38[6];

  bVar6 = *(byte *)(arg1 + 2);
  if (bVar6 != 3) {
    bVar2 = *(byte *)((long)arg1 + 9);
    uVar13 = (uint)bVar2;
    if ((bVar6 & 2) == 0) {
      iVar12 = 1;
      local_38[0] = (uint)arg3[3];
      uVar7 = 1;
      local_48[0] = (uint)bVar2 - (uint)arg3[3];
      uVar13 = 2;
    } else {
      iVar12 = 3;
      local_38[0] = (uint)*arg3;
      local_48[0] = uVar13 - *arg3;
      local_38[1] = (uint)arg3[1];
      local_48[1] = uVar13 - arg3[1];
      local_38[2] = (uint)arg3[2];
      uVar7 = 3;
      local_48[2] = uVar13 - arg3[2];
      uVar13 = 4;
    }
    if ((bVar6 & 4) != 0) {
      bVar6 = arg3[4];
      local_38[iVar12] = (uint)bVar6;
      local_48[iVar12] = (uint)bVar2 - (uint)bVar6;
      uVar7 = uVar13;
    }
    if (bVar2 < 8) {
      if (((arg3[3] != 1) || (uVar13 = 0x55, bVar2 != 2)) && (uVar13 = 0xffffffff, bVar2 == 4)) {
        uVar13 = 0xffffffff;
        if (arg3[3] == 3) {
          uVar13 = 0x11;
        }
      }
      if (arg1[1] != 0) {
        pbVar1 = arg2 + (ulong)(arg1[1] - 1) + 1;
        iVar12 = -local_38[0];
        do {
          bVar6 = *arg2;
          *arg2 = 0;
          if (iVar12 < local_48[0]) {
            uVar7 = 0;
            iVar9 = -local_48[0];
            iVar5 = local_48[0];
            do {
              while (0 < iVar5) {
                iVar4 = iVar5 + iVar12;
                iVar9 = iVar9 + local_38[0];
                uVar7 = uVar7 | (uint)bVar6 << ((byte)iVar5 & 0x1f);
                *arg2 = (byte)uVar7;
                iVar5 = iVar4;
                if (iVar4 <= iVar12)
                  goto LAB_00557a06;
              }
              iVar5 = iVar5 + iVar12;
              uVar7 = uVar7 | (int)(uint)bVar6 >> ((byte)iVar9 & 0x1f) & uVar13;
              *arg2 = (byte)uVar7;
              iVar9 = iVar9 + local_38[0];
            } while (iVar12 < iVar5);
          }
        LAB_00557a06:
          arg2 = arg2 + 1;
        } while (arg2 != pbVar1);
      }
    } else {
      uVar13 = *arg1 * uVar7;
      if (bVar2 == 8) {
        if (uVar13 != 0) {
          uVar11 = 0;
          do {
            bVar6 = arg2[uVar11];
            arg2[uVar11] = 0;
            iVar12 = (int)((uVar11 & 0xffffffff) % (ulong)uVar7);
            uVar10 = local_38[iVar12];
            iVar12 = local_48[iVar12];
            iVar9 = -uVar10;
            if (iVar9 < iVar12) {
              uVar8 = 0;
              iVar5 = -iVar12;
              do {
                while (0 < iVar12) {
                  iVar4 = iVar12 + iVar9;
                  iVar5 = iVar5 + uVar10;
                  uVar8 = uVar8 | (uint)bVar6 << ((byte)iVar12 & 0x1f);
                  arg2[uVar11] = (byte)uVar8;
                  iVar12 = iVar4;
                  if (iVar4 <= iVar9)
                    goto LAB_00557ba4;
                }
                iVar12 = iVar12 + iVar9;
                uVar8 = uVar8 | (int)(uint)bVar6 >> ((byte)iVar5 & 0x1f);
                arg2[uVar11] = (byte)uVar8;
                iVar5 = iVar5 + uVar10;
              } while (iVar9 < iVar12);
            }
          LAB_00557ba4:
            uVar11 = uVar11 + 1;
            if (uVar13 <= (uint)uVar11) {
              return;
            }
          } while (true);
        }
      } else if (uVar13 != 0) {
        uVar10 = 0;
        do {
          bVar6 = 0;
          iVar12 = local_48[(int)(uVar10 % uVar7)];
          uVar8 = 0;
          iVar9 = -local_38[(int)(uVar10 % uVar7)];
          if (iVar9 < iVar12) {
            uVar8 = 0;
            iVar5 = (uint)*arg2 * 0x100 + (uint)arg2[1];
            iVar4 = -iVar12;
            do {
              uVar3 = iVar5 >> ((byte)iVar4 & 0x1f);
              if (0 < iVar12) {
                uVar3 = iVar5 << ((byte)iVar12 & 0x1f);
              }
              uVar8 = uVar8 | uVar3;
              iVar12 = iVar12 + iVar9;
              iVar4 = iVar4 + local_38[(int)(uVar10 % uVar7)];
            } while (iVar9 < iVar12);
            bVar6 = (byte)(uVar8 >> 8);
          }
          uVar10 = uVar10 + 1;
          *arg2 = bVar6;
          arg2[1] = (byte)uVar8;
          arg2 = arg2 + 2;
        } while (uVar10 != uVar13);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * png_do_write_swap_alpha  (Ghidra `png_do_write_swap_alpha` @ 00557bd0)
 * Signature: uint8_t png_do_write_swap_alpha(void)
 * Calls: (none)
 * Called by: `png_do_write_transformations`
 */
void png_do_write_swap_alpha(uint *arg1, uint8_t (*arg2)[16])

{
  uint8_t auVar1[16];
  uint8_t auVar2[16];
  uint8_t auVar3[16];
  uint uVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  uint8_t uVar7;
  uint8_t uVar8;
  uint8_t uVar9;
  uint8_t uVar10;
  uint8_t uVar11;
  uint8_t uVar12;
  uint8_t uVar13;
  uint8_t uVar14;
  uint8_t uVar15;
  uint8_t uVar16;
  uint8_t uVar17;
  uint8_t uVar18;
  uint8_t uVar19;
  uint8_t uVar20;
  uint8_t auVar21[16];
  uint8_t auVar22[16];
  uint8_t auVar23[16];
  uint8_t auVar24[16];
  uint8_t auVar25[16];
  uint8_t auVar26[16];
  uint8_t auVar27[16];
  uint8_t auVar28[16];
  uint8_t auVar29[16];
  uint8_t auVar30[16];
  uint8_t auVar31[16];
  uint8_t auVar32[16];
  uint8_t auVar33[16];
  uint8_t auVar34[16];
  uint8_t auVar35[16];
  uint8_t auVar36[16];
  uint8_t auVar37[16];
  uint8_t auVar38[16];
  uint8_t auVar39[16];
  uint8_t auVar40[16];
  uint8_t auVar41[16];
  uint8_t auVar42[16];
  uint8_t auVar43[16];
  uint8_t auVar44[16];
  uint8_t auVar45[16];
  uint8_t auVar46[16];
  uint8_t auVar47[16];
  uint8_t auVar48[16];
  uint8_t auVar49[16];
  uint8_t auVar50[16];
  uint8_t auVar51[16];
  uint8_t auVar52[16];
  uint8_t auVar53[16];
  uint8_t auVar54[16];
  uint8_t auVar55[16];
  uint8_t auVar56[16];
  uint8_t auVar57[16];
  uint8_t auVar58[16];
  uint8_t auVar59[16];
  uint8_t auVar60[16];
  uint8_t auVar61[16];
  uint8_t auVar62[16];
  uint8_t auVar63[16];
  uint8_t auVar64[16];
  uint8_t auVar65[16];
  uint8_t auVar66[16];
  uint8_t auVar67[16];
  uint8_t auVar68[16];
  uint8_t auVar69[16];
  uint8_t auVar70[16];
  uint8_t auVar71[16];
  uint8_t auVar72[16];
  uint8_t auVar73[16];
  uint8_t auVar74[16];
  uint8_t auVar75[16];
  uint8_t auVar76[16];
  uint8_t auVar77[16];
  uint8_t auVar78[16];
  uint8_t auVar79[16];
  uint8_t auVar80[16];
  uint8_t auVar81[16];
  uint8_t auVar82[16];
  uint8_t *puVar83;
  uint8_t (*pauVar84)[16];
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint8_t uVar123;
  uint8_t auVar88[16];
  uint8_t auVar96[16];
  uint8_t auVar97[16];
  uint8_t auVar98[16];
  uint8_t auVar106[16];
  uint8_t auVar114[16];
  uint8_t auVar122[16];
  uint8_t uVar143;
  uint8_t uVar144;
  uint8_t auVar124[16];
  uint8_t auVar125[16];
  uint8_t auVar133[16];
  uint8_t auVar134[16];
  uint8_t auVar142[16];
  uint8_t uVar154;
  uint8_t uVar155;
  uint8_t uVar156;
  uint8_t uVar157;
  uint8_t auVar145[16];
  uint8_t auVar153[16];
  uint8_t uVar160;
  uint8_t uVar161;
  uint8_t uVar162;
  uint8_t auVar158[16];
  uint8_t auVar159[16];
  uint8_t auVar163[16];
  uint8_t auVar164[16];
  uint8_t uVar175;
  uint8_t auVar165[16];
  uint8_t uVar176;
  uint8_t auVar166[16];
  uint8_t auVar174[16];
  uint8_t uVar203;
  uint8_t uVar204;
  uint8_t auVar177[16];
  uint8_t auVar178[16];
  uint8_t auVar186[16];
  uint8_t auVar194[16];
  uint8_t auVar202[16];
  uint8_t auVar205[16];
  uint8_t auVar213[16];
  uint8_t auVar221[16];
  uint8_t uVar222;
  uint8_t auVar89[16];
  uint8_t auVar99[16];
  uint8_t auVar107[16];
  uint8_t auVar115[16];
  uint8_t auVar90[16];
  uint8_t auVar100[16];
  uint8_t auVar108[16];
  uint8_t auVar116[16];
  uint8_t auVar91[16];
  uint8_t auVar101[16];
  uint8_t auVar109[16];
  uint8_t auVar117[16];
  uint8_t auVar92[16];
  uint8_t auVar102[16];
  uint8_t auVar110[16];
  uint8_t auVar118[16];
  uint8_t auVar93[16];
  uint8_t auVar103[16];
  uint8_t auVar111[16];
  uint8_t auVar119[16];
  uint8_t auVar94[16];
  uint8_t auVar104[16];
  uint8_t auVar112[16];
  uint8_t auVar120[16];
  uint8_t auVar95[16];
  uint8_t auVar105[16];
  uint8_t auVar113[16];
  uint8_t auVar121[16];
  uint8_t auVar126[16];
  uint8_t auVar135[16];
  uint8_t auVar127[16];
  uint8_t auVar136[16];
  uint8_t auVar128[16];
  uint8_t auVar137[16];
  uint8_t auVar129[16];
  uint8_t auVar138[16];
  uint8_t auVar130[16];
  uint8_t auVar139[16];
  uint8_t auVar131[16];
  uint8_t auVar140[16];
  uint8_t auVar132[16];
  uint8_t auVar141[16];
  uint8_t auVar146[16];
  uint8_t auVar147[16];
  uint8_t auVar148[16];
  uint8_t auVar149[16];
  uint8_t auVar150[16];
  uint8_t auVar151[16];
  uint8_t auVar152[16];
  uint8_t auVar167[16];
  uint8_t auVar168[16];
  uint8_t auVar169[16];
  uint8_t auVar170[16];
  uint8_t auVar171[16];
  uint8_t auVar172[16];
  uint8_t auVar173[16];
  uint8_t auVar179[16];
  uint8_t auVar187[16];
  uint8_t auVar195[16];
  uint8_t auVar180[16];
  uint8_t auVar188[16];
  uint8_t auVar196[16];
  uint8_t auVar181[16];
  uint8_t auVar189[16];
  uint8_t auVar197[16];
  uint8_t auVar182[16];
  uint8_t auVar190[16];
  uint8_t auVar198[16];
  uint8_t auVar183[16];
  uint8_t auVar191[16];
  uint8_t auVar199[16];
  uint8_t auVar184[16];
  uint8_t auVar192[16];
  uint8_t auVar200[16];
  uint8_t auVar185[16];
  uint8_t auVar193[16];
  uint8_t auVar201[16];
  uint8_t auVar206[16];
  uint8_t auVar207[16];
  uint8_t auVar208[16];
  uint8_t auVar209[16];
  uint8_t auVar210[16];
  uint8_t auVar211[16];
  uint8_t auVar212[16];
  uint8_t auVar214[16];
  uint8_t auVar215[16];
  uint8_t auVar216[16];
  uint8_t auVar217[16];
  uint8_t auVar218[16];
  uint8_t auVar219[16];
  uint8_t auVar220[16];

  if ((char)arg1[2] == '\x06') {
    if (*(char *)((long)arg1 + 9) == '\b') {
      uVar4 = *arg1;
      if (uVar4 != 0) {
        uVar86 = uVar4 >> 4;
        uVar85 = uVar86 << 4;
        if ((uVar86 == 0) || (uVar4 < 0x10)) {
          uVar85 = 0;
          pauVar84 = arg2;
        } else {
          uVar87 = 0;
          pauVar84 = arg2;
          do {
            auVar122 = *pauVar84;
            uVar87 = uVar87 + 1;
            auVar149 = pauVar84[1];
            uVar156 = auVar149[7];
            uVar155 = auVar149[5];
            uVar123 = auVar122[0xb];
            uVar160 = auVar149[0xb];
            uVar162 = auVar149[0xd];
            uVar143 = auVar122[0xf];
            auVar173[0xf] = auVar149[0xf];
            auVar140 = pauVar84[2];
            auVar153 = pauVar84[3];
            uVar157 = auVar140[9];
            uVar204 = auVar153[9];
            uVar161 = auVar140[0xb];
            uVar175 = auVar140[0xd];
            uVar176 = auVar140[0xf];
            uVar154 = auVar140[7];
            uVar203 = auVar153[5];
            uVar144 = auVar140[5];
            auVar62._1_8_ =
                (long)(CONCAT72(
                           CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar176, uVar143),
                                                                        uVar175),
                                                               auVar122[0xd]),
                                                      uVar161),
                                             uVar123),
                                    uVar157),
                           CONCAT11(auVar122[9], uVar143)) >>
                       8);
            auVar62[0] = uVar154;
            auVar62._9_7_ = 0;
            auVar61._10_6_ = 0;
            auVar61._0_10_ = SUB1610(auVar62 << 0x38, 6);
            auVar3._11_5_ = 0;
            auVar3._0_11_ = SUB1611(auVar61 << 0x30, 5);
            auVar2._12_4_ = 0;
            auVar2._0_12_ = SUB1612(auVar3 << 0x28, 4);
            auVar1._13_3_ = 0;
            auVar1._0_13_ = SUB1613(auVar2 << 0x20, 3);
            auVar97._14_2_ = 0;
            auVar97._0_14_ = SUB1614(auVar1 << 0x18, 2);
            auVar97 = auVar97 << 0x10;
            auVar105._0_14_ = auVar97._0_14_;
            auVar105[0xe] = uVar154;
            auVar105[0xf] = auVar153[7];
            auVar104._14_2_ = auVar105._14_2_;
            auVar104._0_13_ = auVar97._0_13_;
            auVar104[0xd] = uVar156;
            auVar103._13_3_ = auVar104._13_3_;
            auVar103._0_12_ = auVar97._0_12_;
            auVar103[0xc] = auVar122[7];
            auVar102._12_4_ = auVar103._12_4_;
            auVar102._0_11_ = auVar97._0_11_;
            auVar102[0xb] = uVar203;
            auVar101._11_5_ = auVar102._11_5_;
            auVar101._0_10_ = auVar97._0_10_;
            auVar101[10] = uVar144;
            auVar100._10_6_ = auVar101._10_6_;
            auVar100._0_9_ = auVar97._0_9_;
            auVar100[9] = uVar155;
            auVar99._9_7_ = auVar100._9_7_;
            auVar99._0_8_ = auVar97._0_8_;
            auVar99[8] = auVar122[5];
            auVar67._1_8_ = auVar99._8_8_;
            auVar67[0] = auVar153[3];
            auVar67._9_7_ = 0;
            auVar66._10_6_ = 0;
            auVar66._0_10_ = SUB1610(auVar67 << 0x38, 6);
            auVar65._11_5_ = 0;
            auVar65._0_11_ = SUB1611(auVar66 << 0x30, 5);
            auVar64._12_4_ = 0;
            auVar64._0_12_ = SUB1612(auVar65 << 0x28, 4);
            auVar63._13_3_ = 0;
            auVar63._0_13_ = SUB1613(auVar64 << 0x20, 3);
            auVar98._14_2_ = 0;
            auVar98._0_14_ = SUB1614(auVar63 << 0x18, 2);
            auVar98 = auVar98 << 0x10;
            auVar113._0_14_ = auVar98._0_14_;
            auVar113[0xe] = auVar153[3];
            auVar113[0xf] = auVar153[0xb];
            auVar112._14_2_ = auVar113._14_2_;
            auVar112._0_13_ = auVar98._0_13_;
            auVar112[0xd] = uVar161;
            auVar111._13_3_ = auVar112._13_3_;
            auVar111._0_12_ = auVar98._0_12_;
            auVar111[0xc] = auVar140[3];
            auVar110._12_4_ = auVar111._12_4_;
            auVar110._0_11_ = auVar98._0_11_;
            auVar110[0xb] = uVar160;
            auVar109._11_5_ = auVar110._11_5_;
            auVar109._0_10_ = auVar98._0_10_;
            auVar109[10] = auVar149[3];
            auVar108._10_6_ = auVar109._10_6_;
            auVar108._0_9_ = auVar98._0_9_;
            auVar108[9] = uVar123;
            auVar107._9_7_ = auVar108._9_7_;
            auVar107._0_8_ = auVar98._0_8_;
            auVar107[8] = auVar122[3];
            auVar72._1_8_ = auVar107._8_8_;
            auVar72[0] = uVar204;
            auVar72._9_7_ = 0;
            auVar71._10_6_ = 0;
            auVar71._0_10_ = SUB1610(auVar72 << 0x38, 6);
            auVar70._11_5_ = 0;
            auVar70._0_11_ = SUB1611(auVar71 << 0x30, 5);
            auVar69._12_4_ = 0;
            auVar69._0_12_ = SUB1612(auVar70 << 0x28, 4);
            auVar68._13_3_ = 0;
            auVar68._0_13_ = SUB1613(auVar69 << 0x20, 3);
            auVar106._14_2_ = 0;
            auVar106._0_14_ = SUB1614(auVar68 << 0x18, 2);
            auVar106 = auVar106 << 0x10;
            auVar121._0_14_ = auVar106._0_14_;
            auVar121[0xe] = uVar204;
            auVar121[0xf] = auVar153[0xd];
            auVar120._14_2_ = auVar121._14_2_;
            auVar120._0_13_ = auVar106._0_13_;
            auVar120[0xd] = uVar203;
            auVar119._13_3_ = auVar120._13_3_;
            auVar119._0_12_ = auVar106._0_12_;
            auVar119[0xc] = auVar153[1];
            auVar118._12_4_ = auVar119._12_4_;
            auVar118._0_11_ = auVar106._0_11_;
            auVar118[0xb] = uVar175;
            auVar117._11_5_ = auVar118._11_5_;
            auVar117._0_10_ = auVar106._0_10_;
            auVar117[10] = uVar157;
            auVar116._10_6_ = auVar117._10_6_;
            auVar116._0_9_ = auVar106._0_9_;
            auVar116[9] = uVar144;
            auVar115._9_7_ = auVar116._9_7_;
            auVar115._0_8_ = auVar106._0_8_;
            auVar115[8] = auVar140[1];
            auVar77._1_8_ = auVar115._8_8_;
            auVar77[0] = uVar162;
            auVar77._9_7_ = 0;
            auVar76._10_6_ = 0;
            auVar76._0_10_ = SUB1610(auVar77 << 0x38, 6);
            auVar75._11_5_ = 0;
            auVar75._0_11_ = SUB1611(auVar76 << 0x30, 5);
            auVar74._12_4_ = 0;
            auVar74._0_12_ = SUB1612(auVar75 << 0x28, 4);
            auVar73._13_3_ = 0;
            auVar73._0_13_ = SUB1613(auVar74 << 0x20, 3);
            auVar114._14_2_ = 0;
            auVar114._0_14_ = SUB1614(auVar73 << 0x18, 2);
            auVar114 = auVar114 << 0x10;
            auVar173._0_14_ = auVar114._0_14_;
            auVar173[0xe] = uVar162;
            auVar172._14_2_ = auVar173._14_2_;
            auVar172._0_13_ = auVar114._0_13_;
            auVar172[0xd] = uVar160;
            auVar171._13_3_ = auVar172._13_3_;
            auVar171._0_12_ = auVar114._0_12_;
            auVar171[0xc] = auVar149[9];
            auVar170._12_4_ = auVar171._12_4_;
            auVar170._0_11_ = auVar114._0_11_;
            auVar170[0xb] = uVar156;
            auVar169._11_5_ = auVar170._11_5_;
            auVar169._0_10_ = auVar114._0_10_;
            auVar169[10] = uVar155;
            auVar168._10_6_ = auVar169._10_6_;
            auVar168._0_9_ = auVar114._0_9_;
            auVar168[9] = auVar149[3];
            auVar167._9_7_ = auVar168._9_7_;
            auVar167._0_8_ = auVar114._0_8_;
            auVar167[8] = auVar149[1];
            auVar82._1_8_ = auVar167._8_8_;
            auVar82[0] = uVar143;
            auVar82._9_7_ = 0;
            auVar81._10_6_ = 0;
            auVar81._0_10_ = SUB1610(auVar82 << 0x38, 6);
            auVar80._11_5_ = 0;
            auVar80._0_11_ = SUB1611(auVar81 << 0x30, 5);
            auVar79._12_4_ = 0;
            auVar79._0_12_ = SUB1612(auVar80 << 0x28, 4);
            auVar78._13_3_ = 0;
            auVar78._0_13_ = SUB1613(auVar79 << 0x20, 3);
            auVar166._14_2_ = 0;
            auVar166._0_14_ = SUB1614(auVar78 << 0x18, 2);
            auVar166 = auVar166 << 0x10;
            auVar174._0_3_ = auVar149._1_3_;
            auVar174[3] = auVar149[0];
            auVar174[4] = uVar155;
            auVar174[5] = auVar149[6];
            auVar174[6] = uVar156;
            auVar174[7] = auVar149[4];
            auVar174[8] = auVar149[9];
            auVar174[9] = auVar149[10];
            auVar174[10] = uVar160;
            auVar174[0xb] = auVar149[8];
            auVar174[0xc] = uVar162;
            auVar174[0xd] = auVar149[0xe];
            auVar174[0xe] = auVar173[0xf];
            auVar174[0xf] = auVar149[0xc];
            auVar152._0_14_ = auVar166._0_14_;
            auVar152[0xe] = uVar143;
            auVar152[0xf] = auVar122[0xc];
            auVar151._14_2_ = auVar152._14_2_;
            auVar151._0_13_ = auVar166._0_13_;
            auVar151[0xd] = auVar122[0xe];
            auVar150._13_3_ = auVar151._13_3_;
            auVar150._0_12_ = auVar166._0_12_;
            auVar150[0xc] = auVar122[0xd];
            auVar149._12_4_ = auVar150._12_4_;
            auVar149._0_11_ = auVar166._0_11_;
            auVar149[0xb] = auVar122[8];
            auVar148._11_5_ = auVar149._11_5_;
            auVar148._0_10_ = auVar166._0_10_;
            auVar148[10] = uVar123;
            auVar147._10_6_ = auVar148._10_6_;
            auVar147._0_9_ = auVar166._0_9_;
            auVar147[9] = auVar122[10];
            auVar146._9_7_ = auVar147._9_7_;
            auVar146._0_8_ = auVar166._0_8_;
            auVar146[8] = auVar122[9];
            auVar145._8_8_ = auVar146._8_8_;
            auVar145[7] = auVar122[4];
            auVar145[6] = auVar122[7];
            auVar145[5] = auVar122[6];
            auVar145[4] = auVar122[5];
            auVar145[3] = auVar122[0];
            auVar145[2] = auVar122[3];
            auVar145._0_2_ = auVar122._1_2_;
            pauVar84[1] = auVar174;
            *pauVar84 = auVar145;
            auVar122._0_3_ = auVar153._1_3_;
            auVar122[3] = auVar153[0];
            auVar122[4] = uVar203;
            auVar122[5] = auVar153[6];
            auVar122[6] = auVar153[7];
            auVar122[7] = auVar153[4];
            auVar122[8] = uVar204;
            auVar122[9] = auVar153[10];
            auVar122[10] = auVar153[0xb];
            auVar122[0xb] = auVar153[8];
            auVar122[0xc] = auVar153[0xd];
            auVar122[0xd] = auVar153[0xe];
            auVar122[0xe] = auVar153[0xf];
            auVar122[0xf] = auVar153[0xc];
            auVar153._8_8_ =
                (uint64_t)(CONCAT72(
                               CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(auVar140[0xc],
                                                                                     uVar176),
                                                                            auVar140[0xe]),
                                                                   uVar175),
                                                          auVar140[8]),
                                                 uVar161),
                                        auVar140[10]),
                               CONCAT11(uVar157, uVar176)) >>
                           8);
            auVar153[7] = auVar140[4];
            auVar153[6] = uVar154;
            auVar153[5] = auVar140[6];
            auVar153[4] = uVar144;
            auVar153[3] = auVar140[0];
            auVar153[2] = auVar140[3];
            auVar153._0_2_ = auVar140._1_2_;
            pauVar84[3] = auVar122;
            pauVar84[2] = auVar153;
            pauVar84 = pauVar84 + 4;
          } while (uVar87 < uVar86);
          arg2 = (uint8_t (*)[16])(*arg2 + (ulong)uVar85 * 4);
          pauVar84 = arg2;
          if (uVar85 == uVar4) {
            return;
          }
        }
        do {
          uVar123 = (*arg2)[0];
          uVar85 = uVar85 + 1;
          (*pauVar84)[0] = (*arg2)[1];
          (*pauVar84)[1] = (*arg2)[2];
          uVar143 = (*arg2)[3];
          arg2 = (uint8_t (*)[16])(*arg2 + 4);
          (*pauVar84)[3] = uVar123;
          (*pauVar84)[2] = uVar143;
          pauVar84 = (uint8_t (*)[16])(*pauVar84 + 4);
        } while (uVar85 < uVar4);
        return;
      }
    } else {
      uVar4 = *arg1;
      if (uVar4 != 0) {
        uVar86 = uVar4 >> 4;
        uVar85 = uVar86 << 4;
        if ((uVar4 < 0x10) || (uVar86 == 0)) {
          uVar85 = 0;
          pauVar84 = arg2;
        } else {
          uVar87 = 0;
          pauVar84 = arg2;
          do {
            auVar122 = *pauVar84;
            uVar87 = uVar87 + 1;
            auVar149 = pauVar84[1];
            auVar140 = pauVar84[2];
            uVar156 = auVar149[10];
            uVar157 = auVar149[0xe];
            uVar154 = auVar149[6];
            auVar153 = pauVar84[3];
            auVar97 = pauVar84[4];
            auVar1 = pauVar84[5];
            uVar155 = auVar140[6];
            auVar2 = pauVar84[6];
            uVar143 = auVar140[10];
            uVar160 = auVar153[10];
            uVar144 = auVar140[0xe];
            auVar3 = pauVar84[7];
            uVar161 = auVar97[10];
            uVar203 = auVar1[10];
            uVar162 = auVar97[0xe];
            uVar222 = auVar1[0xe];
            uVar176 = auVar1[6];
            uVar175 = auVar1[2];
            uVar204 = auVar2[10];
            uVar123 = auVar2[6];
            auVar30._1_8_ =
                (long)(CONCAT72(
                           CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar222, uVar157),
                                                                        uVar203),
                                                               uVar156),
                                                      uVar176),
                                             uVar154),
                                    uVar175),
                           CONCAT11(auVar149[2], uVar157)) >>
                       8);
            auVar30[0] = uVar162;
            auVar30._9_7_ = 0;
            auVar29._10_6_ = 0;
            auVar29._0_10_ = SUB1610(auVar30 << 0x38, 6);
            auVar28._11_5_ = 0;
            auVar28._0_11_ = SUB1611(auVar29 << 0x30, 5);
            auVar27._12_4_ = 0;
            auVar27._0_12_ = SUB1612(auVar28 << 0x28, 4);
            auVar26._13_3_ = 0;
            auVar26._0_13_ = SUB1613(auVar27 << 0x20, 3);
            auVar177._14_2_ = 0;
            auVar177._0_14_ = SUB1614(auVar26 << 0x18, 2);
            auVar177 = auVar177 << 0x10;
            auVar185._0_14_ = auVar177._0_14_;
            auVar185[0xe] = uVar162;
            auVar185[0xf] = auVar2[0xe];
            auVar184._14_2_ = auVar185._14_2_;
            auVar184._0_13_ = auVar177._0_13_;
            auVar184[0xd] = uVar144;
            auVar183._13_3_ = auVar184._13_3_;
            auVar183._0_12_ = auVar177._0_12_;
            auVar183[0xc] = auVar122[0xe];
            auVar182._12_4_ = auVar183._12_4_;
            auVar182._0_11_ = auVar177._0_11_;
            auVar182[0xb] = uVar204;
            auVar181._11_5_ = auVar182._11_5_;
            auVar181._0_10_ = auVar177._0_10_;
            auVar181[10] = uVar161;
            auVar180._10_6_ = auVar181._10_6_;
            auVar180._0_9_ = auVar177._0_9_;
            auVar180[9] = uVar143;
            auVar179._9_7_ = auVar180._9_7_;
            auVar179._0_8_ = auVar177._0_8_;
            auVar179[8] = auVar122[10];
            auVar35._1_8_ = auVar179._8_8_;
            auVar35[0] = uVar123;
            auVar35._9_7_ = 0;
            auVar34._10_6_ = 0;
            auVar34._0_10_ = SUB1610(auVar35 << 0x38, 6);
            auVar33._11_5_ = 0;
            auVar33._0_11_ = SUB1611(auVar34 << 0x30, 5);
            auVar32._12_4_ = 0;
            auVar32._0_12_ = SUB1612(auVar33 << 0x28, 4);
            auVar31._13_3_ = 0;
            auVar31._0_13_ = SUB1613(auVar32 << 0x20, 3);
            auVar178._14_2_ = 0;
            auVar178._0_14_ = SUB1614(auVar31 << 0x18, 2);
            auVar178 = auVar178 << 0x10;
            auVar193._0_14_ = auVar178._0_14_;
            auVar193[0xe] = uVar123;
            auVar193[0xf] = auVar3[6];
            auVar192._14_2_ = auVar193._14_2_;
            auVar192._0_13_ = auVar178._0_13_;
            auVar192[0xd] = uVar176;
            auVar191._13_3_ = auVar192._13_3_;
            auVar191._0_12_ = auVar178._0_12_;
            auVar191[0xc] = auVar97[6];
            auVar190._12_4_ = auVar191._12_4_;
            auVar190._0_11_ = auVar178._0_11_;
            auVar190[0xb] = auVar153[6];
            auVar189._11_5_ = auVar190._11_5_;
            auVar189._0_10_ = auVar178._0_10_;
            auVar189[10] = uVar155;
            auVar188._10_6_ = auVar189._10_6_;
            auVar188._0_9_ = auVar178._0_9_;
            auVar188[9] = uVar154;
            auVar187._9_7_ = auVar188._9_7_;
            auVar187._0_8_ = auVar178._0_8_;
            auVar187[8] = auVar122[6];
            auVar40._1_8_ = auVar187._8_8_;
            auVar40[0] = auVar3[2];
            auVar40._9_7_ = 0;
            auVar39._10_6_ = 0;
            auVar39._0_10_ = SUB1610(auVar40 << 0x38, 6);
            auVar38._11_5_ = 0;
            auVar38._0_11_ = SUB1611(auVar39 << 0x30, 5);
            auVar37._12_4_ = 0;
            auVar37._0_12_ = SUB1612(auVar38 << 0x28, 4);
            auVar36._13_3_ = 0;
            auVar36._0_13_ = SUB1613(auVar37 << 0x20, 3);
            auVar186._14_2_ = 0;
            auVar186._0_14_ = SUB1614(auVar36 << 0x18, 2);
            auVar186 = auVar186 << 0x10;
            auVar201._0_14_ = auVar186._0_14_;
            auVar201[0xe] = auVar3[2];
            auVar201[0xf] = auVar3[10];
            auVar200._14_2_ = auVar201._14_2_;
            auVar200._0_13_ = auVar186._0_13_;
            auVar200[0xd] = uVar204;
            auVar199._13_3_ = auVar200._13_3_;
            auVar199._0_12_ = auVar186._0_12_;
            auVar199[0xc] = auVar2[2];
            auVar198._12_4_ = auVar199._12_4_;
            auVar198._0_11_ = auVar186._0_11_;
            auVar198[0xb] = uVar203;
            auVar197._11_5_ = auVar198._11_5_;
            auVar197._0_10_ = auVar186._0_10_;
            auVar197[10] = uVar175;
            auVar196._10_6_ = auVar197._10_6_;
            auVar196._0_9_ = auVar186._0_9_;
            auVar196[9] = uVar161;
            auVar195._9_7_ = auVar196._9_7_;
            auVar195._0_8_ = auVar186._0_8_;
            auVar195[8] = auVar97[2];
            auVar45._1_8_ = auVar195._8_8_;
            auVar45[0] = uVar160;
            auVar45._9_7_ = 0;
            auVar44._10_6_ = 0;
            auVar44._0_10_ = SUB1610(auVar45 << 0x38, 6);
            auVar43._11_5_ = 0;
            auVar43._0_11_ = SUB1611(auVar44 << 0x30, 5);
            auVar42._12_4_ = 0;
            auVar42._0_12_ = SUB1612(auVar43 << 0x28, 4);
            auVar41._13_3_ = 0;
            auVar41._0_13_ = SUB1613(auVar42 << 0x20, 3);
            auVar194._14_2_ = 0;
            auVar194._0_14_ = SUB1614(auVar41 << 0x18, 2);
            auVar194 = auVar194 << 0x10;
            auVar212._0_14_ = auVar194._0_14_;
            auVar212[0xe] = uVar160;
            auVar212[0xf] = auVar153[0xe];
            auVar211._14_2_ = auVar212._14_2_;
            auVar211._0_13_ = auVar194._0_13_;
            auVar211[0xd] = auVar153[6];
            auVar210._13_3_ = auVar211._13_3_;
            auVar210._0_12_ = auVar194._0_12_;
            auVar210[0xc] = auVar153[2];
            auVar209._12_4_ = auVar210._12_4_;
            auVar209._0_11_ = auVar194._0_11_;
            auVar209[0xb] = uVar144;
            auVar208._11_5_ = auVar209._11_5_;
            auVar208._0_10_ = auVar194._0_10_;
            auVar208[10] = uVar143;
            auVar207._10_6_ = auVar208._10_6_;
            auVar207._0_9_ = auVar194._0_9_;
            auVar207[9] = uVar155;
            auVar206._9_7_ = auVar207._9_7_;
            auVar206._0_8_ = auVar194._0_8_;
            auVar206[8] = auVar140[2];
            auVar50._1_8_ = auVar206._8_8_;
            auVar50[0] = uVar157;
            auVar50._9_7_ = 0;
            auVar49._10_6_ = 0;
            auVar49._0_10_ = SUB1610(auVar50 << 0x38, 6);
            auVar48._11_5_ = 0;
            auVar48._0_11_ = SUB1611(auVar49 << 0x30, 5);
            auVar47._12_4_ = 0;
            auVar47._0_12_ = SUB1612(auVar48 << 0x28, 4);
            auVar46._13_3_ = 0;
            auVar46._0_13_ = SUB1613(auVar47 << 0x20, 3);
            auVar205._14_2_ = 0;
            auVar205._0_14_ = SUB1614(auVar46 << 0x18, 2);
            auVar205 = auVar205 << 0x10;
            auVar220._0_14_ = auVar205._0_14_;
            auVar220[0xe] = uVar157;
            auVar220[0xf] = auVar149[8];
            auVar219._14_2_ = auVar220._14_2_;
            auVar219._0_13_ = auVar205._0_13_;
            auVar219[0xd] = auVar149[0xc];
            auVar218._13_3_ = auVar219._13_3_;
            auVar218._0_12_ = auVar205._0_12_;
            auVar218[0xc] = uVar156;
            auVar217._12_4_ = auVar218._12_4_;
            auVar217._0_11_ = auVar205._0_11_;
            auVar217[0xb] = auVar149[0];
            auVar216._11_5_ = auVar217._11_5_;
            auVar216._0_10_ = auVar205._0_10_;
            auVar216[10] = uVar154;
            auVar215._10_6_ = auVar216._10_6_;
            auVar215._0_9_ = auVar205._0_9_;
            auVar215[9] = auVar149[4];
            auVar214._9_7_ = auVar215._9_7_;
            auVar214._0_8_ = auVar205._0_8_;
            auVar214[8] = auVar149[2];
            auVar55._1_8_ = auVar214._8_8_;
            auVar55[0] = auVar122[8];
            auVar55._9_7_ = 0;
            auVar54._10_6_ = 0;
            auVar54._0_10_ = SUB1610(auVar55 << 0x38, 6);
            auVar53._11_5_ = 0;
            auVar53._0_11_ = SUB1611(auVar54 << 0x30, 5);
            auVar52._12_4_ = 0;
            auVar52._0_12_ = SUB1612(auVar53 << 0x28, 4);
            auVar51._13_3_ = 0;
            auVar51._0_13_ = SUB1613(auVar52 << 0x20, 3);
            auVar213._14_2_ = 0;
            auVar213._0_14_ = SUB1614(auVar51 << 0x18, 2);
            auVar213 = auVar213 << 0x10;
            auVar60._1_8_ =
                (long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(auVar1[8],
                                                                                      uVar222),
                                                                             auVar1[0xc]),
                                                                    uVar203),
                                                           auVar1[0]),
                                                  uVar176),
                                         auVar1[4]),
                                CONCAT11(uVar175, uVar222)) >>
                       8);
            auVar60[0] = auVar97[8];
            auVar60._9_7_ = 0;
            auVar59._10_6_ = 0;
            auVar59._0_10_ = SUB1610(auVar60 << 0x38, 6);
            auVar58._11_5_ = 0;
            auVar58._0_11_ = SUB1611(auVar59 << 0x30, 5);
            auVar57._12_4_ = 0;
            auVar57._0_12_ = SUB1612(auVar58 << 0x28, 4);
            auVar56._13_3_ = 0;
            auVar56._0_13_ = SUB1613(auVar57 << 0x20, 3);
            auVar163._14_2_ = 0;
            auVar163._0_14_ = SUB1614(auVar56 << 0x18, 2);
            auVar163 = auVar163 << 0x10;
            auVar132._0_14_ = auVar213._0_14_;
            auVar132[0xe] = auVar122[8];
            auVar132[0xf] = auVar122[9];
            auVar131._14_2_ = auVar132._14_2_;
            auVar131._0_13_ = auVar213._0_13_;
            auVar131[0xd] = auVar122[0xf];
            auVar130._13_3_ = auVar131._13_3_;
            auVar130._0_12_ = auVar213._0_12_;
            auVar130[0xc] = auVar122[0xe];
            auVar129._12_4_ = auVar130._12_4_;
            auVar129._0_11_ = auVar213._0_11_;
            auVar129[0xb] = auVar122[0xd];
            auVar128._11_5_ = auVar129._11_5_;
            auVar128._0_10_ = auVar213._0_10_;
            auVar128[10] = auVar122[0xc];
            auVar127._10_6_ = auVar128._10_6_;
            auVar127._0_9_ = auVar213._0_9_;
            auVar127[9] = auVar122[0xb];
            auVar126._9_7_ = auVar127._9_7_;
            auVar126._0_8_ = auVar213._0_8_;
            auVar126[8] = auVar122[10];
            auVar125._8_8_ = auVar126._8_8_;
            auVar125[7] = auVar122[1];
            auVar125[6] = auVar122[0];
            auVar125[5] = auVar122[7];
            auVar125[4] = auVar122[6];
            auVar125[3] = auVar122[5];
            auVar125[2] = auVar122[4];
            auVar125._0_2_ = auVar122._2_2_;
            auVar221._0_6_ = auVar149._2_6_;
            auVar221[6] = auVar149[0];
            auVar221[7] = auVar149[1];
            auVar221[8] = uVar156;
            auVar221[9] = auVar149[0xb];
            auVar221[10] = auVar149[0xc];
            auVar221[0xb] = auVar149[0xd];
            auVar221[0xc] = uVar157;
            auVar221[0xd] = auVar149[0xf];
            auVar221[0xe] = auVar149[8];
            auVar221[0xf] = auVar149[9];
            *pauVar84 = auVar125;
            auVar165._0_6_ = auVar153._2_6_;
            auVar165[6] = auVar153[0];
            auVar165[7] = auVar153[1];
            auVar165[8] = uVar160;
            auVar165[9] = auVar153[0xb];
            auVar165[10] = auVar153[0xc];
            auVar165[0xb] = auVar153[0xd];
            auVar165[0xc] = auVar153[0xe];
            auVar165[0xd] = auVar153[0xf];
            auVar165[0xe] = auVar153[8];
            auVar165[0xf] = auVar153[9];
            auVar133._14_2_ = auVar140._8_2_;
            auVar133[0xd] = auVar140[0xf];
            auVar133[0xc] = uVar144;
            auVar133[0xb] = auVar140[0xd];
            auVar133[10] = auVar140[0xc];
            auVar133[9] = auVar140[0xb];
            auVar133[8] = uVar143;
            auVar133[7] = auVar140[1];
            auVar133[6] = auVar140[0];
            auVar133[5] = auVar140[7];
            auVar133[4] = uVar155;
            auVar133[3] = auVar140[5];
            auVar133[2] = auVar140[4];
            auVar133._0_2_ = auVar140._2_2_;
            pauVar84[1] = auVar221;
            pauVar84[2] = auVar133;
            auVar164._0_6_ = auVar1._2_6_;
            auVar164[6] = auVar1[0];
            auVar164[7] = auVar1[1];
            auVar164[8] = uVar203;
            auVar164[9] = auVar1[0xb];
            auVar164[10] = auVar1[0xc];
            auVar164[0xb] = auVar1[0xd];
            auVar164[0xc] = uVar222;
            auVar164[0xd] = auVar1[0xf];
            auVar164[0xe] = auVar1[8];
            auVar164[0xf] = auVar1[9];
            auVar141._0_14_ = auVar163._0_14_;
            auVar141[0xe] = auVar97[8];
            auVar141[0xf] = auVar97[9];
            auVar140._14_2_ = auVar141._14_2_;
            auVar140._0_13_ = auVar163._0_13_;
            auVar140[0xd] = auVar97[0xf];
            auVar139._13_3_ = auVar140._13_3_;
            auVar139._0_12_ = auVar163._0_12_;
            auVar139[0xc] = uVar162;
            auVar138._12_4_ = auVar139._12_4_;
            auVar138._0_11_ = auVar163._0_11_;
            auVar138[0xb] = auVar97[0xd];
            auVar137._11_5_ = auVar138._11_5_;
            auVar137._0_10_ = auVar163._0_10_;
            auVar137[10] = auVar97[0xc];
            auVar136._10_6_ = auVar137._10_6_;
            auVar136._0_9_ = auVar163._0_9_;
            auVar136[9] = auVar97[0xb];
            auVar135._9_7_ = auVar136._9_7_;
            auVar135._0_8_ = auVar163._0_8_;
            auVar135[8] = uVar161;
            auVar134._8_8_ = auVar135._8_8_;
            auVar134[7] = auVar97[1];
            auVar134[6] = auVar97[0];
            auVar134[5] = auVar97[7];
            auVar134[4] = auVar97[6];
            auVar134[3] = auVar97[5];
            auVar134[2] = auVar97[4];
            auVar134._0_2_ = auVar97._2_2_;
            pauVar84[3] = auVar165;
            pauVar84[4] = auVar134;
            auVar202._0_6_ = auVar3._2_6_;
            auVar202[6] = auVar3[0];
            auVar202[7] = auVar3[1];
            auVar202[8] = auVar3[10];
            auVar202[9] = auVar3[0xb];
            auVar202[10] = auVar3[0xc];
            auVar202[0xb] = auVar3[0xd];
            auVar202[0xc] = auVar3[0xe];
            auVar202[0xd] = auVar3[0xf];
            auVar202[0xe] = auVar3[8];
            auVar202[0xf] = auVar3[9];
            auVar142._14_2_ = auVar2._8_2_;
            auVar142[0xd] = auVar2[0xf];
            auVar142[0xc] = auVar2[0xe];
            auVar142[0xb] = auVar2[0xd];
            auVar142[10] = auVar2[0xc];
            auVar142[9] = auVar2[0xb];
            auVar142[8] = uVar204;
            auVar142[7] = auVar2[1];
            auVar142[6] = auVar2[0];
            auVar142[5] = auVar2[7];
            auVar142[4] = uVar123;
            auVar142[3] = auVar2[5];
            auVar142[2] = auVar2[4];
            auVar142._0_2_ = auVar2._2_2_;
            pauVar84[5] = auVar164;
            pauVar84[6] = auVar142;
            pauVar84[7] = auVar202;
            pauVar84 = pauVar84 + 8;
          } while (uVar87 < uVar86);
          arg2 = (uint8_t (*)[16])(*arg2 + (ulong)uVar85 * 8);
          pauVar84 = arg2;
          if (uVar4 == uVar85) {
            return;
          }
        }
        do {
          uVar123 = (*arg2)[0];
          uVar85 = uVar85 + 1;
          uVar143 = (*arg2)[1];
          (*pauVar84)[0] = (*arg2)[2];
          (*pauVar84)[1] = (*arg2)[3];
          (*pauVar84)[2] = (*arg2)[4];
          (*pauVar84)[3] = (*arg2)[5];
          (*pauVar84)[4] = (*arg2)[6];
          uVar144 = (*arg2)[7];
          arg2 = (uint8_t (*)[16])(*arg2 + 8);
          (*pauVar84)[6] = uVar123;
          (*pauVar84)[7] = uVar143;
          (*pauVar84)[5] = uVar144;
          pauVar84 = (uint8_t (*)[16])(*pauVar84 + 8);
        } while (uVar85 < uVar4);
        return;
      }
    }
  } else if ((char)arg1[2] == '\x04') {
    if (*(char *)((long)arg1 + 9) == '\b') {
      uVar4 = *arg1;
      if (uVar4 != 0) {
        uVar86 = uVar4 >> 4;
        uVar85 = uVar86 << 4;
        if ((uVar4 < 0x10) || (uVar86 == 0)) {
          uVar85 = 0;
          pauVar84 = arg2;
        } else {
          uVar87 = 0;
          pauVar84 = arg2;
          do {
            uVar123 = (*pauVar84)[0];
            uVar143 = (*pauVar84)[1];
            uVar144 = (*pauVar84)[2];
            uVar154 = (*pauVar84)[3];
            uVar155 = (*pauVar84)[4];
            uVar156 = (*pauVar84)[5];
            uVar157 = (*pauVar84)[6];
            uVar160 = (*pauVar84)[7];
            uVar161 = (*pauVar84)[8];
            uVar162 = (*pauVar84)[9];
            uVar175 = (*pauVar84)[10];
            uVar176 = (*pauVar84)[0xb];
            uVar203 = (*pauVar84)[0xc];
            uVar204 = (*pauVar84)[0xd];
            uVar222 = (*pauVar84)[0xe];
            uVar5 = (*pauVar84)[0xf];
            uVar87 = uVar87 + 1;
            uVar6 = pauVar84[1][0];
            uVar7 = pauVar84[1][2];
            uVar8 = pauVar84[1][3];
            uVar9 = pauVar84[1][4];
            uVar10 = pauVar84[1][5];
            uVar11 = pauVar84[1][6];
            uVar12 = pauVar84[1][7];
            uVar13 = pauVar84[1][8];
            uVar14 = pauVar84[1][9];
            uVar15 = pauVar84[1][10];
            uVar16 = pauVar84[1][0xb];
            uVar17 = pauVar84[1][0xc];
            uVar18 = pauVar84[1][0xd];
            uVar19 = pauVar84[1][0xe];
            uVar20 = pauVar84[1][0xf];
            pauVar84[1][0] = pauVar84[1][1];
            pauVar84[1][1] = uVar6;
            pauVar84[1][2] = uVar8;
            pauVar84[1][3] = uVar7;
            pauVar84[1][4] = uVar10;
            pauVar84[1][5] = uVar9;
            pauVar84[1][6] = uVar12;
            pauVar84[1][7] = uVar11;
            pauVar84[1][8] = uVar14;
            pauVar84[1][9] = uVar13;
            pauVar84[1][10] = uVar16;
            pauVar84[1][0xb] = uVar15;
            pauVar84[1][0xc] = uVar18;
            pauVar84[1][0xd] = uVar17;
            pauVar84[1][0xe] = uVar20;
            pauVar84[1][0xf] = uVar19;
            (*pauVar84)[0] = uVar143;
            (*pauVar84)[1] = uVar123;
            (*pauVar84)[2] = uVar154;
            (*pauVar84)[3] = uVar144;
            (*pauVar84)[4] = uVar156;
            (*pauVar84)[5] = uVar155;
            (*pauVar84)[6] = uVar160;
            (*pauVar84)[7] = uVar157;
            (*pauVar84)[8] = uVar162;
            (*pauVar84)[9] = uVar161;
            (*pauVar84)[10] = uVar176;
            (*pauVar84)[0xb] = uVar175;
            (*pauVar84)[0xc] = uVar204;
            (*pauVar84)[0xd] = uVar203;
            (*pauVar84)[0xe] = uVar5;
            (*pauVar84)[0xf] = uVar222;
            pauVar84 = pauVar84 + 2;
          } while (uVar87 < uVar86);
          arg2 = (uint8_t (*)[16])(*arg2 + (ulong)uVar85 * 2);
          pauVar84 = arg2;
          if (uVar4 == uVar85) {
            return;
          }
        }
        do {
          uVar123 = (*arg2)[0];
          puVar83 = *arg2;
          uVar85 = uVar85 + 1;
          arg2 = (uint8_t (*)[16])(*arg2 + 2);
          (*pauVar84)[0] = puVar83[1];
          (*pauVar84)[1] = uVar123;
          pauVar84 = (uint8_t (*)[16])(*pauVar84 + 2);
        } while (uVar85 < uVar4);
        return;
      }
    } else {
      uVar4 = *arg1;
      if (uVar4 != 0) {
        uVar86 = uVar4 >> 4;
        uVar85 = uVar86 << 4;
        if ((uVar4 < 0x10) || (uVar86 == 0)) {
          uVar85 = 0;
          pauVar84 = arg2;
        } else {
          uVar87 = 0;
          pauVar84 = arg2;
          do {
            auVar122 = *pauVar84;
            uVar87 = uVar87 + 1;
            auVar149 = pauVar84[1];
            uVar123 = auVar149[0xe];
            auVar140 = pauVar84[2];
            auVar153 = pauVar84[3];
            auVar25._1_8_ =
                (long)(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(auVar149[0xc],
                                                                                      uVar123),
                                                                             auVar149[8]),
                                                                    auVar149[10]),
                                                           auVar149[4]),
                                                  auVar149[6]),
                                         auVar149[0]),
                                CONCAT11(auVar149[2], uVar123)) >>
                       8);
            auVar25[0] = auVar122[0xc];
            auVar25._9_7_ = 0;
            auVar24._10_6_ = 0;
            auVar24._0_10_ = SUB1610(auVar25 << 0x38, 6);
            auVar23._11_5_ = 0;
            auVar23._0_11_ = SUB1611(auVar24 << 0x30, 5);
            auVar22._12_4_ = 0;
            auVar22._0_12_ = SUB1612(auVar23 << 0x28, 4);
            auVar21._13_3_ = 0;
            auVar21._0_13_ = SUB1613(auVar22 << 0x20, 3);
            auVar158._14_2_ = 0;
            auVar158._0_14_ = SUB1614(auVar21 << 0x18, 2);
            auVar158 = auVar158 << 0x10;
            auVar95._0_14_ = auVar158._0_14_;
            auVar95[0xe] = auVar122[0xc];
            auVar95[0xf] = auVar122[0xd];
            auVar94._14_2_ = auVar95._14_2_;
            auVar94._0_13_ = auVar158._0_13_;
            auVar94[0xd] = auVar122[0xf];
            auVar93._13_3_ = auVar94._13_3_;
            auVar93._0_12_ = auVar158._0_12_;
            auVar93[0xc] = auVar122[0xe];
            auVar92._12_4_ = auVar93._12_4_;
            auVar92._0_11_ = auVar158._0_11_;
            auVar92[0xb] = auVar122[9];
            auVar91._11_5_ = auVar92._11_5_;
            auVar91._0_10_ = auVar158._0_10_;
            auVar91[10] = auVar122[8];
            auVar90._10_6_ = auVar91._10_6_;
            auVar90._0_9_ = auVar158._0_9_;
            auVar90[9] = auVar122[0xb];
            auVar89._9_7_ = auVar90._9_7_;
            auVar89._0_8_ = auVar158._0_8_;
            auVar89[8] = auVar122[10];
            auVar88._8_8_ = auVar89._8_8_;
            auVar88[7] = auVar122[5];
            auVar88[6] = auVar122[4];
            auVar88[5] = auVar122[7];
            auVar88[4] = auVar122[6];
            auVar88[3] = auVar122[1];
            auVar88[2] = auVar122[0];
            auVar88._0_2_ = auVar122._2_2_;
            auVar159._0_2_ = auVar149._2_2_;
            auVar159[2] = auVar149[0];
            auVar159[3] = auVar149[1];
            auVar159[4] = auVar149[6];
            auVar159[5] = auVar149[7];
            auVar159[6] = auVar149[4];
            auVar159[7] = auVar149[5];
            auVar159[8] = auVar149[10];
            auVar159[9] = auVar149[0xb];
            auVar159[10] = auVar149[8];
            auVar159[0xb] = auVar149[9];
            auVar159[0xc] = uVar123;
            auVar159[0xd] = auVar149[0xf];
            auVar159[0xe] = auVar149[0xc];
            auVar159[0xf] = auVar149[0xd];
            *pauVar84 = auVar88;
            auVar124._0_2_ = auVar153._2_2_;
            auVar124[2] = auVar153[0];
            auVar124[3] = auVar153[1];
            auVar124[4] = auVar153[6];
            auVar124[5] = auVar153[7];
            auVar124[6] = auVar153[4];
            auVar124[7] = auVar153[5];
            auVar124[8] = auVar153[10];
            auVar124[9] = auVar153[0xb];
            auVar124[10] = auVar153[8];
            auVar124[0xb] = auVar153[9];
            auVar124[0xc] = auVar153[0xe];
            auVar124[0xd] = auVar153[0xf];
            auVar124[0xe] = auVar153[0xc];
            auVar124[0xf] = auVar153[0xd];
            auVar96._14_2_ = auVar140._12_2_;
            auVar96[0xd] = auVar140[0xf];
            auVar96[0xc] = auVar140[0xe];
            auVar96[0xb] = auVar140[9];
            auVar96[10] = auVar140[8];
            auVar96[9] = auVar140[0xb];
            auVar96[8] = auVar140[10];
            auVar96[7] = auVar140[5];
            auVar96[6] = auVar140[4];
            auVar96[5] = auVar140[7];
            auVar96[4] = auVar140[6];
            auVar96[3] = auVar140[1];
            auVar96[2] = auVar140[0];
            auVar96._0_2_ = auVar140._2_2_;
            pauVar84[1] = auVar159;
            pauVar84[2] = auVar96;
            pauVar84[3] = auVar124;
            pauVar84 = pauVar84 + 4;
          } while (uVar87 < uVar86);
          arg2 = (uint8_t (*)[16])(*arg2 + (ulong)uVar85 * 4);
          pauVar84 = arg2;
          if (uVar4 == uVar85) {
            return;
          }
        }
        do {
          uVar123 = (*arg2)[0];
          uVar85 = uVar85 + 1;
          uVar143 = (*arg2)[1];
          (*pauVar84)[0] = (*arg2)[2];
          uVar144 = (*arg2)[3];
          arg2 = (uint8_t (*)[16])(*arg2 + 4);
          (*pauVar84)[2] = uVar123;
          (*pauVar84)[3] = uVar143;
          (*pauVar84)[1] = uVar144;
          pauVar84 = (uint8_t (*)[16])(*pauVar84 + 4);
        } while (uVar85 < uVar4);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * png_do_write_invert_alpha  (Ghidra `png_do_write_invert_alpha` @ 005585a0)
 * Signature: uint8_t png_do_write_invert_alpha(void)
 * Calls: (none)
 * Called by: `png_do_write_transformations`
 */
void png_do_write_invert_alpha(uint *arg1, uint8_t *arg2)

{
  byte *pbVar1;
  uint uVar2;
  uint8_t *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  if ((char)arg1[2] == '\x06') {
    uVar2 = *arg1;
    if (*(char *)((long)arg1 + 9) == '\b') {
      if (uVar2 != 0) {
        puVar3 = arg2 + (ulong)(uVar2 - 1) * 4 + 4;
        do {
          arg2[3] = ~arg2[3];
          arg2 = arg2 + 4;
        } while (puVar3 != arg2);
        return;
      }
    } else if (uVar2 != 0) {
      puVar3 = arg2 + (ulong)(uVar2 - 1) * 8 + 8;
      do {
        arg2[6] = ~arg2[6];
        arg2[7] = ~arg2[7];
        arg2 = arg2 + 8;
      } while (puVar3 != arg2);
      return;
    }
  } else if ((char)arg1[2] == '\x04') {
    if (*(char *)((long)arg1 + 9) == '\b') {
      uVar2 = *arg1;
      if (uVar2 != 0) {
        uVar5 = uVar2 >> 4;
        uVar6 = uVar5 << 4;
        if ((uVar5 == 0) || (uVar2 < 0x10)) {
          uVar6 = 0;
          puVar3 = arg2;
        } else {
          uVar4 = 0;
          puVar3 = arg2;
          do {
            uVar4 = uVar4 + 1;
            puVar3[0x10] = puVar3[0x10];
            puVar3[0x11] = puVar3[0x11] ^ 0xff;
            puVar3[0x12] = puVar3[0x12];
            puVar3[0x13] = puVar3[0x13] ^ 0xff;
            puVar3[0x14] = puVar3[0x14];
            puVar3[0x15] = puVar3[0x15] ^ 0xff;
            puVar3[0x16] = puVar3[0x16];
            puVar3[0x17] = puVar3[0x17] ^ 0xff;
            puVar3[0x18] = puVar3[0x18];
            puVar3[0x19] = puVar3[0x19] ^ 0xff;
            puVar3[0x1a] = puVar3[0x1a];
            puVar3[0x1b] = puVar3[0x1b] ^ 0xff;
            puVar3[0x1c] = puVar3[0x1c];
            puVar3[0x1d] = puVar3[0x1d] ^ 0xff;
            puVar3[0x1e] = puVar3[0x1e];
            puVar3[0x1f] = puVar3[0x1f] ^ 0xff;
            *puVar3 = *puVar3;
            puVar3[1] = puVar3[1] ^ 0xff;
            puVar3[2] = puVar3[2];
            puVar3[3] = puVar3[3] ^ 0xff;
            puVar3[4] = puVar3[4];
            puVar3[5] = puVar3[5] ^ 0xff;
            puVar3[6] = puVar3[6];
            puVar3[7] = puVar3[7] ^ 0xff;
            puVar3[8] = puVar3[8];
            puVar3[9] = puVar3[9] ^ 0xff;
            puVar3[10] = puVar3[10];
            puVar3[0xb] = puVar3[0xb] ^ 0xff;
            puVar3[0xc] = puVar3[0xc];
            puVar3[0xd] = puVar3[0xd] ^ 0xff;
            puVar3[0xe] = puVar3[0xe];
            puVar3[0xf] = puVar3[0xf] ^ 0xff;
            puVar3 = puVar3 + 0x20;
          } while (uVar4 < uVar5);
          arg2 = arg2 + (ulong)uVar6 * 2;
          puVar3 = arg2;
          if (uVar2 == uVar6) {
            return;
          }
        }
        do {
          uVar6 = uVar6 + 1;
          *puVar3 = *arg2;
          pbVar1 = arg2 + 1;
          arg2 = arg2 + 2;
          puVar3[1] = ~*pbVar1;
          puVar3 = puVar3 + 2;
        } while (uVar6 < uVar2);
        return;
      }
    } else if (*arg1 != 0) {
      puVar3 = arg2 + (ulong)(*arg1 - 1) * 4 + 4;
      do {
        arg2[2] = ~arg2[2];
        arg2[3] = ~arg2[3];
        arg2 = arg2 + 4;
      } while (puVar3 != arg2);
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_do_write_transformations  (Ghidra `png_do_write_transformations` @ 00558720)
 * Signature: uint8_t png_do_write_transformations(void)
 * Calls: `png_do_bgr`, `png_do_invert`, `png_do_pack`, `png_do_packswap`, `png_do_shift`, `png_do_strip_filler`, `png_do_swap`, `png_do_write_invert_alpha`, `png_do_write_swap_alpha`
 * Called by: `png_write_row`
 */
/* WARNING: Type propagation algorithm not settling */

void png_do_write_transformations(long arg1)

{
  uint uVar1;

  if (arg1 != 0) {
    uVar1 = *(uint *)(arg1 + 0x11c);
    if (((uVar1 & 0x100000) != 0) && (*(code **)(arg1 + 0x100) != (code *)0x0)) {
      (**(code **)(arg1 + 0x100))(arg1, arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
      uVar1 = *(uint *)(arg1 + 0x11c);
    }
    if ((uVar1 & 0x8000) != 0) {
      png_do_strip_filler(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1, *(uint32_t *)(arg1 + 0x118));
      uVar1 = *(uint *)(arg1 + 0x11c);
    }
    if ((uVar1 & 0x10000) != 0) {
      png_do_packswap(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
      uVar1 = *(uint *)(arg1 + 0x11c);
    }
    if ((uVar1 & 4) != 0) {
      png_do_pack(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1, *(uint8_t *)(arg1 + 0x237));
      uVar1 = *(uint *)(arg1 + 0x11c);
    }
    if ((uVar1 & 0x10) != 0) {
      png_do_swap(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
      uVar1 = *(uint *)(arg1 + 0x11c);
    }
    if ((uVar1 & 8) != 0) {
      png_do_shift(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1, arg1 + 0x2b5);
      uVar1 = *(uint *)(arg1 + 0x11c);
    }
    if ((uVar1 & 0x20000) != 0) {
      png_do_write_swap_alpha(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
      uVar1 = *(uint *)(arg1 + 0x11c);
    }
    if ((uVar1 & 0x80000) != 0) {
      png_do_write_invert_alpha(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
      uVar1 = *(uint *)(arg1 + 0x11c);
    }
    if ((uVar1 & 1) != 0) {
      png_do_bgr(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
      uVar1 = *(uint *)(arg1 + 0x11c);
    }
    if ((uVar1 & 0x20) != 0) {
      png_do_invert(arg1 + 0x208, *(long *)(arg1 + 0x1e0) + 1);
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_do_write_intrapixel  (Ghidra `png_do_write_intrapixel` @ 00558940)
 * Signature: uint8_t png_do_write_intrapixel(void)
 * Calls: (none)
 * Called by: `png_write_row`
 */
void png_do_write_intrapixel(int *arg1, char *arg2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;

  bVar1 = *(byte *)(arg1 + 2);
  if ((bVar1 & 2) != 0) {
    iVar2 = *arg1;
    if (*(char *)((long)arg1 + 9) == '\b') {
      if (bVar1 == 2) {
        lVar6 = 3;
      } else {
        lVar6 = 4;
        if (bVar1 != 6) {
          return;
        }
      }
      if (iVar2 != 0) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          *arg2 = *arg2 - arg2[1];
          arg2[2] = arg2[2] - arg2[1];
          arg2 = arg2 + lVar6;
        } while (iVar4 != iVar2);
        return;
      }
    } else if (*(char *)((long)arg1 + 9) == '\x10') {
      if (bVar1 == 2) {
        lVar6 = 6;
      } else {
        lVar6 = 8;
        if (bVar1 != 6) {
          return;
        }
      }
      if (iVar2 != 0) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          uVar5 = (uint)CONCAT11(*arg2, arg2[1]) - (uint)CONCAT11(arg2[2], arg2[3]) & 0xffff;
          arg2[1] = (char)uVar5;
          uVar3 = (uint)CONCAT11(arg2[4], arg2[5]) - (uint)CONCAT11(arg2[2], arg2[3]) & 0xffff;
          *arg2 = (char)(uVar5 >> 8);
          arg2[5] = (char)uVar3;
          arg2[4] = (char)(uVar3 >> 8);
          arg2 = arg2 + lVar6;
        } while (iVar4 != iVar2);
        return;
      }
    }
  }
  return;
}

/* ======================================================================
 * png_text_compress  (Ghidra `png_text_compress` @ 00558a30)
 * Signature: uint8_t png_text_compress(void)
 * Calls: `deflate`, `memcpy`, `png_error`, `png_free`, `png_malloc`, `png_warning`, `snprintf`
 * Called by: `png_write_iCCP`, `png_write_zTXt`
 */
ulong png_text_compress(long arg1, uint64_t arg2, uint arg3, int arg4, uint64_t *arg5)

{
  void *pvVar1;
  ulong uVar2;
  int iVar3;
  uint64_t uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  char *pcVar9;
  char acStack_68[64];

  *(uint32_t *)((long)arg5 + 0xc) = 0;
  *(uint32_t *)(arg5 + 2) = 0;
  arg5[3] = 0;
  *arg5 = 0;
  *(uint32_t *)(arg5 + 1) = 0;
  if (arg4 != -1) {
    if (2 < arg4) {
      snprintf(acStack_68, 0x32, "Unknown compression type %d");
      png_warning(arg1, acStack_68);
    }
    *(uint *)(arg1 + 0x128) = arg3;
    *(uint64_t *)(arg1 + 0x120) = arg2;
    *(int *)(arg1 + 0x140) = (int)*(uint64_t *)(arg1 + 0x198);
    *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 400);
    do {
      iVar3 = deflate(arg1 + 0x120, 0);
      if (iVar3 != 0) {
        png_error(arg1);
      }
      if (*(int *)(arg1 + 0x140) == 0) {
        iVar8 = *(int *)((long)arg5 + 0xc);
        iVar3 = *(int *)(arg5 + 2);
        if (iVar8 < iVar3) {
          lVar7 = arg5[3];
        } else {
          pvVar1 = (void *)arg5[3];
          *(int *)(arg5 + 2) = iVar8 + 4;
          iVar8 = (iVar8 + 4) * 8;
          if (pvVar1 == (void *)0x0) {
            lVar7 = png_malloc(arg1, iVar8);
            iVar8 = *(int *)((long)arg5 + 0xc);
            arg5[3] = lVar7;
          } else {
            pvVar5 = (void *)png_malloc(arg1, iVar8);
            arg5[3] = pvVar5;
            memcpy(pvVar5, pvVar1, (long)iVar3 * 8);
            png_free(arg1, pvVar1);
            lVar7 = arg5[3];
            iVar8 = *(int *)((long)arg5 + 0xc);
          }
        }
        uVar4 = png_malloc(arg1, *(uint64_t *)(arg1 + 0x198));
        *(uint64_t *)(lVar7 + (long)iVar8 * 8) = uVar4;
        memcpy(*(void **)(arg5[3] + (long)*(int *)((long)arg5 + 0xc) * 8), *(void **)(arg1 + 400),
               *(size_t *)(arg1 + 0x198));
        *(int *)((long)arg5 + 0xc) = *(int *)((long)arg5 + 0xc) + 1;
        *(int *)(arg1 + 0x140) = (int)*(uint64_t *)(arg1 + 0x198);
        *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 400);
      }
    } while (*(int *)(arg1 + 0x128) != 0);
    while (true) {
      while (iVar3 = deflate(arg1 + 0x120, 4), iVar3 == 0) {
        if (*(int *)(arg1 + 0x140) == 0) {
          iVar3 = *(int *)((long)arg5 + 0xc);
          iVar8 = *(int *)(arg5 + 2);
          if (iVar3 < iVar8) {
            lVar7 = arg5[3];
          } else {
            pvVar1 = (void *)arg5[3];
            *(int *)(arg5 + 2) = iVar3 + 4;
            iVar3 = (iVar3 + 4) * 8;
            if (pvVar1 == (void *)0x0) {
              lVar7 = png_malloc(arg1, iVar3);
              iVar3 = *(int *)((long)arg5 + 0xc);
              arg5[3] = lVar7;
            } else {
              pvVar5 = (void *)png_malloc(arg1, iVar3);
              arg5[3] = pvVar5;
              memcpy(pvVar5, pvVar1, (long)iVar8 * 8);
              png_free(arg1, pvVar1);
              lVar7 = arg5[3];
              iVar3 = *(int *)((long)arg5 + 0xc);
            }
          }
          uVar4 = png_malloc(arg1, *(uint64_t *)(arg1 + 0x198));
          *(uint64_t *)(lVar7 + (long)iVar3 * 8) = uVar4;
          memcpy(*(void **)(arg5[3] + (long)*(int *)((long)arg5 + 0xc) * 8), *(void **)(arg1 + 400),
                 *(size_t *)(arg1 + 0x198));
          *(int *)((long)arg5 + 0xc) = *(int *)((long)arg5 + 0xc) + 1;
          *(int *)(arg1 + 0x140) = (int)*(uint64_t *)(arg1 + 0x198);
          *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 400);
        }
      }
      if (iVar3 == 1)
        break;
      pcVar9 = *(char **)(arg1 + 0x150);
      if (pcVar9 == (char *)0x0) {
        pcVar9 = "zlib error";
      }
      png_error(arg1, pcVar9);
    }
    uVar2 = *(ulong *)(arg1 + 0x198);
    uVar6 = (long)*(int *)((long)arg5 + 0xc) * uVar2;
    if (*(uint *)(arg1 + 0x140) < uVar2) {
      uVar6 = (uVar6 - *(uint *)(arg1 + 0x140)) + uVar2;
    }
    return uVar6;
  }
  *arg5 = arg2;
  *(uint *)(arg5 + 1) = arg3;
  return (ulong)arg3;
}

/* ======================================================================
 * png_write_compressed_data_out_part_1  (Ghidra `png_write_compressed_data_out.part.1` @ 00558d90)
 * Signature: uint8_t png_write_compressed_data_out.part.1(void)
 * Calls: `deflateReset`, `png_calculate_crc`, `png_free`, `png_write_data`
 * Called by: `png_write_iCCP`, `png_write_zTXt`
 */
void png_write_compressed_data_out_part_1(long arg1, long arg2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;

  if (0 < *(int *)(arg2 + 0xc)) {
    lVar1 = 0;
    iVar4 = 0;
    do {
      lVar3 = *(long *)(arg1 + 0x198);
      lVar2 = *(long *)(*(long *)(arg2 + 0x18) + lVar1);
      if ((lVar2 != 0) && (lVar3 != 0)) {
        png_calculate_crc(arg1, lVar2, lVar3);
        png_write_data(arg1, lVar2, lVar3);
        lVar2 = *(long *)(*(long *)(arg2 + 0x18) + lVar1);
      }
      iVar4 = iVar4 + 1;
      png_free(arg1, lVar2);
      *(uint64_t *)(*(long *)(arg2 + 0x18) + lVar1) = 0;
      lVar1 = lVar1 + 8;
    } while (iVar4 < *(int *)(arg2 + 0xc));
  }
  if (*(int *)(arg2 + 0x10) != 0) {
    png_free(arg1, *(uint64_t *)(arg2 + 0x18));
  }
  *(uint64_t *)(arg2 + 0x18) = 0;
  if (*(uint *)(arg1 + 0x140) < (uint) * (long *)(arg1 + 0x198)) {
    lVar3 = *(long *)(arg1 + 0x198) - (ulong) * (uint *)(arg1 + 0x140);
    lVar1 = *(long *)(arg1 + 400);
    if ((lVar3 != 0) && (lVar1 != 0)) {
      png_calculate_crc(arg1, lVar1, lVar3);
      png_write_data(arg1, lVar1, lVar3);
    }
  }
  deflateReset(arg1 + 0x120);
  *(uint32_t *)(arg1 + 0x178) = 0;
  return;
}

/* ======================================================================
 * png_save_uint_32  (Ghidra `png_save_uint_32` @ 00558eb0)
 * Signature: uint8_t png_save_uint_32(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_save_uint_32(uint8_t *arg1, uint32_t arg2)

{
  arg1[3] = (char)arg2;
  *arg1 = (char)((uint)arg2 >> 0x18);
  arg1[1] = (char)((uint)arg2 >> 0x10);
  arg1[2] = (char)((uint)arg2 >> 8);
  return;
}

/* ======================================================================
 * png_save_int_32  (Ghidra `png_save_int_32` @ 00558ed0)
 * Signature: uint8_t png_save_int_32(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_save_int_32(uint8_t *arg1, uint32_t arg2)

{
  arg1[3] = (char)arg2;
  *arg1 = (char)((uint)arg2 >> 0x18);
  arg1[1] = (char)((uint)arg2 >> 0x10);
  arg1[2] = (char)((uint)arg2 >> 8);
  return;
}

/* ======================================================================
 * png_save_uint_16  (Ghidra `png_save_uint_16` @ 00558ef0)
 * Signature: uint8_t png_save_uint_16(void)
 * Calls: (none)
 * Called by: (none)
 */
void png_save_uint_16(uint8_t *arg1, uint32_t arg2)

{
  arg1[1] = (char)arg2;
  *arg1 = (char)((uint)arg2 >> 8);
  return;
}

/* ======================================================================
 * png_write_chunk  (Ghidra `png_write_chunk` @ 00558f00)
 * Signature: uint8_t png_write_chunk(void)
 * Calls: `png_calculate_crc`, `png_reset_crc`, `png_write_data`
 * Called by: `png_write_IDAT`, `png_write_IEND`, `png_write_IHDR`, `png_write_bKGD`, `png_write_cHRM`, `png_write_cHRM_fixed`, `png_write_end`, `png_write_gAMA`, `png_write_gAMA_fixed`, `png_write_info` (+8 more)
 */
void png_write_chunk(long arg1, uint64_t arg2, long arg3, long arg4)

{
  uint32_t uVar1;
  uint8_t local_38;
  uint8_t local_37;
  uint8_t local_36;
  uint8_t local_35;

  if (arg1 != 0) {
    local_35 = (uint8_t)arg4;
    local_38 = (uint8_t)((ulong)arg4 >> 0x18);
    local_37 = (uint8_t)((ulong)arg4 >> 0x10);
    local_36 = (uint8_t)((ulong)arg4 >> 8);
    png_write_data(arg1, &local_38, 4);
    png_write_data(arg1, arg2, 4);
    png_reset_crc(arg1);
    png_calculate_crc(arg1, arg2, 4);
    if ((arg4 != 0) && (arg3 != 0)) {
      png_calculate_crc(arg1, arg3, arg4);
      png_write_data(arg1, arg3, arg4);
    }
    uVar1 = *(uint32_t *)(arg1 + 0x218);
    local_35 = (uint8_t)uVar1;
    local_38 = (uint8_t)((uint)uVar1 >> 0x18);
    local_37 = (uint8_t)((uint)uVar1 >> 0x10);
    local_36 = (uint8_t)((uint)uVar1 >> 8);
    png_write_data(arg1, &local_38, 4);
  }
  return;
}

/* ======================================================================
 * png_write_chunk_start  (Ghidra `png_write_chunk_start` @ 00559000)
 * Signature: uint8_t png_write_chunk_start(void)
 * Calls: `png_calculate_crc`, `png_reset_crc`, `png_write_data`
 * Called by: (none)
 */
void png_write_chunk_start(long arg1, uint64_t arg2, uint32_t arg3)

{
  uint8_t local_28;
  uint8_t local_27;
  uint8_t local_26;
  uint8_t local_25;

  if (arg1 != 0) {
    local_28 = (uint8_t)((uint)arg3 >> 0x18);
    local_25 = (uint8_t)arg3;
    local_27 = (uint8_t)((uint)arg3 >> 0x10);
    local_26 = (uint8_t)((uint)arg3 >> 8);
    png_write_data(arg1, &local_28, 4);
    png_write_data(arg1, arg2, 4);
    png_reset_crc(arg1);
    png_calculate_crc(arg1, arg2, 4);
  }
  return;
}

/* ======================================================================
 * png_write_chunk_data  (Ghidra `png_write_chunk_data` @ 00559070)
 * Signature: uint8_t png_write_chunk_data(void)
 * Calls: `png_calculate_crc`, `png_write_data`
 * Called by: (none)
 */
void png_write_chunk_data(long arg1, long arg2, long arg3)

{
  if (((arg1 != 0) && (arg3 != 0)) && (arg2 != 0)) {
    png_calculate_crc();
    png_write_data(arg1, arg2, arg3);
    return;
  }
  return;
}

/* ======================================================================
 * png_write_chunk_end  (Ghidra `png_write_chunk_end` @ 005590e0)
 * Signature: uint8_t png_write_chunk_end(void)
 * Calls: `png_write_data`
 * Called by: (none)
 */
void png_write_chunk_end(long arg1)

{
  uint32_t uVar1;
  uint8_t local_18;
  uint8_t local_17;
  uint8_t local_16;
  uint8_t local_15;

  if (arg1 != 0) {
    uVar1 = *(uint32_t *)(arg1 + 0x218);
    local_15 = (uint8_t)uVar1;
    local_18 = (uint8_t)((uint)uVar1 >> 0x18);
    local_17 = (uint8_t)((uint)uVar1 >> 0x10);
    local_16 = (uint8_t)((uint)uVar1 >> 8);
    png_write_data(arg1, &local_18, 4);
  }
  return;
}

/* ======================================================================
 * png_write_sig  (Ghidra `png_write_sig` @ 00559120)
 * Signature: uint8_t png_write_sig(void)
 * Calls: `png_write_data`
 * Called by: `png_write_info_before_PLTE`
 */
void png_write_sig(long arg1)

{
  uint8_t local_18[16];

  local_18[0] = 0x89;
  local_18[1] = 0x50;
  local_18[2] = 0x4e;
  local_18[3] = 0x47;
  local_18[4] = 0xd;
  local_18[5] = 10;
  local_18[6] = 0x1a;
  local_18[7] = 10;
  png_write_data(arg1, local_18 + *(byte *)(arg1 + 0x23c), 8 - (ulong) * (byte *)(arg1 + 0x23c));
  if (*(byte *)(arg1 + 0x23c) < 3) {
    *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 0x1000;
  }
  return;
}

/* ======================================================================
 * png_write_IHDR  (Ghidra `png_write_IHDR` @ 00559180)
 * Signature: uint8_t png_write_IHDR(void)
 * Calls: `png_error`, `png_warning`, `png_write_chunk`, `png_zalloc`, `png_zfree`
 * Called by: `png_write_info_before_PLTE`
 */
void png_write_IHDR(long arg1, int arg2, ulong arg3, uint arg4, int arg5, int arg6, int arg7,
                    uint arg8)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  uint32_t uVar5;
  uint uVar6;
  uint8_t local_48;
  uint8_t local_47;
  uint8_t local_46;
  uint8_t local_45;
  uint8_t local_44;
  uint8_t local_43;
  uint8_t local_42;
  uint8_t local_41;
  byte local_40;
  uint8_t local_3f;
  uint8_t local_3e;
  uint8_t local_3d;
  uint8_t local_3c;

  bVar1 = (byte)arg4;
  switch (arg5) {
  case 0:
    if ((0x10 < arg4) || ((1L << (bVar1 & 0x3f) & 0x10116U) == 0)) {
      png_error(arg1, "Invalid bit depth for grayscale image");
      break;
    }
    goto LAB_00559583;
  default:
    png_error(arg1, "Invalid image color type specified");
    break;
  case 2:
    if ((arg4 != 0x10) && (arg4 != 8)) {
      png_error(arg1, "Invalid bit depth for RGB image");
    }
    *(uint8_t *)(arg1 + 0x23a) = 3;
    break;
  case 3:
    if ((8 < arg4) || ((1L << (bVar1 & 0x3f) & 0x116U) == 0)) {
      png_error(arg1, "Invalid bit depth for paletted image");
      break;
    }
  LAB_00559583:
    *(uint8_t *)(arg1 + 0x23a) = 1;
    break;
  case 4:
    if ((arg4 != 0x10) && (arg4 != 8)) {
      png_error(arg1, "Invalid bit depth for grayscale+alpha image");
    }
    *(uint8_t *)(arg1 + 0x23a) = 2;
    break;
  case 6:
    if ((arg4 != 0x10) && (arg4 != 8)) {
      png_error(arg1, "Invalid bit depth for RGBA image");
    }
    *(uint8_t *)(arg1 + 0x23a) = 4;
  }
  if (arg6 != 0) {
    png_warning(arg1, "Invalid compression type specified");
  }
  if (((((*(byte *)(arg1 + 0x3f0) & 4) == 0) || ((*(byte *)(arg1 + 0x115) & 0x10) != 0)) ||
       ((arg5 != 6 && (arg5 != 2)))) ||
      (local_3d = 0x40, arg7 != 0x40)) {
    local_3d = 0;
    if (arg7 != 0) {
      png_warning(arg1, "Invalid filter type specified");
      local_3d = 0;
    }
  }
  if (1 < arg8) {
    png_warning(arg1, "Invalid interlace type specified");
    arg8._0_1_ = 1;
  }
  *(byte *)(arg1 + 0x237) = bVar1;
  *(char *)(arg1 + 0x236) = (char)arg5;
  *(uint8_t *)(arg1 + 0x233) = (uint8_t)arg8;
  *(uint8_t *)(arg1 + 0x3f8) = local_3d;
  *(uint8_t *)(arg1 + 0x440) = 0;
  *(int *)(arg1 + 0x1b4) = arg2;
  *(int *)(arg1 + 0x1b8) = (int)arg3;
  arg4 = *(byte *)(arg1 + 0x23a) * arg4;
  bVar2 = (byte)arg4;
  *(byte *)(arg1 + 0x239) = bVar2;
  if (bVar2 < 8) {
    uVar6 = (arg4 & 0xff) * arg2 + 7 >> 3;
  } else {
    uVar6 = (uint)(bVar2 >> 3) * arg2;
  }
  *(byte *)(arg1 + 0x238) = bVar1;
  *(byte *)(arg1 + 0x23b) = *(byte *)(arg1 + 0x23a);
  local_48 = (uint8_t)((uint)arg2 >> 0x18);
  *(uint *)(arg1 + 0x1c4) = uVar6;
  local_47 = (uint8_t)((uint)arg2 >> 0x10);
  *(int *)(arg1 + 0x1c0) = arg2;
  local_46 = (uint8_t)((uint)arg2 >> 8);
  local_45 = (uint8_t)arg2;
  local_41 = (uint8_t)(arg3 & 0xffffffff);
  local_44 = (uint8_t)(arg3 >> 0x18);
  local_3e = 0;
  local_43 = (uint8_t)((arg3 & 0xffffffff) >> 0x10);
  local_42 = (uint8_t)(arg3 >> 8);
  local_40 = bVar1;
  local_3f = (char)arg5;
  local_3c = (uint8_t)arg8;
  png_write_chunk(arg1, &png_IHDR, &local_48, 0xd);
  cVar4 = *(char *)(arg1 + 0x235);
  *(code **)(arg1 + 0x160) = png_zalloc;
  *(code **)(arg1 + 0x168) = png_zfree;
  *(long *)(arg1 + 0x170) = arg1;
  if (cVar4 == '\0') {
    if ((*(char *)(arg1 + 0x236) == '\x03') || (*(byte *)(arg1 + 0x237) < 8)) {
      *(uint8_t *)(arg1 + 0x235) = 8;
      cVar4 = '\b';
    } else {
      *(uint8_t *)(arg1 + 0x235) = 0xf8;
      cVar4 = -8;
    }
  }
  uVar6 = *(uint *)(arg1 + 0x118);
  if ((uVar6 & 1) == 0) {
    *(uint *)(arg1 + 0x1b0) = (uint)(cVar4 != '\b');
  }
  if ((uVar6 & 2) == 0) {
    *(uint32_t *)(arg1 + 0x1a0) = 0xffffffff;
  }
  if ((uVar6 & 4) == 0) {
    *(uint32_t *)(arg1 + 0x1ac) = 8;
  }
  if ((uVar6 & 8) == 0) {
    *(uint32_t *)(arg1 + 0x1a8) = 0xf;
  }
  if ((uVar6 & 0x10) == 0) {
    *(uint32_t *)(arg1 + 0x1a4) = 8;
    uVar5 = 8;
  } else {
    uVar5 = *(uint32_t *)(arg1 + 0x1a4);
  }
  iVar3 =
      deflateInit2_(arg1 + 0x120, *(uint32_t *)(arg1 + 0x1a0), uVar5, *(uint32_t *)(arg1 + 0x1a8),
                    *(uint32_t *)(arg1 + 0x1ac), *(uint32_t *)(arg1 + 0x1b0), "1.2.3", 0x70);
  if (iVar3 != 0) {
    png_error(arg1, "zlib failed to initialize compressor");
  }
  *(uint32_t *)(arg1 + 0x178) = 0;
  *(uint32_t *)(arg1 + 0x114) = 1;
  *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 400);
  *(int *)(arg1 + 0x140) = (int)*(uint64_t *)(arg1 + 0x198);
  return;
}

/* ======================================================================
 * png_write_PLTE  (Ghidra `png_write_PLTE` @ 00559620)
 * Signature: uint8_t png_write_PLTE(void)
 * Calls: `png_calculate_crc`, `png_error`, `png_reset_crc`, `png_warning`, `png_write_data`
 * Called by: `png_write_info`
 */
void png_write_PLTE(long arg1, uint8_t *arg2, uint arg3)

{
  uint8_t *puVar1;
  byte bVar2;
  uint32_t uVar3;
  int iVar4;
  char *pcVar5;
  uint8_t local_38;
  uint8_t local_37;
  uint8_t local_36;
  uint8_t local_35;
  uint8_t local_28;
  uint8_t local_27;
  uint8_t local_26;

  if (((*(uint *)(arg1 + 0x3f0) & 1) == 0 && arg3 == 0) || (0x100 < arg3)) {
    pcVar5 = "Invalid number of colors in palette";
    if (*(char *)(arg1 + 0x236) != '\x03')
      goto LAB_00559771;
    png_error(arg1, "Invalid number of colors in palette");
    bVar2 = *(byte *)(arg1 + 0x236);
  } else {
    bVar2 = *(byte *)(arg1 + 0x236);
  }
  if ((bVar2 & 2) != 0) {
    iVar4 = arg3 * 3;
    *(short *)(arg1 + 0x228) = (short)arg3;
    local_35 = (uint8_t)iVar4;
    local_38 = (uint8_t)((uint)iVar4 >> 0x18);
    local_37 = (uint8_t)((uint)iVar4 >> 0x10);
    local_36 = (uint8_t)((uint)iVar4 >> 8);
    png_write_data(arg1, &local_38, 4);
    png_write_data(arg1, &png_PLTE, 4);
    png_reset_crc(arg1);
    png_calculate_crc(arg1, &png_PLTE, 4);
    if (arg3 != 0) {
      puVar1 = arg2 + (ulong)(arg3 - 1) * 3 + 3;
      do {
        local_28 = *arg2;
        local_27 = arg2[1];
        local_26 = arg2[2];
        arg2 = arg2 + 3;
        png_calculate_crc(arg1, &local_28, 3);
        png_write_data(arg1, &local_28, 3);
      } while (arg2 != puVar1);
    }
    uVar3 = *(uint32_t *)(arg1 + 0x218);
    local_35 = (uint8_t)uVar3;
    local_38 = (uint8_t)((uint)uVar3 >> 0x18);
    local_37 = (uint8_t)((uint)uVar3 >> 0x10);
    local_36 = (uint8_t)((uint)uVar3 >> 8);
    png_write_data(arg1, &local_38, 4);
    *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 2;
    return;
  }
  pcVar5 = "Ignoring request to write a PLTE chunk in grayscale PNG";
LAB_00559771:
  png_warning(arg1, pcVar5);
  return;
}

/* ======================================================================
 * png_write_IDAT  (Ghidra `png_write_IDAT` @ 005597b0)
 * Signature: uint8_t png_write_IDAT(void)
 * Calls: `png_error`, `png_write_chunk`
 * Called by: `png_write_filtered_row`, `png_write_finish_row`, `png_write_flush`
 */
void png_write_IDAT(long arg1, byte *arg2, ulong arg3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;

  if (((*(byte *)(arg1 + 0x114) & 4) == 0) && (*(char *)(arg1 + 0x440) == '\0')) {
    bVar1 = *arg2;
    if (((bVar1 & 0xf) == 8) && ((bVar1 & 0xf0) < 0x71)) {
      if (((1 < arg3) && (*(uint *)(arg1 + 0x1b8) < 0x4000)) &&
          (*(uint *)(arg1 + 0x1b4) < 0x4000)) {
        uVar4 = (uint)(bVar1 >> 4);
        for (uVar2 = 1 << (bVar1 >> 4) + 7;
             (0xff < uVar2 && (((uint) * (byte *)(arg1 + 0x23a) * (uint) * (byte *)(arg1 + 0x237) *
                                        *(uint *)(arg1 + 0x1b4) +
                                    0xf >>
                                3) *
                                   *(uint *)(arg1 + 0x1b8) <=
                               uVar2));
             uVar2 = uVar2 >> 1) {
          uVar4 = uVar4 - 1;
        }
        uVar4 = uVar4 << 4 | 8;
        bVar3 = (byte)uVar4;
        if (bVar1 != bVar3) {
          *arg2 = bVar3;
          uVar2 = uVar4 * 0x100 + (uint)(arg2[1] & 0xe0);
          uVar4 = uVar2 / 0x1f;
          arg2[1] = ((arg2[1] & 0xe0) - (char)uVar2) + '\x1f' + ((char)(uVar4 << 5) - (char)uVar4);
        }
      }
    } else {
      png_error(arg1, "Invalid zlib compression method or flags in IDAT");
    }
  }
  png_write_chunk(arg1, &png_IDAT, arg2, arg3);
  *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 4;
  return;
}

/* ======================================================================
 * png_write_IEND  (Ghidra `png_write_IEND` @ 00559900)
 * Signature: uint8_t png_write_IEND(void)
 * Calls: `png_write_chunk`
 * Called by: `png_write_end`
 */
void png_write_IEND(long arg1)

{
  png_write_chunk(arg1, &png_IEND, 0, 0);
  *(uint *)(arg1 + 0x114) = *(uint *)(arg1 + 0x114) | 0x10;
  return;
}

/* ======================================================================
 * png_write_gAMA  (Ghidra `png_write_gAMA` @ 00559920)
 * Signature: uint8_t png_write_gAMA(void)
 * Calls: `png_write_chunk`
 * Called by: `png_write_info_before_PLTE`
 */
void png_write_gAMA(double arg1, uint64_t arg2)

{
  long lVar1;
  uint8_t local_18;
  uint8_t local_17;
  uint8_t local_16;
  uint8_t local_15;

  lVar1 = (long)(arg1 * DAT_005d2720 /* R:0.0f */ + DAT_005d2728 /* R:0.0f */);
  local_15 = (uint8_t)lVar1;
  local_18 = (uint8_t)((ulong)lVar1 >> 0x18);
  local_17 = (uint8_t)((ulong)lVar1 >> 0x10);
  local_16 = (uint8_t)((ulong)lVar1 >> 8);
  png_write_chunk(arg2, &png_gAMA, &local_18, 4);
  return;
}

/* ======================================================================
 * png_write_gAMA_fixed  (Ghidra `png_write_gAMA_fixed` @ 00559970)
 * Signature: uint8_t png_write_gAMA_fixed(void)
 * Calls: `png_write_chunk`
 * Called by: (none)
 */
void png_write_gAMA_fixed(uint64_t arg1, uint32_t arg2)

{
  uint8_t local_18;
  uint8_t local_17;
  uint8_t local_16;
  uint8_t local_15;

  local_18 = (uint8_t)((uint)arg2 >> 0x18);
  local_15 = (uint8_t)arg2;
  local_17 = (uint8_t)((uint)arg2 >> 0x10);
  local_16 = (uint8_t)((uint)arg2 >> 8);
  png_write_chunk(arg1, &png_gAMA, &local_18, 4);
  return;
}

/* ======================================================================
 * png_write_sRGB  (Ghidra `png_write_sRGB` @ 005599b0)
 * Signature: uint8_t png_write_sRGB(void)
 * Calls: `png_warning`, `png_write_chunk`
 * Called by: `png_write_info_before_PLTE`
 */
void png_write_sRGB(uint64_t arg1, int arg2)

{
  uint8_t local_19[9];

  if (3 < arg2) {
    png_warning(arg1, "Invalid sRGB rendering intent specified");
  }
  local_19[0] = (uint8_t)arg2;
  png_write_chunk(arg1, &png_sRGB, local_19, 1);
  return;
}

/* ======================================================================
 * png_write_sBIT  (Ghidra `png_write_sBIT` @ 00559a00)
 * Signature: uint8_t png_write_sBIT(void)
 * Calls: `png_warning`, `png_write_chunk`
 * Called by: `png_write_info_before_PLTE`
 */
void png_write_sBIT(long arg1, byte *arg2, uint arg3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  byte local_18[24];

  if ((arg3 & 2) == 0) {
    bVar4 = arg2[3];
    if ((bVar4 == 0) || (*(byte *)(arg1 + 0x238) < bVar4))
      goto LAB_00559a70;
    lVar6 = 2;
    lVar5 = 1;
    local_18[0] = bVar4;
  } else {
    bVar4 = 8;
    if (arg3 != 3) {
      bVar4 = *(byte *)(arg1 + 0x238);
    }
    bVar1 = *arg2;
    if (((((bVar1 == 0) || (bVar4 < bVar1)) || (bVar2 = arg2[1], bVar2 == 0)) ||
         ((bVar4 < bVar2 || (bVar3 = arg2[2], bVar3 == 0)))) ||
        (bVar4 < bVar3))
      goto LAB_00559a70;
    lVar5 = 3;
    lVar6 = 4;
    local_18[0] = bVar1;
    local_18[1] = bVar2;
    local_18[2] = bVar3;
  }
  if ((arg3 & 4) != 0) {
    bVar4 = arg2[4];
    if ((bVar4 == 0) || (*(byte *)(arg1 + 0x238) < bVar4)) {
    LAB_00559a70:
      png_warning(arg1, "Invalid sBIT depth specified");
      return;
    }
    local_18[lVar5] = bVar4;
    lVar5 = lVar6;
  }
  png_write_chunk(arg1, &png_sBIT, local_18, lVar5);
  return;
}

/* ======================================================================
 * png_write_cHRM  (Ghidra `png_write_cHRM` @ 00559ad0)
 * Signature: uint8_t png_write_cHRM(void)
 * Calls: `fprintf`, `png_warning`, `png_write_chunk`
 * Called by: `png_write_info_before_PLTE`
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_write_cHRM(double arg1, double arg2, double arg3, double arg4, double arg5, double arg6,
                    double arg7, double arg8, uint64_t arg9)

{
  long lVar1;
  long lVar2;
  uint8_t local_28;
  uint8_t local_27;
  uint8_t local_26;
  uint8_t local_25;
  uint8_t local_24;
  uint8_t local_23;
  uint8_t local_22;
  uint8_t local_21;
  uint8_t local_20;
  uint8_t local_1f;
  uint8_t local_1e;
  uint8_t local_1d;
  uint8_t local_1c;
  uint8_t local_1b;
  uint8_t local_1a;
  uint8_t local_19;
  uint8_t local_18;
  uint8_t local_17;
  uint8_t local_16;
  uint8_t local_15;
  uint8_t local_14;
  uint8_t local_13;
  uint8_t local_12;
  uint8_t local_11;
  uint8_t local_10;
  uint8_t local_f;
  uint8_t local_e;
  uint8_t local_d;
  uint8_t local_c;
  uint8_t local_b;
  uint8_t local_a;
  uint8_t local_9;

  if ((((arg1 < 0.0) || (_DAT_005d4b60 /* R:-1.5881868392106856e-23f */ < arg1)) || (arg2 < 0.0)) ||
      ((_DAT_005d4b60 /* R:-1.5881868392106856e-23f */ < arg2 ||
        (DAT_005c7318 /* R:0.0f */ < arg2 + arg1)))) {
    png_warning(arg9, "Invalid cHRM white point specified");
    fprintf(stderr, "white_x=%f, white_y=%f\n", arg1, arg2);
  } else {
    lVar1 = (long)(arg1 * DAT_005d2720 /* R:0.0f */ + DAT_005d2728 /* R:0.0f */);
    local_25 = (uint8_t)lVar1;
    local_28 = (uint8_t)((ulong)lVar1 >> 0x18);
    local_27 = (uint8_t)((ulong)lVar1 >> 0x10);
    lVar2 = (long)(arg2 * DAT_005d2720 /* R:0.0f */ + DAT_005d2728 /* R:0.0f */);
    local_26 = (uint8_t)((ulong)lVar1 >> 8);
    local_21 = (uint8_t)lVar2;
    local_24 = (uint8_t)((ulong)lVar2 >> 0x18);
    local_23 = (uint8_t)((ulong)lVar2 >> 0x10);
    local_22 = (uint8_t)((ulong)lVar2 >> 8);
    if ((arg3 < 0.0) || ((arg4 < 0.0 || (DAT_005c7318 /* R:0.0f */ < arg4 + arg3)))) {
      png_warning(arg9, "Invalid cHRM red point specified");
    } else {
      lVar1 = (long)(arg3 * DAT_005d2720 /* R:0.0f */ + DAT_005d2728 /* R:0.0f */);
      local_1d = (uint8_t)lVar1;
      local_20 = (uint8_t)((ulong)lVar1 >> 0x18);
      local_1f = (uint8_t)((ulong)lVar1 >> 0x10);
      lVar2 = (long)(arg4 * DAT_005d2720 /* R:0.0f */ + DAT_005d2728 /* R:0.0f */);
      local_1e = (uint8_t)((ulong)lVar1 >> 8);
      local_19 = (uint8_t)lVar2;
      local_1c = (uint8_t)((ulong)lVar2 >> 0x18);
      local_1b = (uint8_t)((ulong)lVar2 >> 0x10);
      local_1a = (uint8_t)((ulong)lVar2 >> 8);
      if (((arg5 < 0.0) || (arg6 < 0.0)) || (DAT_005c7318 /* R:0.0f */ < arg6 + arg5)) {
        png_warning(arg9, "Invalid cHRM green point specified");
      } else {
        lVar1 = (long)(arg5 * DAT_005d2720 /* R:0.0f */ + DAT_005d2728 /* R:0.0f */);
        local_15 = (uint8_t)lVar1;
        local_18 = (uint8_t)((ulong)lVar1 >> 0x18);
        local_17 = (uint8_t)((ulong)lVar1 >> 0x10);
        lVar2 = (long)(arg6 * DAT_005d2720 /* R:0.0f */ + DAT_005d2728 /* R:0.0f */);
        local_16 = (uint8_t)((ulong)lVar1 >> 8);
        local_11 = (uint8_t)lVar2;
        local_14 = (uint8_t)((ulong)lVar2 >> 0x18);
        local_13 = (uint8_t)((ulong)lVar2 >> 0x10);
        local_12 = (uint8_t)((ulong)lVar2 >> 8);
        if (((arg7 < 0.0) || (arg8 < 0.0)) || (DAT_005c7318 /* R:0.0f */ < arg8 + arg7)) {
          png_warning(arg9, "Invalid cHRM blue point specified");
        } else {
          lVar1 = (long)(arg7 * DAT_005d2720 /* R:0.0f */ + DAT_005d2728 /* R:0.0f */);
          local_d = (uint8_t)lVar1;
          local_10 = (uint8_t)((ulong)lVar1 >> 0x18);
          local_f = (uint8_t)((ulong)lVar1 >> 0x10);
          lVar2 = (long)(DAT_005d2720 /* R:0.0f */ * arg8 + DAT_005d2728 /* R:0.0f */);
          local_e = (uint8_t)((ulong)lVar1 >> 8);
          local_9 = (uint8_t)lVar2;
          local_c = (uint8_t)((ulong)lVar2 >> 0x18);
          local_b = (uint8_t)((ulong)lVar2 >> 0x10);
          local_a = (uint8_t)((ulong)lVar2 >> 8);
          png_write_chunk(arg9, &png_cHRM, &local_28, 0x20);
        }
      }
    }
  }
  return;
}

/* ======================================================================
 * png_write_cHRM_fixed  (Ghidra `png_write_cHRM_fixed` @ 00559d90)
 * Signature: uint8_t png_write_cHRM_fixed(void)
 * Calls: `fprintf`, `png_warning`, `png_write_chunk`
 * Called by: (none)
 */
void png_write_cHRM_fixed(uint64_t arg1, uint arg2, uint arg3, uint64_t arg4, int arg5, int arg6,
                          int arg7, int arg8, int arg9)

{
  uint8_t local_38;
  uint8_t local_37;
  uint8_t local_36;
  uint8_t local_35;
  uint8_t local_34;
  uint8_t local_33;
  uint8_t local_32;
  uint8_t local_31;
  uint8_t local_30;
  uint8_t local_2f;
  uint8_t local_2e;
  uint8_t local_2d;
  uint8_t local_2c;
  uint8_t local_2b;
  uint8_t local_2a;
  uint8_t local_29;
  uint8_t local_28;
  uint8_t local_27;
  uint8_t local_26;
  uint8_t local_25;
  uint8_t local_24;
  uint8_t local_23;
  uint8_t local_22;
  uint8_t local_21;
  uint8_t local_20;
  uint8_t local_1f;
  uint8_t local_1e;
  uint8_t local_1d;
  uint8_t local_1c;
  uint8_t local_1b;
  uint8_t local_1a;
  uint8_t local_19;

  if ((((int)arg3 < 0x13881) && ((int)arg2 < 0x13881)) && ((int)(arg2 + arg3) < 0x186a1)) {
    local_35 = (uint8_t)arg2;
    local_31 = (uint8_t)arg3;
    local_38 = (uint8_t)(arg2 >> 0x18);
    local_37 = (uint8_t)(arg2 >> 0x10);
    local_36 = (uint8_t)(arg2 >> 8);
    local_34 = (uint8_t)(arg3 >> 0x18);
    local_33 = (uint8_t)(arg3 >> 0x10);
    local_32 = (uint8_t)(arg3 >> 8);
    if (100000 < (int)arg4 + arg5) {
      png_warning(arg1, "Invalid cHRM fixed red point specified");
      return;
    }
    local_2d = (uint8_t)arg4;
    local_29 = (uint8_t)arg5;
    local_30 = (uint8_t)((ulong)arg4 >> 0x18);
    local_2f = (uint8_t)((ulong)arg4 >> 0x10);
    local_2e = (uint8_t)((ulong)arg4 >> 8);
    local_2c = (uint8_t)((uint)arg5 >> 0x18);
    local_2b = (uint8_t)((uint)arg5 >> 0x10);
    local_2a = (uint8_t)((uint)arg5 >> 8);
    if (arg6 + arg7 < 0x186a1) {
      local_21 = (uint8_t)arg7;
      local_25 = (uint8_t)arg6;
      local_28 = (uint8_t)((uint)arg6 >> 0x18);
      local_27 = (uint8_t)((uint)arg6 >> 0x10);
      local_26 = (uint8_t)((uint)arg6 >> 8);
      local_24 = (uint8_t)((uint)arg7 >> 0x18);
      local_23 = (uint8_t)((uint)arg7 >> 0x10);
      local_22 = (uint8_t)((uint)arg7 >> 8);
      if (arg8 + arg9 < 0x186a1) {
        local_1d = (uint8_t)arg8;
        local_19 = (uint8_t)arg9;
        local_20 = (uint8_t)((uint)arg8 >> 0x18);
        local_1f = (uint8_t)((uint)arg8 >> 0x10);
        local_1e = (uint8_t)((uint)arg8 >> 8);
        local_1c = (uint8_t)((uint)arg9 >> 0x18);
        local_1b = (uint8_t)((uint)arg9 >> 0x10);
        local_1a = (uint8_t)((uint)arg9 >> 8);
        png_write_chunk(arg1, &png_cHRM, &local_38, 0x20);
        return;
      }
      png_warning(arg1, "Invalid fixed cHRM blue point specified");
      return;
    }
    png_warning(arg1, "Invalid fixed cHRM green point specified");
  } else {
    png_warning(arg1, "Invalid fixed cHRM white point specified");
    fprintf(stderr, "white_x=%ld, white_y=%ld\n", (ulong)arg2, (ulong)arg3);
  }
  return;
}

/* ======================================================================
 * png_write_tRNS  (Ghidra `png_write_tRNS` @ 00559fa0)
 * Signature: uint8_t png_write_tRNS(void)
 * Calls: `png_warning`, `png_write_chunk`
 * Called by: `png_write_info`
 */
void png_write_tRNS(long arg1, uint64_t arg2, long arg3, int arg4, int arg5)

{
  ushort uVar1;
  char local_18;
  uint8_t local_17;
  char local_16;
  uint8_t local_15;
  char local_14;
  uint8_t local_13;

  if (arg5 == 3) {
    if ((arg4 < 1) || ((int)(uint) * (ushort *)(arg1 + 0x228) < arg4)) {
      png_warning(arg1, "Invalid number of transparent colors specified");
    } else {
      png_write_chunk(arg1, &png_tRNS, arg2, (long)arg4);
    }
  } else {
    if (arg5 == 0) {
      uVar1 = *(ushort *)(arg3 + 8);
      if (1 << (*(byte *)(arg1 + 0x237) & 0x1f) <= (int)(uint)uVar1) {
        png_warning(arg1, "Ignoring attempt to write tRNS chunk out-of-range for bit_depth");
        return;
      }
      local_17 = (uint8_t)uVar1;
      local_18 = (char)(uVar1 >> 8);
      png_write_chunk(arg1, &png_tRNS, &local_18, 2);
      return;
    }
    if (arg5 != 2) {
      png_warning(arg1, "Can\'t write tRNS with an alpha channel");
      return;
    }
    local_17 = (uint8_t)*(uint16_t *)(arg3 + 2);
    local_18 = (char)((ushort) * (uint16_t *)(arg3 + 2) >> 8);
    local_15 = (uint8_t)*(uint16_t *)(arg3 + 4);
    local_16 = (char)((ushort) * (uint16_t *)(arg3 + 4) >> 8);
    local_13 = (uint8_t)*(uint16_t *)(arg3 + 6);
    local_14 = (char)((ushort) * (uint16_t *)(arg3 + 6) >> 8);
    if ((*(char *)(arg1 + 0x237) != '\b') ||
        (local_14 == '\0' && (local_18 == '\0' && local_16 == '\0'))) {
      png_write_chunk(arg1, &png_tRNS, &local_18, 6);
      return;
    }
    png_warning(arg1, "Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8");
  }
  return;
}

/* ======================================================================
 * png_write_bKGD  (Ghidra `png_write_bKGD` @ 0055a0d0)
 * Signature: uint8_t png_write_bKGD(void)
 * Calls: `png_warning`, `png_write_chunk`
 * Called by: `png_write_info`
 */
void png_write_bKGD(long arg1, byte *arg2, uint arg3)

{
  ushort uVar1;
  byte local_18;
  uint8_t local_17;
  char local_16;
  uint8_t local_15;
  char local_14;
  uint8_t local_13;

  if (arg3 == 3) {
    if ((*(ushort *)(arg1 + 0x228) == 0) && ((*(byte *)(arg1 + 0x3f0) & 1) != 0)) {
      local_18 = *arg2;
    } else {
      local_18 = *arg2;
      if (*(ushort *)(arg1 + 0x228) < (ushort)local_18) {
        png_warning(arg1, "Invalid background palette index");
        return;
      }
    }
    png_write_chunk(arg1, &png_bKGD, &local_18, 1);
    return;
  }
  if ((arg3 & 2) != 0) {
    local_17 = (uint8_t)*(uint16_t *)(arg2 + 2);
    local_18 = (byte)((ushort) * (uint16_t *)(arg2 + 2) >> 8);
    local_15 = (uint8_t)*(uint16_t *)(arg2 + 4);
    local_16 = (char)((ushort) * (uint16_t *)(arg2 + 4) >> 8);
    local_13 = (uint8_t)*(uint16_t *)(arg2 + 6);
    local_14 = (char)((ushort) * (uint16_t *)(arg2 + 6) >> 8);
    if ((*(char *)(arg1 + 0x237) == '\b') &&
        (local_14 != '\0' || (local_18 != 0 || local_16 != '\0'))) {
      png_warning(arg1, "Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8");
      return;
    }
    png_write_chunk(arg1, &png_bKGD, &local_18, 6);
    return;
  }
  uVar1 = *(ushort *)(arg2 + 8);
  if ((int)(uint)uVar1 < 1 << (*(byte *)(arg1 + 0x237) & 0x1f)) {
    local_17 = (uint8_t)uVar1;
    local_18 = (byte)(uVar1 >> 8);
    png_write_chunk(arg1, &png_bKGD, &local_18, 2);
    return;
  }
  png_warning(arg1, "Ignoring attempt to write bKGD chunk out-of-range for bit_depth");
  return;
}

/* ======================================================================
 * png_write_hIST  (Ghidra `png_write_hIST` @ 0055a200)
 * Signature: uint8_t png_write_hIST(void)
 * Calls: `png_calculate_crc`, `png_reset_crc`, `png_warning`, `png_write_data`
 * Called by: `png_write_info`
 */
void png_write_hIST(long arg1, long arg2, int arg3)

{
  uint16_t uVar1;
  uint32_t uVar2;
  int iVar3;
  long lVar4;
  uint8_t local_48;
  uint8_t local_47;
  uint8_t local_46;
  uint8_t local_45;
  uint8_t local_38;
  uint8_t local_37;

  if (arg3 <= (int)(uint) * (ushort *)(arg1 + 0x228)) {
    iVar3 = arg3 * 2;
    local_45 = (uint8_t)iVar3;
    local_48 = (uint8_t)((uint)iVar3 >> 0x18);
    local_47 = (uint8_t)((uint)iVar3 >> 0x10);
    local_46 = (uint8_t)((uint)iVar3 >> 8);
    png_write_data(arg1, &local_48, 4);
    png_write_data(arg1, &png_hIST, 4);
    png_reset_crc(arg1);
    png_calculate_crc(arg1, &png_hIST, 4);
    if (0 < arg3) {
      lVar4 = 0;
      do {
        uVar1 = *(uint16_t *)(arg2 + lVar4 * 2);
        lVar4 = lVar4 + 1;
        local_37 = (uint8_t)uVar1;
        local_38 = (uint8_t)((ushort)uVar1 >> 8);
        png_calculate_crc(arg1, &local_38, 2);
        png_write_data(arg1, &local_38, 2);
      } while ((int)lVar4 < arg3);
    }
    uVar2 = *(uint32_t *)(arg1 + 0x218);
    local_45 = (uint8_t)uVar2;
    local_48 = (uint8_t)((uint)uVar2 >> 0x18);
    local_47 = (uint8_t)((uint)uVar2 >> 0x10);
    local_46 = (uint8_t)((uint)uVar2 >> 8);
    png_write_data(arg1, &local_48, 4);
    return;
  }
  png_warning(arg1, "Invalid number of histogram entries specified");
  return;
}

/* ======================================================================
 * png_check_keyword  (Ghidra `png_check_keyword` @ 0055a330)
 * Signature: uint8_t png_check_keyword(void)
 * Calls: `png_free`, `png_malloc_warn`, `png_warning`, `snprintf`, `strlen`
 * Called by: `png_write_iCCP`, `png_write_pCAL`, `png_write_sPLT`, `png_write_tEXt`, `png_write_zTXt`
 */
ulong png_check_keyword(uint64_t arg1, byte *arg2, uint64_t *arg3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  size_t sVar5;
  byte *pbVar6;
  char *pcVar7;
  char *pcVar8;
  size_t sVar9;
  char acStack_68[56];

  *arg3 = 0;
  if ((arg2 == (byte *)0x0) || (sVar5 = strlen((char *)arg2), sVar5 == 0)) {
    sVar5 = 0;
    png_warning(arg1, "zero length keyword");
  } else {
    pbVar6 = (byte *)png_malloc_warn(arg1, (int)sVar5 + 2);
    *arg3 = pbVar6;
    if (pbVar6 == (byte *)0x0) {
      sVar5 = 0;
      png_warning(arg1, "Out of memory while procesing keyword");
    } else {
      while (true) {
        bVar1 = *arg2;
        if (bVar1 == 0)
          break;
        if ((bVar1 < 0x20) || ((0x7e < bVar1 && (bVar1 < 0xa1)))) {
          snprintf(acStack_68, 0x28, "invalid keyword character 0x%02X", (ulong)bVar1);
          png_warning(arg1, acStack_68);
          *pbVar6 = 0x20;
        } else {
          *pbVar6 = bVar1;
        }
        pbVar6 = pbVar6 + 1;
        arg2 = arg2 + 1;
      }
      *pbVar6 = 0;
      pcVar7 = (char *)*arg3;
      pcVar8 = pcVar7 + (sVar5 - 1);
      if (*pcVar8 == ' ') {
        png_warning(arg1, "trailing spaces removed from keyword");
        sVar9 = sVar5;
        if (*pcVar8 == ' ') {
          do {
            pcVar8[sVar9 - sVar5] = '\0';
            sVar9 = sVar9 - 1;
          } while (pcVar8[sVar9 - sVar5] == ' ');
          pcVar7 = (char *)*arg3;
          sVar5 = sVar9;
        } else {
          pcVar7 = (char *)*arg3;
        }
      }
      cVar4 = *pcVar7;
      pcVar8 = pcVar7;
      if (cVar4 == ' ') {
        png_warning(arg1, "leading spaces removed from keyword");
        cVar4 = *pcVar7;
        while (cVar4 == ' ') {
          pcVar8 = pcVar8 + 1;
          sVar5 = sVar5 - 1;
          cVar4 = *pcVar8;
        }
        pcVar7 = (char *)*arg3;
      }
      if (cVar4 == '\0') {
        *pcVar7 = '\0';
      } else {
        bVar3 = false;
        bVar2 = false;
        do {
          while (bVar2) {
            if (cVar4 != ' ')
              goto LAB_0055a460;
            sVar5 = sVar5 - 1;
            bVar3 = true;
          LAB_0055a446:
            pcVar8 = pcVar8 + 1;
            cVar4 = *pcVar8;
            if (cVar4 == '\0')
              goto LAB_0055a473;
          }
          if (cVar4 == ' ') {
            *pcVar7 = ' ';
            bVar2 = true;
            pcVar7 = pcVar7 + 1;
            goto LAB_0055a446;
          }
        LAB_0055a460:
          pcVar8 = pcVar8 + 1;
          *pcVar7 = cVar4;
          bVar2 = false;
          cVar4 = *pcVar8;
          pcVar7 = pcVar7 + 1;
        } while (cVar4 != '\0');
      LAB_0055a473:
        *pcVar7 = '\0';
        if (bVar3) {
          png_warning(arg1, "extra interior spaces removed from keyword");
        }
      }
      if (sVar5 == 0) {
        png_free(arg1, *arg3);
        *arg3 = 0;
        png_warning(arg1, "Zero length keyword");
      } else if (0x4f < sVar5) {
        sVar5 = 0x4f;
        png_warning(arg1, "keyword length must be 1 - 79 characters");
        arg3[0x4f] = 0;
      }
    }
  }
  return sVar5;
}

/* ======================================================================
 * png_write_sPLT  (Ghidra `png_write_sPLT` @ 0055a590)
 * Signature: uint8_t png_write_sPLT(void)
 * Calls: `png_calculate_crc`, `png_check_keyword`, `png_free`, `png_reset_crc`, `png_warning`, `png_write_data`
 * Called by: `png_write_info`
 */
void png_write_sPLT(long arg1, long *arg2)

{
  char cVar1;
  uint32_t uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint16_t *puVar6;
  bool bVar7;
  uint8_t local_58;
  uint8_t local_57;
  uint8_t local_56;
  uint8_t local_55;
  uint8_t local_54;
  uint8_t local_53;
  uint8_t local_52;
  uint8_t local_51;
  uint8_t local_50;
  uint8_t local_4f;
  long local_40;
  uint8_t local_38;
  uint8_t local_37;
  uint8_t local_36;
  uint8_t local_35;

  bVar7 = (char)arg2[1] != '\b';
  lVar3 = arg2[3];
  cVar1 = bVar7 * '\x04' + '\x06';
  if ((*arg2 != 0) && (lVar4 = png_check_keyword(arg1, *arg2, &local_40), lVar4 != 0)) {
    if (arg1 != 0) {
      iVar5 = ((uint)bVar7 * 4 + 6) * (int)lVar3 + 2 + (int)lVar4;
      local_35 = (uint8_t)iVar5;
      local_38 = (uint8_t)((uint)iVar5 >> 0x18);
      local_37 = (uint8_t)((uint)iVar5 >> 0x10);
      local_36 = (uint8_t)((uint)iVar5 >> 8);
      png_write_data(arg1, &local_38, 4);
      png_write_data(arg1, &png_sPLT, 4);
      png_reset_crc(arg1);
      png_calculate_crc(arg1, &png_sPLT, 4);
      lVar3 = local_40;
      lVar4 = lVar4 + 1;
      if ((lVar4 != 0) && (local_40 != 0)) {
        png_calculate_crc(arg1, local_40, lVar4);
        png_write_data(arg1, lVar3, lVar4);
      }
      png_calculate_crc(arg1, arg2 + 1, 1);
      png_write_data(arg1, arg2 + 1, 1);
    }
    iVar5 = (int)arg2[3];
    puVar6 = (uint16_t *)arg2[2];
    if (puVar6 < puVar6 + (long)iVar5 * 5) {
      do {
        if ((char)arg2[1] == '\b') {
          local_58 = (uint8_t)*puVar6;
          local_57 = (uint8_t)puVar6[1];
          local_56 = (uint8_t)puVar6[2];
          local_55 = (uint8_t)puVar6[3];
          local_53 = (uint8_t)puVar6[4];
          local_54 = (uint8_t)((ushort)puVar6[4] >> 8);
        } else {
          local_57 = (uint8_t)*puVar6;
          local_58 = (uint8_t)((ushort)*puVar6 >> 8);
          local_55 = (uint8_t)puVar6[1];
          local_56 = (uint8_t)((ushort)puVar6[1] >> 8);
          local_53 = (uint8_t)puVar6[2];
          local_54 = (uint8_t)((ushort)puVar6[2] >> 8);
          local_51 = (uint8_t)puVar6[3];
          local_52 = (uint8_t)((ushort)puVar6[3] >> 8);
          local_4f = (uint8_t)puVar6[4];
          local_50 = (uint8_t)((ushort)puVar6[4] >> 8);
        }
        if (arg1 != 0) {
          png_calculate_crc(arg1, &local_58, cVar1);
          png_write_data(arg1, &local_58, cVar1);
          iVar5 = (int)arg2[3];
        }
        puVar6 = puVar6 + 5;
      } while (puVar6 < (uint16_t *)(arg2[2] + (long)iVar5 * 10));
    }
    if (arg1 != 0) {
      uVar2 = *(uint32_t *)(arg1 + 0x218);
      local_35 = (uint8_t)uVar2;
      local_38 = (uint8_t)((uint)uVar2 >> 0x18);
      local_37 = (uint8_t)((uint)uVar2 >> 0x10);
      local_36 = (uint8_t)((uint)uVar2 >> 8);
      png_write_data(arg1, &local_38, 4);
    }
    png_free(arg1, local_40);
    return;
  }
  png_warning(arg1, "Empty keyword in sPLT chunk");
  return;
}

/* ======================================================================
 * png_write_iCCP  (Ghidra `png_write_iCCP` @ 0055a850)
 * Signature: uint8_t png_write_iCCP(void)
 * Calls: `png_calculate_crc`, `png_check_keyword`, `png_free`, `png_reset_crc`, `png_text_compress`, `png_warning`, `png_write_compressed_data_out_part_1`, `png_write_data`
 * Called by: `png_write_info_before_PLTE`
 */
void png_write_iCCP(long arg1, long arg2, int arg3, byte *arg4, uint arg5)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long local_68;
  int local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint64_t local_50;
  long local_48[2];
  uint8_t local_38;
  uint8_t local_37;
  uint8_t local_36;
  uint8_t local_35;

  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = 0;
  local_60 = 0;
  if ((arg2 == 0) || (lVar4 = png_check_keyword(arg1, arg2, local_48), lVar4 == 0)) {
    png_warning(arg1, "Empty keyword in iCCP chunk");
    return;
  }
  if (arg3 == 0) {
    if (arg4 != (byte *)0x0)
      goto LAB_0055a8d3;
  LAB_0055aab6:
    iVar2 = 0;
  } else {
    png_warning(arg1, "Unknown compression type in iCCP chunk");
    if (arg4 == (byte *)0x0)
      goto LAB_0055aab6;
  LAB_0055a8d3:
    uVar6 = 0;
    if (3 < (int)arg5) {
      uVar6 = (uint)*arg4 << 0x18 | (uint)arg4[1] << 0x10 | (uint)arg4[3] | (uint)arg4[2] << 8;
    }
    if ((int)arg5 < (int)uVar6) {
      png_warning(arg1, "Embedded profile length too large in iCCP chunk");
      return;
    }
    if ((int)uVar6 < (int)arg5) {
      png_warning(arg1, "Truncating profile to actual length in iCCP chunk");
      arg5 = uVar6;
    }
    iVar2 = 0;
    if (arg5 != 0) {
      iVar2 = png_text_compress(arg1, arg4, (long)(int)arg5, 0, &local_68);
    }
  }
  if (arg1 == 0) {
    *(uint8_t *)(local_48[0] + 1 + lVar4) = 0;
  } else {
    iVar3 = iVar2 + 2 + (int)lVar4;
    local_35 = (uint8_t)iVar3;
    local_38 = (uint8_t)((uint)iVar3 >> 0x18);
    local_37 = (uint8_t)((uint)iVar3 >> 0x10);
    local_36 = (uint8_t)((uint)iVar3 >> 8);
    png_write_data(arg1, &local_38, 4);
    png_write_data(arg1, &png_iCCP, 4);
    png_reset_crc(arg1);
    png_calculate_crc(arg1, &png_iCCP, 4);
    lVar5 = local_48[0];
    *(uint8_t *)(local_48[0] + 1 + lVar4) = 0;
    lVar4 = lVar4 + 2;
    if ((lVar4 != 0) && (local_48[0] != 0)) {
      png_calculate_crc(arg1, local_48[0], lVar4);
      png_write_data(arg1, lVar5, lVar4);
    }
  }
  lVar4 = local_68;
  if (iVar2 == 0) {
  LAB_0055aa90:
    if (arg1 == 0)
      goto LAB_0055aa3f;
  } else {
    if (local_68 == 0) {
      png_write_compressed_data_out_part_1(arg1, &local_68);
      goto LAB_0055aa90;
    }
    if (arg1 == 0)
      goto LAB_0055aa3f;
    lVar5 = (long)local_60;
    if (lVar5 != 0) {
      png_calculate_crc(arg1, local_68, lVar5);
      png_write_data(arg1, lVar4, lVar5);
    }
  }
  uVar1 = *(uint32_t *)(arg1 + 0x218);
  local_35 = (uint8_t)uVar1;
  local_38 = (uint8_t)((uint)uVar1 >> 0x18);
  local_37 = (uint8_t)((uint)uVar1 >> 0x10);
  local_36 = (uint8_t)((uint)uVar1 >> 8);
  png_write_data(arg1, &local_38, 4);
LAB_0055aa3f:
  png_free(arg1, local_48[0]);
  return;
}

/* ======================================================================
 * png_write_tEXt  (Ghidra `png_write_tEXt` @ 0055ab20)
 * Signature: uint8_t png_write_tEXt(void)
 * Calls: `png_calculate_crc`, `png_check_keyword`, `png_free`, `png_reset_crc`, `png_warning`, `png_write_data`, `strlen`
 * Called by: `png_write_end`, `png_write_info`, `png_write_zTXt`
 */
void png_write_tEXt(long arg1, long arg2, char *arg3)

{
  uint32_t uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  long local_40;
  uint8_t local_38;
  uint8_t local_37;
  uint8_t local_36;
  uint8_t local_35;

  if ((arg2 == 0) || (lVar4 = png_check_keyword(arg1, arg2, &local_40), lVar4 == 0)) {
    png_warning(arg1, "Empty keyword in tEXt chunk");
    return;
  }
  sVar5 = 0;
  if ((arg3 != (char *)0x0) && (*arg3 != '\0')) {
    sVar5 = strlen(arg3);
  }
  if (arg1 == 0) {
  LAB_0055abf3:
    if (sVar5 == 0)
      goto LAB_0055abfc;
  LAB_0055acae:
    if (arg1 == 0)
      goto LAB_0055ac38;
    if (arg3 != (char *)0x0) {
      png_calculate_crc(arg1, arg3, sVar5);
      png_write_data(arg1, arg3, sVar5);
    }
  } else {
    iVar3 = (int)sVar5 + 1 + (int)lVar4;
    local_35 = (uint8_t)iVar3;
    local_38 = (uint8_t)((uint)iVar3 >> 0x18);
    local_37 = (uint8_t)((uint)iVar3 >> 0x10);
    local_36 = (uint8_t)((uint)iVar3 >> 8);
    png_write_data(arg1, &local_38, 4);
    png_write_data(arg1, &png_tEXt, 4);
    png_reset_crc(arg1);
    png_calculate_crc(arg1, &png_tEXt, 4);
    lVar2 = local_40;
    lVar4 = lVar4 + 1;
    if ((lVar4 == 0) || (local_40 == 0))
      goto LAB_0055abf3;
    png_calculate_crc(arg1, local_40, lVar4);
    png_write_data(arg1, lVar2, lVar4);
    if (sVar5 != 0)
      goto LAB_0055acae;
  LAB_0055abfc:
    if (arg1 == 0)
      goto LAB_0055ac38;
  }
  uVar1 = *(uint32_t *)(arg1 + 0x218);
  local_35 = (uint8_t)uVar1;
  local_38 = (uint8_t)((uint)uVar1 >> 0x18);
  local_37 = (uint8_t)((uint)uVar1 >> 0x10);
  local_36 = (uint8_t)((uint)uVar1 >> 8);
  png_write_data(arg1, &local_38, 4);
LAB_0055ac38:
  png_free(arg1, local_40);
  return;
}

/* ======================================================================
 * png_write_zTXt  (Ghidra `png_write_zTXt` @ 0055ace0)
 * Signature: uint8_t png_write_zTXt(void)
 * Calls: `png_calculate_crc`, `png_check_keyword`, `png_free`, `png_reset_crc`, `png_text_compress`, `png_warning`, `png_write_compressed_data_out_part_1`, `png_write_data`, `png_write_tEXt`, `strlen`
 * Called by: `png_write_end`, `png_write_info`
 */
void png_write_zTXt(long arg1, long arg2, char *arg3, uint64_t arg4, int arg5)

{
  uint32_t uVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  long local_68;
  int local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint64_t local_50;
  long local_40;
  uint8_t local_38;
  uint8_t local_37;
  uint8_t local_36;
  uint8_t local_35;
  uint8_t local_29[9];

  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = 0;
  local_60 = 0;
  if ((arg2 == 0) || (lVar3 = png_check_keyword(arg1, arg2, &local_40), lVar3 == 0)) {
    png_warning(arg1, "Empty keyword in zTXt chunk");
  } else if (((arg3 == (char *)0x0) || (arg5 == -1)) || (*arg3 == '\0')) {
    png_write_tEXt(arg1, local_40, arg3, 0);
    png_free(arg1, local_40);
  } else {
    sVar4 = strlen(arg3);
    iVar2 = png_text_compress(arg1, arg3, sVar4, arg5, &local_68);
    local_29[0] = (char)arg5;
    if (arg1 == 0) {
      png_free(0, local_40);
    } else {
      iVar2 = iVar2 + 2 + (int)lVar3;
      local_35 = (uint8_t)iVar2;
      local_38 = (uint8_t)((uint)iVar2 >> 0x18);
      local_37 = (uint8_t)((uint)iVar2 >> 0x10);
      local_36 = (uint8_t)((uint)iVar2 >> 8);
      png_write_data(arg1, &local_38, 4);
      png_write_data(arg1, &png_zTXt, 4);
      png_reset_crc(arg1);
      png_calculate_crc(arg1, &png_zTXt, 4);
      lVar5 = local_40;
      lVar3 = lVar3 + 1;
      if ((lVar3 != 0) && (local_40 != 0)) {
        png_calculate_crc(arg1, local_40, lVar3);
        png_write_data(arg1, lVar5, lVar3);
      }
      png_free(arg1, local_40);
      png_calculate_crc(arg1, local_29, 1);
      png_write_data(arg1, local_29, 1);
    }
    lVar3 = local_68;
    if (local_68 == 0) {
      png_write_compressed_data_out_part_1(arg1, &local_68);
      if (arg1 == 0) {
        return;
      }
    } else {
      if (arg1 == 0) {
        return;
      }
      lVar5 = (long)local_60;
      if (lVar5 != 0) {
        png_calculate_crc(arg1, local_68, lVar5);
        png_write_data(arg1, lVar3, lVar5);
      }
    }
    uVar1 = *(uint32_t *)(arg1 + 0x218);
    local_35 = (uint8_t)uVar1;
    local_38 = (uint8_t)((uint)uVar1 >> 0x18);
    local_37 = (uint8_t)((uint)uVar1 >> 0x10);
    local_36 = (uint8_t)((uint)uVar1 >> 8);
    png_write_data(arg1, &local_38, 4);
  }
  return;
}

/* ======================================================================
 * png_write_oFFs  (Ghidra `png_write_oFFs` @ 0055af70)
 * Signature: uint8_t png_write_oFFs(void)
 * Calls: `png_warning`, `png_write_chunk`
 * Called by: `png_write_info`
 */
void png_write_oFFs(uint64_t arg1, uint32_t arg2, uint64_t arg3, int arg4)

{
  uint8_t local_38;
  uint8_t local_37;
  uint8_t local_36;
  uint8_t local_35;
  uint8_t local_34;
  uint8_t local_33;
  uint8_t local_32;
  uint8_t local_31;
  uint8_t local_30;

  if (1 < arg4) {
    png_warning(arg1, "Unrecognized unit type for oFFs chunk");
  }
  local_38 = (uint8_t)((uint)arg2 >> 0x18);
  local_35 = (uint8_t)arg2;
  local_37 = (uint8_t)((uint)arg2 >> 0x10);
  local_36 = (uint8_t)((uint)arg2 >> 8);
  local_34 = (uint8_t)((ulong)arg3 >> 0x18);
  local_33 = (uint8_t)((ulong)arg3 >> 0x10);
  local_32 = (uint8_t)((ulong)arg3 >> 8);
  local_31 = (char)arg3;
  local_30 = (char)arg4;
  png_write_chunk(arg1, &png_oFFs, &local_38, 9);
  return;
}

/* ======================================================================
 * png_write_pCAL  (Ghidra `png_write_pCAL` @ 0055b020)
 * Signature: uint8_t png_write_pCAL(void)
 * Calls: `png_calculate_crc`, `png_check_keyword`, `png_free`, `png_malloc`, `png_reset_crc`, `png_warning`, `png_write_data`, `strlen`
 * Called by: `png_write_info`
 */
void png_write_pCAL(long arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, int arg5, int arg6,
                    char *arg7, long arg8)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  long local_88;
  uint8_t local_6c;
  uint8_t local_68;
  uint8_t local_67;
  uint8_t local_66;
  uint8_t local_65;
  uint8_t local_64;
  uint8_t local_63;
  uint8_t local_62;
  uint8_t local_61;
  uint8_t local_60;
  uint8_t local_5f;
  long local_50;
  uint8_t local_48;
  uint8_t local_47;
  uint8_t local_46;
  uint8_t local_45;

  if (3 < arg5) {
    png_warning(arg1, "Unrecognized equation type for pCAL chunk");
  }
  lVar4 = png_check_keyword(arg1, arg2, &local_50);
  lVar5 = lVar4 + 1;
  sVar6 = strlen(arg7);
  lVar7 = (arg6 != 0) + sVar6;
  local_88 = lVar4 + 0xb + lVar7;
  lVar4 = png_malloc(arg1, arg6 * 4);
  if (0 < arg6) {
    lVar8 = 0;
    do {
      sVar6 = strlen(*(char **)(arg8 + lVar8 * 8));
      uVar3 = (int)sVar6 + (uint)(arg6 + -1 != (int)lVar8);
      local_88 = local_88 + (ulong)uVar3;
      *(uint *)(lVar4 + lVar8 * 4) = uVar3;
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < arg6);
  }
  if (arg1 != 0) {
    local_45 = (uint8_t)(uint32_t)local_88;
    local_48 = (uint8_t)((uint)(uint32_t)local_88 >> 0x18);
    local_47 = (uint8_t)((uint)(uint32_t)local_88 >> 0x10);
    local_46 = (uint8_t)((uint)(uint32_t)local_88 >> 8);
    png_write_data(arg1, &local_48, 4);
    png_write_data(arg1, &png_pCAL, 4);
    png_reset_crc(arg1);
    png_calculate_crc(arg1, &png_pCAL, 4);
    lVar8 = local_50;
    if ((lVar5 != 0) && (local_50 != 0)) {
      png_calculate_crc(arg1, local_50, lVar5);
      png_write_data(arg1, lVar8, lVar5);
    }
  }
  local_5f = (uint8_t)arg6;
  local_68 = (uint8_t)((ulong)arg3 >> 0x18);
  local_67 = (uint8_t)((ulong)arg3 >> 0x10);
  local_66 = (uint8_t)((ulong)arg3 >> 8);
  local_64 = (uint8_t)((ulong)arg4 >> 0x18);
  local_63 = (uint8_t)((ulong)arg4 >> 0x10);
  local_62 = (uint8_t)((ulong)arg4 >> 8);
  local_6c = (uint8_t)arg5;
  local_60 = local_6c;
  local_65 = (char)arg3;
  local_61 = (char)arg4;
  if (arg1 != 0) {
    png_calculate_crc(arg1, &local_68, 10);
    png_write_data(arg1, &local_68, 10);
    if ((lVar7 != 0) && (arg7 != (char *)0x0)) {
      png_calculate_crc(arg1, arg7, lVar7);
      png_write_data(arg1, arg7, lVar7);
    }
  }
  png_free(arg1, local_50);
  if (arg6 < 1) {
    png_free(arg1, lVar4);
    if (arg1 == 0) {
      return;
    }
  } else {
    if (arg1 == 0) {
      png_free(0, lVar4);
      return;
    }
    lVar5 = 0;
    do {
      while (true) {
        iVar1 = *(int *)(lVar4 + lVar5 * 4);
        lVar7 = *(long *)(arg8 + lVar5 * 8);
        if ((iVar1 == 0) || (lVar7 == 0))
          break;
        lVar5 = lVar5 + 1;
        png_calculate_crc(arg1, lVar7, iVar1);
        png_write_data(arg1, lVar7, iVar1);
        if (arg6 <= (int)lVar5)
          goto LAB_0055b263;
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < arg6);
  LAB_0055b263:
    png_free(arg1, lVar4);
  }
  uVar2 = *(uint32_t *)(arg1 + 0x218);
  local_45 = (uint8_t)uVar2;
  local_48 = (uint8_t)((uint)uVar2 >> 0x18);
  local_47 = (uint8_t)((uint)uVar2 >> 0x10);
  local_46 = (uint8_t)((uint)uVar2 >> 8);
  png_write_data(arg1, &local_48, 4);
  return;
}

/* ======================================================================
 * png_write_sCAL  (Ghidra `png_write_sCAL` @ 0055b370)
 * Signature: uint8_t png_write_sCAL(void)
 * Calls: `png_write_chunk`, `snprintf`, `strlen`
 * Called by: `png_write_info`
 */
void png_write_sCAL(uint64_t arg1, uint64_t arg2, uint64_t arg3, uint8_t arg4)

{
  size_t sVar1;
  size_t sVar2;
  uint8_t local_58;
  char local_57;
  char acStack_56[62];

  local_58 = arg4;
  snprintf(&local_57, 0x3f, "%12.12e");
  sVar1 = strlen(&local_57);
  snprintf(acStack_56 + sVar1, 0x3e - sVar1, "%12.12e", arg2);
  sVar2 = strlen(acStack_56 + sVar1);
  png_write_chunk(arg3, &png_sCAL, &local_58, sVar1 + 2 + sVar2);
  return;
}

/* ======================================================================
 * png_write_pHYs  (Ghidra `png_write_pHYs` @ 0055b420)
 * Signature: uint8_t png_write_pHYs(void)
 * Calls: `png_warning`, `png_write_chunk`
 * Called by: `png_write_info`
 */
void png_write_pHYs(uint64_t arg1, uint32_t arg2, ulong arg3, int arg4)

{
  uint8_t local_38;
  uint8_t local_37;
  uint8_t local_36;
  uint8_t local_35;
  uint8_t local_34;
  uint8_t local_33;
  uint8_t local_32;
  uint8_t local_31;
  uint8_t local_30;

  if (1 < arg4) {
    png_warning(arg1, "Unrecognized unit type for pHYs chunk");
  }
  local_38 = (uint8_t)((uint)arg2 >> 0x18);
  local_35 = (uint8_t)arg2;
  local_31 = (uint8_t)(arg3 & 0xffffffff);
  local_37 = (uint8_t)((uint)arg2 >> 0x10);
  local_36 = (uint8_t)((uint)arg2 >> 8);
  local_34 = (uint8_t)((arg3 & 0xffffffff) >> 0x18);
  local_33 = (uint8_t)(arg3 >> 0x10);
  local_32 = (uint8_t)(arg3 >> 8);
  local_30 = (char)arg4;
  png_write_chunk(arg1, &png_pHYs, &local_38, 9);
  return;
}

/* ======================================================================
 * png_write_tIME  (Ghidra `png_write_tIME` @ 0055b4d0)
 * Signature: uint8_t png_write_tIME(void)
 * Calls: `png_warning`, `png_write_chunk`
 * Called by: `png_write_end`, `png_write_info`
 */
void png_write_tIME(uint64_t arg1, uint16_t *arg2)

{
  uint8_t local_18;
  uint8_t local_17;
  char local_16;
  byte local_15;
  byte local_14;
  uint8_t local_13;
  byte local_12;

  local_16 = *(char *)(arg2 + 1);
  if (((((byte)(local_16 - 1U) < 0xc) && (local_15 = *(byte *)((long)arg2 + 3), local_15 < 0x20)) &&
       (local_15 != 0)) &&
      ((local_14 = *(byte *)(arg2 + 2),
        local_14 < 0x18 && (local_12 = *(byte *)(arg2 + 3), local_12 < 0x3d)))) {
    local_13 = *(uint8_t *)((long)arg2 + 5);
    local_17 = (uint8_t)*arg2;
    local_18 = (uint8_t)((ushort)*arg2 >> 8);
    png_write_chunk(arg1, &png_tIME, &local_18, 7);
    return;
  }
  png_warning(arg1, "Invalid time specified for tIME chunk");
  return;
}

/* ======================================================================
 * png_write_start_row  (Ghidra `png_write_start_row` @ 0055b550)
 * Signature: uint8_t png_write_start_row(void)
 * Calls: `memset`, `png_malloc`
 * Called by: `png_write_row`
 */
void png_write_start_row(long arg1)

{
  byte bVar1;
  uint8_t *puVar2;
  void *__s;
  uint uVar3;

  uVar3 = (uint) * (byte *)(arg1 + 0x23b) * (uint) * (byte *)(arg1 + 0x238);
  if (uVar3 < 8) {
    uVar3 = uVar3 * *(int *)(arg1 + 0x1b4) + 7 >> 3;
  } else {
    uVar3 = (uVar3 >> 3) * *(int *)(arg1 + 0x1b4);
  }
  puVar2 = (uint8_t *)png_malloc(arg1, (ulong)(uVar3 + 1));
  *(uint8_t **)(arg1 + 0x1e0) = puVar2;
  *puVar2 = 0;
  bVar1 = *(byte *)(arg1 + 0x235);
  if ((bVar1 & 0x10) != 0) {
    puVar2 = (uint8_t *)png_malloc(arg1, *(int *)(arg1 + 0x1c4) + 1);
    *(uint8_t **)(arg1 + 0x1e8) = puVar2;
    *puVar2 = 1;
    bVar1 = *(byte *)(arg1 + 0x235);
  }
  if ((bVar1 & 0xe0) != 0) {
    __s = (void *)png_malloc(arg1);
    *(void **)(arg1 + 0x1d8) = __s;
    memset(__s, 0, (ulong)(uVar3 + 1));
    bVar1 = *(byte *)(arg1 + 0x235);
    if ((bVar1 & 0x20) != 0) {
      puVar2 = (uint8_t *)png_malloc(arg1, *(int *)(arg1 + 0x1c4) + 1);
      *(uint8_t **)(arg1 + 0x1f0) = puVar2;
      *puVar2 = 2;
      bVar1 = *(byte *)(arg1 + 0x235);
    }
    if ((bVar1 & 0x40) != 0) {
      puVar2 = (uint8_t *)png_malloc(arg1, *(int *)(arg1 + 0x1c4) + 1);
      *(uint8_t **)(arg1 + 0x1f8) = puVar2;
      *puVar2 = 3;
      bVar1 = *(byte *)(arg1 + 0x235);
    }
    if ((char)bVar1 < '\0') {
      puVar2 = (uint8_t *)png_malloc(arg1, *(int *)(arg1 + 0x1c4) + 1);
      *(uint8_t **)(arg1 + 0x200) = puVar2;
      *puVar2 = 4;
    }
  }
  uVar3 = png_pass_inc;
  if ((*(char *)(arg1 + 0x233) == '\0') || ((*(byte *)(arg1 + 0x11c) & 2) != 0)) {
    *(uint32_t *)(arg1 + 0x1bc) = *(uint32_t *)(arg1 + 0x1b8);
    *(uint32_t *)(arg1 + 0x1c0) = *(uint32_t *)(arg1 + 0x1b4);
  } else {
    *(uint *)(arg1 + 0x1bc) =
        (((png_pass_yinc - 1) + *(int *)(arg1 + 0x1b8)) - png_pass_ystart._0_4_) / png_pass_yinc;
    *(uint *)(arg1 + 0x1c0) =
        (((uVar3 - 1) + *(int *)(arg1 + 0x1b4)) - png_pass_start._0_4_) / uVar3;
  }
  *(int *)(arg1 + 0x140) = (int)*(uint64_t *)(arg1 + 0x198);
  *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 400);
  return;
}

/* ======================================================================
 * png_write_finish_row  (Ghidra `png_write_finish_row` @ 0055b750)
 * Signature: uint8_t png_write_finish_row(void)
 * Calls: `deflate`, `deflateReset`, `memset`, `png_error`, `png_write_IDAT`
 * Called by: `png_write_filtered_row`, `png_write_row`
 */
void png_write_finish_row(long arg1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;

  uVar2 = *(int *)(arg1 + 0x1d0) + 1;
  *(uint *)(arg1 + 0x1d0) = uVar2;
  if (uVar2 < *(uint *)(arg1 + 0x1bc)) {
    return;
  }
  if (*(char *)(arg1 + 0x233) == '\0') {
  LAB_0055b790:
    while (true) {
      while (true) {
        iVar3 = deflate(arg1 + 0x120, 4);
        if (iVar3 != 0)
          break;
        if (*(int *)(arg1 + 0x140) == 0) {
          png_write_IDAT(arg1, *(uint64_t *)(arg1 + 400), *(uint64_t *)(arg1 + 0x198));
          *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 400);
          *(int *)(arg1 + 0x140) = (int)*(uint64_t *)(arg1 + 0x198);
        }
      }
      if (iVar3 == 1)
        break;
      pcVar6 = *(char **)(arg1 + 0x150);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = "zlib error";
      }
      png_error(arg1, pcVar6);
    }
    if ((ulong) * (uint *)(arg1 + 0x140) < *(ulong *)(arg1 + 0x198)) {
      png_write_IDAT(arg1, *(uint64_t *)(arg1 + 400),
                     *(ulong *)(arg1 + 0x198) - (ulong) * (uint *)(arg1 + 0x140));
    }
    deflateReset(arg1 + 0x120);
    *(uint32_t *)(arg1 + 0x178) = 0;
  } else {
    *(uint32_t *)(arg1 + 0x1d0) = 0;
    if ((*(byte *)(arg1 + 0x11c) & 2) == 0) {
      bVar1 = *(byte *)(arg1 + 0x234);
      do {
        bVar1 = bVar1 + 1;
        if (6 < bVar1) {
          *(byte *)(arg1 + 0x234) = bVar1;
          goto LAB_0055b790;
        }
        uVar5 = (ulong)bVar1;
        uVar4 = ((((&png_pass_inc)[uVar5] - 1) + *(int *)(arg1 + 0x1b4)) -
                 *(int *)(png_pass_start + uVar5 * 4)) /
                (uint)(&png_pass_inc)[uVar5];
        uVar2 = (&png_pass_yinc)[uVar5];
        *(uint *)(arg1 + 0x1c0) = uVar4;
        uVar2 = (((uVar2 - 1) + *(int *)(arg1 + 0x1b8)) - *(int *)(png_pass_ystart + uVar5 * 4)) /
                uVar2;
        *(uint *)(arg1 + 0x1bc) = uVar2;
      } while ((uVar4 == 0) || (uVar2 == 0));
      *(byte *)(arg1 + 0x234) = bVar1;
    } else {
      bVar1 = *(char *)(arg1 + 0x234) + 1;
      *(byte *)(arg1 + 0x234) = bVar1;
      if (6 < bVar1)
        goto LAB_0055b790;
    }
    if (*(void **)(arg1 + 0x1d8) != (void *)0x0) {
      uVar2 = (uint) * (byte *)(arg1 + 0x23b) * (uint) * (byte *)(arg1 + 0x238);
      if (uVar2 < 8) {
        uVar2 = uVar2 * *(int *)(arg1 + 0x1b4) + 7 >> 3;
      } else {
        uVar2 = (uVar2 >> 3) * *(int *)(arg1 + 0x1b4);
      }
      memset(*(void **)(arg1 + 0x1d8), 0, (ulong)uVar2 + 1);
      return;
    }
  }
  return;
}

/* ======================================================================
 * png_do_write_interlace  (Ghidra `png_do_write_interlace` @ 0055b990)
 * Signature: uint8_t png_do_write_interlace(void)
 * Calls: `memcpy`
 * Called by: `png_write_row`
 */
void png_do_write_interlace(uint *arg1, uint8_t *arg2, int arg3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  uint8_t uVar9;
  uint uVar10;
  uint uVar11;
  uint8_t *puVar12;

  if (5 < arg3) {
    return;
  }
  bVar6 = *(byte *)((long)arg1 + 0xb);
  puVar12 = arg2;
  if (bVar6 == 2) {
    uVar2 = *arg1;
    uVar10 = *(uint *)(png_pass_start + (long)arg3 * 4);
    if (uVar10 < uVar2) {
      uVar1 = (&png_pass_inc)[arg3];
      uVar5 = (ulong)uVar10;
      uVar11 = 0;
      uVar8 = 6;
      do {
        while (true) {
          uVar11 = uVar11 | ((int)(uint)(byte)arg2[uVar5 >> 2] >> (~(byte)uVar5 & 3) * '\x02' & 3U)
                                << ((byte)uVar8 & 0x1f);
          uVar9 = (uint8_t)uVar11;
          if ((int)uVar8 == 0)
            break;
          uVar3 = (int)uVar5 + uVar1;
          uVar5 = (ulong)uVar3;
          uVar7 = (int)uVar8 - 2;
          uVar8 = (ulong)uVar7;
          if (uVar2 <= uVar3)
            goto LAB_0055bae7;
        }
        uVar3 = (int)uVar5 + uVar1;
        uVar5 = (ulong)uVar3;
        *puVar12 = uVar9;
        puVar12 = puVar12 + 1;
        uVar11 = 0;
        uVar9 = 0;
        uVar8 = CONCAT71((int7)(uVar8 >> 8), 6);
        uVar7 = (uint)uVar8;
      } while (uVar3 < uVar2);
    LAB_0055bae7:
      if (uVar7 != 6) {
      LAB_0055bc1f:
        *puVar12 = uVar9;
      }
      goto LAB_0055bc22;
    }
  LAB_0055baf8:
    uVar1 = (((uVar2 - 1) + (&png_pass_inc)[arg3]) - uVar10) / (uint)(&png_pass_inc)[arg3];
    *arg1 = uVar1;
  } else {
    if (bVar6 == 4) {
      uVar2 = *arg1;
      uVar10 = *(uint *)(png_pass_start + (long)arg3 * 4);
      if (uVar2 <= uVar10)
        goto LAB_0055baf8;
      uVar1 = (&png_pass_inc)[arg3];
      uVar5 = (ulong)uVar10;
      uVar11 = 0;
      uVar8 = 4;
      do {
        while (true) {
          uVar11 = uVar11 | ((int)(uint)(byte)arg2[uVar5 >> 1] >> (-((uVar5 & 1) == 0) & 4U) & 0xfU)
                                << ((byte)uVar8 & 0x1f);
          uVar9 = (uint8_t)uVar11;
          if ((int)uVar8 == 0)
            break;
          uVar3 = (int)uVar5 + uVar1;
          uVar5 = (ulong)uVar3;
          uVar7 = (int)uVar8 - 4;
          uVar8 = (ulong)uVar7;
          if (uVar2 <= uVar3)
            goto LAB_0055bc1a;
        }
        uVar3 = (int)uVar5 + uVar1;
        uVar5 = (ulong)uVar3;
        *puVar12 = uVar9;
        puVar12 = puVar12 + 1;
        uVar11 = 0;
        uVar9 = 0;
        uVar8 = CONCAT71((int7)(uVar8 >> 8), 4);
        uVar7 = (uint)uVar8;
      } while (uVar3 < uVar2);
    LAB_0055bc1a:
      if (uVar7 != 4)
        goto LAB_0055bc1f;
    LAB_0055bc22:
      uVar2 = *arg1;
      bVar6 = *(byte *)((long)arg1 + 0xb);
    } else {
      if (bVar6 == 1) {
        uVar2 = *arg1;
        uVar10 = *(uint *)(png_pass_start + (long)arg3 * 4);
        if (uVar2 <= uVar10)
          goto LAB_0055baf8;
        uVar1 = (&png_pass_inc)[arg3];
        uVar5 = (ulong)uVar10;
        uVar11 = 0;
        uVar8 = 7;
        do {
          while (true) {
            uVar11 = uVar11 | ((int)(uint)(byte)arg2[uVar5 >> 3] >> (~(byte)uVar5 & 7) & 1U)
                                  << ((byte)uVar8 & 0x1f);
            uVar9 = (uint8_t)uVar11;
            if ((int)uVar8 == 0)
              break;
            uVar3 = (int)uVar5 + uVar1;
            uVar5 = (ulong)uVar3;
            uVar7 = (int)uVar8 - 1;
            uVar8 = (ulong)uVar7;
            if (uVar2 <= uVar3)
              goto LAB_0055bb9d;
          }
          uVar3 = (int)uVar5 + uVar1;
          uVar5 = (ulong)uVar3;
          *puVar12 = uVar9;
          puVar12 = puVar12 + 1;
          uVar11 = 0;
          uVar9 = 0;
          uVar8 = CONCAT71((int7)(uVar8 >> 8), 7);
          uVar7 = (uint)uVar8;
        } while (uVar3 < uVar2);
      LAB_0055bb9d:
        if (uVar7 != 7)
          goto LAB_0055bc1f;
        goto LAB_0055bc22;
      }
      lVar4 = (long)arg3;
      uVar2 = *arg1;
      uVar5 = (ulong)(bVar6 >> 3);
      uVar10 = *(uint *)(png_pass_start + lVar4 * 4);
      if (uVar10 < uVar2) {
        uVar1 = (&png_pass_inc)[lVar4];
        uVar11 = uVar10;
        do {
          if (puVar12 != arg2 + uVar11 * uVar5) {
            memcpy(puVar12, arg2 + uVar11 * uVar5, uVar5);
          }
          uVar11 = uVar11 + uVar1;
          puVar12 = puVar12 + uVar5;
        } while (uVar11 < uVar2);
        bVar6 = *(byte *)((long)arg1 + 0xb);
        uVar2 = *arg1;
      } else {
        uVar1 = (&png_pass_inc)[lVar4];
      }
    }
    uVar1 = (((uVar2 - 1) + uVar1) - uVar10) / uVar1;
    *arg1 = uVar1;
    if (7 < bVar6) {
      uVar1 = uVar1 * (bVar6 >> 3);
      goto LAB_0055ba61;
    }
  }
  uVar1 = bVar6 * uVar1 + 7 >> 3;
LAB_0055ba61:
  arg1[1] = uVar1;
  return;
}

/* ======================================================================
 * png_write_filtered_row  (Ghidra `png_write_filtered_row` @ 0055bc40)
 * Signature: uint8_t png_write_filtered_row(void)
 * Calls: `deflate`, `png_error`, `png_write_IDAT`, `png_write_finish_row`, `png_write_flush`
 * Called by: `png_write_find_filter`
 */
void png_write_filtered_row(long arg1, uint64_t arg2)

{
  uint64_t uVar1;
  int iVar2;
  uint uVar3;

  *(uint64_t *)(arg1 + 0x120) = arg2;
  *(int *)(arg1 + 0x128) = *(int *)(arg1 + 0x20c) + 1;
  do {
    while (true) {
      iVar2 = deflate(arg1 + 0x120, 0);
      if (iVar2 != 0) {
        png_error(arg1);
      }
      if (*(int *)(arg1 + 0x140) != 0)
        break;
      png_write_IDAT(arg1, *(uint64_t *)(arg1 + 400), *(uint64_t *)(arg1 + 0x198));
      *(uint64_t *)(arg1 + 0x138) = *(uint64_t *)(arg1 + 400);
      *(int *)(arg1 + 0x140) = (int)*(uint64_t *)(arg1 + 0x198);
      if (*(int *)(arg1 + 0x128) == 0)
        goto LAB_0055bce9;
    }
  } while (*(int *)(arg1 + 0x128) != 0);
LAB_0055bce9:
  if (*(long *)(arg1 + 0x1d8) != 0) {
    uVar1 = *(uint64_t *)(arg1 + 0x1e0);
    *(long *)(arg1 + 0x1e0) = *(long *)(arg1 + 0x1d8);
    *(uint64_t *)(arg1 + 0x1d8) = uVar1;
  }
  png_write_finish_row(arg1);
  uVar3 = *(int *)(arg1 + 0x26c) + 1;
  *(uint *)(arg1 + 0x26c) = uVar3;
  if ((*(uint *)(arg1 + 0x268) != 0) && (*(uint *)(arg1 + 0x268) <= uVar3)) {
    png_write_flush(arg1);
    return;
  }
  return;
}

/* ======================================================================
 * png_write_find_filter  (Ghidra `png_write_find_filter` @ 0055bd60)
 * Signature: uint8_t png_write_find_filter(void)
 * Calls: `png_write_filtered_row`
 * Called by: `png_write_row`
 */
/* WARNING: Removing unreachable block (ram,0x0055c4fc) */
/* WARNING: Removing unreachable block (ram,0x0055c83c) */

void png_write_find_filter(long arg1, long arg2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint64_t *puVar4;
  uint8_t auVar5[16];
  uint8_t auVar6[16];
  byte bVar7;
  char cVar8;
  uint8_t *puVar9;
  uint8_t auVar10[15];
  uint8_t auVar11[14];
  uint8_t auVar12[14];
  uint8_t auVar13[15];
  uint8_t auVar14[15];
  uint8_t auVar15[15];
  uint8_t auVar16[15];
  uint8_t auVar17[15];
  uint8_t auVar18[15];
  uint8_t auVar19[14];
  uint8_t auVar20[14];
  uint8_t auVar21[13];
  uint8_t auVar22[13];
  uint8_t auVar23[13];
  uint8_t auVar24[13];
  uint8_t auVar25[13];
  uint8_t auVar26[13];
  uint uVar27;
  uint8_t auVar28[15];
  uint8_t auVar29[15];
  uint8_t auVar30[15];
  uint8_t auVar31[15];
  uint8_t auVar32[15];
  uint8_t auVar33[15];
  uint8_t auVar34[15];
  uint8_t auVar35[15];
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  uint64_t uVar65;
  uint8_t auVar66[15];
  unkuint9 Var67;
  uint8_t auVar68[11];
  uint8_t auVar69[13];
  uint8_t auVar70[15];
  unkuint9 Var71;
  uint8_t auVar72[11];
  uint8_t auVar73[14];
  uint8_t auVar74[14];
  uint8_t auVar75[13];
  uint8_t auVar76[13];
  uint8_t auVar77[15];
  uint8_t auVar78[15];
  uint8_t auVar79[15];
  uint8_t auVar80[15];
  uint6 uVar81;
  uint6 uVar82;
  uint uVar83;
  long lVar84;
  uint uVar85;
  int iVar86;
  uint uVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  ulong uVar91;
  uint8_t *puVar92;
  uint8_t *puVar93;
  int iVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  ulong uVar98;
  byte bVar99;
  byte bVar100;
  uint uVar101;
  uint uVar102;
  uint8_t *puVar103;
  int iVar104;
  long lVar105;
  uint8_t *puVar106;
  uint8_t *puVar107;
  uint8_t *puVar108;
  uint uVar109;
  uint uVar110;
  uint local_5c;

  bVar100 = *(byte *)(arg1 + 0x235);
  bVar7 = *(byte *)(arg1 + 0x389);
  uVar97 = *(uint *)(arg2 + 4);
  lVar84 = *(long *)(arg1 + 0x1d8);
  uVar85 = (int)(*(byte *)(arg2 + 0xb) + 7) >> 3;
  uVar83 = (uint)bVar7;
  puVar9 = *(uint8_t **)(arg1 + 0x1e0);
  if (((bVar100 & 8) == 0) || (bVar100 == 8)) {
    local_5c = 0x7fffffff;
  } else {
    local_5c = 0;
    if (uVar97 != 0) {
      lVar105 = 0;
      do {
        bVar99 = puVar9[lVar105 + 1];
        uVar87 = (uint)bVar99;
        if (0x7f < bVar99) {
          uVar87 = 0x100 - bVar99;
        }
        lVar105 = lVar105 + 1;
        local_5c = local_5c + uVar87;
      } while ((uint)lVar105 < uVar97);
    }
    if (*(char *)(arg1 + 0x388) == '\x02') {
      uVar87 = local_5c & 0xffff;
      uVar101 = local_5c >> 10 & 0x3fffc0;
      if (uVar83 != 0) {
        lVar105 = 0;
        do {
          if (*(char *)(*(long *)(arg1 + 0x390) + lVar105) == '\0') {
            uVar95 = (uint) * (ushort *)(*(long *)(arg1 + 0x398) + lVar105 * 2);
            uVar87 = uVar87 * uVar95 >> 8;
            uVar101 = uVar101 * uVar95 >> 8;
          }
          lVar105 = lVar105 + 1;
        } while ((int)lVar105 < (int)uVar83);
      }
      local_5c = 0x7fffffff;
      uVar101 = uVar101 * **(ushort **)(arg1 + 0x3a8) >> 3;
      if (uVar101 < 0x3fffc1) {
        local_5c = (**(ushort **)(arg1 + 0x3a8) * uVar87 >> 3) + uVar101 * 0x400;
      }
    }
  }
  if (bVar100 == 0x10) {
    lVar105 = *(long *)(arg1 + 0x1e8);
    puVar107 = puVar9 + 1;
    puVar92 = (uint8_t *)(lVar105 + 1);
    puVar93 = puVar107;
    uVar87 = 0;
    if (uVar85 != 0) {
      uVar87 = uVar85 >> 4;
      uVar101 = uVar87 << 4;
      if ((uVar87 == 0) ||
          (uVar85 < 0x10 || puVar92 <= puVar9 + 0x11 && puVar107 <= (uint8_t *)(lVar105 + 0x11U))) {
        uVar101 = 0;
        puVar93 = puVar92;
        puVar103 = puVar107;
      LAB_0055c731:
        lVar105 = 0;
        do {
          puVar93[lVar105] = puVar103[lVar105];
          lVar105 = lVar105 + 1;
        } while (uVar101 + (int)lVar105 < uVar85);
      } else {
        lVar89 = 0;
        uVar95 = 0;
        do {
          uVar65 = *(uint64_t *)((long)(puVar9 + lVar89 + 1) + 8);
          uVar95 = uVar95 + 1;
          puVar4 = (uint64_t *)(lVar105 + 1 + lVar89);
          *puVar4 = *(uint64_t *)(puVar9 + lVar89 + 1);
          puVar4[1] = uVar65;
          lVar89 = lVar89 + 0x10;
        } while (uVar95 < uVar87);
        puVar93 = puVar92 + uVar101;
        puVar103 = puVar107 + uVar101;
        if (uVar85 != uVar101)
          goto LAB_0055c731;
      }
      lVar105 = (ulong)(uVar85 - 1) + 1;
      puVar93 = puVar107 + lVar105;
      puVar92 = puVar92 + lVar105;
      uVar87 = uVar85;
    }
    if (uVar87 < uVar97) {
      uVar102 = uVar97 - uVar87;
      uVar101 = uVar102 >> 4;
      uVar95 = uVar101 * 0x10;
      if ((uVar101 != 0) &&
          ((0xf < uVar102 && (puVar93 + 0x10 < puVar92 || puVar92 + 0x10 < puVar93)) &&
           (puVar9 + 0x11 < puVar92 || puVar92 + 0x10 < puVar107))) {
        lVar105 = 0;
        uVar96 = 0;
        do {
          pcVar1 = puVar93 + lVar105;
          cVar8 = pcVar1[1];
          cVar36 = pcVar1[2];
          cVar37 = pcVar1[3];
          cVar38 = pcVar1[4];
          cVar39 = pcVar1[5];
          cVar40 = pcVar1[6];
          cVar41 = pcVar1[7];
          cVar42 = pcVar1[8];
          cVar43 = pcVar1[9];
          cVar44 = pcVar1[10];
          cVar45 = pcVar1[0xb];
          cVar46 = pcVar1[0xc];
          cVar47 = pcVar1[0xd];
          cVar48 = pcVar1[0xe];
          cVar49 = pcVar1[0xf];
          uVar96 = uVar96 + 1;
          pcVar3 = puVar9 + lVar105 + 1;
          cVar50 = pcVar3[1];
          cVar51 = pcVar3[2];
          cVar52 = pcVar3[3];
          cVar53 = pcVar3[4];
          cVar54 = pcVar3[5];
          cVar55 = pcVar3[6];
          cVar56 = pcVar3[7];
          cVar57 = pcVar3[8];
          cVar58 = pcVar3[9];
          cVar59 = pcVar3[10];
          cVar60 = pcVar3[0xb];
          cVar61 = pcVar3[0xc];
          cVar62 = pcVar3[0xd];
          cVar63 = pcVar3[0xe];
          cVar64 = pcVar3[0xf];
          pcVar2 = puVar92 + lVar105;
          *pcVar2 = *pcVar1 - *pcVar3;
          pcVar2[1] = cVar8 - cVar50;
          pcVar2[2] = cVar36 - cVar51;
          pcVar2[3] = cVar37 - cVar52;
          pcVar2[4] = cVar38 - cVar53;
          pcVar2[5] = cVar39 - cVar54;
          pcVar2[6] = cVar40 - cVar55;
          pcVar2[7] = cVar41 - cVar56;
          pcVar2[8] = cVar42 - cVar57;
          pcVar2[9] = cVar43 - cVar58;
          pcVar2[10] = cVar44 - cVar59;
          pcVar2[0xb] = cVar45 - cVar60;
          pcVar2[0xc] = cVar46 - cVar61;
          pcVar2[0xd] = cVar47 - cVar62;
          pcVar2[0xe] = cVar48 - cVar63;
          pcVar2[0xf] = cVar49 - cVar64;
          lVar105 = lVar105 + 0x10;
        } while (uVar96 < uVar101);
        uVar87 = uVar87 + uVar95;
        puVar93 = puVar93 + uVar95;
        puVar107 = puVar107 + uVar95;
        puVar92 = puVar92 + uVar95;
        if (uVar102 == uVar95)
          goto LAB_0055c82b;
      }
      lVar105 = 0;
      do {
        puVar92[lVar105] = puVar93[lVar105] - puVar107[lVar105];
        lVar105 = lVar105 + 1;
      } while (uVar87 + (int)lVar105 < uVar97);
    }
  LAB_0055c82b:
    puVar107 = *(uint8_t **)(arg1 + 0x1e8);
  LAB_0055bf57:
    if (bVar100 == 0x40) {
      lVar105 = *(long *)(arg1 + 0x1f8);
      puVar107 = puVar9 + 1;
      puVar92 = (uint8_t *)(lVar84 + 1);
      puVar93 = (uint8_t *)(lVar105 + 1);
      puVar103 = puVar107;
      uVar87 = 0;
      if (uVar85 != 0) {
        lVar89 = 0;
        do {
          *(byte *)(lVar105 + 1 + lVar89) =
              puVar9[lVar89 + 1] - (*(byte *)(lVar84 + 1 + lVar89) >> 1);
          lVar89 = lVar89 + 1;
        } while ((uint)lVar89 < uVar85);
        lVar84 = (ulong)(uVar85 - 1) + 1;
        puVar103 = puVar107 + lVar84;
        puVar93 = puVar93 + lVar84;
        puVar92 = puVar92 + lVar84;
        uVar87 = uVar85;
      }
      if (uVar87 < uVar97) {
        puVar106 = puVar93 + 0x10;
        uVar95 = uVar97 - uVar87;
        uVar85 = uVar95 >> 4;
        uVar101 = uVar85 * 0x10;
        if ((uVar85 != 0) &&
            (((0xf < uVar95 && (puVar103 + 0x10 < puVar93 || puVar106 < puVar103)) &&
              (puVar92 + 0x10 < puVar93 || puVar106 < puVar92)) &&
             (puVar9 + 0x11 < puVar93 || puVar106 < puVar107))) {
          lVar84 = 0;
          uVar102 = 0;
          do {
            auVar5 = *(uint8_t (*)[16])(puVar92 + lVar84);
            uVar102 = uVar102 + 1;
            auVar6 = *(uint8_t (*)[16])(puVar9 + lVar84 + 1);
            uVar109 = CONCAT13(0, CONCAT12(auVar5[9], (ushort)auVar5[8]));
            auVar13[0xd] = 0;
            auVar13._0_13_ = auVar5._0_13_;
            auVar13[0xe] = auVar5[7];
            auVar15[0xc] = auVar5[6];
            auVar15._0_12_ = auVar5._0_12_;
            auVar15._13_2_ = auVar13._13_2_;
            auVar17[0xb] = 0;
            auVar17._0_11_ = auVar5._0_11_;
            auVar17._12_3_ = auVar15._12_3_;
            uVar27 = auVar17._11_4_;
            auVar28[10] = auVar5[5];
            auVar28._0_10_ = auVar5._0_10_;
            auVar28._11_4_ = uVar27;
            auVar30[9] = 0;
            auVar30._0_9_ = auVar5._0_9_;
            auVar30._10_5_ = auVar28._10_5_;
            auVar32[8] = auVar5[4];
            auVar32._0_8_ = auVar5._0_8_;
            auVar32._9_6_ = auVar30._9_6_;
            auVar66._7_8_ = 0;
            auVar66._0_7_ = auVar32._8_7_;
            Var67 = CONCAT81(SUB158(auVar66 << 0x40, 7), auVar5[3]);
            auVar77._9_6_ = 0;
            auVar77._0_9_ = Var67;
            auVar68._1_10_ = SUB1510(auVar77 << 0x30, 5);
            auVar68[0] = auVar5[2];
            auVar78._11_4_ = 0;
            auVar78._0_11_ = auVar68;
            auVar69._1_12_ = SUB1512(auVar78 << 0x20, 3);
            auVar69[0] = auVar5[1];
            auVar35[1] = 0;
            auVar35[0] = auVar5[0];
            auVar35._2_13_ = auVar69;
            pcVar1 = puVar103 + lVar84;
            cVar8 = pcVar1[1];
            cVar36 = pcVar1[2];
            cVar37 = pcVar1[3];
            cVar38 = pcVar1[4];
            cVar39 = pcVar1[5];
            cVar40 = pcVar1[6];
            cVar41 = pcVar1[7];
            cVar42 = pcVar1[8];
            cVar43 = pcVar1[9];
            cVar44 = pcVar1[10];
            cVar45 = pcVar1[0xb];
            cVar46 = pcVar1[0xc];
            cVar47 = pcVar1[0xd];
            cVar48 = pcVar1[0xe];
            cVar49 = pcVar1[0xf];
            auVar10[0xd] = 0;
            auVar10._0_13_ = auVar6._0_13_;
            auVar10[0xe] = auVar6[7];
            auVar14[0xc] = auVar6[6];
            auVar14._0_12_ = auVar6._0_12_;
            auVar14._13_2_ = auVar10._13_2_;
            auVar16[0xb] = 0;
            auVar16._0_11_ = auVar6._0_11_;
            auVar16._12_3_ = auVar14._12_3_;
            uVar96 = auVar16._11_4_;
            auVar18[10] = auVar6[5];
            auVar18._0_10_ = auVar6._0_10_;
            auVar18._11_4_ = uVar96;
            auVar29[9] = 0;
            auVar29._0_9_ = auVar6._0_9_;
            auVar29._10_5_ = auVar18._10_5_;
            auVar31[8] = auVar6[4];
            auVar31._0_8_ = auVar6._0_8_;
            auVar31._9_6_ = auVar29._9_6_;
            auVar70._7_8_ = 0;
            auVar70._0_7_ = auVar31._8_7_;
            Var71 = CONCAT81(SUB158(auVar70 << 0x40, 7), auVar6[3]);
            auVar79._9_6_ = 0;
            auVar79._0_9_ = Var71;
            auVar72._1_10_ = SUB1510(auVar79 << 0x30, 5);
            auVar72[0] = auVar6[2];
            auVar80._11_4_ = 0;
            auVar80._0_11_ = auVar72;
            auVar33[2] = auVar6[1];
            auVar33._0_2_ = auVar6._0_2_;
            auVar33._3_12_ = SUB1512(auVar80 << 0x20, 3);
            auVar34._2_13_ = auVar33._2_13_;
            auVar34._0_2_ = auVar6._0_2_ & 0xff;
            uVar110 = CONCAT13(0, CONCAT12(auVar6[9], (ushort)auVar6[8]));
            auVar11._10_2_ = 0;
            auVar11._0_10_ = auVar35._0_10_;
            auVar11._12_2_ = (short)Var67;
            uVar81 = CONCAT42(auVar11._10_4_, auVar68._0_2_);
            auVar73._6_8_ = 0;
            auVar73._0_6_ = uVar81;
            auVar19._4_2_ = auVar69._0_2_;
            auVar19._0_4_ = auVar35._0_4_;
            auVar19._6_8_ = SUB148(auVar73 << 0x40, 6);
            auVar12._10_2_ = 0;
            auVar12._0_10_ = auVar34._0_10_;
            auVar12._12_2_ = (short)Var71;
            uVar82 = CONCAT42(auVar12._10_4_, auVar72._0_2_);
            auVar74._6_8_ = 0;
            auVar74._0_6_ = uVar82;
            auVar20._4_2_ = auVar33._2_2_;
            auVar20._0_4_ = auVar34._0_4_;
            auVar20._6_8_ = SUB148(auVar74 << 0x40, 6);
            auVar21[0xc] = auVar5[0xb];
            auVar21._0_12_ = ZEXT112(auVar5[0xc]) << 0x40;
            auVar22._10_3_ = auVar21._10_3_;
            auVar22._0_10_ = (unkuint10)auVar5[10] << 0x40;
            auVar75._5_8_ = 0;
            auVar75._0_5_ = auVar22._8_5_;
            auVar23[4] = auVar5[9];
            auVar23._0_4_ = uVar109;
            auVar23[5] = 0;
            auVar23._6_7_ = SUB137(auVar75 << 0x40, 6);
            auVar24[0xc] = auVar6[0xb];
            auVar24._0_12_ = ZEXT112(auVar6[0xc]) << 0x40;
            auVar25._10_3_ = auVar24._10_3_;
            auVar25._0_10_ = (unkuint10)auVar6[10] << 0x40;
            auVar76._5_8_ = 0;
            auVar76._0_5_ = auVar25._8_5_;
            auVar26[4] = auVar6[9];
            auVar26._0_4_ = uVar110;
            auVar26[5] = 0;
            auVar26._6_7_ = SUB137(auVar76 << 0x40, 6);
            pcVar2 = puVar93 + lVar84;
            *pcVar2 =
                *pcVar1 - (char)((int)((auVar34._0_4_ & 0xffff) + (auVar35._0_4_ & 0xffff)) >> 1);
            pcVar2[1] = cVar8 - (char)(auVar20._4_4_ + auVar19._4_4_ >> 1);
            pcVar2[2] = cVar36 - (char)((int)uVar82 + (int)uVar81 >> 1);
            pcVar2[3] =
                cVar37 - (char)((int)((auVar12._10_4_ >> 0x10) + (auVar11._10_4_ >> 0x10)) >> 1);
            pcVar2[4] = cVar38 - (char)((int)((uint)auVar32._8_2_ + (uint)auVar31._8_2_) >> 1);
            pcVar2[5] = cVar39 - (char)((int)((uint)auVar28._10_2_ + (uint)auVar18._10_2_) >> 1);
            pcVar2[6] =
                cVar40 - (char)((int)((uVar27 >> 8 & 0xffff) + (uVar96 >> 8 & 0xffff)) >> 1);
            pcVar2[7] = cVar41 - (char)((int)((uVar27 >> 0x18) + (uVar96 >> 0x18)) >> 1);
            pcVar2[8] = cVar42 - (char)((int)((uVar110 & 0xffff) + (uVar109 & 0xffff)) >> 1);
            pcVar2[9] = cVar43 - (char)(auVar26._4_4_ + auVar23._4_4_ >> 1);
            pcVar2[10] = cVar44 - (char)(auVar25._8_4_ + auVar22._8_4_ >> 1);
            pcVar2[0xb] = cVar45 - (char)((int)((uint)(uint3)(auVar24._10_3_ >> 0x10) +
                                                (uint)(uint3)(auVar21._10_3_ >> 0x10)) >>
                                          1);
            pcVar2[0xc] = cVar46 - (char)((int)((uint)auVar5[0xc] + (uint)auVar6[0xc]) >> 1);
            pcVar2[0xd] = cVar47 - (char)((int)((uint)auVar5[0xd] + (uint)auVar6[0xd]) >> 1);
            pcVar2[0xe] = cVar48 - (char)((int)((uint)auVar5[0xe] + (uint)auVar6[0xe]) >> 1);
            pcVar2[0xf] = cVar49 - (char)((int)((uint)auVar5[0xf] + (uint)auVar6[0xf]) >> 1);
            lVar84 = lVar84 + 0x10;
          } while (uVar102 < uVar85);
          uVar87 = uVar87 + uVar101;
          puVar103 = puVar103 + uVar101;
          puVar93 = puVar93 + uVar101;
          puVar92 = puVar92 + uVar101;
          puVar107 = puVar107 + uVar101;
          if (uVar95 == uVar101)
            goto LAB_0055c3fd;
        }
        lVar84 = 0;
        do {
          puVar93[lVar84] =
              puVar103[lVar84] -
              (char)((int)((uint)(byte)puVar92[lVar84] + (uint)(byte)puVar107[lVar84]) >> 1);
          lVar84 = lVar84 + 1;
        } while (uVar87 + (int)lVar84 < uVar97);
      }
    LAB_0055c3fd:
      puVar107 = *(uint8_t **)(arg1 + 0x1f8);
      goto LAB_0055c089;
    }
  LAB_0055bf61:
    if ((bVar100 & 0x40) != 0) {
      uVar87 = local_5c;
      if (*(char *)(arg1 + 0x388) == '\x02') {
        uVar95 = local_5c & 0xffff;
        uVar101 = local_5c >> 10 & 0x3fffc0;
        if (uVar83 != 0) {
          lVar105 = 0;
          do {
            if (*(char *)(*(long *)(arg1 + 0x390) + lVar105) == '\x03') {
              uVar87 = (uint) * (ushort *)(*(long *)(arg1 + 0x3a0) + lVar105 * 2);
              uVar95 = uVar95 * uVar87 >> 8;
              uVar101 = uVar101 * uVar87 >> 8;
            }
            lVar105 = lVar105 + 1;
          } while ((int)lVar105 < (int)uVar83);
        }
        uVar87 = 0x7fffffff;
        uVar102 = (uint) * (ushort *)(*(long *)(arg1 + 0x3b0) + 6);
        uVar101 = uVar101 * uVar102 >> 3;
        if (uVar101 < 0x3fffc1) {
          uVar87 = (uVar102 * uVar95 >> 3) + uVar101 * 0x400;
        }
      }
      lVar88 = *(long *)(arg1 + 0x1f8);
      uVar98 = 0;
      puVar92 = puVar9 + 1;
      lVar105 = lVar84 + 1;
      lVar89 = lVar88 + 1;
      uVar101 = 0;
      if (uVar85 != 0) {
        lVar90 = 0;
        do {
          bVar99 = puVar9[lVar90 + 1] - (*(byte *)(lVar84 + 1 + lVar90) >> 1);
          *(byte *)(lVar88 + 1 + lVar90) = bVar99;
          uVar101 = (uint)bVar99;
          if (0x7f < bVar99) {
            uVar101 = 0x100 - bVar99;
          }
          lVar90 = lVar90 + 1;
          uVar98 = (ulong)((int)uVar98 + uVar101);
        } while ((uint)lVar90 < uVar85);
        lVar88 = (ulong)(uVar85 - 1) + 1;
        lVar89 = lVar89 + lVar88;
        puVar92 = puVar92 + lVar88;
        lVar105 = lVar105 + lVar88;
        uVar101 = uVar85;
      }
      if (uVar101 < uVar97) {
        lVar88 = 0;
        do {
          bVar99 =
              puVar92[lVar88] -
              (char)((int)((uint) * (byte *)(lVar105 + lVar88) + (uint)(byte)puVar9[lVar88 + 1]) >>
                     1);
          *(byte *)(lVar89 + lVar88) = bVar99;
          uVar95 = (uint)bVar99;
          if (0x7f < bVar99) {
            uVar95 = 0x100 - bVar99;
          }
          uVar95 = (int)uVar98 + uVar95;
          uVar98 = (ulong)uVar95;
        } while ((uVar95 <= uVar87) &&
                 (lVar88 = lVar88 + 1, lVar88 != (ulong)((uVar97 - 1) - uVar101) + 1));
      }
      uVar87 = (uint)uVar98;
      if (*(char *)(arg1 + 0x388) == '\x02') {
        uVar91 = uVar98 & 0xffff;
        iVar86 = (int)uVar91;
        uVar101 = (uint)(uVar98 >> 10) & 0x3fffc0;
        if (uVar83 != 0) {
          lVar105 = 0;
          do {
            if (*(char *)(*(long *)(arg1 + 0x390) + lVar105) == '\0') {
              uVar87 = (uint) * (ushort *)(*(long *)(arg1 + 0x398) + lVar105 * 2);
              uVar91 = (ulong)((int)uVar91 * uVar87 >> 8);
              uVar101 = uVar101 * uVar87 >> 8;
            }
            iVar86 = (int)uVar91;
            lVar105 = lVar105 + 1;
          } while ((int)lVar105 < (int)uVar83);
        }
        uVar87 = 0x7fffffff;
        uVar95 = (uint) * (ushort *)(*(long *)(arg1 + 0x3a8) + 6);
        uVar101 = uVar101 * uVar95 >> 3;
        if (uVar101 < 0x3fffc1) {
          uVar87 = uVar101 * 0x400 + (iVar86 * uVar95 >> 3);
        }
      }
      if (uVar87 < local_5c) {
        puVar107 = *(uint8_t **)(arg1 + 0x1f8);
        local_5c = uVar87;
      }
    }
  } else {
    puVar107 = puVar9;
    if ((bVar100 & 0x10) != 0) {
      uVar87 = local_5c;
      if (*(char *)(arg1 + 0x388) == '\x02') {
        uVar95 = local_5c & 0xffff;
        uVar101 = local_5c >> 10 & 0x3fffc0;
        if (uVar83 != 0) {
          lVar105 = 0;
          do {
            if (*(char *)(*(long *)(arg1 + 0x390) + lVar105) == '\x01') {
              uVar87 = (uint) * (ushort *)(*(long *)(arg1 + 0x3a0) + lVar105 * 2);
              uVar95 = uVar95 * uVar87 >> 8;
              uVar101 = uVar101 * uVar87 >> 8;
            }
            lVar105 = lVar105 + 1;
          } while ((int)lVar105 < (int)uVar83);
        }
        uVar87 = 0x7fffffff;
        uVar102 = (uint) * (ushort *)(*(long *)(arg1 + 0x3b0) + 2);
        uVar101 = uVar101 * uVar102 >> 3;
        if (uVar101 < 0x3fffc1) {
          uVar87 = uVar101 * 0x400 + (uVar102 * uVar95 >> 3);
        }
      }
      lVar89 = *(long *)(arg1 + 0x1e8);
      uVar98 = 0;
      puVar92 = puVar9 + 1;
      lVar105 = lVar89 + 1;
      uVar101 = 0;
      if (uVar85 != 0) {
        lVar88 = 0;
        do {
          bVar99 = puVar9[lVar88 + 1];
          *(byte *)(lVar89 + 1 + lVar88) = bVar99;
          uVar101 = (uint)bVar99;
          if (0x7f < bVar99) {
            uVar101 = 0x100 - bVar99;
          }
          lVar88 = lVar88 + 1;
          uVar98 = (ulong)((int)uVar98 + uVar101);
        } while ((uint)lVar88 < uVar85);
        lVar89 = (ulong)(uVar85 - 1) + 1;
        puVar92 = puVar92 + lVar89;
        lVar105 = lVar105 + lVar89;
        uVar101 = uVar85;
      }
      if (uVar101 < uVar97) {
        lVar89 = 0;
        do {
          bVar99 = puVar92[lVar89] - puVar9[lVar89 + 1];
          *(byte *)(lVar105 + lVar89) = bVar99;
          uVar95 = (uint)bVar99;
          if (0x7f < bVar99) {
            uVar95 = 0x100 - bVar99;
          }
          uVar95 = (int)uVar98 + uVar95;
          uVar98 = (ulong)uVar95;
        } while ((uVar95 <= uVar87) &&
                 (lVar89 = lVar89 + 1, lVar89 != (ulong)((uVar97 - 1) - uVar101) + 1));
      }
      uVar87 = (uint)uVar98;
      if (*(char *)(arg1 + 0x388) == '\x02') {
        uVar91 = uVar98 & 0xffff;
        iVar86 = (int)uVar91;
        uVar101 = (uint)(uVar98 >> 10) & 0x3fffc0;
        if (uVar83 != 0) {
          lVar105 = 0;
          do {
            if (*(char *)(*(long *)(arg1 + 0x390) + lVar105) == '\x01') {
              uVar87 = (uint) * (ushort *)(*(long *)(arg1 + 0x3a0) + lVar105 * 2);
              uVar91 = (ulong)((int)uVar91 * uVar87 >> 8);
              uVar101 = uVar101 * uVar87 >> 8;
            }
            iVar86 = (int)uVar91;
            lVar105 = lVar105 + 1;
          } while ((int)lVar105 < (int)uVar83);
        }
        uVar87 = 0x7fffffff;
        uVar95 = (uint) * (ushort *)(*(long *)(arg1 + 0x3b0) + 2);
        uVar101 = uVar101 * uVar95 >> 3;
        if (uVar101 < 0x3fffc1) {
          uVar87 = uVar101 * 0x400 + (iVar86 * uVar95 >> 3);
        }
      }
      if (uVar87 < local_5c) {
        puVar107 = *(uint8_t **)(arg1 + 0x1e8);
        local_5c = uVar87;
      }
    }
    if (bVar100 != 0x20) {
      if ((bVar100 & 0x20) != 0) {
        cVar8 = *(char *)(arg1 + 0x388);
        uVar87 = local_5c;
        if (cVar8 == '\x02') {
          uVar95 = local_5c & 0xffff;
          uVar101 = local_5c >> 10 & 0x3fffc0;
          if (uVar83 != 0) {
            lVar105 = 0;
            do {
              if (*(char *)(*(long *)(arg1 + 0x390) + lVar105) == '\x02') {
                uVar87 = (uint) * (ushort *)(*(long *)(arg1 + 0x3a0) + lVar105 * 2);
                uVar95 = uVar95 * uVar87 >> 8;
                uVar101 = uVar101 * uVar87 >> 8;
              }
              lVar105 = lVar105 + 1;
            } while ((int)lVar105 < (int)uVar83);
          }
          uVar87 = 0x7fffffff;
          uVar102 = (uint) * (ushort *)(*(long *)(arg1 + 0x3b0) + 4);
          uVar101 = uVar101 * uVar102 >> 3;
          if (uVar101 < 0x3fffc1) {
            uVar87 = uVar101 * 0x400 + (uVar102 * uVar95 >> 3);
          }
        }
        uVar98 = 0;
        lVar105 = *(long *)(arg1 + 0x1f0);
        if (uVar97 != 0) {
          lVar89 = 0;
          do {
            bVar99 = puVar9[lVar89 + 1] - *(char *)(lVar84 + 1 + lVar89);
            *(byte *)(lVar105 + 1 + lVar89) = bVar99;
            uVar101 = (uint)bVar99;
            if (0x7f < bVar99) {
              uVar101 = 0x100 - bVar99;
            }
            uVar101 = (int)uVar98 + uVar101;
            uVar98 = (ulong)uVar101;
          } while ((uVar101 <= uVar87) && (lVar89 = lVar89 + 1, (uint)lVar89 < uVar97));
          cVar8 = *(char *)(arg1 + 0x388);
        }
        uVar87 = (uint)uVar98;
        if (cVar8 == '\x02') {
          uVar91 = uVar98 & 0xffff;
          iVar86 = (int)uVar91;
          uVar101 = (uint)(uVar98 >> 10) & 0x3fffc0;
          if (uVar83 != 0) {
            lVar105 = 0;
            do {
              if (*(char *)(*(long *)(arg1 + 0x390) + lVar105) == '\x02') {
                uVar87 = (uint) * (ushort *)(*(long *)(arg1 + 0x398) + lVar105 * 2);
                uVar91 = (ulong)((int)uVar91 * uVar87 >> 8);
                uVar101 = uVar101 * uVar87 >> 8;
              }
              iVar86 = (int)uVar91;
              lVar105 = lVar105 + 1;
            } while ((int)lVar105 < (int)uVar83);
          }
          uVar87 = 0x7fffffff;
          uVar95 = (uint) * (ushort *)(*(long *)(arg1 + 0x3a8) + 4);
          uVar101 = uVar101 * uVar95 >> 3;
          if (uVar101 < 0x3fffc1) {
            uVar87 = uVar101 * 0x400 + (uVar95 * iVar86 >> 3);
          }
        }
        if (uVar87 < local_5c) {
          puVar107 = *(uint8_t **)(arg1 + 0x1f0);
          local_5c = uVar87;
        }
      }
      goto LAB_0055bf57;
    }
    puVar107 = *(uint8_t **)(arg1 + 0x1f0);
    if (uVar97 == 0)
      goto LAB_0055bf61;
    puVar92 = puVar9 + 1;
    puVar93 = puVar107 + 1;
    uVar101 = uVar97 >> 4;
    puVar103 = (uint8_t *)(lVar84 + 1);
    uVar87 = uVar101 << 4;
    if ((uVar101 == 0) ||
        ((uVar97 < 0x10 || puVar93 <= puVar9 + 0x11 && puVar92 <= puVar107 + 0x11) ||
         puVar93 <= (uint8_t *)(lVar84 + 0x11U) && puVar103 <= puVar107 + 0x11)) {
      uVar87 = 0;
    LAB_0055c4c4:
      lVar105 = 0;
      do {
        puVar93[lVar105] = puVar92[lVar105] - puVar103[lVar105];
        lVar105 = lVar105 + 1;
      } while (uVar87 + (int)lVar105 < uVar97);
    } else {
      lVar105 = 0;
      uVar95 = 0;
      do {
        pcVar1 = puVar9 + lVar105 + 1;
        cVar8 = pcVar1[1];
        cVar36 = pcVar1[2];
        cVar37 = pcVar1[3];
        cVar38 = pcVar1[4];
        cVar39 = pcVar1[5];
        cVar40 = pcVar1[6];
        cVar41 = pcVar1[7];
        cVar42 = pcVar1[8];
        cVar43 = pcVar1[9];
        cVar44 = pcVar1[10];
        cVar45 = pcVar1[0xb];
        cVar46 = pcVar1[0xc];
        cVar47 = pcVar1[0xd];
        cVar48 = pcVar1[0xe];
        cVar49 = pcVar1[0xf];
        uVar95 = uVar95 + 1;
        pcVar2 = (char *)(lVar84 + 1 + lVar105);
        cVar50 = pcVar2[1];
        cVar51 = pcVar2[2];
        cVar52 = pcVar2[3];
        cVar53 = pcVar2[4];
        cVar54 = pcVar2[5];
        cVar55 = pcVar2[6];
        cVar56 = pcVar2[7];
        cVar57 = pcVar2[8];
        cVar58 = pcVar2[9];
        cVar59 = pcVar2[10];
        cVar60 = pcVar2[0xb];
        cVar61 = pcVar2[0xc];
        cVar62 = pcVar2[0xd];
        cVar63 = pcVar2[0xe];
        cVar64 = pcVar2[0xf];
        pcVar3 = puVar107 + lVar105 + 1;
        *pcVar3 = *pcVar1 - *pcVar2;
        pcVar3[1] = cVar8 - cVar50;
        pcVar3[2] = cVar36 - cVar51;
        pcVar3[3] = cVar37 - cVar52;
        pcVar3[4] = cVar38 - cVar53;
        pcVar3[5] = cVar39 - cVar54;
        pcVar3[6] = cVar40 - cVar55;
        pcVar3[7] = cVar41 - cVar56;
        pcVar3[8] = cVar42 - cVar57;
        pcVar3[9] = cVar43 - cVar58;
        pcVar3[10] = cVar44 - cVar59;
        pcVar3[0xb] = cVar45 - cVar60;
        pcVar3[0xc] = cVar46 - cVar61;
        pcVar3[0xd] = cVar47 - cVar62;
        pcVar3[0xe] = cVar48 - cVar63;
        pcVar3[0xf] = cVar49 - cVar64;
        lVar105 = lVar105 + 0x10;
      } while (uVar95 < uVar101);
      puVar92 = puVar92 + uVar87;
      puVar93 = puVar93 + uVar87;
      puVar103 = puVar103 + uVar87;
      if (uVar97 != uVar87)
        goto LAB_0055c4c4;
    }
    puVar107 = *(uint8_t **)(arg1 + 0x1f0);
  }
  if (bVar100 == 0x80) {
    lVar105 = *(long *)(arg1 + 0x200);
    puVar107 = puVar9 + 1;
    puVar92 = (uint8_t *)(lVar84 + 1);
    puVar93 = (uint8_t *)(lVar105 + 1);
    uVar87 = 0;
    if (uVar85 != 0) {
      uVar87 = uVar85 >> 4;
      uVar101 = uVar87 << 4;
      if ((uVar87 == 0) ||
          ((uVar85 < 0x10 ||
            puVar93 <= puVar9 + 0x11 && puVar107 <= (uint8_t *)(lVar105 + 0x11U)) ||
           puVar93 <= (uint8_t *)(lVar84 + 0x11U) && puVar92 <= (uint8_t *)(lVar105 + 0x11U))) {
        uVar101 = 0;
        puVar103 = puVar107;
        puVar106 = puVar93;
        puVar108 = puVar92;
      LAB_0055c5c1:
        lVar105 = 0;
        do {
          puVar106[lVar105] = puVar103[lVar105] - puVar108[lVar105];
          lVar105 = lVar105 + 1;
        } while (uVar101 + (int)lVar105 < uVar85);
      } else {
        lVar89 = 0;
        uVar95 = 0;
        do {
          pcVar1 = puVar9 + lVar89 + 1;
          cVar8 = pcVar1[1];
          cVar36 = pcVar1[2];
          cVar37 = pcVar1[3];
          cVar38 = pcVar1[4];
          cVar39 = pcVar1[5];
          cVar40 = pcVar1[6];
          cVar41 = pcVar1[7];
          cVar42 = pcVar1[8];
          cVar43 = pcVar1[9];
          cVar44 = pcVar1[10];
          cVar45 = pcVar1[0xb];
          cVar46 = pcVar1[0xc];
          cVar47 = pcVar1[0xd];
          cVar48 = pcVar1[0xe];
          cVar49 = pcVar1[0xf];
          uVar95 = uVar95 + 1;
          pcVar2 = (char *)(lVar84 + 1 + lVar89);
          cVar50 = pcVar2[1];
          cVar51 = pcVar2[2];
          cVar52 = pcVar2[3];
          cVar53 = pcVar2[4];
          cVar54 = pcVar2[5];
          cVar55 = pcVar2[6];
          cVar56 = pcVar2[7];
          cVar57 = pcVar2[8];
          cVar58 = pcVar2[9];
          cVar59 = pcVar2[10];
          cVar60 = pcVar2[0xb];
          cVar61 = pcVar2[0xc];
          cVar62 = pcVar2[0xd];
          cVar63 = pcVar2[0xe];
          cVar64 = pcVar2[0xf];
          pcVar3 = (char *)(lVar105 + 1 + lVar89);
          *pcVar3 = *pcVar1 - *pcVar2;
          pcVar3[1] = cVar8 - cVar50;
          pcVar3[2] = cVar36 - cVar51;
          pcVar3[3] = cVar37 - cVar52;
          pcVar3[4] = cVar38 - cVar53;
          pcVar3[5] = cVar39 - cVar54;
          pcVar3[6] = cVar40 - cVar55;
          pcVar3[7] = cVar41 - cVar56;
          pcVar3[8] = cVar42 - cVar57;
          pcVar3[9] = cVar43 - cVar58;
          pcVar3[10] = cVar44 - cVar59;
          pcVar3[0xb] = cVar45 - cVar60;
          pcVar3[0xc] = cVar46 - cVar61;
          pcVar3[0xd] = cVar47 - cVar62;
          pcVar3[0xe] = cVar48 - cVar63;
          pcVar3[0xf] = cVar49 - cVar64;
          lVar89 = lVar89 + 0x10;
        } while (uVar95 < uVar87);
        puVar103 = puVar107 + uVar101;
        puVar106 = puVar93 + uVar101;
        puVar108 = puVar92 + uVar101;
        if (uVar85 != uVar101)
          goto LAB_0055c5c1;
      }
      lVar105 = (ulong)(uVar85 - 1) + 1;
      puVar93 = puVar93 + lVar105;
      puVar107 = puVar107 + lVar105;
      puVar92 = puVar92 + lVar105;
      uVar87 = uVar85;
    }
    if (uVar87 < uVar97) {
      lVar105 = 0;
      do {
        bVar100 = *(byte *)(lVar84 + 1 + lVar105);
        uVar101 = (uint)(byte)puVar92[lVar105] - (uint)bVar100;
        uVar85 = (uint)(byte)puVar9[lVar105 + 1] - (uint)bVar100;
        iVar86 = ((int)uVar101 >> 0x1f ^ uVar101) - ((int)uVar101 >> 0x1f);
        iVar104 = ((int)uVar85 >> 0x1f ^ uVar85) - ((int)uVar85 >> 0x1f);
        uVar95 = (int)(uVar85 + uVar101) >> 0x1f;
        iVar94 = (uVar85 + uVar101 ^ uVar95) - uVar95;
        if (((iVar94 < iVar86) || (bVar99 = puVar9[lVar105 + 1], iVar104 < iVar86)) &&
            (bVar99 = puVar92[lVar105], iVar94 < iVar104)) {
          bVar99 = bVar100;
        }
        puVar93[lVar105] = puVar107[lVar105] - bVar99;
        lVar105 = lVar105 + 1;
      } while (lVar105 != (ulong)((uVar97 - 1) - uVar87) + 1);
    }
  } else {
    if (-1 < (char)bVar100)
      goto LAB_0055c089;
    uVar87 = local_5c;
    if (*(char *)(arg1 + 0x388) == '\x02') {
      uVar95 = local_5c & 0xffff;
      uVar101 = local_5c >> 10 & 0x3fffc0;
      if (uVar83 != 0) {
        lVar105 = 0;
        do {
          if (*(char *)(*(long *)(arg1 + 0x390) + lVar105) == '\x04') {
            uVar87 = (uint) * (ushort *)(*(long *)(arg1 + 0x3a0) + lVar105 * 2);
            uVar95 = uVar95 * uVar87 >> 8;
            uVar101 = uVar101 * uVar87 >> 8;
          }
          lVar105 = lVar105 + 1;
        } while ((int)lVar105 < (int)uVar83);
      }
      uVar87 = 0x7fffffff;
      uVar102 = (uint) * (ushort *)(*(long *)(arg1 + 0x3b0) + 8);
      uVar101 = uVar101 * uVar102 >> 3;
      if (uVar101 < 0x3fffc1) {
        uVar87 = (uVar102 * uVar95 >> 3) + uVar101 * 0x400;
      }
    }
    lVar88 = *(long *)(arg1 + 0x200);
    uVar98 = 0;
    puVar92 = puVar9 + 1;
    lVar105 = lVar84 + 1;
    lVar89 = lVar88 + 1;
    uVar101 = 0;
    if (uVar85 != 0) {
      lVar90 = 0;
      do {
        bVar100 = puVar9[lVar90 + 1] - *(char *)(lVar84 + 1 + lVar90);
        *(byte *)(lVar88 + 1 + lVar90) = bVar100;
        uVar101 = (uint)bVar100;
        if (0x7f < bVar100) {
          uVar101 = 0x100 - bVar100;
        }
        lVar90 = lVar90 + 1;
        uVar98 = (ulong)((int)uVar98 + uVar101);
      } while ((uint)lVar90 < uVar85);
      lVar88 = (ulong)(uVar85 - 1) + 1;
      lVar89 = lVar89 + lVar88;
      puVar92 = puVar92 + lVar88;
      lVar105 = lVar105 + lVar88;
      uVar101 = uVar85;
    }
    if (uVar101 < uVar97) {
      lVar88 = 0;
      do {
        bVar100 = *(byte *)(lVar84 + 1 + lVar88);
        uVar102 = (uint) * (byte *)(lVar105 + lVar88) - (uint)bVar100;
        uVar95 = (uint)(byte)puVar9[lVar88 + 1] - (uint)bVar100;
        iVar86 = ((int)uVar102 >> 0x1f ^ uVar102) - ((int)uVar102 >> 0x1f);
        iVar104 = ((int)uVar95 >> 0x1f ^ uVar95) - ((int)uVar95 >> 0x1f);
        uVar85 = (int)(uVar95 + uVar102) >> 0x1f;
        iVar94 = (uVar95 + uVar102 ^ uVar85) - uVar85;
        if (((iVar94 < iVar86) || (bVar99 = puVar9[lVar88 + 1], iVar104 < iVar86)) &&
            (bVar99 = *(byte *)(lVar105 + lVar88), iVar94 < iVar104)) {
          bVar99 = bVar100;
        }
        bVar99 = puVar92[lVar88] - bVar99;
        *(byte *)(lVar89 + lVar88) = bVar99;
        uVar85 = (uint)bVar99;
        if (0x7f < bVar99) {
          uVar85 = 0x100 - bVar99;
        }
        uVar85 = (int)uVar98 + uVar85;
        uVar98 = (ulong)uVar85;
      } while ((uVar85 <= uVar87) &&
               (lVar88 = lVar88 + 1, lVar88 != (ulong)((uVar97 - 1) - uVar101) + 1));
    }
    uVar97 = (uint)uVar98;
    if (*(char *)(arg1 + 0x388) == '\x02') {
      uVar91 = uVar98 & 0xffff;
      iVar86 = (int)uVar91;
      uVar85 = (uint)(uVar98 >> 10) & 0x3fffc0;
      if (uVar83 != 0) {
        lVar84 = 0;
        do {
          if (*(char *)(*(long *)(arg1 + 0x390) + lVar84) == '\x04') {
            uVar97 = (uint) * (ushort *)(*(long *)(arg1 + 0x398) + lVar84 * 2);
            uVar91 = (ulong)((int)uVar91 * uVar97 >> 8);
            uVar85 = uVar85 * uVar97 >> 8;
          }
          iVar86 = (int)uVar91;
          lVar84 = lVar84 + 1;
        } while ((int)lVar84 < (int)uVar83);
      }
      uVar97 = 0x7fffffff;
      uVar87 = (uint) * (ushort *)(*(long *)(arg1 + 0x3a8) + 8);
      uVar85 = uVar85 * uVar87 >> 3;
      if (uVar85 < 0x3fffc1) {
        uVar97 = uVar85 * 0x400 + (iVar86 * uVar87 >> 3);
      }
    }
    if (local_5c <= uVar97)
      goto LAB_0055c089;
  }
  puVar107 = *(uint8_t **)(arg1 + 0x200);
LAB_0055c089:
  png_write_filtered_row(arg1, puVar107);
  if (*(char *)(arg1 + 0x389) != '\0') {
    lVar84 = 1;
    if (1 < uVar83) {
      lVar84 = 0;
      do {
        lVar105 = lVar84 + 1;
        *(uint8_t *)(*(long *)(arg1 + 0x390) + 1 + lVar84) =
            *(uint8_t *)(*(long *)(arg1 + 0x390) + lVar84);
        lVar84 = lVar105;
      } while (lVar105 != (ulong)(bVar7 - 2) + 1);
      lVar84 = (long)(int)uVar83;
    }
    *(uint8_t *)(*(long *)(arg1 + 0x390) + lVar84) = *puVar107;
  }
  return;
}

/* ======================================================================
 * PngIoRead  (Ghidra `PngIoRead` @ 0055d0a0)
 * Signature: uint8_t __stdcall PngIoRead(png_struct_def * arg1, uchar * arg2, ulong arg3)
 * Calls: `File__Read`, `png_error`, `png_get_io_ptr`
 * Called by: `gfxCreateTexture`
 */
/* PngIoRead(png_struct_def*, unsigned char*, unsigned long) */

void PngIoRead(png_struct_def *arg1, uchar *arg2, ulong arg3)

{
  uint uVar1;
  File *this;

  this = (File *)png_get_io_ptr();
  uVar1 = File__Read(this, arg2, (uint)arg3);
  if (arg3 != uVar1) {
    png_error(arg1, "Read Error");
    return;
  }
  return;
}

/* ======================================================================
 * crc32  (Ghidra `crc32` @ 0055db30)
 * Signature: uint8_t __stdcall crc32(uchar * arg1, uint arg2)
 * Calls: (none)
 * Called by: `CreateOpenGLShader`, `crc32__00562780`, `deflate`, `deflateParams`, `deflateReset`, `fill_window`, `gfxCreatePixelShader`, `gfxCreateVertexShader`, `gz_open`, `gzread_part_1` (+6 more)
 */
/* crc32(unsigned char const*, unsigned int) */

uint crc32(uchar *arg1, uint arg2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;

  uVar1 = 0;
  if (arg2 != 0) {
    lVar4 = 0;
    uVar1 = 0xffffffff;
    do {
      uVar2 = ((arg1[lVar4] ^ uVar1) & 0xff) >> 1;
      uVar3 = uVar2 ^ 0xedb88320;
      if (((arg1[lVar4] ^ uVar1) & 1) == 0) {
        uVar3 = uVar2;
      }
      uVar2 = uVar3 >> 1 ^ 0xedb88320;
      if ((uVar3 & 1) == 0) {
        uVar2 = uVar3 >> 1;
      }
      uVar3 = uVar2 >> 1 ^ 0xedb88320;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar2 >> 1;
      }
      uVar2 = uVar3 >> 1 ^ 0xedb88320;
      if ((uVar3 & 1) == 0) {
        uVar2 = uVar3 >> 1;
      }
      uVar3 = uVar2 >> 1 ^ 0xedb88320;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar2 >> 1;
      }
      uVar2 = uVar3 >> 1 ^ 0xedb88320;
      if ((uVar3 & 1) == 0) {
        uVar2 = uVar3 >> 1;
      }
      uVar3 = uVar2 >> 1 ^ 0xedb88320;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar2 >> 1;
      }
      uVar2 = uVar3 >> 1 ^ 0xedb88320;
      if ((uVar3 & 1) == 0) {
        uVar2 = uVar3 >> 1;
      }
      lVar4 = lVar4 + 1;
      uVar1 = uVar2 ^ uVar1 >> 8;
    } while ((uint)lVar4 < arg2);
    uVar1 = ~uVar1;
  }
  return uVar1;
}

/* ======================================================================
 * glCompressedTexImage2D  (Ghidra `glCompressedTexImage2D` @ 0055df30)
 * Signature: uint8_t glCompressedTexImage2D(void)
 * Calls: (none)
 * Called by: (none)
 */
void glCompressedTexImage2D(void)

{
  /* WARNING: Could not recover jumptable at 0x0055df37. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*pglfn_glCompressedTexImage2D)();
  return;
}

/* ======================================================================
 * adler32  (Ghidra `adler32` @ 00562140)
 * Signature: uint8_t adler32(void)
 * Calls: (none)
 * Called by: `deflate`, `deflateParams`, `deflateReset`, `deflateSetDictionary`, `fill_window`, `inflate`, `inflateSetDictionary`
 */
ulong adler32(ulong arg1, byte *arg2, uint arg3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;

  uVar4 = arg1 & 0xffff;
  uVar22 = (ulong)((uint)(arg1 >> 0x10) & 0xffff);
  if (arg3 == 1) {
    uVar4 = uVar4 + *arg2;
    if (0xfff0 < uVar4) {
      uVar4 = uVar4 - 0xfff1;
    }
    uVar22 = uVar22 + uVar4;
    uVar21 = uVar22 - 0xfff1;
    if (uVar22 < 0xfff1) {
      uVar21 = uVar22;
    }
    return uVar21 << 0x10 | uVar4;
  }
  if (arg2 == (byte *)0x0) {
    return 1;
  }
  if (arg3 < 0x10) {
    if (arg3 != 0) {
      pbVar3 = arg2 + 1;
      pbVar20 = arg2;
      while (true) {
        pbVar2 = pbVar3;
        uVar4 = uVar4 + *pbVar20;
        uVar22 = uVar22 + uVar4;
        if (pbVar2 == arg2 + 1 + (arg3 - 1))
          break;
        pbVar3 = pbVar2 + 1;
        pbVar20 = pbVar2;
      }
    }
    uVar21 = uVar4 - 0xfff1;
    if (uVar4 < 0xfff1) {
      uVar21 = uVar4;
    }
    return uVar21 | (uVar22 % 0xfff1) * 0x10000;
  }
  if (arg3 < 0x15b0) {
  LAB_00562378:
    uVar21 = (ulong)(arg3 - 0x10 >> 4);
    pbVar3 = arg2;
    do {
      lVar5 = uVar4 + *pbVar3;
      lVar6 = (ulong)pbVar3[1] + lVar5;
      lVar7 = lVar6 + (ulong)pbVar3[2];
      lVar8 = lVar7 + (ulong)pbVar3[3];
      lVar9 = lVar8 + (ulong)pbVar3[4];
      lVar10 = lVar9 + (ulong)pbVar3[5];
      lVar11 = lVar10 + (ulong)pbVar3[6];
      lVar12 = lVar11 + (ulong)pbVar3[7];
      lVar13 = lVar12 + (ulong)pbVar3[8];
      lVar14 = lVar13 + (ulong)pbVar3[9];
      lVar15 = lVar14 + (ulong)pbVar3[10];
      lVar16 = lVar15 + (ulong)pbVar3[0xb];
      lVar17 = lVar16 + (ulong)pbVar3[0xc];
      lVar18 = lVar17 + (ulong)pbVar3[0xd];
      lVar19 = lVar18 + (ulong)pbVar3[0xe];
      pbVar20 = pbVar3 + 0xf;
      pbVar3 = pbVar3 + 0x10;
      uVar4 = (ulong)*pbVar20 + lVar19;
      uVar22 = uVar22 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 + lVar11 + lVar12 + lVar13 +
               lVar14 + lVar15 + lVar16 + lVar17 + lVar18 + lVar19 + uVar4;
    } while (pbVar3 != arg2 + uVar21 * 0x10 + 0x10);
    arg2 = arg2 + (uVar21 + 1) * 0x10;
    arg3 = arg3 & 0xf;
    if (arg3 == 0)
      goto LAB_00562467;
  } else {
    do {
      pbVar3 = arg2 + 0x15b0;
      arg3 = arg3 - 0x15b0;
      do {
        lVar5 = uVar4 + *arg2;
        lVar6 = lVar5 + (ulong)arg2[1];
        lVar7 = lVar6 + (ulong)arg2[2];
        lVar8 = lVar7 + (ulong)arg2[3];
        lVar9 = lVar8 + (ulong)arg2[4];
        lVar10 = lVar9 + (ulong)arg2[5];
        lVar11 = lVar10 + (ulong)arg2[6];
        lVar12 = lVar11 + (ulong)arg2[7];
        lVar13 = lVar12 + (ulong)arg2[8];
        lVar14 = lVar13 + (ulong)arg2[9];
        lVar15 = lVar14 + (ulong)arg2[10];
        lVar16 = lVar15 + (ulong)arg2[0xb];
        lVar17 = lVar16 + (ulong)arg2[0xc];
        lVar18 = lVar17 + (ulong)arg2[0xd];
        lVar19 = lVar18 + (ulong)arg2[0xe];
        pbVar20 = arg2 + 0xf;
        arg2 = arg2 + 0x10;
        uVar4 = lVar19 + (ulong)*pbVar20;
        uVar22 = uVar22 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 + lVar11 + lVar12 +
                 lVar13 + lVar14 + lVar15 + lVar16 + lVar17 + lVar18 + lVar19 + uVar4;
      } while (arg2 != pbVar3);
      uVar4 = uVar4 % 0xfff1;
      uVar22 = uVar22 % 0xfff1;
    } while (0x15af < arg3);
    if (arg3 == 0) {
      return uVar22 * 0x10000 | uVar4;
    }
    if (0xf < arg3)
      goto LAB_00562378;
  }
  pbVar3 = arg2 + (ulong)(arg3 - 1) + 1;
  do {
    bVar1 = *arg2;
    arg2 = arg2 + 1;
    uVar4 = uVar4 + bVar1;
    uVar22 = uVar22 + uVar4;
  } while (arg2 != pbVar3);
LAB_00562467:
  return (uVar22 % 0xfff1) * 0x10000 | uVar4 % 0xfff1;
}

/* ======================================================================
 * adler32_combine  (Ghidra `adler32_combine` @ 005624e0)
 * Signature: uint8_t adler32_combine(void)
 * Calls: (none)
 * Called by: (none)
 */
ulong adler32_combine(ulong arg1, ulong arg2, ulong arg3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;

  uVar2 = arg3 / 0xfff1;
  uVar1 = (ulong)(uint)((int)arg3 - ((int)uVar2 + ((int)(uVar2 << 0x10) - (int)(uVar2 << 4))));
  lVar4 = (arg1 & 0xffff) + (arg2 & 0xffff);
  uVar2 = lVar4 + 0xfff0;
  lVar3 =
      (((ulong)((uint)(arg1 >> 0x10) & 0xffff) + (ulong)((uint)(arg2 >> 0x10) & 0xffff)) - uVar1) +
      (uVar1 * (arg1 & 0xffff)) % 0xfff1;
  uVar1 = lVar3 + 0xfff1;
  if ((0xfff1 < uVar2) && (uVar2 = lVar4 - 1, 0xfff1 < uVar2)) {
    uVar2 = lVar4 - 0xfff2;
  }
  if (0x1ffe2 < uVar1) {
    uVar1 = lVar3 - 0xfff1;
  }
  if (0xfff1 < uVar1) {
    uVar1 = uVar1 - 0xfff1;
  }
  return uVar1 << 0x10 | uVar2;
}

/* ======================================================================
 * compress2  (Ghidra `compress2` @ 005625d0)
 * Signature: uint8_t compress2(void)
 * Calls: `deflate`, `deflateEnd`
 * Called by: (none)
 */
int compress2(uint64_t arg1, ulong *arg2, uint64_t arg3, uint32_t arg4, uint32_t arg5)

{
  ulong uVar1;
  int iVar2;
  uint64_t local_88;
  uint32_t local_80;
  uint64_t local_70;
  uint32_t local_68;
  ulong local_60;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;

  iVar2 = -5;
  uVar1 = *arg2;
  local_68 = (uint32_t)uVar1;
  if (uVar1 == (uVar1 & 0xffffffff)) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_88 = arg3;
    local_80 = arg4;
    local_70 = arg1;
    iVar2 = deflateInit_(&local_88, arg5, "1.2.3", 0x70);
    if (iVar2 == 0) {
      iVar2 = deflate(&local_88, 4);
      if (iVar2 != 1) {
        deflateEnd(&local_88);
        if (iVar2 == 0) {
          iVar2 = -5;
        }
        return iVar2;
      }
      *arg2 = local_60;
      iVar2 = deflateEnd(&local_88);
    }
  }
  return iVar2;
}

/* ======================================================================
 * compress  (Ghidra `compress` @ 00562690)
 * Signature: uint8_t compress(void)
 * Calls: `deflate`, `deflateEnd`
 * Called by: (none)
 */
int compress(uint64_t arg1, ulong *arg2, uint64_t arg3, uint32_t arg4)

{
  ulong uVar1;
  int iVar2;
  uint64_t local_88;
  uint32_t local_80;
  uint64_t local_70;
  uint32_t local_68;
  ulong local_60;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;

  iVar2 = -5;
  uVar1 = *arg2;
  local_68 = (uint32_t)uVar1;
  if (uVar1 == (uVar1 & 0xffffffff)) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_88 = arg3;
    local_80 = arg4;
    local_70 = arg1;
    iVar2 = deflateInit_(&local_88, 0xffffffff, "1.2.3", 0x70);
    if (iVar2 == 0) {
      iVar2 = deflate(&local_88, 4);
      if (iVar2 != 1) {
        deflateEnd(&local_88);
        if (iVar2 == 0) {
          iVar2 = -5;
        }
        return iVar2;
      }
      *arg2 = local_60;
      iVar2 = deflateEnd(&local_88);
    }
  }
  return iVar2;
}

/* ======================================================================
 * compressBound  (Ghidra `compressBound` @ 00562750)
 * Signature: uint8_t compressBound(void)
 * Calls: (none)
 * Called by: `deflateBound`
 */
long compressBound(ulong arg1)

{
  return arg1 + 0xb + (arg1 >> 0xc) + (arg1 >> 0xe);
}

/* ======================================================================
 * get_crc_table  (Ghidra `get_crc_table` @ 00562770)
 * Signature: uint8_t get_crc_table(void)
 * Calls: (none)
 * Called by: (none)
 */
uint8_t *get_crc_table(void)

{
  return crc_table;
}

/* ======================================================================
 * crc32__00562780  (Ghidra `crc32` @ 00562780)
 * Signature: uint8_t crc32(void)
 * Calls: `crc32`
 * Called by: (none)
 */
uint crc32(uint arg1, uint *arg2, uint arg3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;

  uVar1 = 0;
  if (arg2 != (uint *)0x0) {
    arg1 = ~arg1;
    if (arg3 != 0) {
    LAB_005627bf:
      if (((ulong)arg2 & 3) != 0)
        goto LAB_005627a0;
      if (0x1f < arg3) {
        uVar5 = (ulong)(arg3 - 0x20 >> 5);
        puVar2 = arg2;
        do {
          arg1 = arg1 ^ *puVar2;
          uVar1 = (uint) * (uint64_t *)(crc_table + (ulong)(arg1 >> 0x18) * 8) ^
                  *(uint *)(crc_table + (ulong)(arg1 & 0xff) * 8 + 0x1800) ^ puVar2[1] ^
                  *(uint *)(crc_table + (ulong)(arg1 >> 8 & 0xff) * 8 + 0x1000) ^
                  *(uint *)(crc_table + (ulong)(arg1 >> 0x10 & 0xff) * 8 + 0x800);
          uVar1 = (uint) * (uint64_t *)(crc_table + (ulong)(uVar1 >> 0x18) * 8) ^
                  *(uint *)(crc_table + (ulong)(uVar1 & 0xff) * 8 + 0x1800) ^ puVar2[2] ^
                  *(uint *)(crc_table + (ulong)(uVar1 >> 8 & 0xff) * 8 + 0x1000) ^
                  *(uint *)(crc_table + (ulong)(uVar1 >> 0x10 & 0xff) * 8 + 0x800);
          uVar1 = (uint) * (uint64_t *)(crc_table + (ulong)(uVar1 >> 0x18) * 8) ^
                  *(uint *)(crc_table + (ulong)(uVar1 & 0xff) * 8 + 0x1800) ^ puVar2[3] ^
                  *(uint *)(crc_table + (ulong)(uVar1 >> 8 & 0xff) * 8 + 0x1000) ^
                  *(uint *)(crc_table + (ulong)(uVar1 >> 0x10 & 0xff) * 8 + 0x800);
          uVar1 = (uint) * (uint64_t *)(crc_table + (ulong)(uVar1 >> 0x18) * 8) ^
                  *(uint *)(crc_table + (ulong)(uVar1 & 0xff) * 8 + 0x1800) ^ puVar2[4] ^
                  *(uint *)(crc_table + (ulong)(uVar1 >> 8 & 0xff) * 8 + 0x1000) ^
                  *(uint *)(crc_table + (ulong)(uVar1 >> 0x10 & 0xff) * 8 + 0x800);
          uVar1 = (uint) * (uint64_t *)(crc_table + (ulong)(uVar1 >> 0x18) * 8) ^
                  *(uint *)(crc_table + (ulong)(uVar1 & 0xff) * 8 + 0x1800) ^ puVar2[5] ^
                  *(uint *)(crc_table + (ulong)(uVar1 >> 8 & 0xff) * 8 + 0x1000) ^
                  *(uint *)(crc_table + (ulong)(uVar1 >> 0x10 & 0xff) * 8 + 0x800);
          uVar1 = (uint) * (uint64_t *)(crc_table + (ulong)(uVar1 >> 0x18) * 8) ^
                  *(uint *)(crc_table + (ulong)(uVar1 & 0xff) * 8 + 0x1800) ^ puVar2[6] ^
                  *(uint *)(crc_table + (ulong)(uVar1 >> 8 & 0xff) * 8 + 0x1000) ^
                  *(uint *)(crc_table + (ulong)(uVar1 >> 0x10 & 0xff) * 8 + 0x800);
          puVar4 = puVar2 + 7;
          puVar2 = puVar2 + 8;
          uVar1 = (uint) * (uint64_t *)(crc_table + (ulong)(uVar1 >> 0x18) * 8) ^
                  *(uint *)(crc_table + (ulong)(uVar1 & 0xff) * 8 + 0x1800) ^ *puVar4 ^
                  *(uint *)(crc_table + (ulong)(uVar1 >> 8 & 0xff) * 8 + 0x1000) ^
                  *(uint *)(crc_table + (ulong)(uVar1 >> 0x10 & 0xff) * 8 + 0x800);
          arg1 = (uint) * (uint64_t *)(crc_table + (ulong)(uVar1 & 0xff) * 8 + 0x1800) ^
                 *(uint *)(crc_table + (ulong)(uVar1 >> 0x18) * 8) ^
                 *(uint *)(crc_table + (ulong)(uVar1 >> 8 & 0xff) * 8 + 0x1000) ^
                 *(uint *)(crc_table + (ulong)(uVar1 >> 0x10 & 0xff) * 8 + 0x800);
        } while (arg2 + uVar5 * 8 + 8 != puVar2);
        arg3 = arg3 & 0x1f;
        arg2 = arg2 + (uVar5 + 1) * 8;
      }
      if (3 < arg3) {
        uVar5 = (ulong)(arg3 - 4 >> 2);
        puVar2 = arg2;
        do {
          uVar1 = *puVar2;
          puVar2 = puVar2 + 1;
          uVar1 = uVar1 ^ arg1;
          arg1 = (uint) * (uint64_t *)(crc_table + (ulong)(uVar1 & 0xff) * 8 + 0x1800) ^
                 *(uint *)(crc_table + (ulong)(uVar1 >> 0x18) * 8) ^
                 *(uint *)(crc_table + (ulong)(uVar1 >> 8 & 0xff) * 8 + 0x1000) ^
                 *(uint *)(crc_table + (ulong)(uVar1 >> 0x10 & 0xff) * 8 + 0x800);
        } while (puVar2 != arg2 + uVar5 + 1);
        arg2 = arg2 + uVar5 + 1;
        arg3 = arg3 & 3;
      }
      if (arg3 != 0) {
        puVar2 = (uint *)((long)arg2 + 1);
        puVar4 = arg2;
        while (puVar3 = puVar2,
               arg1 = arg1 >> 8 ^ *(uint *)(crc_table + (ulong)(((byte)*puVar4 ^ arg1) & 0xff) * 8),
               puVar3 != (uint *)((ulong)(arg3 - 1) + (long)arg2 + 1)) {
          puVar4 = puVar3;
          puVar2 = (uint *)((long)puVar3 + 1);
        }
      }
    }
  LAB_00562a46:
    uVar1 = ~arg1;
  }
  return uVar1;
LAB_005627a0:
  uVar1 = *arg2;
  arg2 = (uint *)((long)arg2 + 1);
  arg1 = arg1 >> 8 ^ *(uint *)(crc_table + (ulong)(((byte)uVar1 ^ arg1) & 0xff) * 8);
  arg3 = arg3 - 1;
  if (arg3 == 0)
    goto LAB_00562a46;
  goto LAB_005627bf;
}

/* ======================================================================
 * crc32_combine  (Ghidra `crc32_combine` @ 00562a50)
 * Signature: uint8_t crc32_combine(void)
 * Calls: (none)
 * Called by: (none)
 */
ulong crc32_combine(ulong arg1, ulong arg2, ulong arg3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_208[32];
  ulong local_108[32];
  ulong local_8;

  if (arg3 != 0) {
    uVar2 = 1;
    local_108[0] = 0xedb88320;
    puVar1 = local_108 + 1;
    do {
      *puVar1 = uVar2;
      puVar1 = puVar1 + 1;
      uVar2 = uVar2 * 2;
    } while (puVar1 != &local_8);
    lVar4 = 0;
    do {
      uVar2 = *(ulong *)((long)local_108 + lVar4);
      uVar3 = 0;
      if (uVar2 != 0) {
        puVar1 = local_108;
        do {
          if ((uVar2 & 1) != 0) {
            uVar3 = uVar3 ^ *puVar1;
          }
          puVar1 = puVar1 + 1;
          uVar2 = uVar2 >> 1;
        } while (uVar2 != 0);
      }
      *(ulong *)((long)local_208 + lVar4) = uVar3;
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x100);
    lVar4 = 0;
    do {
      uVar2 = *(ulong *)((long)local_208 + lVar4);
      uVar3 = 0;
      if (uVar2 != 0) {
        puVar1 = local_208;
        do {
          if ((uVar2 & 1) != 0) {
            uVar3 = uVar3 ^ *puVar1;
          }
          puVar1 = puVar1 + 1;
          uVar2 = uVar2 >> 1;
        } while (uVar2 != 0);
      }
      *(ulong *)((long)local_108 + lVar4) = uVar3;
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x100);
    do {
      lVar4 = 0;
      do {
        uVar2 = *(ulong *)((long)local_108 + lVar4);
        uVar3 = 0;
        if (uVar2 != 0) {
          puVar1 = local_108;
          do {
            if ((uVar2 & 1) != 0) {
              uVar3 = uVar3 ^ *puVar1;
            }
            puVar1 = puVar1 + 1;
            uVar2 = uVar2 >> 1;
          } while (uVar2 != 0);
        }
        *(ulong *)((long)local_208 + lVar4) = uVar3;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0x100);
      if (((arg3 & 1) != 0) && (arg1 != 0)) {
        puVar1 = local_208;
        uVar2 = arg1;
        arg1 = 0;
        do {
          if ((uVar2 & 1) != 0) {
            arg1 = arg1 ^ *puVar1;
          }
          puVar1 = puVar1 + 1;
          uVar2 = uVar2 >> 1;
        } while (uVar2 != 0);
      }
      if ((long)arg3 >> 1 == 0)
        break;
      lVar4 = 0;
      do {
        uVar2 = *(ulong *)((long)local_208 + lVar4);
        uVar3 = 0;
        if (uVar2 != 0) {
          puVar1 = local_208;
          do {
            if ((uVar2 & 1) != 0) {
              uVar3 = uVar3 ^ *puVar1;
            }
            puVar1 = puVar1 + 1;
            uVar2 = uVar2 >> 1;
          } while (uVar2 != 0);
        }
        *(ulong *)((long)local_108 + lVar4) = uVar3;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0x100);
      if ((((long)arg3 >> 1 & 1U) != 0) && (arg1 != 0)) {
        puVar1 = local_108;
        uVar2 = arg1;
        arg1 = 0;
        do {
          if ((uVar2 & 1) != 0) {
            arg1 = arg1 ^ *puVar1;
          }
          puVar1 = puVar1 + 1;
          uVar2 = uVar2 >> 1;
        } while (uVar2 != 0);
      }
      arg3 = (long)arg3 >> 2;
    } while (arg3 != 0);
    arg1 = arg1 ^ arg2;
  }
  return arg1;
}

/* ======================================================================
 * deflate_slow  (Ghidra `deflate_slow` @ 00563260)
 * Signature: uint8_t deflate_slow(void)
 * Calls: `fill_window`, `flush_pending`, `longest_match`, `longest_match_fast`
 * Called by: (none)
 */
char deflate_slow(long *arg1, int arg2)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  int iVar14;

  uVar12 = 0;
  uVar6 = *(uint *)((long)arg1 + 0xa4);
LAB_00563278:
  if (uVar6 < 0x106)
    goto LAB_005634b5;
  do {
    uVar6 = ((uint) * (byte *)(arg1[10] + (ulong)(*(uint *)((long)arg1 + 0x9c) + 2)) ^
             (int)arg1[0xe] << ((byte)(int)arg1[0x10] & 0x1f)) &
            *(uint *)((long)arg1 + 0x7c);
    *(uint *)(arg1 + 0xe) = uVar6;
    uVar9 = *(ushort *)(arg1[0xd] + (ulong)uVar6 * 2);
    uVar12 = (uint)uVar9;
    *(ushort *)(arg1[0xc] +
                (ulong)(*(uint *)((long)arg1 + 0x9c) & *(uint *)((long)arg1 + 0x4c)) * 2) = uVar9;
    *(short *)(arg1[0xd] + (ulong) * (uint *)(arg1 + 0xe) * 2) =
        (short)*(uint32_t *)((long)arg1 + 0x9c);
    do {
      uVar6 = *(uint *)(arg1 + 0x12);
      *(uint32_t *)(arg1 + 0x12) = 2;
      *(uint *)(arg1 + 0x15) = uVar6;
      *(int *)((long)arg1 + 0x94) = (int)arg1[0x14];
      if (((uVar12 != 0) && (uVar6 < *(uint *)(arg1 + 0x16))) &&
          (uVar10 = *(int *)((long)arg1 + 0x9c) - uVar12,
           uVar10 <= *(int *)((long)arg1 + 0x44) - 0x106U)) {
        if ((int)arg1[0x17] - 2U < 2) {
          if (((int)arg1[0x17] == 3) && (uVar10 == 1)) {
            uVar6 = longest_match_fast(arg1, uVar12);
            *(uint *)(arg1 + 0x12) = uVar6;
            goto joined_r0x00563689;
          }
        } else {
          uVar6 = longest_match(arg1, uVar12);
          *(uint *)(arg1 + 0x12) = uVar6;
        joined_r0x00563689:
          if ((uVar6 < 6) && (((int)arg1[0x17] == 1 ||
                               ((uVar6 == 3 && (0x1000 < (uint)(*(int *)((long)arg1 + 0x9c) -
                                                                (int)arg1[0x14]))))))) {
            *(uint32_t *)(arg1 + 0x12) = 2;
          }
        }
        uVar6 = *(uint *)(arg1 + 0x15);
      }
      if ((uVar6 < 3) || (uVar6 < *(uint *)(arg1 + 0x12))) {
        if ((int)arg1[0x13] == 0) {
          *(uint32_t *)(arg1 + 0x13) = 1;
          *(int *)((long)arg1 + 0x9c) = *(int *)((long)arg1 + 0x9c) + 1;
          uVar6 = *(int *)((long)arg1 + 0xa4) - 1;
          *(uint *)((long)arg1 + 0xa4) = uVar6;
        } else {
          bVar2 = *(byte *)(arg1[10] + (ulong)(*(int *)((long)arg1 + 0x9c) - 1));
          *(uint16_t *)(arg1[0x2e0] + (ulong) * (uint *)((long)arg1 + 0x16fc) * 2) = 0;
          iVar7 = *(uint *)((long)arg1 + 0x16fc) + 1;
          *(byte *)(arg1[0x2de] + (ulong) * (uint *)((long)arg1 + 0x16fc)) = bVar2;
          *(int *)((long)arg1 + 0x16fc) = iVar7;
          psVar1 = (short *)((long)arg1 + (ulong)bVar2 * 4 + 0xc4);
          *psVar1 = *psVar1 + 1;
          if (iVar7 == (int)arg1[0x2df] + -1) {
            uVar5 = arg1[0x11];
            lVar13 = 0;
            if (-1 < (long)uVar5) {
              lVar13 = (uVar5 & 0xffffffff) + arg1[10];
            }
            _tr_flush_block(arg1, lVar13, *(uint *)((long)arg1 + 0x9c) - uVar5, 0);
            arg1[0x11] = (ulong) * (uint *)((long)arg1 + 0x9c);
            flush_pending(*arg1);
          }
          *(int *)((long)arg1 + 0x9c) = *(int *)((long)arg1 + 0x9c) + 1;
          uVar6 = *(int *)((long)arg1 + 0xa4) - 1;
          *(uint *)((long)arg1 + 0xa4) = uVar6;
          if (*(int *)(*arg1 + 0x20) == 0) {
            return '\0';
          }
        }
        goto LAB_00563278;
      }
      iVar7 = *(int *)((long)arg1 + 0x9c);
      iVar3 = *(int *)((long)arg1 + 0xa4);
      sVar8 = (short)iVar7 - *(short *)((long)arg1 + 0x94);
      uVar9 = sVar8 - 2;
      *(short *)(arg1[0x2e0] + (ulong) * (uint *)((long)arg1 + 0x16fc) * 2) = sVar8 + -1;
      iVar14 = *(uint *)((long)arg1 + 0x16fc) + 1;
      *(char *)(arg1[0x2de] + (ulong) * (uint *)((long)arg1 + 0x16fc)) = (char)(uVar6 - 3);
      *(int *)((long)arg1 + 0x16fc) = iVar14;
      psVar1 = (short *)((long)arg1 + (ulong)(byte)_length_code[uVar6 - 3 & 0xff] * 4 + 0x4c8);
      *psVar1 = *psVar1 + 1;
      if (uVar9 < 0x100) {
        bVar2 = _dist_code[uVar9];
      } else {
        bVar2 = _dist_code[(uVar9 >> 7) + 0x100];
      }
      psVar1 = (short *)((long)arg1 + (long)(int)(uint)bVar2 * 4 + 0x9b8);
      *psVar1 = *psVar1 + 1;
      lVar13 = arg1[0x2df];
      iVar11 = (int)arg1[0x15] + -2;
      *(int *)((long)arg1 + 0xa4) = (*(int *)((long)arg1 + 0xa4) + 1) - (int)arg1[0x15];
      *(int *)(arg1 + 0x15) = iVar11;
      do {
        iVar4 = *(int *)((long)arg1 + 0x9c);
        uVar6 = iVar4 + 1;
        *(uint *)((long)arg1 + 0x9c) = uVar6;
        if (uVar6 <= (iVar3 + iVar7) - 3U) {
          uVar12 = ((uint) * (byte *)(arg1[10] + (ulong)(iVar4 + 3)) ^
                    (int)arg1[0xe] << ((byte)(int)arg1[0x10] & 0x1f)) &
                   *(uint *)((long)arg1 + 0x7c);
          *(uint *)(arg1 + 0xe) = uVar12;
          uVar9 = *(ushort *)(arg1[0xd] + (ulong)uVar12 * 2);
          uVar12 = (uint)uVar9;
          *(ushort *)(arg1[0xc] + (ulong)(uVar6 & *(uint *)((long)arg1 + 0x4c)) * 2) = uVar9;
          *(short *)(arg1[0xd] + (ulong) * (uint *)(arg1 + 0xe) * 2) =
              (short)*(uint32_t *)((long)arg1 + 0x9c);
          iVar11 = (int)arg1[0x15];
        }
        iVar11 = iVar11 + -1;
        *(int *)(arg1 + 0x15) = iVar11;
      } while (iVar11 != 0);
      *(uint32_t *)(arg1 + 0x13) = 0;
      *(uint32_t *)(arg1 + 0x12) = 2;
      uVar6 = *(int *)((long)arg1 + 0x9c) + 1;
      *(uint *)((long)arg1 + 0x9c) = uVar6;
      if (iVar14 == (int)lVar13 + -1) {
        uVar5 = arg1[0x11];
        lVar13 = 0;
        if (-1 < (long)uVar5) {
          lVar13 = (uVar5 & 0xffffffff) + arg1[10];
        }
        _tr_flush_block(arg1, lVar13, uVar6 - uVar5, 0);
        arg1[0x11] = (ulong) * (uint *)((long)arg1 + 0x9c);
        flush_pending(*arg1);
        if (*(int *)(*arg1 + 0x20) == 0) {
          return '\0';
        }
      }
      if (0x105 < *(uint *)((long)arg1 + 0xa4))
        break;
    LAB_005634b5:
      fill_window(arg1);
      uVar6 = *(uint *)((long)arg1 + 0xa4);
      if ((arg2 == 0) && (uVar6 < 0x106)) {
        return '\0';
      }
      if (uVar6 == 0) {
        if ((int)arg1[0x13] != 0) {
          bVar2 = *(byte *)(arg1[10] + (ulong)(*(int *)((long)arg1 + 0x9c) - 1));
          *(uint16_t *)(arg1[0x2e0] + (ulong) * (uint *)((long)arg1 + 0x16fc) * 2) = 0;
          uVar6 = *(uint *)((long)arg1 + 0x16fc);
          *(byte *)(arg1[0x2de] + (ulong)uVar6) = bVar2;
          *(uint *)((long)arg1 + 0x16fc) = uVar6 + 1;
          psVar1 = (short *)((long)arg1 + (ulong)bVar2 * 4 + 0xc4);
          *psVar1 = *psVar1 + 1;
          *(uint32_t *)(arg1 + 0x13) = 0;
        }
        uVar5 = arg1[0x11];
        lVar13 = 0;
        if (-1 < (long)uVar5) {
          lVar13 = (uVar5 & 0xffffffff) + arg1[10];
        }
        _tr_flush_block(arg1, lVar13, *(uint *)((long)arg1 + 0x9c) - uVar5, arg2 == 4);
        arg1[0x11] = (ulong) * (uint *)((long)arg1 + 0x9c);
        flush_pending(*arg1);
        if (*(int *)(*arg1 + 0x20) != 0) {
          return (arg2 == 4) * '\x02' + '\x01';
        }
        return (arg2 == 4) * '\x02';
      }
    } while (uVar6 < 3);
  } while (true);
}

/* ======================================================================
 * deflate_fast  (Ghidra `deflate_fast` @ 005637c0)
 * Signature: uint8_t deflate_fast(void)
 * Calls: `fill_window`, `flush_pending`, `longest_match`, `longest_match_fast`
 * Called by: (none)
 */
char deflate_fast(long *arg1, int arg2)

{
  short *psVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  bool bVar12;

  uVar4 = 0;
  do {
    if (*(uint *)((long)arg1 + 0xa4) < 0x106) {
      fill_window(arg1);
      uVar9 = *(uint *)((long)arg1 + 0xa4);
      if ((arg2 == 0) && (uVar9 < 0x106)) {
        return '\0';
      }
      if (uVar9 == 0) {
        uVar10 = arg1[0x11];
        lVar11 = 0;
        if (-1 < (long)uVar10) {
          lVar11 = (uVar10 & 0xffffffff) + arg1[10];
        }
        _tr_flush_block(arg1, lVar11, *(uint *)((long)arg1 + 0x9c) - uVar10, arg2 == 4);
        arg1[0x11] = (ulong) * (uint *)((long)arg1 + 0x9c);
        flush_pending(*arg1);
        if (*(int *)(*arg1 + 0x20) != 0) {
          return (arg2 == 4) * '\x02' + '\x01';
        }
        return (arg2 == 4) * '\x02';
      }
      if (2 < uVar9)
        goto LAB_005637e0;
    } else {
    LAB_005637e0:
      uVar4 = ((uint) * (byte *)(arg1[10] + (ulong)(*(uint *)((long)arg1 + 0x9c) + 2)) ^
               (int)arg1[0xe] << ((byte)(int)arg1[0x10] & 0x1f)) &
              *(uint *)((long)arg1 + 0x7c);
      *(uint *)(arg1 + 0xe) = uVar4;
      uVar8 = *(ushort *)(arg1[0xd] + (ulong)uVar4 * 2);
      uVar4 = (uint)uVar8;
      *(ushort *)(arg1[0xc] +
                  (ulong)(*(uint *)((long)arg1 + 0x9c) & *(uint *)((long)arg1 + 0x4c)) * 2) = uVar8;
      *(short *)(arg1[0xd] + (ulong) * (uint *)(arg1 + 0xe) * 2) =
          (short)*(uint32_t *)((long)arg1 + 0x9c);
    }
    if (uVar4 == 0) {
      uVar10 = (ulong) * (uint *)((long)arg1 + 0x9c);
      uVar9 = *(uint *)(arg1 + 0x12);
    } else {
      uVar10 = (ulong) * (uint *)((long)arg1 + 0x9c);
      uVar9 = *(uint *)((long)arg1 + 0x9c) - uVar4;
      if (*(int *)((long)arg1 + 0x44) - 0x106U < uVar9) {
      LAB_00563ab0:
        uVar9 = *(uint *)(arg1 + 0x12);
      } else if ((int)arg1[0x17] - 2U < 2) {
        if (((int)arg1[0x17] != 3) || (uVar9 != 1))
          goto LAB_00563ab0;
        uVar9 = longest_match_fast(arg1, uVar4);
        uVar10 = (ulong) * (uint *)((long)arg1 + 0x9c);
        *(uint *)(arg1 + 0x12) = uVar9;
      } else {
        uVar9 = longest_match(arg1, uVar4);
        uVar10 = (ulong) * (uint *)((long)arg1 + 0x9c);
        *(uint *)(arg1 + 0x12) = uVar9;
      }
    }
    if (uVar9 < 3) {
      bVar2 = *(byte *)(arg1[10] + uVar10);
      *(uint16_t *)(arg1[0x2e0] + (ulong) * (uint *)((long)arg1 + 0x16fc) * 2) = 0;
      iVar6 = *(uint *)((long)arg1 + 0x16fc) + 1;
      *(byte *)(arg1[0x2de] + (ulong) * (uint *)((long)arg1 + 0x16fc)) = bVar2;
      *(int *)((long)arg1 + 0x16fc) = iVar6;
      psVar1 = (short *)((long)arg1 + (ulong)bVar2 * 4 + 0xc4);
      *psVar1 = *psVar1 + 1;
      bVar12 = iVar6 == (int)arg1[0x2df] + -1;
      *(int *)((long)arg1 + 0xa4) = *(int *)((long)arg1 + 0xa4) + -1;
    LAB_0056395c:
      uVar9 = *(int *)((long)arg1 + 0x9c) + 1;
      uVar10 = (ulong)uVar9;
      *(uint *)((long)arg1 + 0x9c) = uVar9;
    } else {
      sVar7 = (short)uVar10 - (short)arg1[0x14];
      *(short *)(arg1[0x2e0] + (ulong) * (uint *)((long)arg1 + 0x16fc) * 2) = sVar7;
      uVar8 = sVar7 - 1;
      iVar6 = *(uint *)((long)arg1 + 0x16fc) + 1;
      *(char *)(arg1[0x2de] + (ulong) * (uint *)((long)arg1 + 0x16fc)) = (char)(uVar9 - 3);
      *(int *)((long)arg1 + 0x16fc) = iVar6;
      psVar1 = (short *)((long)arg1 + (ulong)(byte)_length_code[uVar9 - 3 & 0xff] * 4 + 0x4c8);
      *psVar1 = *psVar1 + 1;
      if (uVar8 < 0x100) {
        bVar2 = _dist_code[uVar8];
      } else {
        bVar2 = _dist_code[(uVar8 >> 7) + 0x100];
      }
      psVar1 = (short *)((long)arg1 + (long)(int)(uint)bVar2 * 4 + 0x9b8);
      *psVar1 = *psVar1 + 1;
      uVar9 = *(uint *)(arg1 + 0x12);
      bVar12 = iVar6 == (int)arg1[0x2df] + -1;
      uVar5 = *(int *)((long)arg1 + 0xa4) - uVar9;
      *(uint *)((long)arg1 + 0xa4) = uVar5;
      if ((uVar9 <= *(uint *)(arg1 + 0x16)) && (2 < uVar5)) {
        *(uint *)(arg1 + 0x12) = uVar9 - 1;
        do {
          iVar6 = *(int *)((long)arg1 + 0x9c);
          uVar9 = iVar6 + 1;
          *(uint *)((long)arg1 + 0x9c) = uVar9;
          uVar4 = ((uint) * (byte *)(arg1[10] + (ulong)(iVar6 + 3)) ^
                   (int)arg1[0xe] << ((byte)(int)arg1[0x10] & 0x1f)) &
                  *(uint *)((long)arg1 + 0x7c);
          *(uint *)(arg1 + 0xe) = uVar4;
          uVar8 = *(ushort *)(arg1[0xd] + (ulong)uVar4 * 2);
          uVar4 = (uint)uVar8;
          *(ushort *)(arg1[0xc] + (ulong)(uVar9 & *(uint *)((long)arg1 + 0x4c)) * 2) = uVar8;
          *(short *)(arg1[0xd] + (ulong) * (uint *)(arg1 + 0xe) * 2) =
              (short)*(uint32_t *)((long)arg1 + 0x9c);
          iVar6 = (int)arg1[0x12] + -1;
          *(int *)(arg1 + 0x12) = iVar6;
        } while (iVar6 != 0);
        goto LAB_0056395c;
      }
      uVar9 = uVar9 + *(int *)((long)arg1 + 0x9c);
      uVar10 = (ulong)uVar9;
      *(uint32_t *)(arg1 + 0x12) = 0;
      *(uint *)((long)arg1 + 0x9c) = uVar9;
      uVar5 = (uint) * (byte *)(arg1[10] + uVar10);
      *(uint *)(arg1 + 0xe) = uVar5;
      *(uint *)(arg1 + 0xe) = ((uint) * (byte *)(arg1[10] + (ulong)(uVar9 + 1)) ^
                               uVar5 << ((byte)(int)arg1[0x10] & 0x1f)) &
                              *(uint *)((long)arg1 + 0x7c);
    }
    if (bVar12) {
      uVar3 = arg1[0x11];
      lVar11 = 0;
      if (-1 < (long)uVar3) {
        lVar11 = (uVar3 & 0xffffffff) + arg1[10];
      }
      _tr_flush_block(arg1, lVar11, uVar10 - uVar3, 0);
      arg1[0x11] = (ulong) * (uint *)((long)arg1 + 0x9c);
      flush_pending(*arg1);
      if (*(int *)(*arg1 + 0x20) == 0) {
        return '\0';
      }
    }
  } while (true);
}

/* ======================================================================
 * deflate_stored  (Ghidra `deflate_stored` @ 00563ba0)
 * Signature: uint8_t deflate_stored(void)
 * Calls: `fill_window`, `flush_pending`
 * Called by: (none)
 */
char deflate_stored(long *arg1, int arg2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;

  uVar4 = arg1[3] - 5;
  if (0xfffe < uVar4) {
    uVar4 = 0xffff;
  }
  do {
    do {
      uVar3 = *(uint *)((long)arg1 + 0xa4);
      if (uVar3 < 2) {
        fill_window(arg1);
        uVar3 = *(uint *)((long)arg1 + 0xa4);
        if (arg2 == 0) {
          if (uVar3 == 0) {
            return '\0';
          }
        } else if (uVar3 == 0) {
          uVar4 = arg1[0x11];
          lVar5 = 0;
          if (-1 < (long)uVar4) {
            lVar5 = (uVar4 & 0xffffffff) + arg1[10];
          }
          _tr_flush_block(arg1, lVar5, *(uint *)((long)arg1 + 0x9c) - uVar4, arg2 == 4);
          arg1[0x11] = (ulong) * (uint *)((long)arg1 + 0x9c);
          flush_pending(*arg1);
          if (*(int *)(*arg1 + 0x20) != 0) {
            return (arg2 == 4) * '\x02' + '\x01';
          }
          return (arg2 == 4) * '\x02';
        }
      }
      uVar3 = uVar3 + *(int *)((long)arg1 + 0x9c);
      uVar2 = arg1[0x11];
      *(uint32_t *)((long)arg1 + 0xa4) = 0;
      uVar1 = uVar4 + uVar2;
      *(uint *)((long)arg1 + 0x9c) = uVar3;
      if ((uVar3 == 0) || (uVar1 <= uVar3)) {
        lVar5 = 0;
        *(int *)((long)arg1 + 0x9c) = (int)uVar1;
        *(uint *)((long)arg1 + 0xa4) = uVar3 - (int)uVar1;
        if (-1 < (long)uVar2) {
          lVar5 = (uVar2 & 0xffffffff) + arg1[10];
        }
        _tr_flush_block(arg1, lVar5, (uVar1 & 0xffffffff) - uVar2, 0);
        arg1[0x11] = (ulong) * (uint *)((long)arg1 + 0x9c);
        flush_pending(*arg1);
        if (*(int *)(*arg1 + 0x20) == 0) {
          return '\0';
        }
        uVar3 = *(uint *)((long)arg1 + 0x9c);
        uVar2 = arg1[0x11];
      }
    } while (uVar3 - (int)uVar2 < *(int *)((long)arg1 + 0x44) - 0x106U);
    lVar5 = 0;
    if (-1 < (long)uVar2) {
      lVar5 = (uVar2 & 0xffffffff) + arg1[10];
    }
    _tr_flush_block(arg1, lVar5, uVar3 - uVar2, 0);
    arg1[0x11] = (ulong) * (uint *)((long)arg1 + 0x9c);
    flush_pending(*arg1);
  } while (*(int *)(*arg1 + 0x20) != 0);
  return '\0';
}

/* ======================================================================
 * deflateSetDictionary  (Ghidra `deflateSetDictionary` @ 00563d60)
 * Signature: uint8_t deflateSetDictionary(void)
 * Calls: `adler32`, `memcpy`
 * Called by: (none)
 */
uint64_t deflateSetDictionary(long arg1, void *arg2, uint arg3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  uint64_t uVar5;
  uint32_t uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  if ((((arg1 == 0) || (lVar3 = *(long *)(arg1 + 0x38), arg2 == (void *)0x0)) || (lVar3 == 0)) ||
      (iVar2 = *(int *)(lVar3 + 0x2c), iVar2 == 2)) {
    return 0xfffffffe;
  }
  if (iVar2 == 1) {
    if (*(int *)(lVar3 + 8) != 0x2a) {
      return 0xfffffffe;
    }
  } else if (iVar2 == 0)
    goto LAB_00563daf;
  uVar5 = adler32(*(uint64_t *)(arg1 + 0x60), arg2, arg3);
  *(uint64_t *)(arg1 + 0x60) = uVar5;
LAB_00563daf:
  if (2 < arg3) {
    uVar8 = *(int *)(lVar3 + 0x44) - 0x106;
    if (uVar8 < arg3) {
      arg2 = (void *)((long)arg2 + (ulong)(arg3 - uVar8));
      arg3 = uVar8;
    }
    memcpy(*(void **)(lVar3 + 0x50), arg2, (ulong)arg3);
    pbVar4 = *(byte **)(lVar3 + 0x50);
    *(uint *)(lVar3 + 0x9c) = arg3;
    *(ulong *)(lVar3 + 0x88) = (ulong)arg3;
    uVar6 = *(uint32_t *)(lVar3 + 0x80);
    uVar8 = *(uint *)(lVar3 + 0x7c);
    uVar10 = *(uint *)(lVar3 + 0x4c);
    bVar1 = *pbVar4;
    *(uint *)(lVar3 + 0x70) = (uint)bVar1;
    uVar7 = 0;
    uVar9 = ((uint)bVar1 << ((byte)uVar6 & 0x1f) ^ (uint)pbVar4[1]) & uVar8;
    *(uint *)(lVar3 + 0x70) = uVar9;
    while (true) {
      uVar8 = ((uint)pbVar4[uVar7 + 2] ^ uVar9 << ((byte)uVar6 & 0x1f)) & uVar8;
      *(uint *)(lVar3 + 0x70) = uVar8;
      *(uint16_t *)(*(long *)(lVar3 + 0x60) + (ulong)(uVar10 & uVar7) * 2) =
          *(uint16_t *)(*(long *)(lVar3 + 0x68) + (ulong)uVar8 * 2);
      *(short *)(*(long *)(lVar3 + 0x68) + (ulong) * (uint *)(lVar3 + 0x70) * 2) = (short)uVar7;
      uVar7 = uVar7 + 1;
      if (arg3 - 3 < uVar7)
        break;
      uVar9 = *(uint *)(lVar3 + 0x70);
      uVar6 = *(uint32_t *)(lVar3 + 0x80);
      pbVar4 = *(byte **)(lVar3 + 0x50);
      uVar8 = *(uint *)(lVar3 + 0x7c);
      uVar10 = *(uint *)(lVar3 + 0x4c);
    }
  }
  return 0;
}

/* ======================================================================
 * deflateReset  (Ghidra `deflateReset` @ 00563ec0)
 * Signature: uint8_t deflateReset(void)
 * Calls: `adler32`, `crc32`, `memset`
 * Called by: `deflateInit`, `deflateInit2`, `png_write_compressed_data_out_part_1`, `png_write_finish_row`
 */
uint64_t deflateReset(long arg1)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  uint64_t uVar5;
  long lVar6;

  if ((((arg1 == 0) || (lVar3 = *(long *)(arg1 + 0x38), lVar3 == 0)) ||
       (*(long *)(arg1 + 0x40) == 0)) ||
      (*(long *)(arg1 + 0x48) == 0)) {
    return 0xfffffffe;
  }
  *(uint64_t *)(arg1 + 0x28) = 0;
  *(uint64_t *)(arg1 + 0x10) = 0;
  *(uint64_t *)(arg1 + 0x30) = 0;
  *(uint32_t *)(arg1 + 0x58) = 2;
  *(uint32_t *)(lVar3 + 0x28) = 0;
  *(uint64_t *)(lVar3 + 0x20) = *(uint64_t *)(lVar3 + 0x10);
  iVar4 = *(int *)(lVar3 + 0x2c);
  if (iVar4 < 0) {
    iVar4 = -iVar4;
    *(int *)(lVar3 + 0x2c) = iVar4;
  LAB_0056401d:
    *(uint32_t *)(lVar3 + 8) = 0x2a;
    if (iVar4 == 2) {
      uVar5 = crc32(0, 0, 0);
      goto LAB_00563f47;
    }
  } else {
    if (iVar4 != 0)
      goto LAB_0056401d;
    *(uint32_t *)(lVar3 + 8) = 0x71;
  }
  uVar5 = adler32(0, 0, 0);
LAB_00563f47:
  *(uint64_t *)(arg1 + 0x60) = uVar5;
  *(uint32_t *)(lVar3 + 0x40) = 0;
  _tr_init(lVar3);
  *(ulong *)(lVar3 + 0x58) = (ulong) * (uint *)(lVar3 + 0x44) * 2;
  *(uint16_t *)(*(long *)(lVar3 + 0x68) + (ulong)(*(int *)(lVar3 + 0x74) - 1) * 2) = 0;
  memset(*(void **)(lVar3 + 0x68), 0, (ulong)(*(int *)(lVar3 + 0x74) - 1) * 2);
  *(uint32_t *)(lVar3 + 0x9c) = 0;
  *(uint64_t *)(lVar3 + 0x88) = 0;
  *(uint32_t *)(lVar3 + 0xa4) = 0;
  *(uint32_t *)(lVar3 + 0xa8) = 2;
  *(uint32_t *)(lVar3 + 0x90) = 2;
  *(uint32_t *)(lVar3 + 0x98) = 0;
  *(uint32_t *)(lVar3 + 0x70) = 0;
  lVar6 = (long)*(int *)(lVar3 + 0xb4) * 0x10;
  uVar1 = *(ushort *)(configuration_table + lVar6 + 2);
  *(uint *)(lVar3 + 0xbc) = (uint) * (ushort *)(configuration_table + lVar6);
  uVar2 = *(ushort *)(configuration_table + lVar6 + 4);
  *(uint *)(lVar3 + 0xb0) = (uint)uVar1;
  *(uint *)(lVar3 + 0xc0) = (uint)uVar2;
  *(uint *)(lVar3 + 0xac) = (uint) * (ushort *)(configuration_table + lVar6 + 6);
  return 0;
}

/* ======================================================================
 * deflateSetHeader  (Ghidra `deflateSetHeader` @ 00564050)
 * Signature: uint8_t deflateSetHeader(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t deflateSetHeader(long arg1, uint64_t arg2)

{
  long lVar1;

  if (arg1 == 0) {
    return 0xfffffffe;
  }
  lVar1 = *(long *)(arg1 + 0x38);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x2c) == 2)) {
    *(uint64_t *)(lVar1 + 0x30) = arg2;
    return 0;
  }
  return 0xfffffffe;
}

/* ======================================================================
 * deflatePrime  (Ghidra `deflatePrime` @ 00564080)
 * Signature: uint8_t deflatePrime(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t deflatePrime(long arg1, uint32_t arg2, ushort arg3)

{
  if (arg1 == 0) {
    return 0xfffffffe;
  }
  if (*(long *)(arg1 + 0x38) != 0) {
    *(uint32_t *)(*(long *)(arg1 + 0x38) + 0x1724) = arg2;
    *(ushort *)(*(long *)(arg1 + 0x38) + 0x1720) = (short)(1 << ((byte)arg2 & 0x1f)) - 1U & arg3;
    return 0;
  }
  return 0xfffffffe;
}

/* ======================================================================
 * deflateParams  (Ghidra `deflateParams` @ 005640c0)
 * Signature: uint8_t deflateParams(void)
 * Calls: `adler32`, `crc32`, `flush_pending`
 * Called by: `gzsetparams`
 */
uint32_t deflateParams(long *arg1, uint arg2, int arg3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint64_t *puVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  uint32_t uVar8;
  uint uVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;

  if ((arg1 == (long *)0x0) || (puVar4 = (uint64_t *)arg1[7], puVar4 == (uint64_t *)0x0)) {
    return 0xfffffffe;
  }
  if (arg2 == 0xffffffff) {
    arg2 = 6;
  } else if (9 < arg2) {
    return 0xfffffffe;
  }
  if (arg3 < 0) {
    return 0xfffffffe;
  }
  if (4 < arg3) {
    return 0xfffffffe;
  }
  uVar9 = *(uint *)((long)puVar4 + 0xb4);
  uVar8 = 0;
  if ((*(long *)(configuration_table + (long)(int)arg2 * 0x10 + 8) ==
       *(long *)(configuration_table + (long)(int)uVar9 * 0x10 + 8)) ||
      (arg1[2] == 0))
    goto LAB_00564164;
  if ((arg1[3] == 0) ||
      (((*arg1 == 0 && ((int)arg1[1] != 0)) || (iVar7 = *(int *)(puVar4 + 1), iVar7 == 0x29a)))) {
    arg1[6] = z_errmsg._32_8_;
    uVar8 = 0xfffffffe;
  } else if ((int)arg1[4] == 0) {
  LAB_0056426e:
    arg1[6] = z_errmsg._56_8_;
    uVar8 = 0xfffffffb;
  } else {
    iVar3 = *(int *)(puVar4 + 8);
    *puVar4 = arg1;
    *(uint32_t *)(puVar4 + 8) = 1;
    if (iVar7 == 0x2a) {
      if (*(int *)((long)puVar4 + 0x2c) != 2) {
        uVar13 = 0;
        if (((*(int *)(puVar4 + 0x17) < 2) && (1 < (int)uVar9)) &&
            ((uVar13 = 0x40, 5 < (int)uVar9 && (uVar13 = 0xc0, uVar9 == 6)))) {
          uVar13 = 0x80;
        }
        uVar13 = *(int *)(puVar4 + 9) * 0x1000 - 0x7800U | uVar13;
        *(uint32_t *)(puVar4 + 1) = 0x71;
        if (*(int *)((long)puVar4 + 0x9c) != 0) {
          uVar13 = uVar13 | 0x20;
        }
        iVar7 = (uVar13 / 0x1f) * 0x1f + 0x1f;
        uVar9 = *(uint *)(puVar4 + 5);
        *(char *)(puVar4[2] + (ulong)uVar9) = (char)((uint)iVar7 >> 8);
        *(char *)(puVar4[2] + (ulong)(uVar9 + 1)) = (char)iVar7;
        *(uint *)(puVar4 + 5) = uVar9 + 2;
        if (*(int *)((long)puVar4 + 0x9c) != 0) {
          lVar15 = arg1[0xc];
          *(char *)(puVar4[2] + (ulong)(uVar9 + 2)) = (char)((ulong)lVar15 >> 0x18);
          *(char *)(puVar4[2] + (ulong)(uVar9 + 3)) = (char)((ulong)lVar15 >> 0x10);
          *(uint *)(puVar4 + 5) = uVar9 + 4;
          lVar15 = arg1[0xc];
          *(char *)(puVar4[2] + (ulong)(uVar9 + 4)) = (char)((ushort)(short)lVar15 >> 8);
          *(char *)(puVar4[2] + (ulong)(uVar9 + 5)) = (char)(short)lVar15;
          *(uint *)(puVar4 + 5) = uVar9 + 6;
        }
        lVar15 = adler32(0, 0, 0);
        arg1[0xc] = lVar15;
        iVar7 = *(int *)(puVar4 + 1);
        goto LAB_00564234;
      }
      lVar15 = crc32(0, 0, 0);
      arg1[0xc] = lVar15;
      uVar13 = *(uint *)(puVar4 + 5);
      uVar9 = uVar13 + 3;
      *(uint8_t *)(puVar4[2] + (ulong)uVar13) = 0x1f;
      *(uint8_t *)(puVar4[2] + (ulong)(uVar13 + 1)) = 0x8b;
      *(uint8_t *)(puVar4[2] + (ulong)(uVar13 + 2)) = 8;
      piVar5 = (int *)puVar4[6];
      *(uint *)(puVar4 + 5) = uVar9;
      if (piVar5 != (int *)0x0) {
        *(byte *)((ulong)uVar9 + puVar4[2]) =
            (~-(*(long *)(piVar5 + 0xe) == 0) & 0x10U) + (~-(*(long *)(piVar5 + 10) == 0) & 8U) +
            (*piVar5 != 0) + (~-(piVar5[0x11] == 0) & 2U) + (~-(*(long *)(piVar5 + 6) == 0) & 4U);
        *(uint *)(puVar4 + 5) = uVar13 + 4;
        *(char *)(puVar4[2] + (ulong)(uVar13 + 4)) = (char)*(uint64_t *)(puVar4[6] + 8);
        *(uint *)(puVar4 + 5) = uVar13 + 5;
        *(char *)(puVar4[2] + (ulong)(uVar13 + 5)) =
            (char)((ulong) * (uint64_t *)(puVar4[6] + 8) >> 8);
        *(uint *)(puVar4 + 5) = uVar13 + 6;
        *(char *)(puVar4[2] + (ulong)(uVar13 + 6)) =
            (char)((ulong) * (uint64_t *)(puVar4[6] + 8) >> 0x10);
        *(uint *)(puVar4 + 5) = uVar13 + 7;
        *(char *)(puVar4[2] + (ulong)(uVar13 + 7)) =
            (char)((ulong) * (uint64_t *)(puVar4[6] + 8) >> 0x18);
        cVar10 = '\x02';
        *(uint *)(puVar4 + 5) = uVar13 + 8;
        if ((*(int *)((long)puVar4 + 0xb4) != 9) &&
            (cVar10 = '\x04', *(int *)(puVar4 + 0x17) < 2)) {
          cVar10 = (*(int *)((long)puVar4 + 0xb4) < 2) << 2;
        }
        *(char *)((ulong)(uVar13 + 8) + puVar4[2]) = cVar10;
        *(uint *)(puVar4 + 5) = uVar13 + 9;
        *(char *)(puVar4[2] + (ulong)(uVar13 + 9)) = (char)*(uint32_t *)(puVar4[6] + 0x14);
        lVar15 = puVar4[6];
        uVar12 = (ulong)(uVar13 + 10);
        *(uint *)(puVar4 + 5) = uVar13 + 10;
        if (*(long *)(lVar15 + 0x18) != 0) {
          *(char *)(puVar4[2] + uVar12) = (char)*(uint32_t *)(lVar15 + 0x20);
          *(uint *)(puVar4 + 5) = uVar13 + 0xb;
          *(char *)(puVar4[2] + (ulong)(uVar13 + 0xb)) =
              (char)((uint) * (uint32_t *)(puVar4[6] + 0x20) >> 8);
          uVar12 = (ulong)(uVar13 + 0xc);
          lVar15 = puVar4[6];
          *(uint *)(puVar4 + 5) = uVar13 + 0xc;
        }
        if (*(int *)(lVar15 + 0x44) != 0) {
          lVar15 = crc32(arg1[0xc], puVar4[2], uVar12);
          arg1[0xc] = lVar15;
          lVar15 = puVar4[6];
          uVar12 = (ulong) * (uint *)(puVar4 + 5);
        }
        *(uint32_t *)(puVar4 + 7) = 0;
        *(uint32_t *)(puVar4 + 1) = 0x45;
        goto LAB_005645f0;
      }
      *(uint8_t *)(puVar4[2] + (ulong)uVar9) = 0;
      *(uint8_t *)(puVar4[2] + (ulong)(uVar13 + 4)) = 0;
      *(uint8_t *)(puVar4[2] + (ulong)(uVar13 + 5)) = 0;
      *(uint8_t *)(puVar4[2] + (ulong)(uVar13 + 6)) = 0;
      *(uint8_t *)(puVar4[2] + (ulong)(uVar13 + 7)) = 0;
      cVar10 = '\x02';
      *(uint *)(puVar4 + 5) = uVar13 + 8;
      if ((*(int *)((long)puVar4 + 0xb4) != 9) && (cVar10 = '\x04', *(int *)(puVar4 + 0x17) < 2)) {
        cVar10 = (*(int *)((long)puVar4 + 0xb4) < 2) << 2;
      }
      *(char *)((ulong)(uVar13 + 8) + puVar4[2]) = cVar10;
      uVar12 = (ulong)(uVar13 + 10);
      *(uint8_t *)(puVar4[2] + (ulong)(uVar13 + 9)) = 3;
      *(uint *)(puVar4 + 5) = uVar13 + 10;
      *(uint32_t *)(puVar4 + 1) = 0x71;
    } else {
    LAB_00564234:
      if (iVar7 == 0x45) {
        lVar15 = puVar4[6];
        uVar12 = (ulong) * (uint *)(puVar4 + 5);
      LAB_005645f0:
        if (*(long *)(lVar15 + 0x18) == 0) {
          *(uint32_t *)(puVar4 + 1) = 0x49;
        } else {
          uVar9 = *(uint *)(puVar4 + 7);
          uVar11 = uVar12;
          uVar14 = uVar12;
          if (uVar9 < *(ushort *)(lVar15 + 0x20)) {
            do {
              uVar13 = (uint)uVar11;
              if (uVar11 == puVar4[3]) {
                if ((*(int *)(lVar15 + 0x44) != 0) && ((uint)uVar14 < uVar13)) {
                  lVar15 = crc32(arg1[0xc], uVar14 + puVar4[2], uVar13 - (uint)uVar14);
                  arg1[0xc] = lVar15;
                }
                flush_pending(arg1);
                uVar13 = *(uint *)(puVar4 + 5);
                uVar11 = (ulong)uVar13;
                uVar14 = uVar11;
                if (uVar11 == puVar4[3]) {
                  lVar15 = puVar4[6];
                  uVar12 = (ulong)uVar13;
                  break;
                }
                lVar15 = puVar4[6];
                uVar9 = *(uint *)(puVar4 + 7);
              }
              uVar12 = (ulong)(uVar13 + 1);
              *(uint8_t *)(puVar4[2] + uVar11) =
                  *(uint8_t *)(*(long *)(lVar15 + 0x18) + (ulong)uVar9);
              lVar15 = puVar4[6];
              *(uint *)(puVar4 + 5) = uVar13 + 1;
              uVar9 = *(int *)(puVar4 + 7) + 1;
              *(uint *)(puVar4 + 7) = uVar9;
              uVar11 = uVar12;
            } while (uVar9 < *(ushort *)(lVar15 + 0x20));
          }
          if (*(int *)(lVar15 + 0x44) != 0) {
            if ((uint)uVar14 < (uint)uVar12) {
              lVar15 = crc32(arg1[0xc], uVar14 + puVar4[2], (uint)uVar12 - (uint)uVar14);
              arg1[0xc] = lVar15;
              lVar15 = puVar4[6];
            }
          }
          if (*(int *)(puVar4 + 7) != *(int *)(lVar15 + 0x20)) {
            iVar7 = *(int *)(puVar4 + 1);
            uVar9 = *(uint *)(puVar4 + 5);
            goto LAB_00564240;
          }
          *(uint32_t *)(puVar4 + 7) = 0;
          *(uint32_t *)(puVar4 + 1) = 0x49;
          uVar12 = (ulong) * (uint *)(puVar4 + 5);
        }
      LAB_005646fc:
        uVar11 = uVar12;
        if (*(long *)(lVar15 + 0x28) == 0) {
          *(uint32_t *)(puVar4 + 1) = 0x5b;
        } else {
          while (true) {
            if (uVar12 == puVar4[3]) {
              if ((*(int *)(lVar15 + 0x44) != 0) && ((uint)uVar11 < (uint)uVar12)) {
                lVar15 = crc32(arg1[0xc], uVar11 + puVar4[2], (uint)uVar12 - (uint)uVar11);
                arg1[0xc] = lVar15;
              }
              flush_pending(arg1);
              uVar9 = *(uint *)(puVar4 + 5);
              uVar12 = (ulong)uVar9;
              if (uVar12 == puVar4[3]) {
                bVar6 = true;
                goto LAB_0056477a;
              }
              lVar15 = puVar4[6];
              uVar11 = uVar12;
            }
            uVar9 = (int)uVar12 + 1;
            cVar10 = *(char *)(*(long *)(lVar15 + 0x28) + (ulong) * (uint *)(puVar4 + 7));
            *(uint *)(puVar4 + 7) = *(uint *)(puVar4 + 7) + 1;
            *(char *)(puVar4[2] + uVar12) = cVar10;
            *(uint *)(puVar4 + 5) = uVar9;
            if (cVar10 == '\0')
              break;
            lVar15 = puVar4[6];
            uVar12 = (ulong)uVar9;
          }
          bVar6 = false;
          uVar12 = uVar11;
        LAB_0056477a:
          if ((*(int *)(puVar4[6] + 0x44) != 0) && ((uint)uVar12 < uVar9)) {
            lVar15 = crc32(arg1[0xc], uVar12 + puVar4[2], uVar9 - (uint)uVar12);
            arg1[0xc] = lVar15;
          }
          if (bVar6) {
            iVar7 = *(int *)(puVar4 + 1);
            uVar12 = (ulong) * (uint *)(puVar4 + 5);
            goto LAB_00564249;
          }
          *(uint32_t *)(puVar4 + 7) = 0;
          *(uint32_t *)(puVar4 + 1) = 0x5b;
          lVar15 = puVar4[6];
          uVar12 = (ulong) * (uint *)(puVar4 + 5);
        }
      LAB_00564864:
        uVar11 = uVar12;
        if (*(long *)(lVar15 + 0x38) == 0) {
          *(uint32_t *)(puVar4 + 1) = 0x67;
        } else {
          while (true) {
            uVar9 = (uint)uVar12;
            if (uVar12 == puVar4[3]) {
              if ((*(int *)(lVar15 + 0x44) != 0) && ((uint)uVar11 < uVar9)) {
                lVar15 = crc32(arg1[0xc], uVar11 + puVar4[2], uVar9 - (uint)uVar11);
                arg1[0xc] = lVar15;
              }
              flush_pending(arg1);
              uVar9 = *(uint *)(puVar4 + 5);
              uVar12 = (ulong)uVar9;
              if (uVar12 == puVar4[3]) {
                bVar6 = true;
                uVar13 = uVar9;
                goto LAB_005648e2;
              }
              lVar15 = puVar4[6];
              uVar11 = uVar12;
            }
            uVar9 = uVar9 + 1;
            cVar10 = *(char *)(*(long *)(lVar15 + 0x38) + (ulong) * (uint *)(puVar4 + 7));
            *(uint *)(puVar4 + 7) = *(uint *)(puVar4 + 7) + 1;
            *(char *)(puVar4[2] + uVar12) = cVar10;
            *(uint *)(puVar4 + 5) = uVar9;
            if (cVar10 == '\0')
              break;
            lVar15 = puVar4[6];
            uVar12 = (ulong)uVar9;
          }
          bVar6 = false;
          uVar13 = (uint)uVar11;
        LAB_005648e2:
          if ((*(int *)(puVar4[6] + 0x44) != 0) && (uVar13 < uVar9)) {
            lVar15 = crc32(arg1[0xc], (ulong)uVar13 + puVar4[2], uVar9 - uVar13);
            arg1[0xc] = lVar15;
          }
          if (bVar6) {
            iVar7 = *(int *)(puVar4 + 1);
            uVar12 = (ulong) * (uint *)(puVar4 + 5);
            goto LAB_00564252;
          }
          *(uint32_t *)(puVar4 + 1) = 0x67;
          lVar15 = puVar4[6];
          uVar12 = (ulong) * (uint *)(puVar4 + 5);
        }
      } else {
        uVar9 = *(uint *)(puVar4 + 5);
      LAB_00564240:
        uVar12 = (ulong)uVar9;
        if (iVar7 == 0x49) {
          lVar15 = puVar4[6];
          goto LAB_005646fc;
        }
      LAB_00564249:
        if (iVar7 == 0x5b) {
          lVar15 = puVar4[6];
          goto LAB_00564864;
        }
      LAB_00564252:
        if (iVar7 != 0x67)
          goto LAB_0056425b;
        lVar15 = puVar4[6];
      }
      if (*(int *)(lVar15 + 0x44) == 0) {
        *(uint32_t *)(puVar4 + 1) = 0x71;
      } else {
        uVar9 = (int)uVar12 + 2;
        if ((ulong)puVar4[3] < (ulong)uVar9) {
          flush_pending(arg1);
          uVar12 = (ulong) * (uint *)(puVar4 + 5);
          uVar9 = *(uint *)(puVar4 + 5) + 2;
          if ((ulong)puVar4[3] < (ulong)uVar9)
            goto LAB_0056425b;
        }
        uVar13 = (int)uVar12 + 1;
        *(char *)(puVar4[2] + uVar12) = (char)arg1[0xc];
        *(uint *)(puVar4 + 5) = uVar13;
        *(char *)(puVar4[2] + (ulong)uVar13) = (char)((ulong)arg1[0xc] >> 8);
        *(uint *)(puVar4 + 5) = uVar9;
        lVar15 = crc32(0, 0, 0);
        arg1[0xc] = lVar15;
        *(uint32_t *)(puVar4 + 1) = 0x71;
        uVar12 = (ulong) * (uint *)(puVar4 + 5);
      }
    }
  LAB_0056425b:
    if ((int)uVar12 == 0) {
      iVar7 = (int)arg1[1];
      if ((0 < iVar3) && (iVar7 == 0))
        goto LAB_0056426e;
    } else {
      flush_pending(arg1);
      if ((int)arg1[4] == 0) {
        *(uint32_t *)(puVar4 + 8) = 0xffffffff;
        uVar8 = 0;
        goto LAB_0056427e;
      }
      iVar7 = (int)arg1[1];
    }
    if (*(int *)(puVar4 + 1) == 0x29a) {
      if (iVar7 != 0)
        goto LAB_0056426e;
    LAB_005642b9:
      if ((*(int *)((long)puVar4 + 0xa4) == 0) && (uVar8 = 0, *(int *)(puVar4 + 1) == 0x29a))
        goto LAB_0056427e;
    } else if (iVar7 == 0)
      goto LAB_005642b9;
    iVar7 = (**(code **)(configuration_table + (long)*(int *)((long)puVar4 + 0xb4) * 0x10 + 8))(
        puVar4, 1);
    if (iVar7 - 2U < 2) {
      *(uint32_t *)(puVar4 + 1) = 0x29a;
    }
    uVar8 = 0;
    if ((iVar7 == 2) || (iVar7 == 0)) {
      iVar7 = (int)arg1[4];
    } else {
      if (iVar7 != 1)
        goto LAB_0056427e;
      _tr_align(puVar4);
      flush_pending(arg1);
      iVar7 = (int)arg1[4];
    }
    uVar8 = 0;
    if (iVar7 == 0) {
      uVar8 = 0;
      *(uint32_t *)(puVar4 + 8) = 0xffffffff;
    }
  }
LAB_0056427e:
  uVar9 = *(uint *)((long)puVar4 + 0xb4);
LAB_00564164:
  if (arg2 != uVar9) {
    lVar15 = (long)(int)arg2 * 0x10;
    *(uint *)((long)puVar4 + 0xb4) = arg2;
    uVar1 = *(ushort *)(configuration_table + lVar15 + 6);
    *(uint *)(puVar4 + 0x16) = (uint) * (ushort *)(configuration_table + lVar15 + 2);
    uVar2 = *(ushort *)(configuration_table + lVar15);
    *(uint *)((long)puVar4 + 0xac) = (uint)uVar1;
    *(uint *)((long)puVar4 + 0xbc) = (uint)uVar2;
    *(uint *)(puVar4 + 0x18) = (uint) * (ushort *)(configuration_table + lVar15 + 4);
  }
  *(int *)(puVar4 + 0x17) = arg3;
  return uVar8;
}

/* ======================================================================
 * deflateTune  (Ghidra `deflateTune` @ 00564b50)
 * Signature: uint8_t deflateTune(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t deflateTune(long arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5)

{
  long lVar1;

  if (arg1 == 0) {
    return 0xfffffffe;
  }
  lVar1 = *(long *)(arg1 + 0x38);
  if (lVar1 != 0) {
    *(uint32_t *)(lVar1 + 0xbc) = arg2;
    *(uint32_t *)(lVar1 + 0xb0) = arg3;
    *(uint32_t *)(lVar1 + 0xc0) = arg4;
    *(uint32_t *)(lVar1 + 0xac) = arg5;
    return 0;
  }
  return 0xfffffffe;
}

/* ======================================================================
 * deflateBound  (Ghidra `deflateBound` @ 00564b90)
 * Signature: uint8_t deflateBound(void)
 * Calls: `compressBound`
 * Called by: (none)
 */
long deflateBound(long arg1, long arg2)

{
  long lVar1;

  if ((((arg1 != 0) && (lVar1 = *(long *)(arg1 + 0x38), lVar1 != 0)) &&
       (*(int *)(lVar1 + 0x48) == 0xf)) &&
      (*(int *)(lVar1 + 0x78) == 0xf)) {
    lVar1 = compressBound(arg2);
    return lVar1;
  }
  return (arg2 + 0x3fU >> 6) + arg2 + 0xb + (arg2 + 7U >> 3);
}

/* ======================================================================
 * deflate  (Ghidra `deflate` @ 00564bd0)
 * Signature: uint8_t deflate(void)
 * Calls: `adler32`, `crc32`, `flush_pending`, `memset`
 * Called by: `compress`, `compress2`, `do_flush`, `gzwrite`, `png_text_compress`, `png_write_filtered_row`, `png_write_finish_row`, `png_write_flush`
 */
ulong deflate(long *arg1, int arg2)

{
  uint64_t *puVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;

  if ((((arg1 == (long *)0x0) || (puVar1 = (uint64_t *)arg1[7], 4 < arg2)) ||
       (puVar1 == (uint64_t *)0x0)) ||
      (arg2 < 0)) {
    return 0xfffffffe;
  }
  if ((arg1[3] == 0) || ((*arg1 == 0 && ((int)arg1[1] != 0)))) {
  LAB_0056517d:
    arg1[6] = z_errmsg._32_8_;
    return 0xfffffffe;
  }
  bVar13 = arg2 != 4;
  iVar4 = *(int *)(puVar1 + 1);
  if ((bVar13) && (iVar4 == 0x29a))
    goto LAB_0056517d;
  if ((int)arg1[4] == 0)
    goto LAB_00564d0d;
  iVar8 = *(int *)(puVar1 + 8);
  *puVar1 = arg1;
  *(int *)(puVar1 + 8) = arg2;
  if (iVar4 == 0x2a) {
    if (*(int *)((long)puVar1 + 0x2c) != 2) {
      uVar5 = 0;
      if (((*(int *)(puVar1 + 0x17) < 2) && (iVar4 = *(int *)((long)puVar1 + 0xb4), 1 < iVar4)) &&
          ((uVar5 = 0x40, 5 < iVar4 && (uVar5 = 0x80, iVar4 != 6)))) {
        uVar5 = 0xc0;
      }
      uVar5 = *(int *)(puVar1 + 9) * 0x1000 - 0x7800U | uVar5;
      *(uint32_t *)(puVar1 + 1) = 0x71;
      if (*(int *)((long)puVar1 + 0x9c) != 0) {
        uVar5 = uVar5 | 0x20;
      }
      iVar4 = (uVar5 / 0x1f) * 0x1f + 0x1f;
      uVar5 = *(uint *)(puVar1 + 5);
      *(char *)(puVar1[2] + (ulong)uVar5) = (char)((uint)iVar4 >> 8);
      *(char *)(puVar1[2] + (ulong)(uVar5 + 1)) = (char)iVar4;
      *(uint *)(puVar1 + 5) = uVar5 + 2;
      if (*(int *)((long)puVar1 + 0x9c) != 0) {
        lVar6 = arg1[0xc];
        *(char *)(puVar1[2] + (ulong)(uVar5 + 2)) = (char)((ulong)lVar6 >> 0x18);
        *(char *)(puVar1[2] + (ulong)(uVar5 + 3)) = (char)((ulong)lVar6 >> 0x10);
        *(uint *)(puVar1 + 5) = uVar5 + 4;
        lVar6 = arg1[0xc];
        *(char *)(puVar1[2] + (ulong)(uVar5 + 4)) = (char)((ushort)(short)lVar6 >> 8);
        *(char *)(puVar1[2] + (ulong)(uVar5 + 5)) = (char)(short)lVar6;
        *(uint *)(puVar1 + 5) = uVar5 + 6;
      }
      lVar6 = adler32(0, 0, 0);
      arg1[0xc] = lVar6;
      iVar4 = *(int *)(puVar1 + 1);
      goto joined_r0x00564f0d;
    }
    lVar6 = crc32(0, 0, 0);
    arg1[0xc] = lVar6;
    uVar9 = *(uint *)(puVar1 + 5);
    uVar5 = uVar9 + 3;
    *(uint8_t *)(puVar1[2] + (ulong)uVar9) = 0x1f;
    *(uint8_t *)(puVar1[2] + (ulong)(uVar9 + 1)) = 0x8b;
    *(uint8_t *)(puVar1[2] + (ulong)(uVar9 + 2)) = 8;
    piVar2 = (int *)puVar1[6];
    *(uint *)(puVar1 + 5) = uVar5;
    if (piVar2 != (int *)0x0) {
      *(byte *)((ulong)uVar5 + puVar1[2]) =
          (~-(*(long *)(piVar2 + 0xe) == 0) & 0x10U) + (~-(*(long *)(piVar2 + 10) == 0) & 8U) +
          (*piVar2 != 0) + (~-(piVar2[0x11] == 0) & 2U) + (~-(*(long *)(piVar2 + 6) == 0) & 4U);
      *(uint *)(puVar1 + 5) = uVar9 + 4;
      *(char *)(puVar1[2] + (ulong)(uVar9 + 4)) = (char)*(uint64_t *)(puVar1[6] + 8);
      *(uint *)(puVar1 + 5) = uVar9 + 5;
      *(char *)(puVar1[2] + (ulong)(uVar9 + 5)) =
          (char)((ulong) * (uint64_t *)(puVar1[6] + 8) >> 8);
      *(uint *)(puVar1 + 5) = uVar9 + 6;
      *(char *)(puVar1[2] + (ulong)(uVar9 + 6)) =
          (char)((ulong) * (uint64_t *)(puVar1[6] + 8) >> 0x10);
      *(uint *)(puVar1 + 5) = uVar9 + 7;
      *(char *)(puVar1[2] + (ulong)(uVar9 + 7)) =
          (char)((ulong) * (uint64_t *)(puVar1[6] + 8) >> 0x18);
      cVar7 = '\x02';
      *(uint *)(puVar1 + 5) = uVar9 + 8;
      if ((*(int *)((long)puVar1 + 0xb4) != 9) && (cVar7 = '\x04', *(int *)(puVar1 + 0x17) < 2)) {
        cVar7 = (*(int *)((long)puVar1 + 0xb4) < 2) << 2;
      }
      *(char *)((ulong)(uVar9 + 8) + puVar1[2]) = cVar7;
      *(uint *)(puVar1 + 5) = uVar9 + 9;
      *(char *)(puVar1[2] + (ulong)(uVar9 + 9)) = (char)*(uint32_t *)(puVar1[6] + 0x14);
      lVar6 = puVar1[6];
      uVar10 = (ulong)(uVar9 + 10);
      *(uint *)(puVar1 + 5) = uVar9 + 10;
      if (*(long *)(lVar6 + 0x18) != 0) {
        *(char *)(puVar1[2] + uVar10) = (char)*(uint32_t *)(lVar6 + 0x20);
        *(uint *)(puVar1 + 5) = uVar9 + 0xb;
        *(char *)(puVar1[2] + (ulong)(uVar9 + 0xb)) =
            (char)((uint) * (uint32_t *)(puVar1[6] + 0x20) >> 8);
        uVar10 = (ulong)(uVar9 + 0xc);
        lVar6 = puVar1[6];
        *(uint *)(puVar1 + 5) = uVar9 + 0xc;
      }
      if (*(int *)(lVar6 + 0x44) != 0) {
        lVar6 = crc32(arg1[0xc], puVar1[2]);
        arg1[0xc] = lVar6;
        lVar6 = puVar1[6];
        uVar10 = (ulong) * (uint *)(puVar1 + 5);
      }
      *(uint32_t *)(puVar1 + 7) = 0;
      *(uint32_t *)(puVar1 + 1) = 0x45;
      goto LAB_00564f1a;
    }
    *(uint8_t *)(puVar1[2] + (ulong)uVar5) = 0;
    *(uint8_t *)(puVar1[2] + (ulong)(uVar9 + 4)) = 0;
    *(uint8_t *)(puVar1[2] + (ulong)(uVar9 + 5)) = 0;
    *(uint8_t *)(puVar1[2] + (ulong)(uVar9 + 6)) = 0;
    *(uint8_t *)(puVar1[2] + (ulong)(uVar9 + 7)) = 0;
    cVar7 = '\x02';
    *(uint *)(puVar1 + 5) = uVar9 + 8;
    if ((*(int *)((long)puVar1 + 0xb4) != 9) && (cVar7 = '\x04', *(int *)(puVar1 + 0x17) < 2)) {
      cVar7 = (*(int *)((long)puVar1 + 0xb4) < 2) << 2;
    }
    *(char *)((ulong)(uVar9 + 8) + puVar1[2]) = cVar7;
    *(uint8_t *)(puVar1[2] + (ulong)(uVar9 + 9)) = 3;
    uVar10 = (ulong)(uVar9 + 10);
    *(uint32_t *)(puVar1 + 1) = 0x71;
    *(uint *)(puVar1 + 5) = uVar9 + 10;
  } else {
  joined_r0x00564f0d:
    if (iVar4 == 0x45) {
      lVar6 = puVar1[6];
      uVar10 = (ulong) * (uint *)(puVar1 + 5);
    LAB_00564f1a:
      if (*(long *)(lVar6 + 0x18) == 0) {
        *(uint32_t *)(puVar1 + 1) = 0x49;
      } else {
        uVar5 = *(uint *)(puVar1 + 7);
        uVar11 = uVar10;
        if (uVar5 < *(ushort *)(lVar6 + 0x20)) {
          do {
            uVar12 = uVar10;
            if (uVar10 == puVar1[3]) {
              if ((*(int *)(lVar6 + 0x44) != 0) && ((uint)uVar11 < (uint)uVar10)) {
                lVar6 = crc32(arg1[0xc], uVar11 + puVar1[2], (uint)uVar10 - (uint)uVar11);
                arg1[0xc] = lVar6;
              }
              flush_pending(arg1);
              uVar5 = *(uint *)(puVar1 + 5);
              uVar11 = (ulong)uVar5;
              uVar12 = (ulong)uVar5;
              if (uVar12 == puVar1[3]) {
                lVar6 = puVar1[6];
                uVar10 = (ulong)uVar5;
                break;
              }
              uVar5 = *(uint *)(puVar1 + 7);
              lVar6 = puVar1[6];
            }
            uVar9 = (int)uVar12 + 1;
            uVar10 = (ulong)uVar9;
            *(uint8_t *)(puVar1[2] + uVar12) = *(uint8_t *)(*(long *)(lVar6 + 0x18) + (ulong)uVar5);
            lVar6 = puVar1[6];
            *(uint *)(puVar1 + 5) = uVar9;
            uVar5 = *(int *)(puVar1 + 7) + 1;
            *(uint *)(puVar1 + 7) = uVar5;
          } while (uVar5 < *(ushort *)(lVar6 + 0x20));
        }
        if (*(int *)(lVar6 + 0x44) != 0) {
          if ((uint)uVar11 < (uint)uVar10) {
            lVar6 = crc32(arg1[0xc], uVar11 + puVar1[2], (uint)uVar10 - (uint)uVar11);
            arg1[0xc] = lVar6;
            lVar6 = puVar1[6];
          }
        }
        if (*(int *)(puVar1 + 7) != *(int *)(lVar6 + 0x20)) {
          iVar4 = *(int *)(puVar1 + 1);
          uVar5 = *(uint *)(puVar1 + 5);
          goto joined_r0x00564f64;
        }
        uVar10 = (ulong) * (uint *)(puVar1 + 5);
        *(uint32_t *)(puVar1 + 7) = 0;
        *(uint32_t *)(puVar1 + 1) = 0x49;
      }
    LAB_00565089:
      uVar11 = uVar10;
      if (*(long *)(lVar6 + 0x28) == 0) {
        *(uint32_t *)(puVar1 + 1) = 0x5b;
      } else {
        while (true) {
          if (uVar10 == puVar1[3]) {
            if ((*(int *)(lVar6 + 0x44) != 0) && ((uint)uVar11 < (uint)uVar10)) {
              lVar6 = crc32(arg1[0xc], uVar11 + puVar1[2], (uint)uVar10 - (uint)uVar11);
              arg1[0xc] = lVar6;
            }
            flush_pending(arg1);
            uVar5 = *(uint *)(puVar1 + 5);
            uVar10 = (ulong)uVar5;
            if (uVar10 == puVar1[3]) {
              bVar3 = true;
              goto LAB_00565133;
            }
            lVar6 = puVar1[6];
            uVar11 = uVar10;
          }
          uVar5 = (int)uVar10 + 1;
          cVar7 = *(char *)(*(long *)(lVar6 + 0x28) + (ulong) * (uint *)(puVar1 + 7));
          *(uint *)(puVar1 + 7) = *(uint *)(puVar1 + 7) + 1;
          *(char *)(puVar1[2] + uVar10) = cVar7;
          *(uint *)(puVar1 + 5) = uVar5;
          if (cVar7 == '\0')
            break;
          lVar6 = puVar1[6];
          uVar10 = (ulong)uVar5;
        }
        bVar3 = false;
        uVar10 = uVar11;
      LAB_00565133:
        if ((*(int *)(puVar1[6] + 0x44) != 0) && ((uint)uVar10 < uVar5)) {
          lVar6 = crc32(arg1[0xc], uVar10 + puVar1[2], uVar5 - (uint)uVar10);
          arg1[0xc] = lVar6;
        }
        if (bVar3) {
          iVar4 = *(int *)(puVar1 + 1);
          uVar10 = (ulong) * (uint *)(puVar1 + 5);
          goto joined_r0x00565154;
        }
        lVar6 = puVar1[6];
        uVar10 = (ulong) * (uint *)(puVar1 + 5);
        *(uint32_t *)(puVar1 + 7) = 0;
        *(uint32_t *)(puVar1 + 1) = 0x5b;
      }
    LAB_005651c5:
      uVar11 = uVar10;
      if (*(long *)(lVar6 + 0x38) == 0) {
        *(uint32_t *)(puVar1 + 1) = 0x67;
      } else {
        while (true) {
          if (uVar10 == puVar1[3]) {
            if ((*(int *)(lVar6 + 0x44) != 0) && ((uint)uVar11 < (uint)uVar10)) {
              lVar6 = crc32(arg1[0xc], uVar11 + puVar1[2], (uint)uVar10 - (uint)uVar11);
              arg1[0xc] = lVar6;
            }
            flush_pending(arg1);
            uVar5 = *(uint *)(puVar1 + 5);
            uVar10 = (ulong)uVar5;
            if (uVar10 == puVar1[3]) {
              bVar3 = true;
              goto LAB_00565243;
            }
            lVar6 = puVar1[6];
            uVar11 = uVar10;
          }
          uVar5 = (int)uVar10 + 1;
          cVar7 = *(char *)(*(long *)(lVar6 + 0x38) + (ulong) * (uint *)(puVar1 + 7));
          *(uint *)(puVar1 + 7) = *(uint *)(puVar1 + 7) + 1;
          *(char *)(puVar1[2] + uVar10) = cVar7;
          *(uint *)(puVar1 + 5) = uVar5;
          if (cVar7 == '\0')
            break;
          lVar6 = puVar1[6];
          uVar10 = (ulong)uVar5;
        }
        bVar3 = false;
        uVar10 = uVar11;
      LAB_00565243:
        if ((*(int *)(puVar1[6] + 0x44) != 0) && ((uint)uVar10 < uVar5)) {
          lVar6 = crc32(arg1[0xc], uVar10 + puVar1[2], uVar5 - (uint)uVar10);
          arg1[0xc] = lVar6;
        }
        if (bVar3) {
          iVar4 = *(int *)(puVar1 + 1);
          uVar10 = (ulong) * (uint *)(puVar1 + 5);
          goto joined_r0x00565268;
        }
        *(uint32_t *)(puVar1 + 1) = 0x67;
        lVar6 = puVar1[6];
        uVar10 = (ulong) * (uint *)(puVar1 + 5);
      }
    } else {
      uVar5 = *(uint *)(puVar1 + 5);
    joined_r0x00564f64:
      uVar10 = (ulong)uVar5;
      if (iVar4 == 0x49) {
        lVar6 = puVar1[6];
        goto LAB_00565089;
      }
    joined_r0x00565154:
      if (iVar4 == 0x5b) {
        lVar6 = puVar1[6];
        goto LAB_005651c5;
      }
    joined_r0x00565268:
      if (iVar4 != 0x67)
        goto LAB_00564c79;
      lVar6 = puVar1[6];
    }
    if (*(int *)(lVar6 + 0x44) == 0) {
      *(uint32_t *)(puVar1 + 1) = 0x71;
    } else {
      uVar5 = (int)uVar10 + 2;
      if ((ulong)puVar1[3] < (ulong)uVar5) {
        flush_pending(arg1);
        uVar10 = (ulong) * (uint *)(puVar1 + 5);
        uVar5 = *(uint *)(puVar1 + 5) + 2;
        if ((ulong)puVar1[3] < (ulong)uVar5)
          goto LAB_00564c79;
      }
      uVar9 = (int)uVar10 + 1;
      *(char *)(puVar1[2] + uVar10) = (char)arg1[0xc];
      *(uint *)(puVar1 + 5) = uVar9;
      *(char *)(puVar1[2] + (ulong)uVar9) = (char)((ulong)arg1[0xc] >> 8);
      *(uint *)(puVar1 + 5) = uVar5;
      lVar6 = crc32(0, 0, 0);
      arg1[0xc] = lVar6;
      *(uint32_t *)(puVar1 + 1) = 0x71;
      uVar10 = (ulong) * (uint *)(puVar1 + 5);
    }
  }
LAB_00564c79:
  if ((int)uVar10 == 0) {
    iVar4 = (int)arg1[1];
    if (((arg2 <= iVar8) && (iVar4 == 0)) && (bVar13))
      goto LAB_00564d0d;
    iVar8 = *(int *)(puVar1 + 1);
    if (iVar8 != 0x29a)
      goto LAB_00564c98;
  LAB_00564e07:
    if (iVar4 != 0) {
    LAB_00564d0d:
      arg1[6] = z_errmsg._56_8_;
      return 0xfffffffb;
    }
    iVar4 = *(int *)((long)puVar1 + 0xa4);
  joined_r0x00564ca6:
    if (iVar4 == 0) {
      if (arg2 == 0) {
        return 0;
      }
      if (iVar8 == 0x29a)
        goto LAB_00564d2d;
    }
  } else {
    flush_pending(arg1);
    if ((int)arg1[4] == 0)
      goto LAB_0056505d;
    iVar8 = *(int *)(puVar1 + 1);
    iVar4 = (int)arg1[1];
    if (iVar8 == 0x29a)
      goto LAB_00564e07;
  LAB_00564c98:
    if (iVar4 == 0) {
      iVar4 = *(int *)((long)puVar1 + 0xa4);
      goto joined_r0x00564ca6;
    }
  }
  iVar4 =
      (**(code **)(configuration_table + (long)*(int *)((long)puVar1 + 0xb4) * 0x10 + 8))(puVar1);
  if (iVar4 - 2U < 2) {
    *(uint32_t *)(puVar1 + 1) = 0x29a;
  }
  if ((iVar4 == 2) || (iVar4 == 0)) {
    if ((int)arg1[4] != 0) {
      return 0;
    }
    *(uint32_t *)(puVar1 + 8) = 0xffffffff;
    return 0;
  }
  if (iVar4 == 1) {
    if (arg2 == 1) {
      _tr_align(puVar1);
    } else {
      _tr_stored_block(puVar1, 0, 0, 0);
      if (arg2 == 3) {
        *(uint16_t *)(puVar1[0xd] + (ulong)(*(int *)((long)puVar1 + 0x74) - 1) * 2) = 0;
        memset((void *)puVar1[0xd], 0, (ulong)(*(int *)((long)puVar1 + 0x74) - 1) * 2);
      }
    }
    flush_pending(arg1);
    if ((int)arg1[4] == 0) {
    LAB_0056505d:
      *(uint32_t *)(puVar1 + 8) = 0xffffffff;
      return 0;
    }
  }
LAB_00564d2d:
  if (bVar13) {
    return 0;
  }
  if (*(int *)((long)puVar1 + 0x2c) < 1) {
    return 1;
  }
  if (*(int *)((long)puVar1 + 0x2c) == 2) {
    uVar5 = *(uint *)(puVar1 + 5);
    *(char *)(puVar1[2] + (ulong)uVar5) = (char)arg1[0xc];
    *(uint *)(puVar1 + 5) = uVar5 + 1;
    *(char *)(puVar1[2] + (ulong)(uVar5 + 1)) = (char)((ulong)arg1[0xc] >> 8);
    *(uint *)(puVar1 + 5) = uVar5 + 2;
    *(char *)(puVar1[2] + (ulong)(uVar5 + 2)) = (char)((ulong)arg1[0xc] >> 0x10);
    *(uint *)(puVar1 + 5) = uVar5 + 3;
    *(char *)(puVar1[2] + (ulong)(uVar5 + 3)) = (char)((ulong)arg1[0xc] >> 0x18);
    *(uint *)(puVar1 + 5) = uVar5 + 4;
    *(char *)(puVar1[2] + (ulong)(uVar5 + 4)) = (char)arg1[2];
    *(uint *)(puVar1 + 5) = uVar5 + 5;
    *(char *)(puVar1[2] + (ulong)(uVar5 + 5)) = (char)((ulong)arg1[2] >> 8);
    *(uint *)(puVar1 + 5) = uVar5 + 6;
    *(char *)(puVar1[2] + (ulong)(uVar5 + 6)) = (char)((ulong)arg1[2] >> 0x10);
    *(uint *)(puVar1 + 5) = uVar5 + 7;
    *(char *)(puVar1[2] + (ulong)(uVar5 + 7)) = (char)((ulong)arg1[2] >> 0x18);
    *(uint *)(puVar1 + 5) = uVar5 + 8;
  } else {
    lVar6 = arg1[0xc];
    uVar5 = *(uint *)(puVar1 + 5);
    *(char *)(puVar1[2] + (ulong)uVar5) = (char)((ulong)lVar6 >> 0x18);
    *(char *)(puVar1[2] + (ulong)(uVar5 + 1)) = (char)((ulong)lVar6 >> 0x10);
    *(uint *)(puVar1 + 5) = uVar5 + 2;
    lVar6 = arg1[0xc];
    *(char *)(puVar1[2] + (ulong)(uVar5 + 2)) = (char)((ushort)(short)lVar6 >> 8);
    *(char *)(puVar1[2] + (ulong)(uVar5 + 3)) = (char)(short)lVar6;
    *(uint *)(puVar1 + 5) = uVar5 + 4;
  }
  flush_pending(arg1);
  if (0 < *(int *)((long)puVar1 + 0x2c)) {
    *(int *)((long)puVar1 + 0x2c) = -*(int *)((long)puVar1 + 0x2c);
  }
  return (ulong)(*(int *)(puVar1 + 5) == 0);
}

/* ======================================================================
 * deflateEnd  (Ghidra `deflateEnd` @ 00565730)
 * Signature: uint8_t deflateEnd(void)
 * Calls: (none)
 * Called by: `compress`, `compress2`, `deflateCopy`, `deflateInit`, `deflateInit2`, `destroy`, `png_write_destroy`
 */
int deflateEnd(long arg1)

{
  int iVar1;
  int iVar2;
  long lVar3;

  if ((arg1 == 0) || (lVar3 = *(long *)(arg1 + 0x38), lVar3 == 0)) {
    iVar2 = -2;
  } else {
    iVar1 = *(int *)(lVar3 + 8);
    if ((((iVar1 == 0x45) || (iVar1 == 0x2a)) || (iVar1 == 0x5b)) ||
        (((iVar1 == 0x49 || (iVar1 == 0x71)) ||
          ((iVar1 == 0x67 || (iVar2 = -2, iVar1 == 0x29a)))))) {
      if (*(long *)(lVar3 + 0x10) != 0) {
        (**(code **)(arg1 + 0x48))(*(uint64_t *)(arg1 + 0x50));
        lVar3 = *(long *)(arg1 + 0x38);
      }
      if (*(long *)(lVar3 + 0x68) != 0) {
        (**(code **)(arg1 + 0x48))(*(uint64_t *)(arg1 + 0x50));
        lVar3 = *(long *)(arg1 + 0x38);
      }
      if (*(long *)(lVar3 + 0x60) != 0) {
        (**(code **)(arg1 + 0x48))(*(uint64_t *)(arg1 + 0x50));
        lVar3 = *(long *)(arg1 + 0x38);
      }
      if (*(long *)(lVar3 + 0x50) != 0) {
        (**(code **)(arg1 + 0x48))(*(uint64_t *)(arg1 + 0x50));
        lVar3 = *(long *)(arg1 + 0x38);
      }
      (**(code **)(arg1 + 0x48))(*(uint64_t *)(arg1 + 0x50), lVar3);
      *(uint64_t *)(arg1 + 0x38) = 0;
      iVar2 = (uint)(iVar1 != 0x71) * 3 + -3;
    }
  }
  return iVar2;
}

/* ======================================================================
 * deflateInit2  (Ghidra `deflateInit2_` @ 00565820)
 * Signature: uint8_t deflateInit2_(void)
 * Calls: `deflateEnd`, `deflateReset`, `zcalloc`, `zcfree`
 * Called by: (none)
 */
uint64_t deflateInit2_(long arg1, int arg2, int arg3, int arg4, int arg5, int arg6, char *arg7,
                       int arg8)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  uint64_t uVar5;
  uint32_t uVar6;
  int iVar7;

  if (((arg7 == (char *)0x0) || (arg8 != 0x70)) || (*arg7 != '1')) {
    uVar5 = 0xfffffffa;
  } else {
    if (arg1 != 0) {
      *(uint64_t *)(arg1 + 0x30) = 0;
      if (*(long *)(arg1 + 0x40) == 0) {
        *(code **)(arg1 + 0x40) = zcalloc;
        *(uint64_t *)(arg1 + 0x50) = 0;
        lVar4 = *(long *)(arg1 + 0x48);
      } else {
        lVar4 = *(long *)(arg1 + 0x48);
      }
      if (lVar4 == 0) {
        *(code **)(arg1 + 0x48) = zcfree;
      }
      if (arg2 == -1) {
        arg2 = 6;
      }
      if (arg4 < 0) {
        arg4 = -arg4;
        uVar6 = 0;
      } else {
        uVar6 = 1;
        if (0xf < arg4) {
          arg4 = arg4 + -0x10;
          uVar6 = 2;
        }
      }
      if ((((arg5 - 1U < 9) && (arg3 == 8)) && ((arg4 < 0x10 && ((7 < arg4 && (arg2 < 10)))))) &&
          ((-1 < arg2 && ((arg6 < 5 && (-1 < arg6)))))) {
        if (arg4 == 8) {
          arg4 = 9;
        }
        plVar3 = (long *)(**(code **)(arg1 + 0x40))(*(uint64_t *)(arg1 + 0x50), 1, 0x1728);
        if (plVar3 != (long *)0x0) {
          *(long **)(arg1 + 0x38) = plVar3;
          *(uint32_t *)((long)plVar3 + 0x2c) = uVar6;
          *plVar3 = arg1;
          iVar7 = 1 << ((byte)arg4 & 0x1f);
          plVar3[6] = 0;
          *(int *)(plVar3 + 9) = arg4;
          *(int *)((long)plVar3 + 0x44) = iVar7;
          *(int *)((long)plVar3 + 0x4c) = iVar7 + -1;
          *(int *)(plVar3 + 0xf) = arg5 + 7;
          iVar2 = 1 << ((byte)(arg5 + 7) & 0x1f);
          *(int *)((long)plVar3 + 0x74) = iVar2;
          *(int *)((long)plVar3 + 0x7c) = iVar2 + -1;
          *(uint *)(plVar3 + 0x10) = (arg5 + 9U) / 3;
          lVar4 = (**(code **)(arg1 + 0x40))(*(uint64_t *)(arg1 + 0x50), iVar7, 2);
          plVar3[10] = lVar4;
          lVar4 = (**(code **)(arg1 + 0x40))(*(uint64_t *)(arg1 + 0x50),
                                             *(uint32_t *)((long)plVar3 + 0x44), 2);
          plVar3[0xc] = lVar4;
          lVar4 = (**(code **)(arg1 + 0x40))(*(uint64_t *)(arg1 + 0x50),
                                             *(uint32_t *)((long)plVar3 + 0x74), 2);
          plVar3[0xd] = lVar4;
          iVar2 = 1 << ((char)arg5 + 6U & 0x1f);
          *(int *)(plVar3 + 0x2df) = iVar2;
          lVar4 = (**(code **)(arg1 + 0x40))(*(uint64_t *)(arg1 + 0x50), iVar2, 4);
          uVar1 = *(uint *)(plVar3 + 0x2df);
          plVar3[2] = lVar4;
          plVar3[3] = (ulong)uVar1 * 4;
          uVar5 = z_errmsg._48_8_;
          if ((((plVar3[10] != 0) && (plVar3[0xc] != 0)) && (plVar3[0xd] != 0)) && (lVar4 != 0)) {
            *(int *)((long)plVar3 + 0xb4) = arg2;
            *(int *)(plVar3 + 0x17) = arg6;
            *(uint8_t *)((long)plVar3 + 0x3c) = 8;
            plVar3[0x2e0] = lVar4 + (ulong)(uVar1 >> 1) * 2;
            plVar3[0x2de] = lVar4 + (ulong)uVar1 * 3;
            uVar5 = deflateReset(arg1);
            return uVar5;
          }
          *(uint32_t *)(plVar3 + 1) = 0x29a;
          *(uint64_t *)(arg1 + 0x30) = uVar5;
          deflateEnd(arg1);
          return 0xfffffffc;
        }
        return 0xfffffffc;
      }
    }
    uVar5 = 0xfffffffe;
  }
  return uVar5;
}

/* ======================================================================
 * deflateInit  (Ghidra `deflateInit_` @ 00565b30)
 * Signature: uint8_t deflateInit_(void)
 * Calls: `deflateEnd`, `deflateReset`, `zcalloc`, `zcfree`
 * Called by: (none)
 */
uint64_t deflateInit_(long arg1, int arg2, char *arg3, int arg4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint64_t uVar4;

  if (((arg3 == (char *)0x0) || (arg4 != 0x70)) || (*arg3 != '1')) {
    return 0xfffffffa;
  }
  if (arg1 == 0) {
  LAB_00565d38:
    uVar4 = 0xfffffffe;
  } else {
    *(uint64_t *)(arg1 + 0x30) = 0;
    if (*(long *)(arg1 + 0x40) == 0) {
      *(code **)(arg1 + 0x40) = zcalloc;
      *(uint64_t *)(arg1 + 0x50) = 0;
    }
    if (*(long *)(arg1 + 0x48) == 0) {
      *(code **)(arg1 + 0x48) = zcfree;
    }
    if (arg2 == -1) {
      arg2 = 6;
    } else if ((9 < arg2) || (arg2 < 0))
      goto LAB_00565d38;
    plVar2 = (long *)(**(code **)(arg1 + 0x40))(*(uint64_t *)(arg1 + 0x50), 1, 0x1728);
    if (plVar2 == (long *)0x0) {
      uVar4 = 0xfffffffc;
    } else {
      *(long **)(arg1 + 0x38) = plVar2;
      *plVar2 = arg1;
      *(uint32_t *)((long)plVar2 + 0x2c) = 1;
      plVar2[6] = 0;
      *(uint32_t *)(plVar2 + 9) = 0xf;
      *(uint32_t *)((long)plVar2 + 0x44) = 0x8000;
      *(uint32_t *)((long)plVar2 + 0x4c) = 0x7fff;
      *(uint32_t *)(plVar2 + 0xf) = 0xf;
      *(uint32_t *)((long)plVar2 + 0x74) = 0x8000;
      *(uint32_t *)((long)plVar2 + 0x7c) = 0x7fff;
      *(uint32_t *)(plVar2 + 0x10) = 5;
      lVar3 = (**(code **)(arg1 + 0x40))(*(uint64_t *)(arg1 + 0x50), 0x8000, 2);
      plVar2[10] = lVar3;
      lVar3 = (**(code **)(arg1 + 0x40))(*(uint64_t *)(arg1 + 0x50),
                                         *(uint32_t *)((long)plVar2 + 0x44), 2);
      plVar2[0xc] = lVar3;
      lVar3 = (**(code **)(arg1 + 0x40))(*(uint64_t *)(arg1 + 0x50),
                                         *(uint32_t *)((long)plVar2 + 0x74), 2);
      *(uint32_t *)(plVar2 + 0x2df) = 0x4000;
      plVar2[0xd] = lVar3;
      lVar3 = (**(code **)(arg1 + 0x40))(*(uint64_t *)(arg1 + 0x50), 0x4000, 4);
      uVar1 = *(uint *)(plVar2 + 0x2df);
      plVar2[2] = lVar3;
      plVar2[3] = (ulong)uVar1 * 4;
      uVar4 = z_errmsg._48_8_;
      if (((plVar2[10] != 0) && (plVar2[0xc] != 0)) && ((plVar2[0xd] != 0 && (lVar3 != 0)))) {
        *(int *)((long)plVar2 + 0xb4) = arg2;
        *(uint32_t *)(plVar2 + 0x17) = 0;
        *(uint8_t *)((long)plVar2 + 0x3c) = 8;
        plVar2[0x2e0] = lVar3 + (ulong)(uVar1 >> 1) * 2;
        plVar2[0x2de] = lVar3 + (ulong)uVar1 * 3;
        uVar4 = deflateReset(arg1);
        return uVar4;
      }
      *(uint32_t *)(plVar2 + 1) = 0x29a;
      *(uint64_t *)(arg1 + 0x30) = uVar4;
      deflateEnd(arg1);
      uVar4 = 0xfffffffc;
    }
  }
  return uVar4;
}

/* ======================================================================
 * deflateCopy  (Ghidra `deflateCopy` @ 00565d70)
 * Signature: uint8_t deflateCopy(void)
 * Calls: `deflateEnd`, `memcpy`
 * Called by: (none)
 */
uint64_t deflateCopy(uint64_t *arg1, uint64_t *arg2)

{
  uint16_t uVar1;
  uint32_t uVar2;
  uint64_t *puVar3;
  code *pcVar4;
  uint uVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  long lVar8;
  ulong uVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  bool bVar12;
  byte bVar13;

  bVar13 = 0;
  if (((arg2 == (uint64_t *)0x0) || (arg1 == (uint64_t *)0x0)) ||
      (puVar3 = (uint64_t *)arg2[7], puVar3 == (uint64_t *)0x0)) {
    uVar7 = 0xfffffffe;
  } else {
    *arg1 = *arg2;
    arg1[1] = arg2[1];
    arg1[2] = arg2[2];
    arg1[3] = arg2[3];
    arg1[4] = arg2[4];
    arg1[5] = arg2[5];
    arg1[6] = arg2[6];
    arg1[7] = arg2[7];
    pcVar4 = (code *)arg2[8];
    arg1[8] = pcVar4;
    arg1[9] = arg2[9];
    uVar7 = arg2[10];
    arg1[10] = uVar7;
    arg1[0xb] = arg2[0xb];
    arg1[0xc] = arg2[0xc];
    arg1[0xd] = arg2[0xd];
    puVar6 = (uint64_t *)(*pcVar4)(uVar7, 1, 0x1728);
    if (puVar6 == (uint64_t *)0x0) {
      uVar7 = 0xfffffffc;
    } else {
      bVar12 = ((ulong)puVar6 & 1) != 0;
      arg1[7] = puVar6;
      uVar5 = 0x1728;
      puVar10 = puVar3;
      puVar11 = puVar6;
      if (bVar12) {
        puVar11 = (uint64_t *)((long)puVar6 + 1);
        puVar10 = (uint64_t *)((long)puVar3 + 1);
        *(uint8_t *)puVar6 = *(uint8_t *)puVar3;
        uVar5 = 0x1727;
      }
      if (((ulong)puVar11 & 2) != 0) {
        uVar1 = *(uint16_t *)puVar10;
        uVar5 = uVar5 - 2;
        puVar10 = (uint64_t *)((long)puVar10 + 2);
        *(uint16_t *)puVar11 = uVar1;
        puVar11 = (uint64_t *)((long)puVar11 + 2);
      }
      if (((ulong)puVar11 & 4) != 0) {
        uVar2 = *(uint32_t *)puVar10;
        uVar5 = uVar5 - 4;
        puVar10 = (uint64_t *)((long)puVar10 + 4);
        *(uint32_t *)puVar11 = uVar2;
        puVar11 = (uint64_t *)((long)puVar11 + 4);
      }
      lVar8 = 0;
      for (uVar9 = (ulong)(uVar5 >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
        puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
      }
      if ((uVar5 & 4) != 0) {
        *(uint32_t *)puVar11 = *(uint32_t *)puVar10;
        lVar8 = 4;
      }
      if ((uVar5 & 2) != 0) {
        *(uint16_t *)((long)puVar11 + lVar8) = *(uint16_t *)((long)puVar10 + lVar8);
        lVar8 = lVar8 + 2;
      }
      if (bVar12) {
        *(uint8_t *)((long)puVar11 + lVar8) = *(uint8_t *)((long)puVar10 + lVar8);
      }
      *puVar6 = arg1;
      uVar7 = (*(code *)arg1[8])(arg1[10], *(uint32_t *)((long)puVar6 + 0x44), 2);
      puVar6[10] = uVar7;
      uVar7 = (*(code *)arg1[8])(arg1[10], *(uint32_t *)((long)puVar6 + 0x44), 2);
      puVar6[0xc] = uVar7;
      uVar7 = (*(code *)arg1[8])(arg1[10], *(uint32_t *)((long)puVar6 + 0x74), 2);
      puVar6[0xd] = uVar7;
      lVar8 = (*(code *)arg1[8])(arg1[10], *(uint32_t *)(puVar6 + 0x2df), 4);
      puVar6[2] = lVar8;
      if ((((void *)puVar6[10] == (void *)0x0) || (puVar6[0xc] == 0)) ||
          ((puVar6[0xd] == 0 || (lVar8 == 0)))) {
        deflateEnd(arg1);
        uVar7 = 0xfffffffc;
      } else {
        memcpy((void *)puVar6[10], (void *)puVar3[10],
               (ulong)(uint)(*(int *)((long)puVar6 + 0x44) * 2));
        memcpy((void *)puVar6[0xc], (void *)puVar3[0xc],
               (ulong) * (uint *)((long)puVar6 + 0x44) * 2);
        memcpy((void *)puVar6[0xd], (void *)puVar3[0xd],
               (ulong) * (uint *)((long)puVar6 + 0x74) * 2);
        memcpy((void *)puVar6[2], (void *)puVar3[2], (ulong) * (uint *)(puVar6 + 3));
        puVar6[4] = (puVar6[2] + puVar3[4]) - puVar3[2];
        puVar6[0x2de] = puVar6[2] + (ulong) * (uint *)(puVar6 + 0x2df) * 3;
        puVar6[0x169] = (long)puVar6 + 0xc4;
        puVar6[0x2e0] = lVar8 + (ulong)(*(uint *)(puVar6 + 0x2df) >> 1) * 2;
        puVar6[0x16c] = puVar6 + 0x137;
        puVar6[0x16f] = (long)puVar6 + 0xaac;
        uVar7 = 0;
      }
    }
  }
  return uVar7;
}

/* ======================================================================
 * gz_open  (Ghidra `gz_open` @ 00566c80)
 * Signature: uint8_t gz_open(void)
 * Calls: `check_header`, `crc32`, `destroy`, `fdopen`, `fopen`, `fprintf`, `ftell`, `malloc`, `strcpy`, `strlen`
 * Called by: `gzdopen`, `gzopen`
 */
uint64_t *gz_open(char *arg1, char *arg2, int arg3)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  size_t sVar4;
  char *pcVar5;
  void *pvVar6;
  int *piVar7;
  FILE *__stream;
  long lVar8;
  char cVar9;
  ulong in_stack_ffffffffffffff58;
  char local_78[80];
  char local_28[8];

  if ((arg2 == (char *)0x0) || (arg1 == (char *)0x0)) {
    return (uint64_t *)0x0;
  }
  puVar2 = malloc(0xd0);
  if (puVar2 == (uint64_t *)0x0) {
    return (uint64_t *)0x0;
  }
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0x10] = 0;
  *puVar2 = 0;
  puVar2[0x11] = 0;
  puVar2[3] = 0;
  *(uint32_t *)(puVar2 + 4) = 0;
  *(uint32_t *)(puVar2 + 1) = 0;
  puVar2[0xf] = 0;
  *(uint32_t *)(puVar2 + 0xe) = 0;
  *(uint32_t *)((long)puVar2 + 0x74) = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  *(uint32_t *)(puVar2 + 0x19) = 0xffffffff;
  uVar3 = crc32(0, 0, 0);
  puVar2[0x12] = uVar3;
  puVar2[0x13] = 0;
  *(uint32_t *)(puVar2 + 0x15) = 0;
  sVar4 = strlen(arg1);
  pcVar5 = malloc(sVar4 + 1);
  puVar2[0x14] = pcVar5;
  if (pcVar5 != (char *)0x0) {
    strcpy(pcVar5, arg1);
    *(uint8_t *)((long)puVar2 + 0xac) = 0;
    pcVar5 = local_78;
    uVar3 = 0;
    iVar1 = -1;
    do {
      cVar9 = *arg2;
      if (cVar9 == 'r') {
        *(uint8_t *)((long)puVar2 + 0xac) = 0x72;
        cVar9 = *arg2;
      }
      if ((cVar9 == 'a') || (cVar9 == 'w')) {
        *(uint8_t *)((long)puVar2 + 0xac) = 0x77;
        cVar9 = *arg2;
      }
      if ((byte)(cVar9 - 0x30U) < 10) {
        iVar1 = cVar9 + -0x30;
      } else if (cVar9 == 'f') {
        uVar3 = 1;
      } else if (cVar9 == 'h') {
        uVar3 = 2;
      } else if (cVar9 == 'R') {
        uVar3 = 3;
      } else {
        *pcVar5 = cVar9;
        pcVar5 = pcVar5 + 1;
        if (cVar9 == '\0')
          break;
      }
      arg2 = arg2 + 1;
    } while (pcVar5 != local_28);
    if (*(char *)((long)puVar2 + 0xac) != '\0') {
      if (*(char *)((long)puVar2 + 0xac) == 'w') {
        in_stack_ffffffffffffff58 = 0;
        iVar1 = deflateInit2_(puVar2, iVar1, 8, 0xfffffff1, 8, uVar3, "1.2.3", 0x70);
        pvVar6 = malloc(0x4000);
        puVar2[0x11] = pvVar6;
        puVar2[3] = pvVar6;
        if (iVar1 != 0)
          goto LAB_00566f90;
      } else {
        pvVar6 = malloc(0x4000);
        puVar2[0x10] = pvVar6;
        *puVar2 = pvVar6;
        iVar1 = inflateInit2_(puVar2, 0xfffffff1, "1.2.3", 0x70);
        if (iVar1 != 0)
          goto LAB_00566f90;
        pvVar6 = (void *)puVar2[0x10];
      }
      if (pvVar6 != (void *)0x0) {
        *(uint32_t *)(puVar2 + 4) = 0x4000;
        piVar7 = __errno_location();
        *piVar7 = 0;
        if (arg3 < 0) {
          __stream = fopen(arg1, local_78);
        } else {
          __stream = fdopen(arg3, local_78);
        }
        puVar2[0xf] = __stream;
        if (__stream != (FILE *)0x0) {
          if (*(char *)((long)puVar2 + 0xac) != 'w') {
            check_header(puVar2);
            lVar8 = ftell((FILE *)puVar2[0xf]);
            puVar2[0x16] = lVar8 - (ulong) * (uint *)(puVar2 + 1);
            return puVar2;
          }
          fprintf(__stream, "%c%c%c%c%c%c%c%c%c%c", 0x1f, 0x8b, 8, 0,
                  in_stack_ffffffffffffff58 & 0xffffffff00000000, 0, 0, 0, 0, 3);
          puVar2[0x16] = 10;
          return puVar2;
        }
      }
    }
  }
LAB_00566f90:
  destroy(puVar2);
  return (uint64_t *)0x0;
}

/* ======================================================================
 * gzread_part_1  (Ghidra `gzread.part.1` @ 00567020)
 * Signature: uint8_t gzread.part.1(void)
 * Calls: `check_header`, `crc32`, `ferror`, `fread`, `inflate`, `inflateReset`, `memcpy`
 * Called by: `gzgetc`, `gzgets`, `gzread`, `gzseek`
 */
uint gzread_part_1(long *arg1, uint8_t *arg2, uint arg3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  size_t sVar5;
  long lVar6;
  byte *pbVar7;
  size_t sVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint8_t *__ptr;
  long lVar13;

  sVar5 = 0;
  arg1[3] = (long)arg2;
  *(uint *)(arg1 + 4) = arg3;
  __ptr = arg2;
  if (arg3 != 0) {
    if ((int)arg1[0x19] == -1) {
      sVar5 = (size_t)arg3;
    } else {
      *arg2 = (char)(int)arg1[0x19];
      arg2 = arg2 + 1;
      arg1[3] = arg1[3] + 1;
      arg1[0x18] = arg1[0x18] + 1;
      *(uint32_t *)(arg1 + 0x19) = 0xffffffff;
      uVar11 = (int)arg1[4] - 1;
      sVar5 = (size_t)uVar11;
      *(uint *)(arg1 + 4) = uVar11;
      __ptr = arg2;
      if (*(int *)((long)arg1 + 0xcc) != 0) {
        *(uint32_t *)(arg1 + 0xe) = 1;
        return 1;
      }
    }
  }
  do {
    if ((uint)sVar5 == 0) {
    LAB_00567148:
      lVar6 = crc32(arg1[0x12], arg2, arg1[3] - (long)arg2);
      arg1[0x12] = lVar6;
      if ((arg3 == *(uint *)(arg1 + 4)) && (((int)arg1[0xe] == -1 || ((int)arg1[0xe] == -3)))) {
        arg3 = 0xffffffff;
      } else {
        arg3 = arg3 - *(uint *)(arg1 + 4);
      }
      return arg3;
    }
    if ((int)arg1[0x15] != 0) {
      uVar11 = *(uint *)(arg1 + 1);
      if ((uint)sVar5 < uVar11) {
      LAB_00567423:
        __ptr = __ptr + sVar5;
        memcpy((void *)arg1[3], (void *)*arg1, sVar5);
        *arg1 = *arg1 + sVar5;
        *(int *)(arg1 + 1) = (int)arg1[1] - (int)sVar5;
        arg1[3] = (long)__ptr;
        uVar11 = (int)arg1[4] - (int)sVar5;
        *(uint *)(arg1 + 4) = uVar11;
        if (uVar11 == 0) {
          iVar2 = 0;
          goto LAB_00567454;
        }
        sVar5 = (size_t)uVar11;
      } else if (uVar11 != 0) {
        sVar5 = (size_t)uVar11;
        goto LAB_00567423;
      }
      sVar8 = fread(__ptr, 1, sVar5, (FILE *)arg1[0xf]);
      iVar2 = (int)sVar5 - (int)sVar8;
      *(int *)(arg1 + 4) = iVar2;
    LAB_00567454:
      arg3 = arg3 - iVar2;
      arg1[0x17] = arg1[0x17] + (ulong)arg3;
      arg1[0x18] = arg1[0x18] + (ulong)arg3;
      if (arg3 != 0) {
        return arg3;
      }
      *(uint32_t *)((long)arg1 + 0x74) = 1;
      return 0;
    }
    uVar9 = (ulong) * (uint *)(arg1 + 1);
    if ((*(uint *)(arg1 + 1) == 0) && (*(int *)((long)arg1 + 0x74) == 0)) {
      piVar4 = __errno_location();
      *piVar4 = 0;
      sVar5 = fread((void *)arg1[0x10], 1, 0x4000, (FILE *)arg1[0xf]);
      uVar9 = sVar5 & 0xffffffff;
      *(int *)(arg1 + 1) = (int)sVar5;
      if ((int)sVar5 == 0) {
        *(uint32_t *)((long)arg1 + 0x74) = 1;
        iVar2 = ferror((FILE *)arg1[0xf]);
        if (iVar2 != 0) {
          *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
          goto LAB_00567148;
        }
        uVar9 = (ulong) * (uint *)(arg1 + 1);
      }
      sVar5 = (size_t)*(uint *)(arg1 + 4);
      *arg1 = arg1[0x10];
    }
    arg1[0x17] = arg1[0x17] + uVar9;
    arg1[0x18] = arg1[0x18] + sVar5;
    iVar2 = inflate(arg1, 0);
    *(int *)(arg1 + 0xe) = iVar2;
    arg1[0x17] = arg1[0x17] - (ulong) * (uint *)(arg1 + 1);
    arg1[0x18] = arg1[0x18] - (ulong) * (uint *)(arg1 + 4);
    if (iVar2 == 1) {
      lVar6 = crc32(arg1[0x12], arg2, arg1[3] - (long)arg2);
      arg1[0x12] = lVar6;
      arg2 = (uint8_t *)arg1[3];
      if (*(int *)((long)arg1 + 0x74) == 0) {
        iVar2 = (int)arg1[1];
        if (iVar2 == 0) {
          piVar4 = __errno_location();
          *piVar4 = 0;
          sVar5 = fread((void *)arg1[0x10], 1, 0x4000, (FILE *)arg1[0xf]);
          iVar2 = (int)sVar5;
          *(int *)(arg1 + 1) = iVar2;
          if (iVar2 != 0) {
            pbVar7 = (byte *)arg1[0x10];
            iVar3 = *(int *)((long)arg1 + 0x74);
            *arg1 = (long)pbVar7;
            goto LAB_005671cc;
          }
          *(uint32_t *)((long)arg1 + 0x74) = 1;
          iVar2 = ferror((FILE *)arg1[0xf]);
          if (iVar2 != 0) {
            *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
          }
          iVar3 = *(int *)((long)arg1 + 0x74);
          lVar13 = -1;
        } else {
          pbVar7 = (byte *)*arg1;
          iVar3 = 0;
        LAB_005671cc:
          *(int *)(arg1 + 1) = iVar2 + -1;
          bVar1 = *pbVar7;
          *arg1 = (long)(pbVar7 + 1);
          lVar13 = (long)(int)(uint)bVar1;
        }
        if (iVar3 != 0) {
          lVar6 = arg1[0x12];
          lVar10 = lVar13 + -0x1010100;
          goto LAB_005675ee;
        }
        iVar2 = (int)arg1[1];
        if (iVar2 == 0) {
          piVar4 = __errno_location();
          *piVar4 = 0;
          sVar5 = fread((void *)arg1[0x10], 1, 0x4000, (FILE *)arg1[0xf]);
          iVar2 = (int)sVar5;
          *(int *)(arg1 + 1) = iVar2;
          if (iVar2 != 0) {
            pbVar7 = (byte *)arg1[0x10];
            iVar3 = *(int *)((long)arg1 + 0x74);
            *arg1 = (long)pbVar7;
            goto LAB_005671f6;
          }
          *(uint32_t *)((long)arg1 + 0x74) = 1;
          iVar2 = ferror((FILE *)arg1[0xf]);
          if (iVar2 != 0) {
            *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
          }
          iVar3 = *(int *)((long)arg1 + 0x74);
          lVar12 = -0x100;
        } else {
          pbVar7 = (byte *)*arg1;
          iVar3 = 0;
        LAB_005671f6:
          *(int *)(arg1 + 1) = iVar2 + -1;
          bVar1 = *pbVar7;
          *arg1 = (long)(pbVar7 + 1);
          lVar12 = (long)(int)(uint)bVar1 << 8;
        }
        if (iVar3 != 0) {
          lVar6 = arg1[0x12];
          lVar10 = lVar12 + lVar13 + -0x1010000;
          goto LAB_005675ee;
        }
        iVar2 = (int)arg1[1];
        if (iVar2 == 0) {
          piVar4 = __errno_location();
          *piVar4 = 0;
          sVar5 = fread((void *)arg1[0x10], 1, 0x4000, (FILE *)arg1[0xf]);
          iVar2 = (int)sVar5;
          *(int *)(arg1 + 1) = iVar2;
          if (iVar2 != 0) {
            pbVar7 = (byte *)arg1[0x10];
            iVar3 = *(int *)((long)arg1 + 0x74);
            *arg1 = (long)pbVar7;
            goto LAB_00567226;
          }
          *(uint32_t *)((long)arg1 + 0x74) = 1;
          iVar2 = ferror((FILE *)arg1[0xf]);
          if (iVar2 != 0) {
            *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
          }
          iVar3 = *(int *)((long)arg1 + 0x74);
          lVar10 = -0x10000;
        } else {
          pbVar7 = (byte *)*arg1;
          iVar3 = 0;
        LAB_00567226:
          *(int *)(arg1 + 1) = iVar2 + -1;
          bVar1 = *pbVar7;
          *arg1 = (long)(pbVar7 + 1);
          lVar10 = (long)(int)(uint)bVar1 << 0x10;
        }
        lVar10 = lVar12 + lVar13 + lVar10;
        if (iVar3 != 0) {
          lVar6 = arg1[0x12];
          lVar10 = lVar10 + -0x1000000;
          goto LAB_005675ee;
        }
        iVar2 = (int)arg1[1];
        if (iVar2 == 0) {
          piVar4 = __errno_location();
          *piVar4 = 0;
          sVar5 = fread((void *)arg1[0x10], 1, 0x4000, (FILE *)arg1[0xf]);
          iVar2 = (int)sVar5;
          *(int *)(arg1 + 1) = iVar2;
          if (iVar2 == 0) {
            *(uint32_t *)((long)arg1 + 0x74) = 1;
            lVar10 = lVar10 + -0x1000000;
            ferror((FILE *)arg1[0xf]);
            lVar6 = arg1[0x12];
            goto LAB_005675ee;
          }
          pbVar7 = (byte *)arg1[0x10];
          *arg1 = (long)pbVar7;
        } else {
          pbVar7 = (byte *)*arg1;
        }
        *(int *)(arg1 + 1) = iVar2 + -1;
        bVar1 = *pbVar7;
        *arg1 = (long)(pbVar7 + 1);
        lVar6 = arg1[0x12];
        lVar10 = lVar10 + (long)(int)(uint)bVar1 * 0x1000000;
      } else {
        lVar10 = -0x1010101;
      LAB_005675ee:
        *(uint32_t *)(arg1 + 0xe) = 0xfffffffd;
      }
      if (lVar6 == lVar10) {
        if (*(int *)((long)arg1 + 0x74) == 0) {
          iVar2 = (int)arg1[1];
          if (iVar2 == 0) {
            piVar4 = __errno_location();
            *piVar4 = 0;
            sVar5 = fread((void *)arg1[0x10], 1, 0x4000, (FILE *)arg1[0xf]);
            iVar2 = (int)sVar5;
            *(int *)(arg1 + 1) = iVar2;
            if (iVar2 != 0) {
              lVar6 = arg1[0x10];
              iVar3 = *(int *)((long)arg1 + 0x74);
              goto LAB_0056749b;
            }
            *(uint32_t *)((long)arg1 + 0x74) = 1;
            iVar2 = ferror((FILE *)arg1[0xf]);
            if (iVar2 != 0) {
              *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
            }
            iVar3 = *(int *)((long)arg1 + 0x74);
          } else {
            lVar6 = *arg1;
            iVar3 = 0;
          LAB_0056749b:
            *(int *)(arg1 + 1) = iVar2 + -1;
            *arg1 = lVar6 + 1;
          }
          if (iVar3 != 0)
            goto LAB_00567763;
          iVar2 = (int)arg1[1];
          if (iVar2 == 0) {
            piVar4 = __errno_location();
            *piVar4 = 0;
            sVar5 = fread((void *)arg1[0x10], 1, 0x4000, (FILE *)arg1[0xf]);
            iVar2 = (int)sVar5;
            *(int *)(arg1 + 1) = iVar2;
            if (iVar2 != 0) {
              lVar6 = arg1[0x10];
              iVar3 = *(int *)((long)arg1 + 0x74);
              goto LAB_005674be;
            }
            *(uint32_t *)((long)arg1 + 0x74) = 1;
            iVar2 = ferror((FILE *)arg1[0xf]);
            if (iVar2 != 0) {
              *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
            }
            iVar3 = *(int *)((long)arg1 + 0x74);
          } else {
            lVar6 = *arg1;
            iVar3 = 0;
          LAB_005674be:
            *(int *)(arg1 + 1) = iVar2 + -1;
            *arg1 = lVar6 + 1;
          }
          if (iVar3 != 0)
            goto LAB_00567763;
          iVar2 = (int)arg1[1];
          if (iVar2 == 0) {
            piVar4 = __errno_location();
            *piVar4 = 0;
            sVar5 = fread((void *)arg1[0x10], 1, 0x4000, (FILE *)arg1[0xf]);
            iVar2 = (int)sVar5;
            *(int *)(arg1 + 1) = iVar2;
            if (iVar2 != 0) {
              lVar6 = arg1[0x10];
              iVar3 = *(int *)((long)arg1 + 0x74);
              goto LAB_005674e1;
            }
            *(uint32_t *)((long)arg1 + 0x74) = 1;
            iVar2 = ferror((FILE *)arg1[0xf]);
            if (iVar2 != 0) {
              *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
            }
            iVar3 = *(int *)((long)arg1 + 0x74);
          } else {
            lVar6 = *arg1;
            iVar3 = 0;
          LAB_005674e1:
            *(int *)(arg1 + 1) = iVar2 + -1;
            *arg1 = lVar6 + 1;
          }
          if (iVar3 != 0)
            goto LAB_00567763;
          iVar2 = (int)arg1[1];
          if (iVar2 == 0) {
            piVar4 = __errno_location();
            *piVar4 = 0;
            sVar5 = fread((void *)arg1[0x10], 1, 0x4000, (FILE *)arg1[0xf]);
            iVar2 = (int)sVar5;
            *(int *)(arg1 + 1) = iVar2;
            if (iVar2 == 0) {
              *(uint32_t *)((long)arg1 + 0x74) = 1;
              ferror((FILE *)arg1[0xf]);
              goto LAB_00567763;
            }
            lVar6 = arg1[0x10];
          } else {
            lVar6 = *arg1;
          }
          *(int *)(arg1 + 1) = iVar2 + -1;
          *arg1 = lVar6 + 1;
        } else {
        LAB_00567763:
          *(uint32_t *)(arg1 + 0xe) = 0xfffffffd;
        }
        check_header(arg1);
        if ((int)arg1[0xe] == 0) {
          inflateReset(arg1);
          lVar6 = crc32(0, 0, 0);
          arg1[0x12] = lVar6;
        }
      } else {
        *(uint32_t *)(arg1 + 0xe) = 0xfffffffd;
      }
    }
    if (arg1[0xe] != 0)
      goto LAB_00567148;
    sVar5 = (size_t)*(uint *)(arg1 + 4);
  } while (true);
}

/* ======================================================================
 * gzopen  (Ghidra `gzopen` @ 00567800)
 * Signature: uint8_t gzopen(void)
 * Calls: `gz_open`
 * Called by: (none)
 */
void gzopen(uint64_t arg1, uint64_t arg2)

{
  gz_open(arg1, arg2, 0xffffffff);
  return;
}

/* ======================================================================
 * gzdopen  (Ghidra `gzdopen` @ 00567810)
 * Signature: uint8_t gzdopen(void)
 * Calls: `gz_open`, `sprintf`
 * Called by: (none)
 */
uint64_t gzdopen(uint arg1, uint64_t arg2)

{
  uint64_t uVar1;
  char acStack_48[56];

  uVar1 = 0;
  if (-1 < (int)arg1) {
    sprintf(acStack_48, "<fd:%d>", (ulong)arg1);
    uVar1 = gz_open(acStack_48, arg2, arg1);
  }
  return uVar1;
}

/* ======================================================================
 * gzsetparams  (Ghidra `gzsetparams` @ 00567860)
 * Signature: uint8_t gzsetparams(void)
 * Calls: `deflateParams`, `fwrite`
 * Called by: (none)
 */
uint64_t gzsetparams(long arg1, uint32_t arg2, uint32_t arg3)

{
  uint64_t uVar1;
  size_t sVar2;

  if ((arg1 != 0) && (*(char *)(arg1 + 0xac) == 'w')) {
    if (*(int *)(arg1 + 0x20) == 0) {
      *(void **)(arg1 + 0x18) = *(void **)(arg1 + 0x88);
      sVar2 = fwrite(*(void **)(arg1 + 0x88), 1, 0x4000, *(FILE **)(arg1 + 0x78));
      if (sVar2 != 0x4000) {
        *(uint32_t *)(arg1 + 0x70) = 0xffffffff;
      }
      *(uint32_t *)(arg1 + 0x20) = 0x4000;
    }
    uVar1 = deflateParams(arg1, arg2, arg3);
    return uVar1;
  }
  return 0xfffffffe;
}

/* ======================================================================
 * gzread  (Ghidra `gzread` @ 00567910)
 * Signature: uint8_t gzread(void)
 * Calls: `gzread_part_1`
 * Called by: (none)
 */
uint64_t gzread(long arg1)

{
  int iVar1;
  uint64_t uVar2;

  if ((arg1 == 0) || (*(char *)(arg1 + 0xac) != 'r')) {
    return 0xfffffffe;
  }
  iVar1 = *(int *)(arg1 + 0x70);
  if ((iVar1 != -1) && (iVar1 != -3)) {
    if (iVar1 != 1) {
      uVar2 = gzread_part_1();
      return uVar2;
    }
    return 0;
  }
  return 0xffffffff;
}

/* ======================================================================
 * gzgetc  (Ghidra `gzgetc` @ 00567960)
 * Signature: uint8_t gzgetc(void)
 * Calls: `gzread_part_1`
 * Called by: (none)
 */
ulong gzgetc(long arg1)

{
  int iVar1;
  ulong uVar2;
  byte local_18[16];

  uVar2 = 0xffffffff;
  if ((arg1 != 0) && (*(char *)(arg1 + 0xac) == 'r')) {
    iVar1 = *(int *)(arg1 + 0x70);
    if ((iVar1 == -1) || (iVar1 == -3)) {
      uVar2 = 0xffffffff;
    } else if (iVar1 != 1) {
      iVar1 = gzread_part_1(arg1, local_18, 1);
      if (iVar1 == 1) {
        uVar2 = (ulong)local_18[0];
      }
    }
  }
  return uVar2;
}

/* ======================================================================
 * gzungetc  (Ghidra `gzungetc` @ 005679c0)
 * Signature: uint8_t gzungetc(void)
 * Calls: (none)
 * Called by: (none)
 */
int gzungetc(int arg1, long arg2)

{
  uint uVar1;

  if (((arg2 != 0) && (arg1 != -1)) && (*(char *)(arg2 + 0xac) == 'r')) {
    if (*(int *)(arg2 + 200) == -1) {
      *(long *)(arg2 + 0xc0) = *(long *)(arg2 + 0xc0) + -1;
      *(int *)(arg2 + 200) = arg1;
      uVar1 = (uint)(*(int *)(arg2 + 0x70) == 1);
      *(uint *)(arg2 + 0xcc) = uVar1;
      if (uVar1 != 0) {
        *(uint32_t *)(arg2 + 0x70) = 0;
      }
      *(uint32_t *)(arg2 + 0x74) = 0;
      return arg1;
    }
    return -1;
  }
  return -1;
}

/* ======================================================================
 * gzgets  (Ghidra `gzgets` @ 00567a30)
 * Signature: uint8_t gzgets(void)
 * Calls: `gzread_part_1`
 * Called by: (none)
 */
char *gzgets(long arg1, char *arg2, int arg3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;

  if ((0 < arg3) && (arg2 != (char *)0x0)) {
    pcVar4 = arg2;
    if (arg1 == 0) {
      if (arg3 != 1) {
        *arg2 = '\0';
        return (char *)0x0;
      }
    LAB_00567ae0:
      bVar2 = true;
    } else {
      do {
        arg3 = arg3 + -1;
        if (arg3 == 0)
          goto LAB_00567ae0;
      } while (
          ((((*(char *)(arg1 + 0xac) == 'r') && (iVar3 = *(int *)(arg1 + 0x70), iVar3 != -1)) &&
            (iVar3 != -3)) &&
           ((iVar3 != 1 && (iVar3 = gzread_part_1(arg1, pcVar4, 1), iVar3 == 1)))) &&
          (cVar1 = *pcVar4, pcVar4 = pcVar4 + 1, cVar1 != '\n'));
      bVar2 = false;
    }
    *pcVar4 = '\0';
    if ((pcVar4 != arg2) || (bVar2)) {
      return arg2;
    }
  }
  return (char *)0x0;
}

/* ======================================================================
 * gzwrite  (Ghidra `gzwrite` @ 00567af0)
 * Signature: uint8_t gzwrite(void)
 * Calls: `crc32`, `deflate`, `fwrite`
 * Called by: `gzprintf`, `gzputc`, `gzputs`, `gzseek`
 */
int gzwrite(uint64_t *arg1, uint64_t arg2, uint arg3)

{
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  uint64_t uVar4;
  ulong uVar5;

  iVar1 = -2;
  if ((arg1 != (uint64_t *)0x0) && (*(char *)((long)arg1 + 0xac) == 'w')) {
    *(uint *)(arg1 + 1) = arg3;
    *arg1 = arg2;
    uVar5 = (ulong)arg3;
    do {
      if ((int)uVar5 == 0)
        break;
      uVar3 = (ulong) * (uint *)(arg1 + 4);
      if (*(uint *)(arg1 + 4) == 0) {
        arg1[3] = (void *)arg1[0x11];
        sVar2 = fwrite((void *)arg1[0x11], 1, 0x4000, (FILE *)arg1[0xf]);
        if (sVar2 != 0x4000) {
          *(uint32_t *)(arg1 + 0xe) = 0xffffffff;
          break;
        }
        uVar5 = (ulong) * (uint *)(arg1 + 1);
        *(uint32_t *)(arg1 + 4) = 0x4000;
        uVar3 = 0x4000;
      }
      arg1[0x17] = arg1[0x17] + uVar5;
      arg1[0x18] = arg1[0x18] + uVar3;
      iVar1 = deflate(arg1, 0);
      uVar5 = (ulong) * (uint *)(arg1 + 1);
      *(int *)(arg1 + 0xe) = iVar1;
      arg1[0x17] = arg1[0x17] - uVar5;
      arg1[0x18] = arg1[0x18] - (ulong) * (uint *)(arg1 + 4);
    } while (iVar1 == 0);
    uVar4 = crc32(arg1[0x12], arg2, arg3);
    arg1[0x12] = uVar4;
    iVar1 = arg3 - *(int *)(arg1 + 1);
  }
  return iVar1;
}

/* ======================================================================
 * gzprintf  (Ghidra `gzprintf` @ 00567bd0)
 * Signature: uint8_t gzprintf(void)
 * Calls: `gzwrite`, `vsnprintf`
 * Called by: (none)
 */
uint32_t gzprintf(uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5,
                  uint64_t arg6, uint64_t arg7, uint64_t arg8, uint64_t arg9, char *arg10,
                  uint64_t arg11, uint64_t arg12, uint64_t arg13, uint64_t arg14)

{
  char in_AL;
  int iVar1;
  uint32_t uVar2;
  char acStack_10d8[4095];
  char local_d9;
  uint32_t local_d0;
  uint32_t local_cc;
  uint8_t *local_c8;
  uint8_t *local_c0;
  uint8_t local_b8[16];
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;
  uint64_t local_18;

  if (in_AL != '\0') {
    local_88 = arg1;
    local_78 = arg2;
    local_68 = arg3;
    local_58 = arg4;
    local_48 = arg5;
    local_38 = arg6;
    local_28 = arg7;
    local_18 = arg8;
  }
  local_c8 = &stack0x00000008;
  local_d9 = '\0';
  local_c0 = local_b8;
  local_d0 = 0x10;
  local_cc = 0x30;
  local_a8 = arg11;
  local_a0 = arg12;
  local_98 = arg13;
  local_90 = arg14;
  iVar1 = vsnprintf(acStack_10d8, 0x1000, arg10, &local_d0);
  if ((iVar1 - 1U < 0xfff) && (local_d9 == '\0')) {
    uVar2 = gzwrite(arg9, acStack_10d8, iVar1);
    return uVar2;
  }
  return 0;
}

/* ======================================================================
 * gzputc  (Ghidra `gzputc` @ 00567ce0)
 * Signature: uint8_t gzputc(void)
 * Calls: `gzwrite`
 * Called by: (none)
 */
ulong gzputc(uint64_t arg1, byte arg2)

{
  int iVar1;
  ulong uVar2;
  byte local_18[24];

  local_18[0] = arg2;
  iVar1 = gzwrite(arg1, local_18, 1);
  uVar2 = 0xffffffff;
  if (iVar1 == 1) {
    uVar2 = (ulong)local_18[0];
  }
  return uVar2;
}

/* ======================================================================
 * gzputs  (Ghidra `gzputs` @ 00567d10)
 * Signature: uint8_t gzputs(void)
 * Calls: `gzwrite`, `strlen`
 * Called by: (none)
 */
void gzputs(uint64_t arg1, char *arg2)

{
  size_t sVar1;

  sVar1 = strlen(arg2);
  gzwrite(arg1, arg2, sVar1 & 0xffffffff);
  return;
}

/* ======================================================================
 * gzflush  (Ghidra `gzflush` @ 00567d50)
 * Signature: uint8_t gzflush(void)
 * Calls: `do_flush`, `fflush`
 * Called by: (none)
 */
int gzflush(long arg1)

{
  int iVar1;

  iVar1 = do_flush();
  if (iVar1 == 0) {
    fflush(*(FILE **)(arg1 + 0x78));
    if (*(int *)(arg1 + 0x70) != 1) {
      iVar1 = *(int *)(arg1 + 0x70);
    }
  }
  return iVar1;
}

/* ======================================================================
 * gzseek  (Ghidra `gzseek` @ 00567d90)
 * Signature: uint8_t gzseek(void)
 * Calls: `crc32`, `fseek`, `gzread_part_1`, `gzwrite`, `inflateReset`, `malloc`, `memset`
 * Called by: (none)
 */
ulong gzseek(uint64_t *arg1, ulong arg2, int arg3)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  void *pvVar4;
  ulong uVar5;

  if ((((arg3 != 2) && (arg1 != (uint64_t *)0x0)) && (*(int *)(arg1 + 0xe) != -1)) &&
      (*(int *)(arg1 + 0xe) != -3)) {
    if (*(char *)((long)arg1 + 0xac) == 'w') {
      if (arg3 == 0) {
        arg2 = arg2 - arg1[0x17];
      }
      if (-1 < (long)arg2) {
        if (arg1[0x10] == 0) {
          pvVar4 = malloc(0x4000);
          arg1[0x10] = pvVar4;
          if (pvVar4 == (void *)0x0) {
            return 0xffffffffffffffff;
          }
          memset(pvVar4, 0, 0x4000);
        }
        if (arg2 != 0) {
          do {
            uVar5 = 0x4000;
            if ((long)arg2 < 0x4000) {
              uVar5 = arg2 & 0xffffffff;
            }
            uVar2 = gzwrite(arg1, arg1[0x10], uVar5);
            if (uVar2 == 0) {
              return 0xffffffffffffffff;
            }
            arg2 = arg2 - uVar2;
          } while (0 < (long)arg2);
        }
        return arg1[0x17];
      }
    } else {
      if (arg3 == 1) {
        arg2 = arg2 + arg1[0x18];
      }
      if (-1 < (long)arg2) {
        if (*(int *)(arg1 + 0x15) == 0) {
          if ((long)arg2 < (long)arg1[0x18]) {
            if (*(char *)((long)arg1 + 0xac) != 'r') {
              return 0xffffffffffffffff;
            }
            *(uint32_t *)(arg1 + 0xe) = 0;
            *(uint32_t *)((long)arg1 + 0x74) = 0;
            *(uint32_t *)(arg1 + 0x19) = 0xffffffff;
            *(uint32_t *)(arg1 + 1) = 0;
            *arg1 = arg1[0x10];
            uVar3 = crc32(0, 0, 0);
            arg1[0x12] = uVar3;
            if (*(int *)(arg1 + 0x15) == 0) {
              inflateReset(arg1);
            }
            arg1[0x17] = 0;
            arg1[0x18] = 0;
            iVar1 = fseek((FILE *)arg1[0xf], arg1[0x16], 0);
            if (iVar1 < 0) {
              return 0xffffffffffffffff;
            }
          } else {
            arg2 = arg2 - arg1[0x18];
          }
          if (arg2 != 0) {
            if (arg1[0x11] == 0) {
              pvVar4 = malloc(0x4000);
              arg1[0x11] = pvVar4;
              if (pvVar4 == (void *)0x0) {
                return 0xffffffffffffffff;
              }
            }
            if (*(int *)(arg1 + 0x19) != -1) {
              arg1[0x18] = arg1[0x18] + 1;
              arg2 = arg2 - 1;
              *(uint32_t *)(arg1 + 0x19) = 0xffffffff;
              if (*(int *)((long)arg1 + 0xcc) != 0) {
                *(uint32_t *)(arg1 + 0xe) = 1;
              }
            }
            for (; 0 < (long)arg2; arg2 = arg2 - (long)iVar1) {
              uVar5 = 0x4000;
              if ((long)arg2 < 0x4000) {
                uVar5 = arg2 & 0xffffffff;
              }
              if (*(char *)((long)arg1 + 0xac) != 'r') {
                return 0xffffffffffffffff;
              }
              iVar1 = *(int *)(arg1 + 0xe);
              if (iVar1 == -1) {
                return 0xffffffffffffffff;
              }
              if (iVar1 == -3) {
                return 0xffffffffffffffff;
              }
              if (iVar1 == 1) {
                return 0xffffffffffffffff;
              }
              iVar1 = gzread_part_1(arg1, arg1[0x11], uVar5);
              if (iVar1 < 1) {
                return 0xffffffffffffffff;
              }
            }
          }
          return arg1[0x18];
        }
        *(uint32_t *)(arg1 + 0x19) = 0xffffffff;
        *(uint32_t *)(arg1 + 1) = 0;
        *arg1 = arg1[0x10];
        iVar1 = fseek((FILE *)arg1[0xf], arg2, 0);
        if (-1 < iVar1) {
          arg1[0x18] = arg2;
          arg1[0x17] = arg2;
          return arg2;
        }
      }
    }
  }
  return 0xffffffffffffffff;
}

/* ======================================================================
 * gzrewind  (Ghidra `gzrewind` @ 00568090)
 * Signature: uint8_t gzrewind(void)
 * Calls: `crc32`, `fseek`, `inflateReset`
 * Called by: (none)
 */
int gzrewind(uint64_t *arg1)

{
  int iVar1;
  uint64_t uVar2;

  if ((arg1 != (uint64_t *)0x0) && (*(char *)((long)arg1 + 0xac) == 'r')) {
    *(uint32_t *)(arg1 + 0xe) = 0;
    *(uint32_t *)((long)arg1 + 0x74) = 0;
    *(uint32_t *)(arg1 + 0x19) = 0xffffffff;
    *(uint32_t *)(arg1 + 1) = 0;
    *arg1 = arg1[0x10];
    uVar2 = crc32(0, 0, 0);
    arg1[0x12] = uVar2;
    if (*(int *)(arg1 + 0x15) == 0) {
      inflateReset(arg1);
    }
    arg1[0x17] = 0;
    arg1[0x18] = 0;
    iVar1 = fseek((FILE *)arg1[0xf], arg1[0x16], 0);
    return iVar1;
  }
  return -1;
}

/* ======================================================================
 * gztell  (Ghidra `gztell` @ 00568140)
 * Signature: uint8_t gztell(void)
 * Calls: `fseek`, `malloc`, `memset`
 * Called by: (none)
 */
long gztell(uint64_t *arg1)

{
  long __off;
  int iVar1;
  void *__s;

  if (((arg1 != (uint64_t *)0x0) && (*(int *)(arg1 + 0xe) != -1)) && (*(int *)(arg1 + 0xe) != -3)) {
    if (*(char *)((long)arg1 + 0xac) == 'w') {
      if (arg1[0x10] == 0) {
        __s = malloc(0x4000);
        arg1[0x10] = __s;
        if (__s == (void *)0x0) {
          return -1;
        }
        memset(__s, 0, 0x4000);
      }
      return arg1[0x17];
    }
    __off = arg1[0x18];
    if (-1 < __off) {
      if (*(int *)(arg1 + 0x15) == 0) {
        return __off;
      }
      *(uint32_t *)(arg1 + 0x19) = 0xffffffff;
      *(uint32_t *)(arg1 + 1) = 0;
      *arg1 = arg1[0x10];
      iVar1 = fseek((FILE *)arg1[0xf], __off, 0);
      if (-1 < iVar1) {
        arg1[0x18] = __off;
        arg1[0x17] = __off;
        return __off;
      }
    }
  }
  return -1;
}

/* ======================================================================
 * gzeof  (Ghidra `gzeof` @ 00568240)
 * Signature: uint8_t gzeof(void)
 * Calls: (none)
 * Called by: (none)
 */
bool gzeof(long arg1)

{
  bool bVar1;

  bVar1 = false;
  if (((arg1 != 0) && (*(char *)(arg1 + 0xac) == 'r')) &&
      (bVar1 = true, *(int *)(arg1 + 0x74) == 0)) {
    return *(int *)(arg1 + 0x70) == 1;
  }
  return bVar1;
}

/* ======================================================================
 * gzdirect  (Ghidra `gzdirect` @ 00568270)
 * Signature: uint8_t gzdirect(void)
 * Calls: (none)
 * Called by: (none)
 */
uint32_t gzdirect(long arg1)

{
  if ((arg1 != 0) && (*(char *)(arg1 + 0xac) == 'r')) {
    return *(uint32_t *)(arg1 + 0xa8);
  }
  return 0;
}

/* ======================================================================
 * gzclose  (Ghidra `gzclose` @ 00568290)
 * Signature: uint8_t gzclose(void)
 * Calls: `destroy`, `do_flush`, `fputc`
 * Called by: (none)
 */
uint64_t gzclose(long arg1)

{
  uint uVar1;
  FILE *pFVar2;
  int iVar3;
  uint64_t uVar4;

  if (arg1 != 0) {
    if (*(char *)(arg1 + 0xac) == 'w') {
      iVar3 = do_flush(arg1, 4);
      if (iVar3 == 0) {
        pFVar2 = *(FILE **)(arg1 + 0x78);
        uVar4 = *(uint64_t *)(arg1 + 0x90);
        fputc((uint)uVar4 & 0xff, pFVar2);
        fputc((uint)(byte)((ulong)uVar4 >> 8), pFVar2);
        fputc((uint)((ulong)uVar4 >> 0x10) & 0xff, pFVar2);
        fputc((uint)((ulong)uVar4 >> 0x18) & 0xff, pFVar2);
        uVar1 = *(uint *)(arg1 + 0xb8);
        pFVar2 = *(FILE **)(arg1 + 0x78);
        fputc(uVar1 & 0xff, pFVar2);
        fputc(uVar1 >> 8 & 0xff, pFVar2);
        fputc(uVar1 >> 0x10 & 0xff, pFVar2);
        fputc(uVar1 >> 0x18, pFVar2);
      }
    }
    uVar4 = destroy(arg1);
    return uVar4;
  }
  return 0xfffffffe;
}

/* ======================================================================
 * gzerror  (Ghidra `gzerror` @ 005683a0)
 * Signature: uint8_t gzerror(void)
 * Calls: `free`, `malloc`, `strcat`, `strcpy`, `strerror`, `strlen`
 * Called by: (none)
 */
char *gzerror(long arg1, int *arg2)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  size_t sVar3;
  char *__dest;
  int *piVar4;
  char *__s_00;
  char *pcVar5;

  if (arg1 == 0) {
    *arg2 = -2;
    pcVar5 = (char *)z_errmsg._32_8_;
  } else {
    iVar1 = *(int *)(arg1 + 0x70);
    *arg2 = iVar1;
    pcVar5 = "";
    if (iVar1 != 0) {
      if (iVar1 == -1) {
        piVar4 = __errno_location();
        __s_00 = strerror(*piVar4);
      } else {
        __s_00 = *(char **)(arg1 + 0x30);
      }
      if ((__s_00 == (char *)0x0) || (*__s_00 == '\0')) {
        __s_00 = *(char **)(z_errmsg + (long)(2 - *(int *)(arg1 + 0x70)) * 8);
      }
      if (*(void **)(arg1 + 0x98) != (void *)0x0) {
        free(*(void **)(arg1 + 0x98));
      }
      __s = *(char **)(arg1 + 0xa0);
      sVar2 = strlen(__s);
      sVar3 = strlen(__s_00);
      __dest = malloc(sVar2 + 3 + sVar3);
      *(char **)(arg1 + 0x98) = __dest;
      pcVar5 = (char *)z_errmsg._48_8_;
      if (__dest != (char *)0x0) {
        strcpy(__dest, __s);
        pcVar5 = *(char **)(arg1 + 0x98);
        sVar2 = strlen(pcVar5);
        pcVar5 = pcVar5 + sVar2;
        pcVar5[0] = ':';
        pcVar5[1] = ' ';
        pcVar5[2] = '\0';
        strcat(*(char **)(arg1 + 0x98), __s_00);
        pcVar5 = *(char **)(arg1 + 0x98);
      }
    }
  }
  return pcVar5;
}

/* ======================================================================
 * gzclearerr  (Ghidra `gzclearerr` @ 005684e0)
 * Signature: uint8_t gzclearerr(void)
 * Calls: `clearerr`
 * Called by: (none)
 */
void gzclearerr(long arg1)

{
  if (arg1 != 0) {
    if (*(int *)(arg1 + 0x70) != 1) {
      *(uint32_t *)(arg1 + 0x70) = 0;
    }
    *(uint32_t *)(arg1 + 0x74) = 0;
    clearerr(*(FILE **)(arg1 + 0x78));
    return;
  }
  return;
}

/* ======================================================================
 * inflateBackInit  (Ghidra `inflateBackInit_` @ 00568510)
 * Signature: uint8_t inflateBackInit_(void)
 * Calls: `zcalloc`, `zcfree`
 * Called by: (none)
 */
uint64_t inflateBackInit_(long arg1, int arg2, long arg3, char *arg4, int arg5)

{
  long lVar1;
  uint64_t uVar2;

  if (((arg4 == (char *)0x0) || (arg5 != 0x70)) || (*arg4 != '1')) {
    uVar2 = 0xfffffffa;
  } else if (((arg3 == 0) || (arg1 == 0)) || ((0xf < arg2 || (arg2 < 8)))) {
    uVar2 = 0xfffffffe;
  } else {
    *(uint64_t *)(arg1 + 0x30) = 0;
    if (*(long *)(arg1 + 0x40) == 0) {
      *(code **)(arg1 + 0x40) = zcalloc;
      *(uint64_t *)(arg1 + 0x50) = 0;
      lVar1 = *(long *)(arg1 + 0x48);
    } else {
      lVar1 = *(long *)(arg1 + 0x48);
    }
    if (lVar1 == 0) {
      *(code **)(arg1 + 0x48) = zcfree;
    }
    lVar1 = (**(code **)(arg1 + 0x40))(*(uint64_t *)(arg1 + 0x50), 1, 0x2550);
    if (lVar1 == 0) {
      uVar2 = 0xfffffffc;
    } else {
      *(long *)(arg1 + 0x38) = lVar1;
      *(uint32_t *)(lVar1 + 0x14) = 0x8000;
      *(int *)(lVar1 + 0x30) = arg2;
      *(int *)(lVar1 + 0x34) = 1 << ((byte)arg2 & 0x1f);
      *(long *)(lVar1 + 0x40) = arg3;
      *(uint32_t *)(lVar1 + 0x3c) = 0;
      *(uint32_t *)(lVar1 + 0x38) = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}

/* ======================================================================
 * inflateBack  (Ghidra `inflateBack` @ 00568610)
 * Signature: uint8_t inflateBack(void)
 * Calls: `inflate_fast`, `inflate_table`, `memcpy`
 * Called by: (none)
 */
uint64_t inflateBack(long *arg1, code *arg2, uint64_t arg3, code *arg4, uint64_t arg5)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint8_t *puVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  uint8_t *puVar22;
  uint16_t uVar23;
  uint8_t uVar24;
  ushort uVar25;
  ulong uVar26;
  ulong uVar27;
  uint8_t *local_98;
  byte *local_48[3];

  if ((arg1 == (long *)0x0) || (piVar4 = (int *)arg1[7], piVar4 == (int *)0x0)) {
    uVar7 = 0xfffffffe;
  } else {
    arg1[6] = 0;
    *piVar4 = 0xb;
    uVar5 = 0;
    piVar4[1] = 0;
    piVar4[0xe] = 0;
    local_48[0] = (byte *)*arg1;
    if (local_48[0] != (byte *)0x0) {
      uVar5 = *(uint *)(arg1 + 1);
    }
    local_98 = *(uint8_t **)(piVar4 + 0x10);
    piVar1 = piVar4 + 0x154;
    uVar20 = piVar4[0xd];
    uVar16 = 0;
    uVar26 = 0;
    iVar6 = *piVar4;
  LAB_005686b7:
    bVar10 = (byte)uVar16;
    switch (iVar6) {
    case 0xb:
      if (piVar4[1] == 0) {
        for (; uVar16 < 3; uVar16 = uVar16 + 8) {
          if ((uVar5 == 0) && (uVar5 = (*arg2)(arg3, local_48), uVar5 == 0))
            goto LAB_00568860;
          uVar5 = uVar5 - 1;
          bVar10 = *local_48[0];
          local_48[0] = local_48[0] + 1;
          uVar26 = uVar26 + ((ulong)bVar10 << ((byte)uVar16 & 0x3f));
        }
        piVar4[1] = (uint)uVar26 & 1;
        uVar15 = (uint)(uVar26 >> 1) & 3;
        if (uVar15 == 2) {
          *piVar4 = 0xf;
          iVar6 = 0xf;
        } else if (uVar15 == 3) {
          arg1[6] = (long)"invalid block type";
          iVar6 = 0x1b;
          *piVar4 = 0x1b;
        } else if (uVar15 == 1) {
          *(uint8_t **)(piVar4 + 0x18) = lenfix_2862;
          piVar4[0x1c] = 9;
          iVar6 = 0x12;
          *(uint8_t **)(piVar4 + 0x1a) = distfix_2863;
          piVar4[0x1d] = 5;
          *piVar4 = 0x12;
        } else {
          *piVar4 = 0xd;
          iVar6 = 0xd;
        }
        uVar26 = uVar26 >> 3;
        uVar16 = uVar16 - 3;
      } else {
        *piVar4 = 0x1a;
        uVar16 = uVar16 & 0xfffffff8;
        iVar6 = 0x1a;
        uVar26 = uVar26 >> (bVar10 & 7);
      }
      goto LAB_005686b7;
    default:
      uVar7 = 0xfffffffe;
    LAB_005686c9:
      *arg1 = (long)local_48[0];
      *(uint *)(arg1 + 1) = uVar5;
      break;
    case 0xd:
      uVar26 = uVar26 >> (bVar10 & 7);
      for (uVar16 = uVar16 & 0xfffffff8; uVar16 < 0x20; uVar16 = uVar16 + 8) {
        if ((uVar5 == 0) && (uVar5 = (*arg2)(arg3, local_48), uVar5 == 0))
          goto LAB_00568860;
        uVar5 = uVar5 - 1;
        bVar10 = *local_48[0];
        local_48[0] = local_48[0] + 1;
        uVar26 = uVar26 + ((ulong)bVar10 << ((byte)uVar16 & 0x3f));
      }
      uVar27 = uVar26 & 0xffff;
      if (uVar27 == (uVar26 >> 0x10 ^ 0xffff)) {
        uVar16 = (uint)uVar27;
        piVar4[0x15] = uVar16;
        while (uVar16 != 0) {
          if ((uVar5 == 0) && (uVar5 = (*arg2)(arg3, local_48), uVar5 == 0))
            goto LAB_00568dc0;
          if (uVar20 == 0) {
            uVar20 = piVar4[0xd];
            local_98 = *(uint8_t **)(piVar4 + 0x10);
            piVar4[0xe] = uVar20;
            iVar6 = (*arg4)(arg5, local_98, uVar20);
            if (iVar6 != 0) {
              uVar7 = 0xfffffffb;
              goto LAB_005686c9;
            }
          }
          uVar15 = (uint)uVar27;
          if (uVar5 <= (uint)uVar27) {
            uVar15 = uVar5;
          }
          uVar16 = uVar20;
          if (uVar15 <= uVar20) {
            uVar16 = uVar15;
          }
          uVar26 = (ulong)uVar16;
          uVar5 = uVar5 - uVar16;
          uVar20 = uVar20 - uVar16;
          memcpy(local_98, local_48[0], uVar26);
          local_48[0] = local_48[0] + uVar26;
          uVar16 = piVar4[0x15] - uVar16;
          uVar27 = (ulong)uVar16;
          piVar4[0x15] = uVar16;
          local_98 = local_98 + uVar26;
        }
        *piVar4 = 0xb;
        iVar6 = 0xb;
        uVar16 = 0;
        uVar26 = 0;
      } else {
        arg1[6] = (long)"invalid stored block lengths";
        iVar6 = 0x1b;
        *piVar4 = 0x1b;
      }
      goto LAB_005686b7;
    case 0xf:
      for (; uVar16 < 0xe; uVar16 = uVar16 + 8) {
        if ((uVar5 == 0) && (uVar5 = (*arg2)(arg3, local_48), uVar5 == 0))
          goto LAB_00568860;
        uVar5 = uVar5 - 1;
        bVar10 = *local_48[0];
        local_48[0] = local_48[0] + 1;
        uVar26 = uVar26 + ((ulong)bVar10 << ((byte)uVar16 & 0x3f));
      }
      uVar17 = ((uint)uVar26 & 0x1f) + 0x101;
      uVar11 = ((uint)(uVar26 >> 5) & 0x1f) + 1;
      uVar15 = ((uint)(uVar26 >> 10) & 0xf) + 4;
      uVar26 = uVar26 >> 0xe;
      uVar16 = uVar16 - 0xe;
      piVar4[0x1f] = uVar17;
      piVar4[0x20] = uVar11;
      piVar4[0x1e] = uVar15;
      if ((uVar17 < 0x11f) && (uVar11 < 0x1f)) {
        uVar17 = 0;
        piVar4[0x21] = 0;
        do {
          if (uVar16 < 3) {
            if ((uVar5 == 0) && (uVar5 = (*arg2)(arg3, local_48), uVar5 == 0))
              goto LAB_00568860;
            uVar5 = uVar5 - 1;
            bVar10 = *local_48[0];
            local_48[0] = local_48[0] + 1;
            uVar17 = piVar4[0x21];
            bVar9 = (byte)uVar16;
            uVar16 = uVar16 + 8;
            uVar26 = uVar26 + ((ulong)bVar10 << (bVar9 & 0x3f));
            uVar15 = piVar4[0x1e];
          }
          uVar27 = (ulong)uVar17;
          uVar17 = uVar17 + 1;
          uVar25 = (ushort)uVar26;
          uVar26 = uVar26 >> 3;
          uVar16 = uVar16 - 3;
          *(ushort *)((long)piVar4 + (ulong) * (ushort *)(order_2884 + uVar27 * 2) * 2 + 0x90) =
              uVar25 & 7;
          piVar4[0x21] = uVar17;
        } while (uVar17 < uVar15);
        if (uVar17 < 0x13) {
          do {
            uVar27 = (ulong)uVar17;
            uVar17 = uVar17 + 1;
            *(uint16_t *)((long)piVar4 + (ulong) * (ushort *)(order_2884 + uVar27 * 2) * 2 + 0x90) =
                0;
          } while (uVar17 < 0x13);
          piVar4[0x21] = uVar17;
        }
        piVar4[0x1c] = 7;
        *(int **)(piVar4 + 0x22) = piVar1;
        *(int **)(piVar4 + 0x18) = piVar1;
        piVar2 = piVar4 + 0x22;
        iVar6 = inflate_table(0, piVar4 + 0x24, 0x13, piVar2, piVar4 + 0x1c);
        if (iVar6 == 0) {
          iVar6 = piVar4[0x20];
          iVar13 = piVar4[0x1f];
          uVar15 = 0;
          piVar4[0x21] = 0;
          while (uVar15 < (uint)(iVar6 + iVar13)) {
            iVar6 = piVar4[0x1c];
            lVar14 = *(long *)(piVar4 + 0x18);
            lVar8 = lVar14 + (ulong)((1 << ((byte)iVar6 & 0x1f)) - 1U & (uint)uVar26) * 4;
            uVar17 = (uint) * (byte *)(lVar8 + 1);
            uVar25 = *(ushort *)(lVar8 + 2);
            uVar15 = uVar16;
            if (uVar16 < uVar17) {
              do {
                if (uVar5 == 0) {
                  uVar5 = (*arg2)(arg3, local_48);
                  if (uVar5 == 0)
                    goto LAB_00568f1e;
                  lVar14 = *(long *)(piVar4 + 0x18);
                  iVar6 = piVar4[0x1c];
                }
                uVar16 = uVar15 + 8;
                uVar5 = uVar5 - 1;
                bVar10 = *local_48[0];
                local_48[0] = local_48[0] + 1;
                uVar26 = uVar26 + ((ulong)bVar10 << ((byte)uVar15 & 0x3f));
                lVar8 = lVar14 + (ulong)((1 << ((byte)iVar6 & 0x1f)) - 1U & (uint)uVar26) * 4;
                uVar17 = (uint) * (byte *)(lVar8 + 1);
                uVar25 = *(ushort *)(lVar8 + 2);
                uVar15 = uVar16;
              } while (uVar16 < uVar17);
            }
            bVar10 = (byte)uVar17;
            if (uVar25 < 0x10) {
              for (; uVar16 < uVar17; uVar16 = uVar16 + 8) {
                if ((uVar5 == 0) && (uVar5 = (*arg2)(arg3, local_48), uVar5 == 0))
                  goto LAB_00568f1e;
                uVar5 = uVar5 - 1;
                bVar9 = *local_48[0];
                local_48[0] = local_48[0] + 1;
                uVar26 = uVar26 + ((ulong)bVar9 << ((byte)uVar16 & 0x3f));
              }
              uVar16 = uVar16 - uVar17;
              uVar15 = piVar4[0x21] + 1;
              *(ushort *)((long)piVar4 + (ulong)(uint)piVar4[0x21] * 2 + 0x90) = uVar25;
              piVar4[0x21] = uVar15;
              iVar6 = piVar4[0x20];
              iVar13 = piVar4[0x1f];
              uVar26 = uVar26 >> (bVar10 & 0x3f);
            } else {
              if (uVar25 == 0x10) {
                for (; uVar16 < uVar17 + 2; uVar16 = uVar16 + 8) {
                  if ((uVar5 == 0) && (uVar5 = (*arg2)(arg3, local_48), uVar5 == 0))
                    goto LAB_00568f1e;
                  uVar5 = uVar5 - 1;
                  bVar9 = *local_48[0];
                  local_48[0] = local_48[0] + 1;
                  uVar26 = uVar26 + ((ulong)bVar9 << ((byte)uVar16 & 0x3f));
                }
                uVar11 = piVar4[0x21];
                uVar16 = uVar16 - uVar17;
                uVar26 = uVar26 >> (bVar10 & 0x3f);
                if (uVar11 != 0) {
                  uVar27 = uVar26 >> 2;
                  uVar16 = uVar16 - 2;
                  uVar23 = *(uint16_t *)((long)piVar4 + (ulong)(uVar11 - 1) * 2 + 0x90);
                  iVar12 = ((uint)uVar26 & 3) + 3;
                  goto LAB_0056966d;
                }
              LAB_00569863:
                arg1[6] = (long)"invalid bit length repeat";
                *piVar4 = 0x1b;
                goto LAB_0056987f;
              }
              if (uVar25 == 0x11) {
                for (; uVar16 < uVar17 + 3; uVar16 = uVar16 + 8) {
                  if ((uVar5 == 0) && (uVar5 = (*arg2)(arg3, local_48), uVar5 == 0))
                    goto LAB_00568f1e;
                  uVar5 = uVar5 - 1;
                  bVar9 = *local_48[0];
                  local_48[0] = local_48[0] + 1;
                  uVar26 = uVar26 + ((ulong)bVar9 << ((byte)uVar16 & 0x3f));
                }
                uVar11 = piVar4[0x21];
                uVar26 = uVar26 >> (bVar10 & 0x3f);
                uVar23 = 0;
                uVar16 = uVar16 + (-3 - uVar17);
                uVar27 = uVar26 >> 3;
                iVar12 = ((uint)uVar26 & 7) + 3;
              } else {
                for (; uVar16 < uVar17 + 7; uVar16 = uVar16 + 8) {
                  if ((uVar5 == 0) && (uVar5 = (*arg2)(arg3, local_48), uVar5 == 0))
                    goto LAB_00568f1e;
                  uVar5 = uVar5 - 1;
                  bVar9 = *local_48[0];
                  local_48[0] = local_48[0] + 1;
                  uVar26 = uVar26 + ((ulong)bVar9 << ((byte)uVar16 & 0x3f));
                }
                uVar11 = piVar4[0x21];
                uVar26 = uVar26 >> (bVar10 & 0x3f);
                uVar23 = 0;
                uVar16 = uVar16 + (-7 - uVar17);
                uVar27 = uVar26 >> 7;
                iVar12 = ((uint)uVar26 & 0x7f) + 0xb;
              }
            LAB_0056966d:
              iVar13 = piVar4[0x1f];
              iVar6 = piVar4[0x20];
              uVar15 = iVar12 + uVar11;
              uVar26 = uVar27;
              if ((uint)(iVar6 + iVar13) < uVar15)
                goto LAB_00569863;
              do {
                uVar27 = (ulong)uVar11;
                uVar11 = uVar11 + 1;
                *(uint16_t *)((long)piVar4 + uVar27 * 2 + 0x90) = uVar23;
              } while (uVar15 != uVar11);
              piVar4[0x21] = uVar15;
            }
          }
          if (*piVar4 == 0x1b) {
          LAB_0056987f:
            iVar6 = 0x1b;
          } else {
            piVar4[0x1c] = 9;
            *(int **)(piVar4 + 0x22) = piVar1;
            *(int **)(piVar4 + 0x18) = piVar1;
            iVar6 = inflate_table(1, piVar4 + 0x24, iVar13, piVar2, piVar4 + 0x1c, piVar4 + 0xc4);
            if (iVar6 == 0) {
              piVar4[0x1d] = 6;
              *(uint64_t *)(piVar4 + 0x1a) = *(uint64_t *)(piVar4 + 0x22);
              iVar6 = inflate_table(2, (long)piVar4 + (ulong)(uint)piVar4[0x1f] * 2 + 0x90,
                                    piVar4[0x20], piVar2, piVar4 + 0x1d, piVar4 + 0xc4);
              if (iVar6 == 0) {
                *piVar4 = 0x12;
                goto switchD_005686e8_caseD_12;
              }
              arg1[6] = (long)"invalid distances set";
              iVar6 = 0x1b;
              *piVar4 = 0x1b;
            } else {
              arg1[6] = (long)"invalid literal/lengths set";
              iVar6 = 0x1b;
              *piVar4 = 0x1b;
            }
          }
        } else {
          arg1[6] = (long)"invalid code lengths set";
          iVar6 = 0x1b;
          *piVar4 = 0x1b;
        }
      } else {
        arg1[6] = (long)"too many length or distance symbols";
        iVar6 = 0x1b;
        *piVar4 = 0x1b;
      }
      goto LAB_005686b7;
    case 0x12:
    switchD_005686e8_caseD_12:
      if ((uVar5 < 6) || (uVar20 < 0x102)) {
        iVar6 = piVar4[0x1c];
        lVar8 = *(long *)(piVar4 + 0x18);
        pbVar3 = (byte *)(lVar8 + (ulong)((1 << ((byte)iVar6 & 0x1f)) - 1U & (uint)uVar26) * 4);
        bVar10 = pbVar3[1];
        bVar9 = *pbVar3;
        uVar25 = *(ushort *)(pbVar3 + 2);
        uVar15 = uVar16;
        if (uVar16 < bVar10) {
          do {
            if (uVar5 == 0) {
              uVar5 = (*arg2)(arg3, local_48);
              if (uVar5 == 0)
                goto LAB_00568f1e;
              lVar8 = *(long *)(piVar4 + 0x18);
              iVar6 = piVar4[0x1c];
            }
            uVar15 = uVar16 + 8;
            uVar5 = uVar5 - 1;
            bVar10 = *local_48[0];
            local_48[0] = local_48[0] + 1;
            uVar26 = uVar26 + ((ulong)bVar10 << ((byte)uVar16 & 0x3f));
            pbVar3 = (byte *)(lVar8 + (ulong)((1 << ((byte)iVar6 & 0x1f)) - 1U & (uint)uVar26) * 4);
            bVar10 = pbVar3[1];
            bVar9 = *pbVar3;
            uVar25 = *(ushort *)(pbVar3 + 2);
            uVar16 = uVar15;
          } while (uVar15 < bVar10);
        }
        if (bVar9 == 0) {
          uVar16 = uVar15 - bVar10;
          uVar26 = uVar26 >> (bVar10 & 0x3f);
          piVar4[0x15] = (uint)uVar25;
        LAB_00568e1f:
          uVar24 = (uint8_t)uVar25;
          if (uVar20 == 0) {
            local_98 = *(uint8_t **)(piVar4 + 0x10);
            uVar20 = piVar4[0xd];
            piVar4[0xe] = uVar20;
            iVar6 = (*arg4)(arg5, local_98, uVar20);
            if (iVar6 != 0) {
            LAB_00569854:
              uVar7 = 0xfffffffb;
              goto LAB_005686c9;
            }
            uVar24 = (uint8_t)piVar4[0x15];
          }
          uVar20 = uVar20 - 1;
          iVar6 = 0x12;
          *local_98 = uVar24;
          local_98 = local_98 + 1;
          *piVar4 = 0x12;
        } else {
          if ((bVar9 & 0xf0) == 0) {
            uVar17 = (1 << (bVar9 + bVar10 & 0x1f)) - 1;
            uVar11 = (uint)uVar25;
            pbVar3 = (byte *)(lVar8 +
                              (ulong)((((uint)uVar26 & uVar17) >> (bVar10 & 0x1f)) + uVar11) * 4);
            bVar19 = pbVar3[1];
            bVar9 = *pbVar3;
            uVar25 = *(ushort *)(pbVar3 + 2);
            uVar16 = uVar15;
            if (uVar15 < (uint)bVar10 + (uint)bVar19) {
              do {
                if (uVar5 == 0) {
                  uVar5 = (*arg2)(arg3, local_48);
                  if (uVar5 == 0) {
                    local_48[0] = (byte *)0x0;
                    uVar7 = 0xfffffffb;
                    uVar5 = 0;
                    goto LAB_005686c9;
                  }
                  lVar8 = *(long *)(piVar4 + 0x18);
                }
                uVar15 = uVar16 + 8;
                uVar5 = uVar5 - 1;
                bVar9 = *local_48[0];
                local_48[0] = local_48[0] + 1;
                uVar26 = uVar26 + ((ulong)bVar9 << ((byte)uVar16 & 0x3f));
                pbVar3 =
                    (byte *)(lVar8 +
                             (ulong)(((uVar17 & (uint)uVar26) >> (bVar10 & 0x1f)) + uVar11) * 4);
                bVar19 = pbVar3[1];
                bVar9 = *pbVar3;
                uVar25 = *(ushort *)(pbVar3 + 2);
                uVar16 = uVar15;
              } while (uVar15 < (uint)bVar19 + (uint)bVar10);
            }
            uVar16 = (uVar15 - bVar10) - (uint)bVar19;
            uVar26 = (uVar26 >> (bVar10 & 0x3f)) >> (bVar19 & 0x3f);
            piVar4[0x15] = (uint)uVar25;
            if (bVar9 == 0)
              goto LAB_00568e1f;
          } else {
            uVar16 = uVar15 - bVar10;
            uVar26 = uVar26 >> (bVar10 & 0x3f);
            piVar4[0x15] = (uint)uVar25;
          }
          if ((bVar9 & 0x20) == 0) {
            if ((bVar9 & 0x40) == 0) {
              uVar15 = bVar9 & 0xf;
              piVar4[0x17] = uVar15;
              if ((bVar9 & 0xf) != 0) {
                if (uVar16 < uVar15) {
                  do {
                    if (uVar5 == 0) {
                      uVar5 = (*arg2)(arg3, local_48);
                      if (uVar5 == 0)
                        goto LAB_00568860;
                      uVar15 = piVar4[0x17];
                    }
                    uVar5 = uVar5 - 1;
                    bVar10 = *local_48[0];
                    local_48[0] = local_48[0] + 1;
                    bVar9 = (byte)uVar16;
                    uVar16 = uVar16 + 8;
                    uVar26 = uVar26 + ((ulong)bVar10 << (bVar9 & 0x3f));
                  } while (uVar16 < uVar15);
                }
                uVar16 = uVar16 - uVar15;
                piVar4[0x15] = piVar4[0x15] + ((1 << ((byte)uVar15 & 0x1f)) - 1U & (uint)uVar26);
                uVar26 = uVar26 >> ((byte)uVar15 & 0x3f);
              }
              iVar6 = piVar4[0x1d];
              lVar8 = *(long *)(piVar4 + 0x1a);
              uVar11 = (uint)uVar26;
              pbVar3 = (byte *)(lVar8 + (ulong)((1 << ((byte)iVar6 & 0x1f)) - 1U & uVar11) * 4);
              bVar10 = pbVar3[1];
              bVar9 = *pbVar3;
              uVar25 = *(ushort *)(pbVar3 + 2);
              uVar17 = (uint)bVar10;
              uVar15 = uVar16;
              if (uVar16 < uVar17) {
                do {
                  if (uVar5 == 0) {
                    uVar5 = (*arg2)(arg3, local_48);
                    if (uVar5 == 0)
                      goto LAB_00568f1e;
                    lVar8 = *(long *)(piVar4 + 0x1a);
                    iVar6 = piVar4[0x1d];
                  }
                  uVar16 = uVar15 + 8;
                  uVar5 = uVar5 - 1;
                  bVar10 = *local_48[0];
                  local_48[0] = local_48[0] + 1;
                  uVar26 = uVar26 + ((ulong)bVar10 << ((byte)uVar15 & 0x3f));
                  uVar11 = (uint)uVar26;
                  pbVar3 = (byte *)(lVar8 + (ulong)((1 << ((byte)iVar6 & 0x1f)) - 1U & uVar11) * 4);
                  bVar10 = pbVar3[1];
                  bVar9 = *pbVar3;
                  uVar25 = *(ushort *)(pbVar3 + 2);
                  uVar17 = (uint)bVar10;
                  uVar15 = uVar16;
                } while (uVar16 < uVar17);
              }
              uVar15 = (uint)uVar25;
              if ((bVar9 & 0xf0) == 0) {
                uVar21 = (1 << (bVar9 + bVar10 & 0x1f)) - 1;
                pbVar3 =
                    (byte *)(lVar8 + (ulong)(((uVar11 & uVar21) >> (bVar10 & 0x1f)) + uVar15) * 4);
                bVar19 = pbVar3[1];
                bVar9 = *pbVar3;
                uVar25 = *(ushort *)(pbVar3 + 2);
                uVar17 = uVar16;
                if (uVar16 < (uint)bVar10 + (uint)bVar19) {
                  do {
                    if (uVar5 == 0) {
                      uVar5 = (*arg2)(arg3, local_48);
                      if (uVar5 == 0) {
                        uVar5 = 0;
                        goto LAB_00568dc0;
                      }
                      lVar8 = *(long *)(piVar4 + 0x1a);
                    }
                    uVar16 = uVar17 + 8;
                    uVar5 = uVar5 - 1;
                    bVar9 = *local_48[0];
                    local_48[0] = local_48[0] + 1;
                    uVar26 = uVar26 + ((ulong)bVar9 << ((byte)uVar17 & 0x3f));
                    pbVar3 = (byte *)(lVar8 + (ulong)(((uVar21 & (uint)uVar26) >> (bVar10 & 0x1f)) +
                                                      uVar15) *
                                                  4);
                    bVar19 = pbVar3[1];
                    bVar9 = *pbVar3;
                    uVar25 = *(ushort *)(pbVar3 + 2);
                    uVar17 = uVar16;
                  } while (uVar16 < (uint)bVar19 + (uint)bVar10);
                }
                uVar16 = uVar16 - bVar10;
                uVar26 = uVar26 >> (bVar10 & 0x3f);
                uVar17 = (uint)bVar19;
                bVar10 = bVar19;
              }
              uVar16 = uVar16 - uVar17;
              uVar26 = uVar26 >> (bVar10 & 0x3f);
              if ((bVar9 & 0x40) == 0) {
                uVar15 = bVar9 & 0xf;
                uVar17 = (uint)uVar25;
                piVar4[0x16] = (uint)uVar25;
                piVar4[0x17] = uVar15;
                if ((bVar9 & 0xf) != 0) {
                  uVar17 = uVar16;
                  if (uVar16 < uVar15) {
                    do {
                      if (uVar5 == 0) {
                        uVar5 = (*arg2)(arg3, local_48);
                        if (uVar5 == 0) {
                          local_48[0] = (byte *)0x0;
                          uVar5 = 0;
                          goto LAB_00568995;
                        }
                        uVar15 = piVar4[0x17];
                      }
                      uVar16 = uVar17 + 8;
                      uVar5 = uVar5 - 1;
                      bVar10 = *local_48[0];
                      local_48[0] = local_48[0] + 1;
                      uVar26 = uVar26 + ((ulong)bVar10 << ((byte)uVar17 & 0x3f));
                      uVar17 = uVar16;
                    } while (uVar16 < uVar15);
                  }
                  uVar16 = uVar16 - uVar15;
                  uVar17 = ((1 << ((byte)uVar15 & 0x1f)) - 1U & (uint)uVar26) + piVar4[0x16];
                  uVar26 = uVar26 >> ((byte)uVar15 & 0x3f);
                  piVar4[0x16] = uVar17;
                }
                uVar15 = piVar4[0xd];
                uVar11 = 0;
                if ((uint)piVar4[0xe] < uVar15) {
                  uVar11 = uVar20;
                }
                if (uVar17 <= uVar15 - uVar11) {
                  do {
                    uVar17 = uVar15;
                    if (uVar20 == 0) {
                      local_98 = *(uint8_t **)(piVar4 + 0x10);
                      piVar4[0xe] = uVar15;
                      iVar6 = (*arg4)(arg5, local_98, uVar15);
                      if (iVar6 != 0)
                        goto LAB_00569854;
                      uVar17 = piVar4[0xd];
                      uVar20 = uVar15;
                    }
                    uVar17 = uVar17 - piVar4[0x16];
                    uVar27 = -(ulong)(uint)piVar4[0x16];
                    uVar15 = uVar20;
                    if (uVar17 < uVar20) {
                      uVar27 = (ulong)uVar17;
                      uVar15 = uVar20 - uVar17;
                    }
                    puVar18 = local_98 + uVar27;
                    uVar17 = piVar4[0x15];
                    uVar11 = uVar17;
                    if (uVar15 <= uVar17) {
                      uVar11 = uVar15;
                    }
                    uVar20 = uVar20 - uVar11;
                    uVar21 = uVar11 >> 4;
                    piVar4[0x15] = uVar17 - uVar11;
                    uVar17 = uVar21 * 0x10;
                    puVar22 = local_98;
                    uVar15 = uVar11;
                    if (((puVar18 + 0x10 < local_98 || local_98 + 0x10 < puVar18) &&
                         0xf < uVar11) &&
                        (uVar21 != 0)) {
                      lVar8 = 0;
                      uVar15 = 0;
                      do {
                        uVar7 = *(uint64_t *)((long)(puVar18 + lVar8) + 8);
                        uVar15 = uVar15 + 1;
                        *(uint64_t *)(local_98 + lVar8) = *(uint64_t *)(puVar18 + lVar8);
                        *(uint64_t *)((long)(local_98 + lVar8) + 8) = uVar7;
                        lVar8 = lVar8 + 0x10;
                      } while (uVar15 < uVar21);
                      puVar18 = puVar18 + uVar17;
                      puVar22 = local_98 + uVar17;
                      uVar15 = uVar11 + uVar21 * -0x10;
                      if (uVar11 != uVar17)
                        goto LAB_005695da;
                    } else {
                    LAB_005695da:
                      lVar8 = 0;
                      do {
                        puVar22[lVar8] = puVar18[lVar8];
                        lVar8 = lVar8 + 1;
                      } while (lVar8 != (ulong)(uVar15 - 1) + 1);
                    }
                    local_98 = local_98 + (ulong)(uVar11 - 1) + 1;
                    if (piVar4[0x15] == 0)
                      goto LAB_005696a4;
                    uVar15 = piVar4[0xd];
                  } while (true);
                }
                arg1[6] = (long)"invalid distance too far back";
                iVar6 = 0x1b;
                *piVar4 = 0x1b;
              } else {
                arg1[6] = (long)"invalid distance code";
                iVar6 = 0x1b;
                *piVar4 = 0x1b;
              }
            } else {
              arg1[6] = (long)"invalid literal/length code";
              iVar6 = 0x1b;
              *piVar4 = 0x1b;
            }
          } else {
            *piVar4 = 0xb;
            iVar6 = 0xb;
          }
        }
      } else {
        *(uint *)(arg1 + 4) = uVar20;
        *(uint *)(arg1 + 1) = uVar5;
        arg1[3] = (long)local_98;
        *arg1 = (long)local_48[0];
        *(ulong *)(piVar4 + 0x12) = uVar26;
        piVar4[0x14] = uVar16;
        if ((uint)piVar4[0xe] < (uint)piVar4[0xd]) {
          piVar4[0xe] = piVar4[0xd] - uVar20;
        }
        inflate_fast(arg1);
        local_48[0] = (byte *)*arg1;
        local_98 = (uint8_t *)arg1[3];
        uVar20 = *(uint *)(arg1 + 4);
        uVar5 = *(uint *)(arg1 + 1);
        uVar26 = *(ulong *)(piVar4 + 0x12);
        uVar16 = piVar4[0x14];
        iVar6 = *piVar4;
      }
      goto LAB_005686b7;
    case 0x1a:
      if (uVar20 < (uint)piVar4[0xd]) {
        iVar6 = (*arg4)(arg5, *(uint64_t *)(piVar4 + 0x10), piVar4[0xd] - uVar20);
        if (iVar6 == 0) {
          uVar7 = 1;
        } else {
        LAB_00568995:
          uVar7 = 0xfffffffb;
        }
      } else {
        uVar7 = 1;
      }
      goto LAB_005686c9;
    case 0x1b:
      uVar7 = 0xfffffffd;
      goto LAB_005686c9;
    }
  }
  return uVar7;
LAB_00568f1e:
  uVar5 = 0;
  local_48[0] = (byte *)0x0;
  uVar7 = 0xfffffffb;
  goto LAB_005686c9;
LAB_005696a4:
  iVar6 = *piVar4;
  goto LAB_005686b7;
LAB_00568dc0:
  local_48[0] = (byte *)0x0;
  uVar7 = 0xfffffffb;
  goto LAB_005686c9;
LAB_00568860:
  uVar5 = 0;
  local_48[0] = (byte *)0x0;
  uVar7 = 0xfffffffb;
  goto LAB_005686c9;
}

/* ======================================================================
 * inflateBackEnd  (Ghidra `inflateBackEnd` @ 00569900)
 * Signature: uint8_t inflateBackEnd(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t inflateBackEnd(long arg1)

{
  if (((arg1 != 0) && (*(long *)(arg1 + 0x38) != 0)) && (*(code **)(arg1 + 0x48) != (code *)0x0)) {
    (**(code **)(arg1 + 0x48))(*(uint64_t *)(arg1 + 0x50));
    *(uint64_t *)(arg1 + 0x38) = 0;
    return 0;
  }
  return 0xfffffffe;
}

/* ======================================================================
 * inflate_fast  (Ghidra `inflate_fast` @ 00569940)
 * Signature: uint8_t inflate_fast(void)
 * Calls: (none)
 * Called by: `inflate`, `inflateBack`
 */
void inflate_fast(long *arg1, int arg2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint32_t uVar3;
  uint uVar4;
  uint uVar5;
  uint32_t uVar6;
  uint32_t *puVar7;
  uint8_t *puVar8;
  long lVar9;
  uint64_t uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  uint uVar15;
  uint8_t *puVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ushort uVar22;
  ulong uVar23;
  uint8_t *puVar24;
  uint8_t *puVar25;
  uint8_t *puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint8_t *puVar32;
  uint8_t *puVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  int local_c8;
  int local_c0;
  int local_88;

  puVar7 = (uint32_t *)arg1[7];
  uVar35 = *arg1 - 1;
  uVar12 = ((int)arg1[1] - 5) + uVar35;
  puVar24 = (uint8_t *)(arg1[3] + -1);
  iVar20 = puVar7[0xd];
  lVar11 = arg1[4];
  uVar3 = puVar7[0x1d];
  puVar8 = *(uint8_t **)(puVar7 + 0x10);
  uVar4 = puVar7[0xf];
  lVar36 = *(long *)(puVar7 + 0x18);
  local_88 = (int)puVar24 - (arg2 - (int)lVar11);
  uVar5 = puVar7[0xe];
  puVar32 = puVar8 + -1;
  uVar27 = uVar4 >> 4;
  uVar13 = *(ulong *)(puVar7 + 0x12);
  uVar19 = puVar7[0x14];
  lVar9 = *(long *)(puVar7 + 0x1a);
  uVar6 = puVar7[0x1c];
  uVar28 = uVar27 * 0x10;
  puVar25 = puVar24;
  do {
    if (uVar19 < 0xf) {
      pbVar1 = (byte *)(uVar35 + 1);
      pbVar2 = (byte *)(uVar35 + 2);
      uVar35 = uVar35 + 2;
      bVar14 = (byte)uVar19;
      uVar19 = uVar19 + 0x10;
      uVar13 =
          uVar13 + ((ulong)*pbVar2 << (bVar14 + 8 & 0x3f)) + ((ulong)*pbVar1 << (bVar14 & 0x3f));
    }
    pbVar1 = (byte *)(lVar36 + ((1 << ((byte)uVar6 & 0x1f)) - 1 & uVar13) * 4);
    uVar22 = *(ushort *)(pbVar1 + 2);
    uVar13 = uVar13 >> (pbVar1[1] & 0x3f);
    uVar19 = uVar19 - pbVar1[1];
    bVar14 = *pbVar1;
    uVar21 = (uint)bVar14;
    uVar15 = (uint)bVar14;
    if (bVar14 == 0) {
    LAB_00569ae1:
      puVar25[1] = (char)uVar22;
      puVar26 = puVar25 + 1;
    } else {
      puVar26 = puVar25;
      if ((bVar14 & 0x10) == 0) {
        if ((bVar14 & 0x40) == 0) {
          while (true) {
            pbVar1 = (byte *)(lVar36 +
                              ((ulong)uVar22 + ((1 << ((byte)uVar21 & 0x1f)) - 1 & uVar13)) * 4);
            uVar22 = *(ushort *)(pbVar1 + 2);
            uVar13 = uVar13 >> (pbVar1[1] & 0x3f);
            bVar14 = *pbVar1;
            uVar15 = (uint)bVar14;
            uVar19 = uVar19 - pbVar1[1];
            if (uVar15 == 0)
              break;
            if ((bVar14 & 0x10) != 0)
              goto LAB_00569b90;
            uVar21 = uVar15;
            if ((bVar14 & 0x40) != 0)
              goto LAB_00569e00;
          }
          goto LAB_00569ae1;
        }
      LAB_00569e00:
        if ((uVar15 & 0x20) == 0) {
          arg1[6] = (long)"invalid literal/length code";
          *puVar7 = 0x1b;
        } else {
          *puVar7 = 0xb;
        }
      LAB_00569b00:
        iVar20 = uVar19 + (uVar19 >> 3) * -8;
        lVar36 = uVar35 - (uVar19 >> 3);
        *arg1 = lVar36 + 1;
        arg1[3] = (long)(puVar26 + 1);
        local_c0 = (int)uVar12;
        *(int *)(arg1 + 1) = (local_c0 - (int)lVar36) + 5;
        local_c8 = (int)(puVar24 + ((int)lVar11 - 0x101));
        *(int *)(arg1 + 4) = (local_c8 - (int)puVar26) + 0x101;
        *(ulong *)(puVar7 + 0x12) = (1 << ((byte)iVar20 & 0x1f)) - 1 & uVar13;
        puVar7[0x14] = iVar20;
        return;
      }
    LAB_00569b90:
      uVar21 = (uint)uVar22;
      uVar15 = uVar15 & 0xf;
      if (uVar15 != 0) {
        uVar21 = uVar19;
        if (uVar19 < uVar15) {
          pbVar1 = (byte *)(uVar35 + 1);
          uVar35 = uVar35 + 1;
          uVar21 = uVar19 + 8;
          uVar13 = uVar13 + ((ulong)*pbVar1 << ((byte)uVar19 & 0x3f));
        }
        uVar19 = uVar21 - uVar15;
        uVar21 = (uint)uVar13;
        uVar13 = uVar13 >> (sbyte)uVar15;
        uVar21 = (uint)uVar22 + ((1 << (sbyte)uVar15) - 1U & uVar21);
      }
      if (uVar19 < 0xf) {
        pbVar1 = (byte *)(uVar35 + 1);
        pbVar2 = (byte *)(uVar35 + 2);
        uVar35 = uVar35 + 2;
        bVar14 = (byte)uVar19;
        uVar19 = uVar19 + 0x10;
        uVar13 =
            uVar13 + ((ulong)*pbVar2 << (bVar14 + 8 & 0x3f)) + ((ulong)*pbVar1 << (bVar14 & 0x3f));
      }
      pbVar1 = (byte *)(lVar9 + (ulong)((1 << ((byte)uVar3 & 0x1f)) - 1U & (uint)uVar13) * 4);
      uVar22 = *(ushort *)(pbVar1 + 2);
      uVar13 = uVar13 >> (pbVar1[1] & 0x3f);
      uVar19 = uVar19 - pbVar1[1];
      bVar14 = *pbVar1;
      while ((bVar14 & 0x10) == 0) {
        if ((bVar14 & 0x40) != 0) {
          arg1[6] = (long)"invalid distance code";
          *puVar7 = 0x1b;
          goto LAB_00569b00;
        }
        pbVar1 = (byte *)(lVar9 + ((ulong)uVar22 + ((1 << (bVar14 & 0x1f)) - 1 & uVar13)) * 4);
        uVar22 = *(ushort *)(pbVar1 + 2);
        uVar13 = uVar13 >> (pbVar1[1] & 0x3f);
        uVar19 = uVar19 - pbVar1[1];
        bVar14 = *pbVar1;
      }
      uVar15 = bVar14 & 0xf;
      if (uVar19 < uVar15) {
        uVar29 = uVar19 + 8;
        uVar13 = uVar13 + ((ulong) * (byte *)(uVar35 + 1) << ((byte)uVar19 & 0x3f));
        if (uVar29 < uVar15) {
          pbVar1 = (byte *)(uVar35 + 2);
          uVar19 = uVar19 + 0x10;
          uVar35 = uVar35 + 2;
          uVar13 = uVar13 + ((ulong)*pbVar1 << ((byte)uVar29 & 0x3f));
        } else {
          uVar35 = uVar35 + 1;
          uVar19 = uVar29;
        }
      }
      uVar19 = uVar19 - uVar15;
      uVar29 = (uint)uVar13;
      uVar13 = uVar13 >> (sbyte)uVar15;
      uVar15 = ((1 << (sbyte)uVar15) - 1U & uVar29) + (uint)uVar22;
      uVar23 = (ulong)uVar15;
      uVar29 = (int)puVar25 - local_88;
      lVar34 = (long)puVar25 - uVar23;
      if (uVar29 < uVar15) {
        uVar15 = uVar15 - uVar29;
        if (uVar5 < uVar15) {
          arg1[6] = (long)"invalid distance too far back";
          *puVar7 = 0x1b;
          goto LAB_00569b00;
        }
        if (uVar4 == 0) {
          uVar29 = iVar20 - uVar15;
          puVar16 = puVar32 + uVar29;
          if (uVar15 < uVar21) {
            puVar33 = puVar8 + uVar29;
            uVar21 = uVar21 - uVar15;
            uVar30 = uVar15 >> 4;
            uVar31 = uVar30 * 0x10;
            uVar29 = uVar15;
            if ((uVar30 != 0) &&
                (0xf < uVar15 && (puVar33 + 0x10 < puVar25 + 1 || puVar25 + 0x11 < puVar33))) {
              lVar34 = 0;
              uVar29 = 0;
              do {
                uVar10 = *(uint64_t *)((long)(puVar33 + lVar34) + 8);
                uVar29 = uVar29 + 1;
                *(uint64_t *)(puVar25 + lVar34 + 1) = *(uint64_t *)(puVar33 + lVar34);
                *(uint64_t *)((long)(puVar25 + lVar34 + 1) + 8) = uVar10;
                lVar34 = lVar34 + 0x10;
              } while (uVar29 < uVar30);
              puVar16 = puVar16 + uVar31;
              puVar26 = puVar25 + uVar31;
              uVar29 = uVar15 + uVar30 * -0x10;
              if (uVar15 == uVar31)
                goto LAB_00569de5;
            }
            lVar34 = 0;
            do {
              puVar26[lVar34 + 1] = puVar16[lVar34 + 1];
              lVar34 = lVar34 + 1;
            } while (lVar34 != (ulong)(uVar29 - 1) + 1);
          LAB_00569de5:
            puVar16 = puVar25 + (ulong)(uVar15 - 1) + 1 + -uVar23;
            puVar26 = puVar25 + (ulong)(uVar15 - 1) + 1;
          }
        } else if (uVar4 < uVar15) {
          uVar29 = (iVar20 + uVar4) - uVar15;
          uVar15 = uVar15 - uVar4;
          puVar16 = puVar32 + uVar29;
          if (uVar15 < uVar21) {
            puVar33 = puVar8 + uVar29;
            uVar21 = uVar21 - uVar15;
            uVar30 = uVar15 >> 4;
            uVar31 = uVar30 * 0x10;
            uVar29 = uVar15;
            if ((uVar30 == 0) ||
                (uVar15 < 0x10 || puVar25 + 1 <= puVar33 + 0x10 && puVar33 <= puVar25 + 0x11)) {
            LAB_0056a017:
              lVar34 = 0;
              do {
                puVar26[lVar34 + 1] = puVar16[lVar34 + 1];
                lVar34 = lVar34 + 1;
              } while (lVar34 != (ulong)(uVar29 - 1) + 1);
            } else {
              lVar34 = 0;
              uVar29 = 0;
              do {
                uVar10 = *(uint64_t *)((long)(puVar33 + lVar34) + 8);
                uVar29 = uVar29 + 1;
                *(uint64_t *)(puVar25 + lVar34 + 1) = *(uint64_t *)(puVar33 + lVar34);
                *(uint64_t *)((long)(puVar25 + lVar34 + 1) + 8) = uVar10;
                lVar34 = lVar34 + 0x10;
              } while (uVar29 < uVar30);
              puVar16 = puVar16 + uVar31;
              puVar26 = puVar25 + uVar31;
              uVar29 = uVar15 + uVar30 * -0x10;
              if (uVar15 != uVar31)
                goto LAB_0056a017;
            }
            uVar18 = (ulong)(uVar15 - 1);
            puVar26 = puVar25 + uVar18 + 1;
            puVar16 = puVar32;
            if (uVar4 < uVar21) {
              uVar21 = uVar21 - uVar4;
              puVar16 = puVar26;
              puVar33 = puVar32;
              uVar15 = uVar4;
              if ((uVar27 == 0) || (uVar4 < 0x10 || puVar25 + uVar18 + 2 <= puVar8 + 0x10 &&
                                                        puVar8 <= puVar25 + uVar18 + 0x12)) {
              LAB_0056a0dc:
                lVar34 = 0;
                do {
                  puVar16[lVar34 + 1] = puVar33[lVar34 + 1];
                  lVar34 = lVar34 + 1;
                } while (lVar34 != (ulong)(uVar15 - 1) + 1);
              } else {
                lVar34 = 0;
                uVar15 = 0;
                do {
                  uVar10 = *(uint64_t *)((long)(puVar8 + lVar34) + 8);
                  uVar15 = uVar15 + 1;
                  *(uint64_t *)(puVar25 + lVar34 + uVar18 + 2) = *(uint64_t *)(puVar8 + lVar34);
                  *(uint64_t *)((long)(puVar25 + lVar34 + uVar18 + 2) + 8) = uVar10;
                  lVar34 = lVar34 + 0x10;
                } while (uVar15 < uVar27);
                puVar16 = puVar26 + uVar28;
                puVar33 = puVar32 + uVar28;
                uVar15 = uVar4 + uVar27 * -0x10;
                if (uVar4 != uVar28)
                  goto LAB_0056a0dc;
              }
              puVar16 = puVar26 + (ulong)(uVar4 - 1) + 1 + -uVar23;
              puVar26 = puVar26 + (ulong)(uVar4 - 1) + 1;
            }
          }
        } else {
          puVar16 = puVar32 + (uVar4 - uVar15);
          if (uVar15 < uVar21) {
            puVar33 = puVar8 + (uVar4 - uVar15);
            uVar21 = uVar21 - uVar15;
            uVar30 = uVar15 >> 4;
            uVar31 = uVar30 * 0x10;
            uVar29 = uVar15;
            if ((uVar30 != 0) &&
                (0xf < uVar15 && (puVar33 + 0x10 < puVar25 + 1 || puVar25 + 0x11 < puVar33))) {
              lVar34 = 0;
              uVar29 = 0;
              do {
                uVar10 = *(uint64_t *)((long)(puVar33 + lVar34) + 8);
                uVar29 = uVar29 + 1;
                *(uint64_t *)(puVar25 + lVar34 + 1) = *(uint64_t *)(puVar33 + lVar34);
                *(uint64_t *)((long)(puVar25 + lVar34 + 1) + 8) = uVar10;
                lVar34 = lVar34 + 0x10;
              } while (uVar29 < uVar30);
              puVar16 = puVar16 + uVar31;
              puVar26 = puVar25 + uVar31;
              uVar29 = uVar15 + uVar30 * -0x10;
              if (uVar15 == uVar31)
                goto LAB_00569de5;
            }
            lVar34 = 0;
            do {
              puVar26[lVar34 + 1] = puVar16[lVar34 + 1];
              lVar34 = lVar34 + 1;
            } while (lVar34 != (ulong)(uVar29 - 1) + 1);
            goto LAB_00569de5;
          }
        }
        for (; 2 < uVar21; uVar21 = uVar21 - 3) {
          puVar26[1] = puVar16[1];
          puVar26[2] = puVar16[2];
          puVar26[3] = puVar16[3];
          puVar16 = puVar16 + 3;
          puVar26 = puVar26 + 3;
        }
        if (uVar21 != 0) {
          puVar26[1] = puVar16[1];
          if (uVar21 == 2) {
            puVar26[2] = puVar16[2];
            puVar26 = puVar26 + 2;
          } else {
            puVar26 = puVar26 + 1;
          }
        }
      } else {
        do {
          puVar16 = puVar25;
          lVar17 = lVar34;
          uVar21 = uVar21 - 3;
          puVar26 = puVar16 + 3;
          puVar16[1] = *(uint8_t *)(lVar17 + 1);
          puVar16[2] = *(uint8_t *)(lVar17 + 2);
          puVar16[3] = *(uint8_t *)(lVar17 + 3);
          lVar34 = lVar17 + 3;
          puVar25 = puVar26;
        } while (2 < uVar21);
        if (uVar21 != 0) {
          puVar16[4] = *(uint8_t *)(lVar17 + 4);
          if (uVar21 == 2) {
            puVar16[5] = *(uint8_t *)(lVar17 + 5);
            puVar26 = puVar16 + 5;
          } else {
            puVar26 = puVar16 + 4;
          }
        }
      }
    }
    if ((puVar24 + ((int)lVar11 - 0x101) <= puVar26) || (puVar25 = puVar26, uVar12 <= uVar35))
      goto LAB_00569b00;
  } while (true);
}

/* ======================================================================
 * inflateReset  (Ghidra `inflateReset` @ 0056a400)
 * Signature: uint8_t inflateReset(void)
 * Calls: (none)
 * Called by: `gzread_part_1`, `gzrewind`, `gzseek`, `png_decompress_chunk`, `png_push_read_zTXt`, `png_read_finish_row`, `png_reset_zstream`
 */
uint64_t inflateReset(long arg1)

{
  uint32_t *puVar1;
  uint32_t *puVar2;

  if (arg1 == 0) {
    return 0xfffffffe;
  }
  puVar2 = *(uint32_t **)(arg1 + 0x38);
  if (puVar2 != (uint32_t *)0x0) {
    puVar1 = puVar2 + 0x154;
    *(uint64_t *)(puVar2 + 8) = 0;
    *(uint64_t *)(arg1 + 0x28) = 0;
    *(uint64_t *)(arg1 + 0x10) = 0;
    *(uint64_t *)(arg1 + 0x30) = 0;
    *(uint64_t *)(arg1 + 0x60) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0x8000;
    *(uint64_t *)(puVar2 + 10) = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    *(uint64_t *)(puVar2 + 0x12) = 0;
    puVar2[0x14] = 0;
    *(uint32_t **)(puVar2 + 0x22) = puVar1;
    *(uint32_t **)(puVar2 + 0x1a) = puVar1;
    *(uint32_t **)(puVar2 + 0x18) = puVar1;
    return 0;
  }
  return 0xfffffffe;
}

/* ======================================================================
 * inflatePrime  (Ghidra `inflatePrime` @ 0056a4b0)
 * Signature: uint8_t inflatePrime(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t inflatePrime(long arg1, int arg2, uint arg3)

{
  uint uVar1;
  int iVar2;
  long lVar3;

  if (arg1 == 0) {
    return 0xfffffffe;
  }
  lVar3 = *(long *)(arg1 + 0x38);
  if ((lVar3 != 0) && (arg2 < 0x11)) {
    iVar2 = *(int *)(lVar3 + 0x50);
    uVar1 = arg2 + iVar2;
    if (uVar1 < 0x21) {
      *(uint *)(lVar3 + 0x50) = uVar1;
      *(long *)(lVar3 + 0x48) =
          *(long *)(lVar3 + 0x48) +
          (long)(int)(((int)(1L << ((byte)arg2 & 0x3f)) - 1U & arg3) << ((byte)iVar2 & 0x1f));
      return 0;
    }
  }
  return 0xfffffffe;
}

/* ======================================================================
 * inflateInit2  (Ghidra `inflateInit2_` @ 0056a510)
 * Signature: uint8_t inflateInit2_(void)
 * Calls: `zcalloc`, `zcfree`
 * Called by: (none)
 */
uint64_t inflateInit2_(long arg1, uint arg2, char *arg3, int arg4)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  long lVar3;

  if (((arg3 == (char *)0x0) || (arg4 != 0x70)) || (*arg3 != '1')) {
    return 0xfffffffa;
  }
  if (arg1 != 0) {
    *(uint64_t *)(arg1 + 0x30) = 0;
    if (*(long *)(arg1 + 0x40) == 0) {
      *(code **)(arg1 + 0x40) = zcalloc;
      *(uint64_t *)(arg1 + 0x50) = 0;
    }
    if (*(long *)(arg1 + 0x48) == 0) {
      *(code **)(arg1 + 0x48) = zcfree;
    }
    lVar3 = (**(code **)(arg1 + 0x40))(*(uint64_t *)(arg1 + 0x50), 1, 0x2550);
    if (lVar3 == 0) {
      return 0xfffffffc;
    }
    *(long *)(arg1 + 0x38) = lVar3;
    if ((int)arg2 < 0) {
      *(uint32_t *)(lVar3 + 8) = 0;
      arg2 = -arg2;
    } else {
      *(int *)(lVar3 + 8) = ((int)arg2 >> 4) + 1;
      if ((int)arg2 < 0x30) {
        arg2 = arg2 & 0xf;
      }
    }
    if (7 < arg2 - 8) {
      (**(code **)(arg1 + 0x48))(*(uint64_t *)(arg1 + 0x50), lVar3);
      *(uint64_t *)(arg1 + 0x38) = 0;
      return 0xfffffffe;
    }
    *(uint *)(lVar3 + 0x30) = arg2;
    *(uint64_t *)(lVar3 + 0x40) = 0;
    puVar2 = *(uint32_t **)(arg1 + 0x38);
    if (puVar2 != (uint32_t *)0x0) {
      puVar1 = puVar2 + 0x154;
      *(uint64_t *)(puVar2 + 8) = 0;
      *(uint64_t *)(arg1 + 0x28) = 0;
      *(uint64_t *)(arg1 + 0x10) = 0;
      *(uint64_t *)(arg1 + 0x30) = 0;
      *(uint64_t *)(arg1 + 0x60) = 1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[3] = 0;
      puVar2[5] = 0x8000;
      *(uint64_t *)(puVar2 + 10) = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      *(uint64_t *)(puVar2 + 0x12) = 0;
      puVar2[0x14] = 0;
      *(uint32_t **)(puVar2 + 0x22) = puVar1;
      *(uint32_t **)(puVar2 + 0x1a) = puVar1;
      *(uint32_t **)(puVar2 + 0x18) = puVar1;
      return 0;
    }
  }
  return 0xfffffffe;
}

/* ======================================================================
 * inflateInit  (Ghidra `inflateInit_` @ 0056a6c0)
 * Signature: uint8_t inflateInit_(void)
 * Calls: `zcalloc`, `zcfree`
 * Called by: (none)
 */
uint64_t inflateInit_(long arg1, char *arg2, int arg3)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  long lVar3;

  if (((arg2 == (char *)0x0) || (arg3 != 0x70)) || (*arg2 != '1')) {
    return 0xfffffffa;
  }
  if (arg1 != 0) {
    *(uint64_t *)(arg1 + 0x30) = 0;
    if (*(long *)(arg1 + 0x40) == 0) {
      *(code **)(arg1 + 0x40) = zcalloc;
      *(uint64_t *)(arg1 + 0x50) = 0;
      lVar3 = *(long *)(arg1 + 0x48);
    } else {
      lVar3 = *(long *)(arg1 + 0x48);
    }
    if (lVar3 == 0) {
      *(code **)(arg1 + 0x48) = zcfree;
    }
    lVar3 = (**(code **)(arg1 + 0x40))(*(uint64_t *)(arg1 + 0x50), 1, 0x2550);
    if (lVar3 == 0) {
      return 0xfffffffc;
    }
    *(long *)(arg1 + 0x38) = lVar3;
    *(uint32_t *)(lVar3 + 8) = 1;
    *(uint32_t *)(lVar3 + 0x30) = 0xf;
    *(uint64_t *)(lVar3 + 0x40) = 0;
    puVar2 = *(uint32_t **)(arg1 + 0x38);
    if (puVar2 != (uint32_t *)0x0) {
      puVar1 = puVar2 + 0x154;
      *(uint64_t *)(puVar2 + 8) = 0;
      *(uint64_t *)(arg1 + 0x28) = 0;
      *(uint64_t *)(arg1 + 0x10) = 0;
      *(uint64_t *)(arg1 + 0x30) = 0;
      *(uint64_t *)(arg1 + 0x60) = 1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[3] = 0;
      puVar2[5] = 0x8000;
      *(uint64_t *)(puVar2 + 10) = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      *(uint64_t *)(puVar2 + 0x12) = 0;
      puVar2[0x14] = 0;
      *(uint32_t **)(puVar2 + 0x22) = puVar1;
      *(uint32_t **)(puVar2 + 0x1a) = puVar1;
      *(uint32_t **)(puVar2 + 0x18) = puVar1;
      return 0;
    }
  }
  return 0xfffffffe;
}

/* ======================================================================
 * inflate  (Ghidra `inflate` @ 0056a820)
 * Signature: uint8_t inflate(void)
 * Calls: `adler32`, `crc32`, `inflate_fast`, `inflate_table`, `memcpy`, `updatewindow`
 * Called by: `gzread_part_1`, `png_decompress_chunk`, `png_process_IDAT_data`, `png_push_read_zTXt`, `png_read_finish_row`, `png_read_row`, `uncompress`
 */
/* WARNING: Type propagation algorithm not settling */

int inflate(uint64_t *arg1, int arg2)

{
  uint *puVar1;
  byte *pbVar2;
  ushort uVar3;
  ushort uVar4;
  uint *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint64_t uVar11;
  byte bVar12;
  uint16_t uVar13;
  uint uVar14;
  uint8_t *puVar15;
  uint uVar16;
  uint uVar17;
  byte *__src;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint8_t *puVar21;
  uint uVar22;
  uint uVar23;
  ulong __n;
  uint8_t *__dest;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  uint local_80;
  uint local_58;
  char local_48;
  uint8_t local_47;
  uint8_t local_46;
  uint8_t local_45;

  if ((((arg1 != (uint64_t *)0x0) && (puVar5 = (uint *)arg1[7], puVar5 != (uint *)0x0)) &&
       (__dest = (uint8_t *)arg1[3], __dest != (uint8_t *)0x0)) &&
      ((__src = (byte *)*arg1, __src != (byte *)0x0 || (*(int *)(arg1 + 1) == 0)))) {
    uVar10 = (ulong)*puVar5;
    if (*puVar5 == 0xb) {
      *puVar5 = 0xc;
      uVar10 = 0xc;
      __dest = (uint8_t *)arg1[3];
      __src = (byte *)*arg1;
    }
    uVar17 = *(uint *)(arg1 + 1);
    uVar24 = *(uint *)(arg1 + 4);
    iVar8 = 0;
    uVar26 = *(ulong *)(puVar5 + 0x12);
    uVar14 = puVar5[0x14];
    uVar25 = uVar17;
    local_80 = uVar24;
  LAB_0056a887:
    if ((uint)uVar10 < 0x1d) {
      puVar1 = puVar5 + 0x154;
    LAB_0056a8bc:
      uVar19 = uVar25;
      switch ((&switchD_0056a8be__switchdataD_005da0c0)[uVar10]) {
      case (uint8_t *)0x56a8c8:
        for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
          uVar19 = 0;
          if (uVar25 == 0)
            goto LAB_0056b1e0;
          bVar6 = *__src;
          uVar25 = uVar25 - 1;
          __src = __src + 1;
          uVar26 = uVar26 + ((ulong)bVar6 << ((byte)uVar14 & 0x3f));
        }
        uVar14 = 0;
        lVar9 = (uVar26 & 0xff) * 0x1000000 + (ulong)((uint)uVar26 & 0xff00) * 0x100 +
                (ulong)((uint)(uVar26 >> 0x18) & 0xff) + (ulong)((uint)(uVar26 >> 8) & 0xff00);
        *(long *)(puVar5 + 6) = lVar9;
        arg1[0xc] = lVar9;
        uVar26 = 0;
        *puVar5 = 10;
      case (uint8_t *)0x56a94e:
        if (puVar5[3] == 0) {
          arg1[3] = __dest;
          *(uint *)(arg1 + 4) = uVar24;
          *arg1 = __src;
          *(uint *)(arg1 + 1) = uVar25;
          *(ulong *)(puVar5 + 0x12) = uVar26;
          puVar5[0x14] = uVar14;
          return 2;
        }
        uVar11 = adler32(0, 0, 0);
        *(uint64_t *)(puVar5 + 6) = uVar11;
        arg1[0xc] = uVar11;
        *puVar5 = 0xb;
      switchD_0056a8be_caseD_56a994:
        uVar19 = uVar25;
        if (arg2 != 5) {
        switchD_0056a8be_caseD_56a99f:
          bVar6 = (byte)uVar14;
          if (puVar5[1] == 0) {
            if (uVar14 < 3) {
              uVar19 = uVar25;
              if (uVar25 == 0)
                break;
              bVar12 = *__src;
              uVar25 = uVar25 - 1;
              __src = __src + 1;
              uVar14 = uVar14 + 8;
              uVar26 = uVar26 + ((ulong)bVar12 << (bVar6 & 0x3f));
            }
            puVar5[1] = (uint)uVar26 & 1;
            uVar19 = (uint)(uVar26 >> 1) & 3;
            if (uVar19 == 2) {
              *puVar5 = 0xf;
              uVar10 = 0xf;
            } else if (uVar19 == 3) {
              arg1[6] = "invalid block type";
              uVar10 = 0x1b;
              *puVar5 = 0x1b;
            } else if (uVar19 == 1) {
              *(uint8_t **)(puVar5 + 0x18) = lenfix_2883;
              puVar5[0x1c] = 9;
              uVar10 = 0x12;
              *(uint8_t **)(puVar5 + 0x1a) = distfix_2884;
              puVar5[0x1d] = 5;
              *puVar5 = 0x12;
            } else {
              *puVar5 = 0xd;
              uVar10 = 0xd;
            }
            uVar26 = uVar26 >> 3;
            uVar14 = uVar14 - 3;
            goto LAB_0056a887;
          }
          *puVar5 = 0x18;
          uVar14 = uVar14 & 0xfffffff8;
          uVar10 = 0x18;
          uVar26 = uVar26 >> (bVar6 & 7);
          goto LAB_0056a8bc;
        }
        break;
      case (uint8_t *)0x56a994:
        goto switchD_0056a8be_caseD_56a994;
      case (uint8_t *)0x56a99f:
        goto switchD_0056a8be_caseD_56a99f;
      case (uint8_t *)0x56aa60:
        uVar16 = puVar5[0x17];
        goto LAB_0056aa64;
      case (uint8_t *)0x56aac7:
        goto switchD_0056a8be_caseD_56aac7;
      case (uint8_t *)0x56aca0:
        goto switchD_0056a8be_caseD_56aca0;
      case (uint8_t *)0x56ad85:
        goto LAB_0056a898;
      case (uint8_t *)0x56ada0:
        goto switchD_0056a8be_caseD_56ada0;
      case (uint8_t *)0x56afb8:
        uVar16 = puVar5[4];
        goto joined_r0x0056afbf;
      case (uint8_t *)0x56b130:
        uVar16 = puVar5[4];
        goto LAB_0056b03d;
      case (uint8_t *)0x56b140:
        uVar16 = puVar5[4];
        goto LAB_0056b0bd;
      case (uint8_t *)0x56b150:
        uVar19 = puVar5[2];
      LAB_0056b154:
        if ((uVar19 == 0) || (puVar5[4] == 0)) {
        LAB_0056c2e7:
          *puVar5 = 0x1a;
          iVar8 = 1;
          uVar19 = uVar25;
          break;
        }
        for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
          uVar19 = 0;
          if (uVar25 == 0)
            goto LAB_0056b1e0;
          bVar6 = *__src;
          uVar25 = uVar25 - 1;
          __src = __src + 1;
          uVar26 = uVar26 + ((ulong)bVar6 << ((byte)uVar14 & 0x3f));
        }
        if (puVar5[8] == uVar26) {
          uVar14 = 0;
          uVar26 = 0;
          goto LAB_0056c2e7;
        }
        arg1[6] = "incorrect length check";
        *puVar5 = 0x1b;
        goto LAB_0056b1c2;
      case (uint8_t *)0x56b1d0:
        iVar8 = 1;
        break;
      case (uint8_t *)0x56b2d8:
        uVar16 = puVar5[0x21];
        goto LAB_0056b2e3;
      case (uint8_t *)0x56b3e8:
        iVar8 = -3;
        break;
      case (uint8_t *)0x56b3f8:
        uVar26 = uVar26 >> ((byte)uVar14 & 7);
        for (uVar14 = uVar14 & 0xfffffff8; uVar14 < 0x20; uVar14 = uVar14 + 8) {
          uVar19 = 0;
          if (uVar25 == 0)
            goto LAB_0056b1e0;
          bVar6 = *__src;
          uVar25 = uVar25 - 1;
          __src = __src + 1;
          uVar26 = uVar26 + ((ulong)bVar6 << ((byte)uVar14 & 0x3f));
        }
        uVar10 = uVar26 & 0xffff;
        if (uVar10 == (uVar26 >> 0x10 ^ 0xffff)) {
          puVar5[0x15] = (uint)uVar10;
          *puVar5 = 0xe;
          uVar14 = 0;
          uVar26 = 0;
          goto LAB_0056b47c;
        }
        arg1[6] = "invalid stored block lengths";
        uVar10 = 0x1b;
        *puVar5 = 0x1b;
        goto LAB_0056a8bc;
      case (uint8_t *)0x56b478:
        uVar10 = (ulong)puVar5[0x15];
      LAB_0056b47c:
        uVar16 = (uint)uVar10;
        if (uVar16 == 0) {
        LAB_0056bda8:
          *puVar5 = 0xb;
          uVar10 = 0xb;
          goto LAB_0056a8bc;
        }
        if (uVar25 <= uVar16) {
          uVar16 = uVar25;
        }
        if (uVar24 < uVar16) {
          uVar16 = uVar24;
        }
        uVar19 = uVar25;
        if (uVar16 != 0) {
          __n = (ulong)uVar16;
          memcpy(__dest, __src, __n);
          puVar5[0x15] = puVar5[0x15] - uVar16;
          uVar10 = (ulong)*puVar5;
          uVar25 = uVar25 - uVar16;
          __src = __src + __n;
          uVar24 = uVar24 - uVar16;
          __dest = __dest + __n;
          goto LAB_0056a887;
        }
        break;
      case (uint8_t *)0x56b4f8:
        for (; uVar14 < 0xe; uVar14 = uVar14 + 8) {
          uVar19 = 0;
          if (uVar25 == 0)
            goto LAB_0056b1e0;
          bVar6 = *__src;
          uVar25 = uVar25 - 1;
          __src = __src + 1;
          uVar26 = uVar26 + ((ulong)bVar6 << ((byte)uVar14 & 0x3f));
        }
        uVar19 = ((uint)uVar26 & 0x1f) + 0x101;
        uVar20 = ((uint)(uVar26 >> 5) & 0x1f) + 1;
        uVar16 = ((uint)(uVar26 >> 10) & 0xf) + 4;
        uVar26 = uVar26 >> 0xe;
        uVar14 = uVar14 - 0xe;
        puVar5[0x1f] = uVar19;
        puVar5[0x20] = uVar20;
        puVar5[0x1e] = uVar16;
        if ((uVar19 < 0x11f) && (uVar20 < 0x1f)) {
          puVar5[0x21] = 0;
          *puVar5 = 0x10;
          uVar20 = 0;
          uVar19 = uVar25;
        LAB_0056b5b1:
          do {
            if (uVar14 < 3) {
              if (uVar19 == 0)
                goto LAB_0056b1e0;
              bVar6 = *__src;
              uVar19 = uVar19 - 1;
              __src = __src + 1;
              bVar12 = (byte)uVar14;
              uVar14 = uVar14 + 8;
              uVar26 = uVar26 + ((ulong)bVar6 << (bVar12 & 0x3f));
            }
            uVar10 = (ulong)uVar20;
            uVar20 = uVar20 + 1;
            uVar3 = (ushort)uVar26;
            uVar26 = uVar26 >> 3;
            uVar14 = uVar14 - 3;
            *(ushort *)((long)puVar5 + (ulong)(ushort)(&order_2912)[uVar10] * 2 + 0x90) = uVar3 & 7;
            puVar5[0x21] = uVar20;
            uVar25 = uVar19;
          } while (uVar20 < uVar16);
          goto LAB_0056b604;
        }
        arg1[6] = "too many length or distance symbols";
        uVar10 = 0x1b;
        *puVar5 = 0x1b;
        goto LAB_0056a8bc;
      case (uint8_t *)0x56b5a0:
        goto switchD_0056a8be_caseD_56b5a0;
      case (uint8_t *)0x56b6b0:
        if (uVar24 == 0)
          break;
        uVar24 = uVar24 - 1;
        *__dest = (char)puVar5[0x15];
        __dest = __dest + 1;
        goto LAB_0056b6c8;
      case (uint8_t *)0x56b6e0:
        uVar19 = 0;
        if (puVar5[2] == 0) {
        LAB_0056bdd0:
          *puVar5 = 0x19;
          goto LAB_0056b154;
        }
        for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
          uVar19 = 0;
          if (uVar25 == 0)
            goto LAB_0056b1e0;
          bVar6 = *__src;
          uVar25 = uVar25 - 1;
          __src = __src + 1;
          uVar26 = uVar26 + ((ulong)bVar6 << ((byte)uVar14 & 0x3f));
        }
        uVar10 = (ulong)(local_80 - uVar24);
        arg1[5] = arg1[5] + uVar10;
        *(ulong *)(puVar5 + 8) = *(long *)(puVar5 + 8) + uVar10;
        if (local_80 - uVar24 != 0) {
          if (puVar5[4] == 0) {
            uVar11 = adler32(*(uint64_t *)(puVar5 + 6), (long)__dest - uVar10);
          } else {
            uVar11 = crc32();
          }
          *(uint64_t *)(puVar5 + 6) = uVar11;
          arg1[0xc] = uVar11;
        }
        uVar10 = uVar26;
        if (puVar5[4] == 0) {
          uVar10 = (uVar26 & 0xff) * 0x1000000 + (ulong)((uint)(uVar26 >> 0x18) & 0xff) +
                   (ulong)((uint)(uVar26 >> 8) & 0xff00) + (ulong)((uint)uVar26 & 0xff00) * 0x100;
        }
        local_80 = uVar24;
        if (uVar10 == *(ulong *)(puVar5 + 6)) {
          uVar19 = puVar5[2];
          uVar14 = 0;
          uVar26 = 0;
          goto LAB_0056bdd0;
        }
        arg1[6] = "incorrect data check";
        uVar10 = 0x1b;
        *puVar5 = 0x1b;
        goto LAB_0056a8bc;
      case (uint8_t *)0x56b7f0:
        uVar16 = puVar5[0x17];
        goto LAB_0056b7f4;
      case (uint8_t *)0x56b860:
        if (uVar14 < 0x20)
          goto LAB_0056b865;
      LAB_0056b89b:
        if (*(long *)(puVar5 + 10) != 0) {
          *(ulong *)(*(long *)(puVar5 + 10) + 8) = uVar26;
        }
        if ((*(byte *)((long)puVar5 + 0x11) & 2) != 0) {
          local_48 = (char)uVar26;
          local_47 = (uint8_t)(uVar26 >> 8);
          local_46 = (uint8_t)(uVar26 >> 0x10);
          local_45 = (uint8_t)(uVar26 >> 0x18);
          uVar11 = crc32(*(uint64_t *)(puVar5 + 6), &local_48, 4);
          *(uint64_t *)(puVar5 + 6) = uVar11;
        }
        *puVar5 = 3;
        uVar26 = 0;
        uVar14 = 0;
      LAB_0056b8cd:
        uVar19 = 0;
        if (uVar25 != 0) {
          while (true) {
            bVar6 = *__src;
            uVar19 = uVar25 - 1;
            __src = __src + 1;
            bVar12 = (byte)uVar14;
            uVar14 = uVar14 + 8;
            uVar26 = uVar26 + ((ulong)bVar6 << (bVar12 & 0x3f));
            uVar25 = uVar19;
            if (0xf < uVar14)
              break;
            if (uVar19 == 0)
              goto LAB_0056b1e0;
          }
          goto LAB_0056b903;
        }
        break;
      case (uint8_t *)0x56b8c8:
        if (uVar14 < 0x10)
          goto LAB_0056b8cd;
      LAB_0056b903:
        if (*(long *)(puVar5 + 10) != 0) {
          *(uint *)(*(long *)(puVar5 + 10) + 0x10) = (uint)uVar26 & 0xff;
          *(int *)(*(long *)(puVar5 + 10) + 0x14) = (int)(uVar26 >> 8);
        }
        uVar16 = puVar5[4];
        if ((uVar16 & 0x200) != 0) {
          local_47 = (uint8_t)(uVar26 >> 8);
          local_48 = (char)uVar26;
          uVar11 = crc32(*(uint64_t *)(puVar5 + 6), &local_48, 2);
          *(uint64_t *)(puVar5 + 6) = uVar11;
          uVar16 = puVar5[4];
        }
        *puVar5 = 4;
        uVar14 = 0;
        uVar26 = 0;
        goto LAB_0056b944;
      case (uint8_t *)0x56b940:
        uVar16 = puVar5[4];
      LAB_0056b944:
        if ((uVar16 & 0x400) == 0) {
          uVar20 = 0;
          if (*(long *)(puVar5 + 10) != 0) {
            *(uint64_t *)(*(long *)(puVar5 + 10) + 0x18) = 0;
            uVar16 = puVar5[4];
            uVar20 = uVar16 & 0x400;
          }
        } else {
          for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
            uVar19 = 0;
            if (uVar25 == 0)
              goto LAB_0056b1e0;
            bVar6 = *__src;
            uVar25 = uVar25 - 1;
            __src = __src + 1;
            uVar26 = uVar26 + ((ulong)bVar6 << ((byte)uVar14 & 0x3f));
          }
          puVar5[0x15] = (uint)uVar26;
          if (*(long *)(puVar5 + 10) != 0) {
            *(uint *)(*(long *)(puVar5 + 10) + 0x20) = (uint)uVar26;
            uVar16 = puVar5[4];
          }
          if ((uVar16 & 0x200) == 0) {
            uVar14 = 0;
            uVar26 = 0;
            uVar20 = uVar16 & 0x400;
          } else {
            local_48 = (char)uVar26;
            local_47 = (uint8_t)(uVar26 >> 8);
            uVar14 = 0;
            uVar26 = 0;
            uVar11 = crc32(*(uint64_t *)(puVar5 + 6), &local_48, 2);
            *(uint64_t *)(puVar5 + 6) = uVar11;
            uVar16 = puVar5[4];
            uVar20 = uVar16 & 0x400;
          }
        }
        *puVar5 = 5;
      LAB_0056b9cc:
        uVar19 = uVar25;
        if (uVar20 != 0) {
          uVar20 = puVar5[0x15];
          uVar22 = uVar20;
          if (uVar25 <= uVar20) {
            uVar22 = uVar25;
          }
          if (uVar22 != 0) {
            lVar9 = *(long *)(puVar5 + 10);
            if ((lVar9 != 0) && (*(long *)(lVar9 + 0x18) != 0)) {
              uVar20 = *(int *)(lVar9 + 0x20) - uVar20;
              uVar10 = (ulong)uVar22;
              if (*(uint *)(lVar9 + 0x24) < uVar22 + uVar20) {
                uVar10 = (ulong)(*(uint *)(lVar9 + 0x24) - uVar20);
              }
              memcpy((void *)(*(long *)(lVar9 + 0x18) + (ulong)uVar20), __src, uVar10);
              uVar16 = puVar5[4];
            }
            if ((uVar16 & 0x200) != 0) {
              uVar11 = crc32(*(uint64_t *)(puVar5 + 6), __src, uVar22);
              *(uint64_t *)(puVar5 + 6) = uVar11;
            }
            __src = __src + uVar22;
            uVar19 = uVar25 - uVar22;
            uVar20 = puVar5[0x15] - uVar22;
            puVar5[0x15] = uVar20;
          }
          if (uVar20 != 0)
            break;
          uVar16 = puVar5[4];
        }
        puVar5[0x15] = 0;
        *puVar5 = 6;
      joined_r0x0056afbf:
        if ((uVar16 & 0x800) == 0) {
          if (*(long *)(puVar5 + 10) != 0) {
            *(uint64_t *)(*(long *)(puVar5 + 10) + 0x28) = 0;
          LAB_0056b029:
            uVar16 = puVar5[4];
          }
          puVar5[0x15] = 0;
          *puVar5 = 7;
        LAB_0056b03d:
          if ((uVar16 & 0x1000) == 0) {
            uVar25 = uVar19;
            if (*(long *)(puVar5 + 10) != 0) {
              *(uint64_t *)(*(long *)(puVar5 + 10) + 0x38) = 0;
            LAB_0056b0b1:
              uVar16 = puVar5[4];
              uVar25 = uVar19;
            }
            *puVar5 = 8;
          LAB_0056b0bd:
            if ((uVar16 & 0x200) != 0) {
              for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
                uVar19 = 0;
                if (uVar25 == 0)
                  goto LAB_0056b1e0;
                bVar6 = *__src;
                uVar25 = uVar25 - 1;
                __src = __src + 1;
                uVar26 = uVar26 + ((ulong)bVar6 << ((byte)uVar14 & 0x3f));
              }
              if ((ushort)puVar5[6] != uVar26) {
                arg1[6] = "header crc mismatch";
                uVar10 = 0x1b;
                *puVar5 = 0x1b;
                goto LAB_0056a8bc;
              }
              uVar14 = 0;
              uVar26 = 0;
            }
            if (*(long *)(puVar5 + 10) != 0) {
              *(uint *)(*(long *)(puVar5 + 10) + 0x44) = (int)uVar16 >> 9 & 1;
              *(uint32_t *)(*(long *)(puVar5 + 10) + 0x48) = 1;
            }
            uVar11 = crc32(0, 0, 0);
            *(uint64_t *)(puVar5 + 6) = uVar11;
            arg1[0xc] = uVar11;
            uVar10 = 0xb;
            *puVar5 = 0xb;
            goto LAB_0056a8bc;
          }
          if (uVar19 != 0) {
            uVar10 = 0;
            do {
              uVar25 = (int)uVar10 + 1;
              bVar6 = __src[uVar10];
              lVar9 = *(long *)(puVar5 + 10);
              if (((lVar9 != 0) && (*(long *)(lVar9 + 0x38) != 0)) &&
                  (uVar16 = puVar5[0x15], uVar16 < *(uint *)(lVar9 + 0x40))) {
                *(byte *)(*(long *)(lVar9 + 0x38) + (ulong)uVar16) = bVar6;
                puVar5[0x15] = uVar16 + 1;
              }
            } while ((bVar6 != 0) && (uVar10 = (ulong)uVar25, uVar25 < uVar19));
            if ((*(byte *)((long)puVar5 + 0x11) & 2) != 0) {
              uVar11 = crc32(*(uint64_t *)(puVar5 + 6), __src, (ulong)uVar25);
              *(uint64_t *)(puVar5 + 6) = uVar11;
            }
            uVar19 = uVar19 - uVar25;
            __src = __src + uVar25;
            if (bVar6 == 0)
              goto LAB_0056b0b1;
          }
        } else if (uVar19 != 0) {
          uVar10 = 0;
          do {
            uVar25 = (int)uVar10 + 1;
            bVar6 = __src[uVar10];
            lVar9 = *(long *)(puVar5 + 10);
            if (((lVar9 != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
                (uVar16 = puVar5[0x15], uVar16 < *(uint *)(lVar9 + 0x30))) {
              *(byte *)(*(long *)(lVar9 + 0x28) + (ulong)uVar16) = bVar6;
              puVar5[0x15] = uVar16 + 1;
            }
          } while ((bVar6 != 0) && (uVar10 = (ulong)uVar25, uVar25 < uVar19));
          if ((*(byte *)((long)puVar5 + 0x11) & 2) != 0) {
            uVar11 = crc32(*(uint64_t *)(puVar5 + 6), __src, (ulong)uVar25);
            *(uint64_t *)(puVar5 + 6) = uVar11;
          }
          uVar19 = uVar19 - uVar25;
          __src = __src + uVar25;
          if (bVar6 == 0)
            goto LAB_0056b029;
        }
        break;
      case (uint8_t *)0x56b9c0:
        uVar16 = puVar5[4];
        uVar20 = uVar16 & 0x400;
        goto LAB_0056b9cc;
      case (uint8_t *)0x56bac0:
        uVar16 = puVar5[2];
        if (uVar16 == 0) {
          *puVar5 = 0xc;
          uVar10 = 0xc;
        } else {
          for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
            uVar19 = 0;
            if (uVar25 == 0)
              goto LAB_0056b1e0;
            bVar6 = *__src;
            uVar25 = uVar25 - 1;
            __src = __src + 1;
            uVar26 = uVar26 + ((ulong)bVar6 << ((byte)uVar14 & 0x3f));
          }
          if ((uVar26 == 0x8b1f) && ((uVar16 & 2) != 0)) {
            uVar14 = 0;
            uVar26 = 0;
            uVar11 = crc32(0, 0, 0);
            *(uint64_t *)(puVar5 + 6) = uVar11;
            local_48 = '\x1f';
            local_47 = 0x8b;
            uVar11 = crc32(uVar11, &local_48, 2);
            *puVar5 = 1;
            *(uint64_t *)(puVar5 + 6) = uVar11;
            uVar10 = 1;
          } else {
            puVar5[4] = 0;
            if (*(long *)(puVar5 + 10) != 0) {
              *(uint32_t *)(*(long *)(puVar5 + 10) + 0x48) = 0xffffffff;
              uVar16 = puVar5[2];
            }
            if (((uVar16 & 1) == 0) ||
                (uVar10 = (ulong)(((uint)uVar26 & 0xff) << 8) + (uVar26 >> 8),
                 uVar10 != (uVar10 / 0x1f) * 0x1f)) {
              arg1[6] = "incorrect header check";
              uVar10 = 0x1b;
              *puVar5 = 0x1b;
            } else {
              if (((uint)uVar26 & 0xf) != 8)
                goto LAB_0056bc0a;
              uVar26 = uVar26 >> 4;
              uVar19 = ((uint)uVar26 & 0xf) + 8;
              if (uVar19 <= puVar5[0xc]) {
                uVar10 = uVar26 & 0x200;
                puVar5[5] = 1 << (sbyte)uVar19;
                uVar11 = adler32(0, 0, 0);
                *(uint64_t *)(puVar5 + 6) = uVar11;
                arg1[0xc] = uVar11;
                uVar14 = 0;
                uVar26 = 0;
                uVar19 = (-(uint)(uVar10 == 0) & 2) + 9;
                uVar10 = (ulong)uVar19;
                *puVar5 = uVar19;
                goto LAB_0056a887;
              }
              arg1[6] = "invalid window size";
              uVar14 = uVar14 - 4;
              *puVar5 = 0x1b;
              uVar10 = 0x1b;
            }
          }
        }
        goto LAB_0056a8bc;
      case (uint8_t *)0x56bbc0:
        for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
          uVar19 = 0;
          if (uVar25 == 0)
            goto LAB_0056b1e0;
          bVar6 = *__src;
          uVar25 = uVar25 - 1;
          __src = __src + 1;
          uVar26 = uVar26 + ((ulong)bVar6 << ((byte)uVar14 & 0x3f));
        }
        puVar5[4] = (uint)uVar26;
        if ((char)uVar26 == '\b') {
          if ((uVar26 & 0xe000) == 0) {
            if (*(uint **)(puVar5 + 10) != (uint *)0x0) {
              **(uint **)(puVar5 + 10) = (uint)(uVar26 >> 8) & 1;
            }
            if ((*(byte *)((long)puVar5 + 0x11) & 2) != 0) {
              local_47 = (uint8_t)(uVar26 >> 8);
              local_48 = (char)uVar26;
              uVar11 = crc32(*(uint64_t *)(puVar5 + 6), &local_48, 2);
              *(uint64_t *)(puVar5 + 6) = uVar11;
            }
            *puVar5 = 2;
            uVar14 = 0;
            uVar26 = 0;
          LAB_0056b865:
            uVar19 = 0;
            if (uVar25 != 0) {
              while (true) {
                bVar6 = *__src;
                uVar25 = uVar25 - 1;
                __src = __src + 1;
                bVar12 = (byte)uVar14;
                uVar14 = uVar14 + 8;
                uVar26 = uVar26 + ((ulong)bVar6 << (bVar12 & 0x3f));
                if (0x1f < uVar14)
                  break;
                uVar19 = 0;
                if (uVar25 == 0)
                  goto LAB_0056b1e0;
              }
              goto LAB_0056b89b;
            }
            break;
          }
          arg1[6] = "unknown header flags set";
          uVar10 = 0x1b;
          *puVar5 = 0x1b;
        } else {
        LAB_0056bc0a:
          arg1[6] = "unknown compression method";
          uVar10 = 0x1b;
          *puVar5 = 0x1b;
        }
        goto LAB_0056a8bc;
      }
    LAB_0056b1e0:
      arg1[3] = __dest;
      *(uint *)(arg1 + 4) = uVar24;
      *arg1 = __src;
      *(uint *)(arg1 + 1) = uVar19;
      *(ulong *)(puVar5 + 0x12) = uVar26;
      puVar5[0x14] = uVar14;
      if ((puVar5[0xd] != 0) ||
          ((uVar24 = *(uint *)(arg1 + 4), *puVar5 < 0x18 && (uVar24 != local_80)))) {
        iVar7 = updatewindow(arg1, local_80);
        if (iVar7 != 0) {
          *puVar5 = 0x1c;
        LAB_0056a898:
          return -4;
        }
        uVar24 = *(uint *)(arg1 + 4);
      }
      uVar17 = uVar17 - *(int *)(arg1 + 1);
      local_80 = local_80 - uVar24;
      arg1[2] = arg1[2] + (ulong)uVar17;
      uVar10 = (ulong)local_80;
      arg1[5] = arg1[5] + uVar10;
      *(ulong *)(puVar5 + 8) = *(long *)(puVar5 + 8) + uVar10;
      if ((local_80 != 0) && (puVar5[2] != 0)) {
        if (puVar5[4] == 0) {
          uVar11 = adler32(*(uint64_t *)(puVar5 + 6), arg1[3] - uVar10, local_80);
        } else {
          uVar11 = crc32(*(uint64_t *)(puVar5 + 6), arg1[3] - uVar10, local_80);
        }
        *(uint64_t *)(puVar5 + 6) = uVar11;
        arg1[0xc] = uVar11;
      }
      iVar7 = 0x80;
      if (*puVar5 != 0xb) {
        iVar7 = 0;
      }
      *(uint *)(arg1 + 0xb) = (~-(uint)(puVar5[1] == 0) & 0x40) + puVar5[0x14] + iVar7;
      if ((local_80 != 0 || uVar17 != 0) && (arg2 != 4)) {
        return iVar8;
      }
      if (iVar8 == 0) {
        return -5;
      }
      return iVar8;
    }
  }
  return -2;
switchD_0056a8be_caseD_56b5a0:
  uVar16 = puVar5[0x1e];
  uVar20 = puVar5[0x21];
  if (uVar20 < uVar16)
    goto LAB_0056b5b1;
LAB_0056b604:
  if (uVar20 < 0x13) {
    do {
      uVar10 = (ulong)uVar20;
      uVar20 = uVar20 + 1;
      *(uint16_t *)((long)puVar5 + (ulong)(ushort)(&order_2912)[uVar10] * 2 + 0x90) = 0;
    } while (uVar20 != 0x13);
    puVar5[0x21] = 0x13;
  }
  puVar5[0x1c] = 7;
  *(uint **)(puVar5 + 0x22) = puVar1;
  *(uint **)(puVar5 + 0x18) = puVar1;
  iVar8 = inflate_table(0, puVar5 + 0x24, 0x13, puVar5 + 0x22, puVar5 + 0x1c, puVar5 + 0xc4);
  if (iVar8 != 0) {
    arg1[6] = "invalid code lengths set";
    uVar10 = 0x1b;
    *puVar5 = 0x1b;
    goto LAB_0056a8bc;
  }
  puVar5[0x21] = 0;
  *puVar5 = 0x11;
  uVar16 = 0;
LAB_0056b2e3:
  uVar20 = puVar5[0x1f];
  uVar22 = uVar20 + puVar5[0x20];
  while (uVar16 < uVar22) {
    uVar23 = (1 << ((byte)puVar5[0x1c] & 0x1f)) - 1;
    lVar9 = *(long *)(puVar5 + 0x18) + (ulong)(uVar23 & (uint)uVar26) * 4;
    bVar6 = *(byte *)(lVar9 + 1);
    uVar3 = *(ushort *)(lVar9 + 2);
    if (uVar14 < bVar6) {
      do {
        uVar19 = 0;
        if (uVar25 == 0)
          goto LAB_0056b1e0;
        bVar6 = *__src;
        uVar25 = uVar25 - 1;
        __src = __src + 1;
        bVar12 = (byte)uVar14;
        uVar14 = uVar14 + 8;
        uVar26 = uVar26 + ((ulong)bVar6 << (bVar12 & 0x3f));
        lVar9 = *(long *)(puVar5 + 0x18) + (ulong)(uVar23 & (uint)uVar26) * 4;
        bVar6 = *(byte *)(lVar9 + 1);
        uVar3 = *(ushort *)(lVar9 + 2);
      } while (uVar14 < bVar6);
    }
    uVar23 = (uint)bVar6;
    if (uVar3 < 0x10) {
      for (; uVar14 < uVar23; uVar14 = uVar14 + 8) {
        uVar19 = 0;
        if (uVar25 == 0)
          goto LAB_0056b1e0;
        bVar12 = *__src;
        uVar25 = uVar25 - 1;
        __src = __src + 1;
        uVar26 = uVar26 + ((ulong)bVar12 << ((byte)uVar14 & 0x3f));
      }
      uVar14 = uVar14 - uVar23;
      uVar10 = (ulong)uVar16;
      uVar16 = uVar16 + 1;
      uVar26 = uVar26 >> (bVar6 & 0x3f);
      *(ushort *)((long)puVar5 + uVar10 * 2 + 0x90) = uVar3;
      puVar5[0x21] = uVar16;
    } else {
      if (uVar3 == 0x10) {
        for (; uVar14 < bVar6 + 2; uVar14 = uVar14 + 8) {
          uVar19 = 0;
          if (uVar25 == 0)
            goto LAB_0056b1e0;
          bVar12 = *__src;
          uVar25 = uVar25 - 1;
          __src = __src + 1;
          uVar26 = uVar26 + ((ulong)bVar12 << ((byte)uVar14 & 0x3f));
        }
        uVar14 = uVar14 - uVar23;
        uVar26 = uVar26 >> (bVar6 & 0x3f);
        if (uVar16 != 0) {
          uVar14 = uVar14 - 2;
          uVar19 = (uint)uVar26;
          uVar26 = uVar26 >> 2;
          iVar7 = (uVar19 & 3) + 3;
          uVar13 = *(uint16_t *)((long)puVar5 + (ulong)(uVar16 - 1) * 2 + 0x90);
          goto LAB_0056bfd1;
        }
      LAB_0056c5c9:
        arg1[6] = "invalid bit length repeat";
        *puVar5 = 0x1b;
        goto LAB_0056b1c2;
      }
      if (uVar3 == 0x11) {
        for (; uVar14 < bVar6 + 3; uVar14 = uVar14 + 8) {
          uVar19 = 0;
          if (uVar25 == 0)
            goto LAB_0056b1e0;
          bVar12 = *__src;
          uVar25 = uVar25 - 1;
          __src = __src + 1;
          uVar26 = uVar26 + ((ulong)bVar12 << ((byte)uVar14 & 0x3f));
        }
        uVar10 = uVar26 >> (bVar6 & 0x3f);
        uVar26 = uVar10 >> 3;
        uVar14 = uVar14 + (-3 - uVar23);
        uVar13 = 0;
        iVar7 = ((uint)uVar10 & 7) + 3;
      } else {
        for (; uVar14 < bVar6 + 7; uVar14 = uVar14 + 8) {
          uVar19 = 0;
          if (uVar25 == 0)
            goto LAB_0056b1e0;
          bVar12 = *__src;
          uVar25 = uVar25 - 1;
          __src = __src + 1;
          uVar26 = uVar26 + ((ulong)bVar12 << ((byte)uVar14 & 0x3f));
        }
        uVar10 = uVar26 >> (bVar6 & 0x3f);
        uVar26 = uVar10 >> 7;
        uVar14 = uVar14 + (-7 - uVar23);
        uVar13 = 0;
        iVar7 = ((uint)uVar10 & 0x7f) + 0xb;
      }
    LAB_0056bfd1:
      uVar19 = iVar7 + uVar16;
      if (uVar22 < uVar19)
        goto LAB_0056c5c9;
      do {
        uVar10 = (ulong)uVar16;
        uVar16 = uVar16 + 1;
        *(uint16_t *)((long)puVar5 + uVar10 * 2 + 0x90) = uVar13;
      } while (uVar19 != uVar16);
      puVar5[0x21] = uVar16;
    }
  }
  if (*puVar5 == 0x1b) {
  LAB_0056b1c2:
    uVar10 = 0x1b;
    goto LAB_0056a8bc;
  }
  puVar5[0x1c] = 9;
  *(uint **)(puVar5 + 0x22) = puVar1;
  *(uint **)(puVar5 + 0x18) = puVar1;
  iVar8 = inflate_table(1, puVar5 + 0x24, uVar20, puVar5 + 0x22, puVar5 + 0x1c, puVar5 + 0xc4);
  if (iVar8 != 0) {
    arg1[6] = "invalid literal/lengths set";
    uVar10 = 0x1b;
    *puVar5 = 0x1b;
    goto LAB_0056a8bc;
  }
  puVar5[0x1d] = 6;
  *(uint64_t *)(puVar5 + 0x1a) = *(uint64_t *)(puVar5 + 0x22);
  iVar8 = inflate_table(2, (long)puVar5 + (ulong)puVar5[0x1f] * 2 + 0x90, puVar5[0x20],
                        puVar5 + 0x22, puVar5 + 0x1d, puVar5 + 0xc4);
  if (iVar8 != 0) {
    arg1[6] = "invalid distances set";
    uVar10 = 0x1b;
    *puVar5 = 0x1b;
    goto LAB_0056a8bc;
  }
  *puVar5 = 0x12;
switchD_0056a8be_caseD_56ada0:
  if ((5 < uVar25) && (0x101 < uVar24)) {
    arg1[3] = __dest;
    *(uint *)(arg1 + 4) = uVar24;
    *arg1 = __src;
    *(uint *)(arg1 + 1) = uVar25;
    *(ulong *)(puVar5 + 0x12) = uVar26;
    puVar5[0x14] = uVar14;
    inflate_fast(arg1, local_80);
    __dest = (uint8_t *)arg1[3];
    uVar24 = *(uint *)(arg1 + 4);
    __src = (byte *)*arg1;
    uVar25 = *(uint *)(arg1 + 1);
    uVar26 = *(ulong *)(puVar5 + 0x12);
    uVar14 = puVar5[0x14];
    uVar10 = (ulong)*puVar5;
    goto LAB_0056a887;
  }
  lVar9 = *(long *)(puVar5 + 0x18);
  uVar16 = (1 << ((byte)puVar5[0x1c] & 0x1f)) - 1;
  pbVar2 = (byte *)(lVar9 + (ulong)(uVar16 & (uint)uVar26) * 4);
  bVar6 = pbVar2[1];
  bVar12 = *pbVar2;
  uVar3 = *(ushort *)(pbVar2 + 2);
  uVar19 = uVar14;
  if (uVar14 < bVar6) {
    do {
      uVar19 = 0;
      if (uVar25 == 0)
        goto LAB_0056b1e0;
      bVar6 = *__src;
      uVar25 = uVar25 - 1;
      __src = __src + 1;
      uVar19 = uVar14 + 8;
      uVar26 = uVar26 + ((ulong)bVar6 << ((byte)uVar14 & 0x3f));
      pbVar2 = (byte *)(lVar9 + (ulong)((uint)uVar26 & uVar16) * 4);
      bVar6 = pbVar2[1];
      bVar12 = *pbVar2;
      uVar3 = *(ushort *)(pbVar2 + 2);
      uVar14 = uVar19;
    } while (uVar19 < bVar6);
  }
  if (bVar12 == 0) {
    uVar14 = uVar19 - bVar6;
    uVar26 = uVar26 >> (bVar6 & 0x3f);
    puVar5[0x15] = (uint)uVar3;
  LAB_0056c09e:
    *puVar5 = 0x17;
    uVar10 = 0x17;
    goto LAB_0056a8bc;
  }
  if ((bVar12 & 0xf0) == 0) {
    uVar16 = (1 << (bVar12 + bVar6 & 0x1f)) - 1;
    pbVar2 =
        (byte *)(lVar9 + (ulong)((((uint)uVar26 & uVar16) >> (bVar6 & 0x1f)) + (uint)uVar3) * 4);
    bVar18 = pbVar2[1];
    bVar12 = *pbVar2;
    uVar4 = *(ushort *)(pbVar2 + 2);
    uVar14 = uVar19;
    if (uVar19 < (uint)bVar6 + (uint)bVar18) {
      do {
        uVar19 = 0;
        if (uVar25 == 0)
          goto LAB_0056b1e0;
        bVar12 = *__src;
        uVar19 = uVar14 + 8;
        uVar25 = uVar25 - 1;
        __src = __src + 1;
        uVar26 = uVar26 + ((ulong)bVar12 << ((byte)uVar14 & 0x3f));
        pbVar2 = (byte *)(lVar9 +
                          (ulong)(((uVar16 & (uint)uVar26) >> (bVar6 & 0x1f)) + (uint)uVar3) * 4);
        bVar18 = pbVar2[1];
        bVar12 = *pbVar2;
        uVar4 = *(ushort *)(pbVar2 + 2);
        uVar14 = uVar19;
      } while (uVar19 < (uint)bVar18 + (uint)bVar6);
    }
    uVar14 = (uVar19 - bVar6) - (uint)bVar18;
    uVar26 = (uVar26 >> (bVar6 & 0x3f)) >> (bVar18 & 0x3f);
    puVar5[0x15] = (uint)uVar4;
    if (bVar12 == 0)
      goto LAB_0056c09e;
  } else {
    uVar14 = uVar19 - bVar6;
    uVar26 = uVar26 >> (bVar6 & 0x3f);
    puVar5[0x15] = (uint)uVar3;
  }
  if ((bVar12 & 0x20) != 0)
    goto LAB_0056bda8;
  if ((bVar12 & 0x40) != 0) {
    arg1[6] = "invalid literal/length code";
    uVar10 = 0x1b;
    *puVar5 = 0x1b;
    goto LAB_0056a8bc;
  }
  uVar16 = bVar12 & 0xf;
  *puVar5 = 0x13;
  puVar5[0x17] = uVar16;
LAB_0056aa64:
  if (uVar16 != 0) {
    for (; uVar14 < uVar16; uVar14 = uVar14 + 8) {
      uVar19 = 0;
      if (uVar25 == 0)
        goto LAB_0056b1e0;
      bVar6 = *__src;
      uVar25 = uVar25 - 1;
      __src = __src + 1;
      uVar26 = uVar26 + ((ulong)bVar6 << ((byte)uVar14 & 0x3f));
    }
    uVar14 = uVar14 - uVar16;
    puVar5[0x15] = puVar5[0x15] + ((1 << ((byte)uVar16 & 0x1f)) - 1U & (uint)uVar26);
    uVar26 = uVar26 >> ((byte)uVar16 & 0x3f);
  }
  *puVar5 = 0x14;
switchD_0056a8be_caseD_56aac7:
  lVar9 = *(long *)(puVar5 + 0x1a);
  uVar16 = (1 << ((byte)puVar5[0x1d] & 0x1f)) - 1;
  pbVar2 = (byte *)(lVar9 + (ulong)(uVar16 & (uint)uVar26) * 4);
  bVar6 = pbVar2[1];
  bVar12 = *pbVar2;
  uVar3 = *(ushort *)(pbVar2 + 2);
  local_58 = (uint)bVar6;
  uVar19 = uVar14;
  if (uVar14 < local_58) {
    do {
      uVar19 = 0;
      if (uVar25 == 0)
        goto LAB_0056b1e0;
      bVar6 = *__src;
      uVar25 = uVar25 - 1;
      __src = __src + 1;
      uVar19 = uVar14 + 8;
      uVar26 = uVar26 + ((ulong)bVar6 << ((byte)uVar14 & 0x3f));
      pbVar2 = (byte *)(lVar9 + (ulong)((uint)uVar26 & uVar16) * 4);
      bVar6 = pbVar2[1];
      bVar12 = *pbVar2;
      uVar3 = *(ushort *)(pbVar2 + 2);
      local_58 = (uint)bVar6;
      uVar14 = uVar19;
    } while (uVar19 < local_58);
  }
  if ((bVar12 & 0xf0) == 0) {
    uVar16 = (uint)uVar3;
    uVar20 = (1 << (bVar12 + bVar6 & 0x1f)) - 1;
    pbVar2 = (byte *)(lVar9 + (ulong)((((uint)uVar26 & uVar20) >> (bVar6 & 0x1f)) + uVar16) * 4);
    bVar18 = pbVar2[1];
    bVar12 = *pbVar2;
    uVar3 = *(ushort *)(pbVar2 + 2);
    uVar14 = uVar19;
    if (uVar19 < (uint)bVar6 + (uint)bVar18) {
      do {
        uVar19 = 0;
        if (uVar25 == 0)
          goto LAB_0056b1e0;
        bVar12 = *__src;
        uVar19 = uVar14 + 8;
        uVar25 = uVar25 - 1;
        __src = __src + 1;
        uVar26 = uVar26 + ((ulong)bVar12 << ((byte)uVar14 & 0x3f));
        pbVar2 =
            (byte *)(lVar9 + (ulong)(((uVar20 & (uint)uVar26) >> (bVar6 & 0x1f)) + uVar16) * 4);
        bVar18 = pbVar2[1];
        bVar12 = *pbVar2;
        uVar3 = *(ushort *)(pbVar2 + 2);
        uVar14 = uVar19;
      } while (uVar19 < (uint)bVar18 + (uint)bVar6);
    }
    uVar19 = uVar19 - bVar6;
    local_58 = (uint)bVar18;
    uVar26 = uVar26 >> (bVar6 & 0x3f);
    bVar6 = bVar18;
  }
  uVar14 = uVar19 - local_58;
  uVar26 = uVar26 >> (bVar6 & 0x3f);
  if ((bVar12 & 0x40) != 0) {
    arg1[6] = "invalid distance code";
    uVar10 = 0x1b;
    *puVar5 = 0x1b;
    goto LAB_0056a8bc;
  }
  uVar16 = bVar12 & 0xf;
  *puVar5 = 0x15;
  puVar5[0x17] = uVar16;
  puVar5[0x16] = (uint)uVar3;
LAB_0056b7f4:
  if (uVar16 == 0) {
    uVar19 = puVar5[0x16];
  } else {
    for (; uVar14 < uVar16; uVar14 = uVar14 + 8) {
      uVar19 = 0;
      if (uVar25 == 0)
        goto LAB_0056b1e0;
      bVar6 = *__src;
      uVar25 = uVar25 - 1;
      __src = __src + 1;
      uVar26 = uVar26 + ((ulong)bVar6 << ((byte)uVar14 & 0x3f));
    }
    uVar14 = uVar14 - uVar16;
    uVar19 = ((1 << ((byte)uVar16 & 0x1f)) - 1U & (uint)uVar26) + puVar5[0x16];
    uVar26 = uVar26 >> ((byte)uVar16 & 0x3f);
    puVar5[0x16] = uVar19;
  }
  if ((local_80 + puVar5[0xe]) - uVar24 < uVar19) {
    arg1[6] = "invalid distance too far back";
    uVar10 = 0x1b;
    *puVar5 = 0x1b;
    goto LAB_0056a8bc;
  }
  *puVar5 = 0x16;
switchD_0056a8be_caseD_56aca0:
  uVar19 = uVar25;
  if (uVar24 == 0)
    goto LAB_0056b1e0;
  uVar19 = puVar5[0x16];
  if (local_80 - uVar24 < uVar19) {
    uVar16 = puVar5[0xf];
    uVar19 = uVar19 - (local_80 - uVar24);
    if (uVar16 < uVar19) {
      uVar19 = uVar19 - uVar16;
      puVar15 = (uint8_t *)((ulong)(puVar5[0xd] - uVar19) + *(long *)(puVar5 + 0x10));
    } else {
      puVar15 = (uint8_t *)((ulong)(uVar16 - uVar19) + *(long *)(puVar5 + 0x10));
    }
    uVar16 = puVar5[0x15];
    if (uVar16 < uVar19) {
      uVar19 = uVar16;
    }
  } else {
    puVar15 = __dest + -(ulong)uVar19;
    uVar16 = puVar5[0x15];
    uVar19 = uVar16;
  }
  if (uVar24 < uVar19) {
    uVar19 = uVar24;
  }
  uVar24 = uVar24 - uVar19;
  uVar20 = uVar19 >> 4;
  puVar5[0x15] = uVar16 - uVar19;
  uVar22 = uVar20 * 0x10;
  puVar21 = __dest;
  uVar16 = uVar19;
  if (((puVar15 + 0x10 < __dest || __dest + 0x10 < puVar15) && 0xf < uVar19) && (uVar20 != 0)) {
    lVar9 = 0;
    uVar16 = 0;
    do {
      uVar11 = *(uint64_t *)((long)(puVar15 + lVar9) + 8);
      uVar16 = uVar16 + 1;
      *(uint64_t *)(__dest + lVar9) = *(uint64_t *)(puVar15 + lVar9);
      *(uint64_t *)((long)(__dest + lVar9) + 8) = uVar11;
      lVar9 = lVar9 + 0x10;
    } while (uVar16 < uVar20);
    puVar15 = puVar15 + uVar22;
    puVar21 = __dest + uVar22;
    uVar16 = uVar19 + uVar20 * -0x10;
    if (uVar19 != uVar22)
      goto LAB_0056ad42;
  } else {
  LAB_0056ad42:
    lVar9 = 0;
    do {
      puVar21[lVar9] = puVar15[lVar9];
      lVar9 = lVar9 + 1;
    } while (lVar9 != (ulong)(uVar16 - 1) + 1);
  }
  __dest = __dest + (ulong)(uVar19 - 1) + 1;
  if (puVar5[0x15] == 0) {
  LAB_0056b6c8:
    *puVar5 = 0x12;
    uVar10 = 0x12;
    goto LAB_0056a8bc;
  }
  uVar10 = (ulong)*puVar5;
  goto LAB_0056a887;
}

/* ======================================================================
 * inflateEnd  (Ghidra `inflateEnd` @ 0056c650)
 * Signature: uint8_t inflateEnd(void)
 * Calls: (none)
 * Called by: `destroy`, `png_read_destroy`, `uncompress`
 */
uint64_t inflateEnd(long arg1)

{
  code *pcVar1;
  long lVar2;

  if (((arg1 != 0) && (lVar2 = *(long *)(arg1 + 0x38), lVar2 != 0)) &&
      (pcVar1 = *(code **)(arg1 + 0x48), pcVar1 != (code *)0x0)) {
    if (*(long *)(lVar2 + 0x40) != 0) {
      (*pcVar1)(*(uint64_t *)(arg1 + 0x50));
      pcVar1 = *(code **)(arg1 + 0x48);
      lVar2 = *(long *)(arg1 + 0x38);
    }
    (*pcVar1)(*(uint64_t *)(arg1 + 0x50), lVar2);
    *(uint64_t *)(arg1 + 0x38) = 0;
    return 0;
  }
  return 0xfffffffe;
}

/* ======================================================================
 * inflateSetDictionary  (Ghidra `inflateSetDictionary` @ 0056c6b0)
 * Signature: uint8_t inflateSetDictionary(void)
 * Calls: `adler32`, `memcpy`, `updatewindow`
 * Called by: (none)
 */
uint64_t inflateSetDictionary(long arg1, void *arg2, uint arg3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  uint64_t uVar4;
  ulong __n;
  ulong __n_00;

  __n_00 = (ulong)arg3;
  if ((arg1 == 0) || (piVar1 = *(int **)(arg1 + 0x38), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (piVar1[2] == 0) {
    if (*piVar1 != 10)
      goto LAB_0056c6f3;
  } else if (*piVar1 != 10) {
    return 0xfffffffe;
  }
  uVar4 = adler32(0, 0, 0);
  lVar3 = adler32(uVar4, arg2, __n_00);
  if (*(long *)(piVar1 + 6) != lVar3) {
    return 0xfffffffd;
  }
LAB_0056c6f3:
  iVar2 = updatewindow(arg1, *(uint32_t *)(arg1 + 0x20));
  if (iVar2 == 0) {
    __n = (ulong)(uint)piVar1[0xd];
    if ((uint)piVar1[0xd] < arg3) {
      memcpy(*(void **)(piVar1 + 0x10), (void *)((long)arg2 + (__n_00 - __n)), __n);
      piVar1[0xe] = piVar1[0xd];
    } else {
      memcpy((void *)((__n - __n_00) + *(long *)(piVar1 + 0x10)), arg2, __n_00);
      piVar1[0xe] = arg3;
    }
    piVar1[3] = 1;
    uVar4 = 0;
  } else {
    *piVar1 = 0x1c;
    uVar4 = 0xfffffffc;
  }
  return uVar4;
}

/* ======================================================================
 * inflateGetHeader  (Ghidra `inflateGetHeader` @ 0056c7d0)
 * Signature: uint8_t inflateGetHeader(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t inflateGetHeader(long arg1, long arg2)

{
  long lVar1;

  if (arg1 == 0) {
    return 0xfffffffe;
  }
  lVar1 = *(long *)(arg1 + 0x38);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 8) & 2) != 0)) {
    *(long *)(lVar1 + 0x28) = arg2;
    *(uint32_t *)(arg2 + 0x48) = 0;
    return 0;
  }
  return 0xfffffffe;
}

/* ======================================================================
 * inflateSync  (Ghidra `inflateSync` @ 0056c810)
 * Signature: uint8_t inflateSync(void)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x0056c976) */

uint64_t inflateSync(long *arg1)

{
  uint32_t *puVar1;
  int iVar2;
  int *piVar3;
  uint32_t *puVar4;
  long lVar5;
  bool bVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  byte *pbVar15;
  byte local_18[24];

  if (arg1 == (long *)0x0) {
    return 0xfffffffe;
  }
  piVar3 = (int *)arg1[7];
  if (piVar3 == (int *)0x0) {
    return 0xfffffffe;
  }
  uVar14 = *(uint *)(arg1 + 1);
  if (uVar14 == 0) {
    if ((uint)piVar3[0x14] < 8) {
      return 0xfffffffb;
    }
    iVar2 = *piVar3;
  } else {
    iVar2 = *piVar3;
  }
  if (iVar2 == 0x1d) {
    uVar11 = piVar3[0x21];
    bVar6 = uVar11 < 4;
  } else {
    uVar14 = piVar3[0x14];
    *piVar3 = 0x1d;
    uVar11 = uVar14 & 0xfffffff8;
    piVar3[0x14] = uVar11;
    uVar9 = *(long *)(piVar3 + 0x12) << ((byte)uVar14 & 7);
    *(ulong *)(piVar3 + 0x12) = uVar9;
    if (uVar11 < 8) {
      piVar3[0x21] = 0;
      bVar6 = true;
      uVar11 = 0;
    } else {
      uVar14 = uVar11 - 8 >> 3;
      pbVar7 = local_18 + 1;
      pbVar15 = local_18;
      while (true) {
        pbVar10 = pbVar7;
        *pbVar15 = (byte)uVar9;
        if (pbVar10 == local_18 + 1 + uVar14)
          break;
        pbVar7 = pbVar10 + 1;
        uVar9 = uVar9 >> 8;
        pbVar15 = pbVar10;
      }
      *(ulong *)(piVar3 + 0x12) = uVar9 >> 8;
      piVar3[0x14] = 0;
      piVar3[0x21] = 0;
      uVar11 = 0;
      uVar12 = 0;
      do {
        if (local_18[uVar12] == (byte) ~-(uVar11 < 2)) {
          uVar11 = uVar11 + 1;
        LAB_0056c8cd:
          bVar6 = uVar11 < 4;
          if (!bVar6)
            break;
        } else {
          if (local_18[uVar12] == 0) {
            uVar11 = 4 - uVar11;
            goto LAB_0056c8cd;
          }
          bVar6 = true;
          uVar11 = 0;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar14 + 1);
    }
    piVar3[0x21] = uVar11;
    uVar14 = *(uint *)(arg1 + 1);
  }
  if ((uVar14 == 0) || (!bVar6)) {
    uVar12 = 0;
  } else {
    uVar8 = 0;
    do {
      uVar12 = uVar8;
      if (*(byte *)(*arg1 + (ulong)uVar12) == (byte) ~-(uVar11 < 2)) {
        uVar11 = uVar11 + 1;
      LAB_0056c93e:
        if (3 < uVar11)
          break;
      } else {
        if (*(byte *)(*arg1 + (ulong)uVar12) == 0) {
          uVar11 = 4 - uVar11;
          goto LAB_0056c93e;
        }
        uVar11 = 0;
      }
      uVar8 = uVar12 + 1;
    } while (uVar12 + 1 < uVar14);
    uVar12 = uVar12 + 1;
  }
  piVar3[0x21] = uVar11;
  *arg1 = *arg1 + (ulong)uVar12;
  lVar13 = (ulong)uVar12 + arg1[2];
  *(uint *)(arg1 + 1) = (int)arg1[1] - uVar12;
  arg1[2] = lVar13;
  if (piVar3[0x21] == 4) {
    puVar4 = (uint32_t *)arg1[7];
    lVar5 = arg1[5];
    if (puVar4 != (uint32_t *)0x0) {
      puVar1 = puVar4 + 0x154;
      *(uint64_t *)(puVar4 + 8) = 0;
      arg1[5] = 0;
      arg1[2] = 0;
      arg1[6] = 0;
      arg1[0xc] = 1;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[3] = 0;
      puVar4[5] = 0x8000;
      *(uint64_t *)(puVar4 + 10) = 0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      *(uint64_t *)(puVar4 + 0x12) = 0;
      puVar4[0x14] = 0;
      *(uint32_t **)(puVar4 + 0x22) = puVar1;
      *(uint32_t **)(puVar4 + 0x1a) = puVar1;
      *(uint32_t **)(puVar4 + 0x18) = puVar1;
    }
    arg1[2] = lVar13;
    arg1[5] = lVar5;
    *piVar3 = 0xb;
    return 0;
  }
  return 0xfffffffd;
}

/* ======================================================================
 * inflateSyncPoint  (Ghidra `inflateSyncPoint` @ 0056cad0)
 * Signature: uint8_t inflateSyncPoint(void)
 * Calls: (none)
 * Called by: (none)
 */
ulong inflateSyncPoint(long arg1)

{
  int *piVar1;

  if (arg1 == 0) {
    return 0xfffffffe;
  }
  piVar1 = *(int **)(arg1 + 0x38);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0xd) {
      return 0;
    }
    return (ulong)(piVar1[0x14] == 0);
  }
  return 0xfffffffe;
}

/* ======================================================================
 * inflateCopy  (Ghidra `inflateCopy` @ 0056cb10)
 * Signature: uint8_t inflateCopy(void)
 * Calls: `memcpy`
 * Called by: (none)
 */
uint64_t inflateCopy(uint64_t *arg1, uint64_t *arg2)

{
  ulong uVar1;
  void *__src;
  ulong uVar2;
  void *__dest;
  void *__dest_00;
  uint64_t uVar3;

  if ((((arg2 == (uint64_t *)0x0) || (arg1 == (uint64_t *)0x0)) ||
       (__src = (void *)arg2[7], __src == (void *)0x0)) ||
      (((code *)arg2[8] == (code *)0x0 || (arg2[9] == 0)))) {
    uVar3 = 0xfffffffe;
  } else {
    __dest = (void *)(*(code *)arg2[8])(arg2[10], 1, 0x2550);
    if (__dest == (void *)0x0) {
      uVar3 = 0xfffffffc;
    } else {
      if (*(long *)((long)__src + 0x40) == 0) {
        __dest_00 = (void *)0x0;
      } else {
        __dest_00 = (void *)(*(code *)arg2[8])(
            arg2[10], 1 << ((byte) * (uint32_t *)((long)__src + 0x30) & 0x1f), 1);
        if (__dest_00 == (void *)0x0) {
          (*(code *)arg2[9])(arg2[10], __dest);
          return 0xfffffffc;
        }
      }
      *arg1 = *arg2;
      arg1[1] = arg2[1];
      arg1[2] = arg2[2];
      arg1[3] = arg2[3];
      arg1[4] = arg2[4];
      arg1[5] = arg2[5];
      arg1[6] = arg2[6];
      arg1[7] = arg2[7];
      arg1[8] = arg2[8];
      arg1[9] = arg2[9];
      arg1[10] = arg2[10];
      arg1[0xb] = arg2[0xb];
      arg1[0xc] = arg2[0xc];
      arg1[0xd] = arg2[0xd];
      memcpy(__dest, __src, 0x2550);
      uVar2 = *(ulong *)((long)__src + 0x60);
      uVar1 = (long)__src + 0x550;
      if ((uVar1 <= uVar2) && (uVar2 <= (long)__src + 0x254cU)) {
        *(long *)((long)__dest + 0x60) = (long)__dest + ((long)(uVar2 - uVar1) >> 2) * 4 + 0x550;
        *(long *)((long)__dest + 0x68) =
            (long)__dest + ((long)(*(long *)((long)__src + 0x68) - uVar1) >> 2) * 4 + 0x550;
      }
      *(long *)((long)__dest + 0x88) =
          (long)__dest + ((long)(*(long *)((long)__src + 0x88) - uVar1) >> 2) * 4 + 0x550;
      if (__dest_00 != (void *)0x0) {
        memcpy(__dest_00, *(void **)((long)__src + 0x40),
               (ulong)(uint)(1 << ((byte) * (uint32_t *)((long)__src + 0x30) & 0x1f)));
      }
      *(void **)((long)__dest + 0x40) = __dest_00;
      uVar3 = 0;
      arg1[7] = __dest;
    }
  }
  return uVar3;
}

/* ======================================================================
 * inflate_table  (Ghidra `inflate_table` @ 0056ccf0)
 * Signature: uint8_t inflate_table(void)
 * Calls: (none)
 * Called by: `inflate`, `inflateBack`
 */
uint64_t inflate_table(int arg1, long arg2, uint arg3, long *arg4, uint *arg5, uint8_t *arg6)

{
  long lVar1;
  ushort uVar2;
  short sVar3;
  uint8_t *puVar4;
  uint uVar5;
  long lVar6;
  uint64_t uVar7;
  byte bVar8;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  ushort uVar15;
  uint8_t uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  uint local_c0;
  uint local_a8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  uint8_t *local_90;
  uint8_t *local_88;
  uint8_t local_78[16];
  uint8_t local_68[16];
  ushort auStack_58[5];
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  char cVar9;

  local_78 = (uint8_t[16])0x0;
  local_68 = (uint8_t[16])0x0;
  if (arg3 != 0) {
    lVar6 = 0;
    do {
      lVar1 = lVar6 * 2;
      lVar6 = lVar6 + 1;
      *(short *)(local_78 + (ulong) * (ushort *)(arg2 + lVar1) * 2) =
          *(short *)(local_78 + (ulong) * (ushort *)(arg2 + lVar1) * 2) + 1;
    } while ((uint)lVar6 < arg3);
  }
  if (local_68._14_2_ == 0) {
    if (local_68._12_2_ != 0) {
      uVar21 = 0xe;
      goto LAB_0056d3ca;
    }
    if (local_68._10_2_ != 0) {
      uVar21 = 0xd;
      goto LAB_0056d3ca;
    }
    if (local_68._8_2_ != 0) {
      uVar21 = 0xc;
      goto LAB_0056d3ca;
    }
    if (local_68._6_2_ != 0) {
      uVar21 = 0xb;
      goto LAB_0056d3ca;
    }
    if (local_68._4_2_ != 0) {
      uVar21 = 10;
      goto LAB_0056d3ca;
    }
    if (local_68._2_2_ != 0) {
      uVar21 = 9;
      goto LAB_0056d3ca;
    }
    if (local_68._0_2_ != 0) {
      uVar21 = 8;
      goto LAB_0056d3ca;
    }
    if (local_78._14_2_ != 0) {
      uVar21 = 7;
      goto LAB_0056d3ca;
    }
    if (local_78._12_2_ != 0) {
      uVar21 = 6;
      goto LAB_0056d3ca;
    }
    if (local_78._10_2_ != 0) {
      uVar21 = 5;
      goto LAB_0056d3ca;
    }
    if (local_78._8_2_ != 0) {
      uVar21 = 4;
      goto LAB_0056d3ca;
    }
    if (local_78._6_2_ != 0) {
      uVar21 = 3;
      goto LAB_0056d3ca;
    }
    if (local_78._4_2_ != 0) {
      uVar21 = 2;
      goto LAB_0056d3ca;
    }
    if (local_78._2_2_ == 0) {
      puVar4 = (uint8_t *)*arg4;
      *puVar4 = 0x40;
      puVar4[1] = 1;
      *(uint16_t *)(puVar4 + 2) = 0;
      puVar4[4] = 0x40;
      puVar4[5] = 1;
      *(uint16_t *)(puVar4 + 6) = 0;
      *arg4 = (long)(puVar4 + 8);
      *arg5 = 1;
      return 0;
    }
    uVar21 = 1;
  LAB_0056ce42:
    uVar12 = 1;
  } else {
    uVar21 = 0xf;
  LAB_0056d3ca:
    if (local_78._2_2_ != 0)
      goto LAB_0056ce42;
    if (local_78._4_2_ == 0) {
      if (local_78._6_2_ == 0) {
        if (local_78._8_2_ == 0) {
          if (local_78._10_2_ == 0) {
            if (local_78._12_2_ == 0) {
              if (local_78._14_2_ == 0) {
                if (local_68._0_2_ == 0) {
                  if (local_68._2_2_ == 0) {
                    if (local_68._4_2_ == 0) {
                      if (local_68._6_2_ == 0) {
                        if (local_68._8_2_ == 0) {
                          if (local_68._10_2_ == 0) {
                            if (local_68._12_2_ == 0) {
                              if (local_68._14_2_ == 0) {
                                iVar20 = 2;
                                uVar12 = 0x10;
                                local_a8 = 0x10;
                                goto LAB_0056ce6b;
                              }
                              uVar12 = 0xf;
                            } else {
                              uVar12 = 0xe;
                            }
                          } else {
                            uVar12 = 0xd;
                          }
                        } else {
                          uVar12 = 0xc;
                        }
                      } else {
                        uVar12 = 0xb;
                      }
                    } else {
                      uVar12 = 10;
                    }
                  } else {
                    uVar12 = 9;
                  }
                } else {
                  uVar12 = 8;
                }
              } else {
                uVar12 = 7;
              }
            } else {
              uVar12 = 6;
            }
          } else {
            uVar12 = 5;
          }
        } else {
          uVar12 = 4;
        }
      } else {
        uVar12 = 3;
      }
    } else {
      uVar12 = 2;
    }
  }
  local_a8 = *arg5;
  if (uVar21 <= *arg5) {
    local_a8 = uVar21;
  }
  if (local_a8 < uVar12) {
    local_a8 = uVar12;
  }
  iVar20 = 2 - (uint)(ushort)local_78._2_2_;
  if (iVar20 < 0) {
    return 0xffffffff;
  }
LAB_0056ce6b:
  uVar7 = 0xffffffff;
  iVar20 = iVar20 * 2 - (uint)(ushort)local_78._4_2_;
  if ((((((-1 < iVar20) && (iVar20 = iVar20 * 2 - (uint)(ushort)local_78._6_2_, -1 < iVar20)) &&
         (iVar20 = iVar20 * 2 - (uint)(ushort)local_78._8_2_, -1 < iVar20)) &&
        ((iVar20 = iVar20 * 2 - (uint)(ushort)local_78._10_2_,
          -1 < iVar20 && (iVar20 = iVar20 * 2 - (uint)(ushort)local_78._12_2_, -1 < iVar20)))) &&
       ((iVar20 = iVar20 * 2 - (uint)(ushort)local_78._14_2_,
         -1 < iVar20 && ((iVar20 = iVar20 * 2 - (uint)(ushort)local_68._0_2_,
                          -1 < iVar20 && (iVar20 = iVar20 * 2 - (uint)(ushort)local_68._2_2_,
                                          -1 < iVar20)))))) &&
      ((iVar20 = iVar20 * 2 - (uint)(ushort)local_68._4_2_,
        -1 < iVar20 &&
            ((((iVar20 = iVar20 * 2 - (uint)(ushort)local_68._6_2_,
                -1 < iVar20 && (iVar20 = iVar20 * 2 - (uint)(ushort)local_68._8_2_, -1 < iVar20)) &&
               (iVar20 = iVar20 * 2 - (uint)(ushort)local_68._10_2_, -1 < iVar20)) &&
              ((iVar20 = iVar20 * 2 - (uint)(ushort)local_68._12_2_,
                -1 < iVar20 &&
                    (iVar20 = iVar20 * 2 - (uint)(ushort)local_68._14_2_, -1 < iVar20)))))))) {
    if ((iVar20 == 0) || ((uVar21 == 1 && (arg1 != 0)))) {
      auStack_58[1] = 0;
      auStack_58[2] = local_78._2_2_;
      auStack_58[3] = local_78._2_2_ + local_78._4_2_;
      auStack_58[4] = local_78._2_2_ + local_78._4_2_ + local_78._6_2_;
      local_4e = auStack_58[4] + local_78._8_2_;
      local_4c = local_4e + local_78._10_2_;
      local_4a = local_4c + local_78._12_2_;
      local_48 = local_4a + local_78._14_2_;
      local_46 = local_48 + local_68._0_2_;
      local_44 = local_46 + local_68._2_2_;
      local_42 = local_44 + local_68._4_2_;
      local_40 = local_42 + local_68._6_2_;
      local_3e = local_40 + local_68._8_2_;
      local_3c = local_3e + local_68._10_2_;
      local_3a = local_3c + local_68._12_2_;
      if (arg3 != 0) {
        lVar6 = 0;
        do {
          uVar15 = *(ushort *)(arg2 + lVar6 * 2);
          if (uVar15 != 0) {
            uVar2 = auStack_58[uVar15];
            *(short *)(arg6 + (ulong)uVar2 * 2) = (short)lVar6;
            auStack_58[uVar15] = uVar2 + 1;
          }
          lVar6 = lVar6 + 1;
        } while ((uint)lVar6 < arg3);
      }
      if (arg1 == 0) {
        local_a0 = 0x13;
        local_90 = arg6;
        local_88 = arg6;
      } else {
        bVar23 = arg1 != 1;
        local_a0 = 0x100;
        if (bVar23) {
          local_a0 = -1;
        }
        local_88 = (uint8_t *)0x5da93e;
        if (bVar23) {
          local_88 = dext_2815;
        }
        local_90 = (uint8_t *)0x5da8be;
        if (bVar23) {
          local_90 = dbase_2814;
        }
      }
      lVar6 = *arg4;
      local_a4 = 1 << ((byte)local_a8 & 0x1f);
      uVar17 = local_a4 - 1;
      if ((local_a4 < 0x5b0) || (uVar7 = 1, arg1 != 1)) {
        local_9c = 0xffffffff;
        uVar5 = 0;
        uVar14 = 0;
        local_c0 = 0;
        uVar11 = local_a8;
      LAB_0056d0c0:
        do {
          cVar9 = (char)uVar12;
          bVar13 = (byte)uVar14;
          bVar8 = cVar9 - bVar13;
          uVar15 = *(ushort *)(arg6 + (ulong)local_c0 * 2);
          uVar16 = 0;
          if (local_a0 <= (int)(uint)uVar15) {
            if (local_a0 < (int)(uint)uVar15) {
              uVar16 = local_88[(ulong)uVar15 * 2];
              uVar15 = *(ushort *)(local_90 + (ulong)uVar15 * 2);
            } else {
              uVar15 = 0;
              uVar16 = 0x60;
            }
          }
          uVar22 = 1 << ((byte)uVar11 & 0x1f);
          uVar10 = uVar22;
          do {
            uVar10 = uVar10 - (1 << (cVar9 - bVar13 & 0x1f));
            puVar4 = (uint8_t *)(lVar6 + (ulong)(uVar10 + (uVar5 >> (bVar13 & 0x1f))) * 4);
            *puVar4 = uVar16;
            puVar4[1] = bVar8;
            *(ushort *)(puVar4 + 2) = uVar15;
          } while (uVar10 != 0);
          for (uVar10 = 1 << (cVar9 - 1U & 0x1f); (uVar10 & uVar5) != 0; uVar10 = uVar10 >> 1) {
          }
          if (uVar10 == 0) {
            uVar5 = 0;
          } else {
            uVar5 = (uVar10 - 1 & uVar5) + uVar10;
          }
          local_c0 = local_c0 + 1;
          sVar3 = *(short *)(local_78 + (ulong)uVar12 * 2);
          *(short *)(local_78 + (ulong)uVar12 * 2) = sVar3 + -1;
          if ((short)(sVar3 + -1) == 0) {
            if (uVar12 == uVar21)
              goto joined_r0x0056d2f4;
            uVar12 =
                (uint) * (ushort *)(arg2 + (ulong) * (ushort *)(arg6 + (ulong)local_c0 * 2) * 2);
          }
        } while ((uVar12 <= local_a8) || (uVar10 = uVar17 & uVar5, uVar10 == local_9c));
        if (uVar14 == 0) {
          uVar14 = local_a8;
        }
        uVar11 = uVar12 - uVar14;
        if (uVar12 < uVar21) {
          uVar18 = uVar11 + 1 + uVar14;
          for (iVar20 =
                   (1 << ((byte)uVar11 & 0x1f)) - (uint) * (ushort *)(local_78 + (ulong)uVar12 * 2);
               0 < iVar20; iVar20 = iVar20 * 2 - (uint) * (ushort *)(local_78 + uVar19 * 2)) {
            uVar19 = (ulong)uVar18;
            uVar11 = uVar11 + 1;
            if (uVar21 <= uVar18)
              break;
            uVar18 = uVar18 + 1;
          }
        }
        local_a4 = local_a4 + (1 << ((byte)uVar11 & 0x1f));
        if ((local_a4 < 0x5b0) || (arg1 != 1)) {
          lVar6 = lVar6 + (ulong)uVar22 * 4;
          lVar1 = (ulong)uVar10 * 4;
          *(byte *)(*arg4 + (ulong)uVar10 * 4) = (byte)uVar11;
          *(byte *)(*arg4 + 1 + lVar1) = (byte)local_a8;
          *(short *)(*arg4 + 2 + lVar1) = (short)(lVar6 - *arg4 >> 2);
          local_9c = uVar10;
          goto LAB_0056d0c0;
        }
        uVar7 = 1;
      }
    } else {
      uVar7 = 0xffffffff;
    }
  }
  return uVar7;
joined_r0x0056d2f4:
  if (uVar5 == 0) {
  LAB_0056d362:
    *arg4 = *arg4 + (ulong)local_a4 * 4;
    *arg5 = local_a8;
    return 0;
  }
  uVar21 = 0;
  if ((uVar14 != 0) && (uVar21 = uVar14, (uVar17 & uVar5) != local_9c)) {
    uVar14 = 0;
    lVar6 = *arg4;
    uVar12 = local_a8;
    bVar8 = (byte)local_a8;
    uVar21 = 0;
  }
  puVar4 = (uint8_t *)(lVar6 + (ulong)(uVar5 >> ((byte)uVar21 & 0x1f)) * 4);
  *puVar4 = 0x40;
  puVar4[1] = bVar8;
  *(uint16_t *)(puVar4 + 2) = 0;
  for (uVar21 = 1 << ((char)uVar12 - 1U & 0x1f); (uVar21 & uVar5) != 0; uVar21 = uVar21 >> 1) {
  }
  if (uVar21 == 0)
    goto LAB_0056d362;
  uVar5 = (uVar21 - 1 & uVar5) + uVar21;
  goto joined_r0x0056d2f4;
}

/* ======================================================================
 * compress_block  (Ghidra `compress_block` @ 0056e510)
 * Signature: uint8_t compress_block(void)
 * Calls: (none)
 * Called by: `tr_flush_block`
 */
void compress_block(long arg1, long arg2, long arg3)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;

  iVar10 = *(int *)(arg1 + 0x1724);
  uVar12 = (uint) * (ushort *)(arg1 + 0x1720);
  if (*(int *)(arg1 + 0x16fc) != 0) {
    uVar8 = 0;
    do {
      while (true) {
        uVar14 = (ulong)uVar8;
        uVar8 = uVar8 + 1;
        uVar3 = *(ushort *)(*(long *)(arg1 + 0x1700) + uVar14 * 2);
        uVar13 = (uint) * (byte *)(*(long *)(arg1 + 0x16f0) + uVar14);
        bVar9 = (byte)iVar10;
        if (uVar3 != 0)
          break;
        puVar1 = (ushort *)(arg2 + (long)(int)uVar13 * 4);
        uVar3 = puVar1[1];
        uVar13 = (uint)*puVar1;
        if ((int)(0x10 - (uint)uVar3) < iVar10) {
          uVar15 = *(uint *)(arg1 + 0x28);
          uVar12 = uVar12 | uVar13 << (bVar9 & 0x1f);
          *(short *)(arg1 + 0x1720) = (short)uVar12;
          *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar15) = (char)uVar12;
          *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar15 + 1)) = *(uint8_t *)(arg1 + 0x1721);
          *(uint *)(arg1 + 0x28) = uVar15 + 2;
          uVar12 = (int)uVar13 >> (0x10U - (char)*(int *)(arg1 + 0x1724) & 0x1f);
          iVar10 = (uVar3 - 0x10) + *(int *)(arg1 + 0x1724);
          *(short *)(arg1 + 0x1720) = (short)uVar12;
          *(int *)(arg1 + 0x1724) = iVar10;
        } else {
          iVar10 = iVar10 + (uint)uVar3;
          uVar12 = uVar12 | uVar13 << (bVar9 & 0x1f);
          *(int *)(arg1 + 0x1724) = iVar10;
          *(short *)(arg1 + 0x1720) = (short)uVar12;
        }
      LAB_0056e5bf:
        if (*(uint *)(arg1 + 0x16fc) <= uVar8)
          goto LAB_0056e838;
      }
      bVar2 = _length_code[(int)uVar13];
      puVar1 = (ushort *)(arg2 + (ulong)(bVar2 + 0x101) * 4);
      uVar4 = puVar1[1];
      if ((int)(0x10 - (uint)uVar4) < iVar10) {
        uVar5 = *puVar1;
        uVar15 = *(uint *)(arg1 + 0x28);
        uVar12 = uVar12 | (uint)uVar5 << (bVar9 & 0x1f);
        *(short *)(arg1 + 0x1720) = (short)uVar12;
        *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar15) = (char)uVar12;
        *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar15 + 1)) = *(uint8_t *)(arg1 + 0x1721);
        *(uint *)(arg1 + 0x28) = uVar15 + 2;
        uVar15 = (int)(uint)uVar5 >> (0x10U - (char)*(int *)(arg1 + 0x1724) & 0x1f);
        iVar11 = (uVar4 - 0x10) + *(int *)(arg1 + 0x1724);
        *(short *)(arg1 + 0x1720) = (short)uVar15;
        *(int *)(arg1 + 0x1724) = iVar11;
      } else {
        iVar11 = iVar10 + (uint)uVar4;
        uVar15 = uVar12 | (uint)*puVar1 << (bVar9 & 0x1f);
        *(int *)(arg1 + 0x1724) = iVar11;
        *(short *)(arg1 + 0x1720) = (short)uVar15;
      }
      iVar10 = *(int *)(extra_lbits + (ulong)bVar2 * 4);
      if (iVar10 != 0) {
        uVar13 = uVar13 - *(int *)(base_length + (ulong)bVar2 * 4);
        bVar9 = (byte)iVar11;
        if (0x10 - iVar10 < iVar11) {
          uVar12 = *(uint *)(arg1 + 0x28);
          uVar15 = uVar15 | uVar13 << (bVar9 & 0x1f);
          *(short *)(arg1 + 0x1720) = (short)uVar15;
          *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar12) = (char)uVar15;
          *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar12 + 1)) = *(uint8_t *)(arg1 + 0x1721);
          *(uint *)(arg1 + 0x28) = uVar12 + 2;
          uVar15 = (int)(uVar13 & 0xffff) >> (0x10U - (char)*(int *)(arg1 + 0x1724) & 0x1f);
          iVar11 = iVar10 + -0x10 + *(int *)(arg1 + 0x1724);
          *(short *)(arg1 + 0x1720) = (short)uVar15;
          *(int *)(arg1 + 0x1724) = iVar11;
        } else {
          iVar11 = iVar11 + iVar10;
          uVar15 = uVar15 | uVar13 << (bVar9 & 0x1f);
          *(int *)(arg1 + 0x1724) = iVar11;
          *(short *)(arg1 + 0x1720) = (short)uVar15;
        }
      }
      uVar13 = uVar3 - 1;
      if (uVar13 < 0x100) {
        bVar9 = _dist_code[uVar13];
      } else {
        bVar9 = _dist_code[(uVar13 >> 7) + 0x100];
      }
      uVar14 = (ulong)bVar9;
      puVar1 = (ushort *)(arg3 + uVar14 * 4);
      uVar3 = puVar1[1];
      uVar12 = (uint)*puVar1;
      if ((int)(0x10 - (uint)uVar3) < iVar11) {
        uVar7 = *(uint *)(arg1 + 0x28);
        uVar15 = uVar15 | uVar12 << ((byte)iVar11 & 0x1f);
        *(short *)(arg1 + 0x1720) = (short)uVar15;
        *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar7) = (char)uVar15;
        *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar7 + 1)) = *(uint8_t *)(arg1 + 0x1721);
        *(uint *)(arg1 + 0x28) = uVar7 + 2;
        uVar12 = (int)uVar12 >> (0x10U - (char)*(int *)(arg1 + 0x1724) & 0x1f);
        iVar10 = (uVar3 - 0x10) + *(int *)(arg1 + 0x1724);
        *(short *)(arg1 + 0x1720) = (short)uVar12;
        *(int *)(arg1 + 0x1724) = iVar10;
      } else {
        iVar10 = iVar11 + (uint)uVar3;
        uVar12 = uVar15 | uVar12 << ((byte)iVar11 & 0x1f);
        *(int *)(arg1 + 0x1724) = iVar10;
        *(short *)(arg1 + 0x1720) = (short)uVar12;
      }
      iVar11 = *(int *)(extra_dbits + uVar14 * 4);
      if (iVar11 == 0)
        goto LAB_0056e5bf;
      uVar13 = uVar13 - *(int *)(base_dist + uVar14 * 4);
      bVar9 = (byte)iVar10;
      if (iVar10 <= 0x10 - iVar11) {
        iVar10 = iVar10 + iVar11;
        uVar12 = uVar12 | uVar13 << (bVar9 & 0x1f);
        *(int *)(arg1 + 0x1724) = iVar10;
        *(short *)(arg1 + 0x1720) = (short)uVar12;
        goto LAB_0056e5bf;
      }
      uVar12 = uVar12 | uVar13 << (bVar9 & 0x1f);
      uVar15 = *(uint *)(arg1 + 0x28);
      *(short *)(arg1 + 0x1720) = (short)uVar12;
      *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar15) = (char)uVar12;
      *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar15 + 1)) = *(uint8_t *)(arg1 + 0x1721);
      *(uint *)(arg1 + 0x28) = uVar15 + 2;
      uVar12 = (int)(uVar13 & 0xffff) >> (0x10U - (char)*(int *)(arg1 + 0x1724) & 0x1f);
      iVar10 = iVar11 + -0x10 + *(int *)(arg1 + 0x1724);
      *(short *)(arg1 + 0x1720) = (short)uVar12;
      *(int *)(arg1 + 0x1724) = iVar10;
    } while (uVar8 < *(uint *)(arg1 + 0x16fc));
  }
LAB_0056e838:
  uVar3 = *(ushort *)(arg2 + 0x402);
  if ((int)(0x10 - (uint)uVar3) < iVar10) {
    uVar4 = *(ushort *)(arg2 + 0x400);
    uVar8 = *(uint *)(arg1 + 0x28);
    uVar12 = uVar12 | (uint)uVar4 << ((byte)iVar10 & 0x1f);
    *(short *)(arg1 + 0x1720) = (short)uVar12;
    *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar8) = (char)uVar12;
    *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar8 + 1)) = *(uint8_t *)(arg1 + 0x1721);
    iVar10 = *(int *)(arg1 + 0x1724);
    *(uint *)(arg1 + 0x28) = uVar8 + 2;
    *(uint *)(arg1 + 0x1724) = (uVar3 - 0x10) + iVar10;
    *(short *)(arg1 + 0x1720) = (short)((int)(uint)uVar4 >> (0x10U - (char)iVar10 & 0x1f));
  } else {
    sVar6 = *(short *)(arg2 + 0x400);
    *(uint *)(arg1 + 0x1724) = iVar10 + (uint)uVar3;
    *(ushort *)(arg1 + 0x1720) = (ushort)uVar12 | sVar6 << ((byte)iVar10 & 0x1f);
  }
  *(uint *)(arg1 + 0x171c) = (uint) * (ushort *)(arg2 + 0x402);
  return;
}

/* ======================================================================
 * uncompress  (Ghidra `uncompress` @ 0056f7b0)
 * Signature: uint8_t uncompress(void)
 * Calls: `inflate`, `inflateEnd`
 * Called by: (none)
 */
int uncompress(uint64_t arg1, ulong *arg2, uint64_t arg3, ulong arg4)

{
  ulong uVar1;
  int iVar2;
  uint64_t local_88;
  int local_80;
  uint64_t local_70;
  uint32_t local_68;
  ulong local_60;
  uint64_t local_48;
  uint64_t local_40;

  local_80 = (int)arg4;
  iVar2 = -5;
  if ((arg4 & 0xffffffff) == arg4) {
    uVar1 = *arg2;
    local_68 = (uint32_t)uVar1;
    if (uVar1 == (uVar1 & 0xffffffff)) {
      local_48 = 0;
      local_40 = 0;
      local_88 = arg3;
      local_70 = arg1;
      iVar2 = inflateInit_(&local_88, "1.2.3", 0x70);
      if (iVar2 == 0) {
        iVar2 = inflate(&local_88, 4);
        if (iVar2 == 1) {
          *arg2 = local_60;
          iVar2 = inflateEnd(&local_88);
        } else {
          inflateEnd(&local_88);
          if (iVar2 == 2) {
            iVar2 = -3;
          } else if ((iVar2 == -5) && (local_80 == 0)) {
            iVar2 = -3;
          }
        }
      }
    }
  }
  return iVar2;
}

/* ======================================================================
 * CCRC32__CCRC32  (Ghidra `~CCRC32` @ 005b9c00)
 * Signature: uint8_t __thiscall ~CCRC32(CCRC32 * this)
 * Class: CCRC32
 * Calls: (none)
 * Called by: (none)
 */
/* CCRC32__CCRC32() */

void __thiscall CCRC32__CCRC32(CCRC32 *this)

{
  return;
}

/* ======================================================================
 * CCRC32__CCRC32__005b9dd0  (Ghidra `CCRC32` @ 005b9dd0)
 * Signature: uint8_t __thiscall CCRC32(CCRC32 * this)
 * Class: CCRC32
 * Calls: (none)
 * Called by: (none)
 */
/* CCRC32__CCRC32__005b9dd0() */

void __thiscall CCRC32__CCRC32__005b9dd0(CCRC32 *this)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;

  uVar3 = 0;
  uVar1 = 0;
  uVar4 = 1;
  while (true) {
    if ((uVar1 & 2) != 0) {
      uVar3 = uVar3 | 0x40;
    }
    if ((uVar1 & 4) != 0) {
      uVar3 = uVar3 | 0x20;
    }
    if ((uVar1 & 8) != 0) {
      uVar3 = uVar3 | 0x10;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar3 = uVar3 | 8;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar3 = uVar3 | 4;
    }
    if ((uVar1 & 0x40) != 0) {
      uVar3 = uVar3 | 2;
    }
    if (uVar1 >> 7 != 0) {
      uVar3 = uVar3 | 1;
    }
    uVar3 = (ulong)(~-(uint)((uVar3 & 0xffffffff80) == 0) & 0x4c11db7) ^ uVar3 << 0x19;
    uVar3 = (ulong)(~-(uint)((uVar3 & 0xffffffff80000000) == 0) & 0x4c11db7) ^ uVar3 * 2;
    iVar2 = 0x1f;
    uVar3 = (ulong)(~-(uint)((uVar3 & 0xffffffff80000000) == 0) & 0x4c11db7) ^ uVar3 * 2;
    uVar3 = (ulong)(~-(uint)((uVar3 & 0xffffffff80000000) == 0) & 0x4c11db7) ^ uVar3 * 2;
    uVar3 = (ulong)(~-(uint)((uVar3 & 0xffffffff80000000) == 0) & 0x4c11db7) ^ uVar3 * 2;
    uVar3 = (ulong)(~-(uint)((uVar3 & 0xffffffff80000000) == 0) & 0x4c11db7) ^ uVar3 * 2;
    uVar3 = (ulong)(~-(uint)((uVar3 & 0xffffffff80000000) == 0) & 0x4c11db7) ^ uVar3 * 2;
    uVar1 = (ulong)(~-(uint)((uVar3 & 0xffffffff80000000) == 0) & 0x4c11db7) ^ uVar3 * 2;
    uVar3 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        uVar3 = (long)(1 << ((byte)iVar2 & 0x1f)) | uVar3;
      }
      iVar2 = iVar2 + -1;
      uVar1 = uVar1 >> 1;
    } while (iVar2 != -1);
    *(ulong *)(this + uVar4 * 8 + -8) = uVar3;
    if (uVar4 == 0x100)
      break;
    uVar3 = (ulong)(-((uint)uVar4 & 1) & 0x80);
    uVar1 = uVar4;
    uVar4 = uVar4 + 1;
  }
  return;
}

/* ======================================================================
 * CCRC32__PartialCRC  (Ghidra `PartialCRC` @ 005b9e20)
 * Signature: uint8_t __thiscall PartialCRC(CCRC32 * this, ulong * arg1, uchar * arg2, ulong arg3)
 * Class: CCRC32
 * Calls: (none)
 * Called by: (none)
 */
/* CCRC32__PartialCRC(unsigned long*, unsigned char const*, unsigned long) */

void __thiscall CCRC32__PartialCRC(CCRC32 *this, ulong *arg1, uchar *arg2, ulong arg3)

{
  byte bVar1;
  ulong uVar2;

  if (arg3 != 0) {
    uVar2 = *arg1;
    do {
      bVar1 = *arg2;
      arg2 = arg2 + 1;
      uVar2 = *(ulong *)(this + (ulong)(byte)((byte)uVar2 ^ bVar1) * 8) ^ uVar2 >> 8;
      arg3 = arg3 - 1;
      *arg1 = uVar2;
    } while (arg3 != 0);
  }
  return;
}

/* ======================================================================
 * CCRC32__FullCRC  (Ghidra `FullCRC` @ 005b9e60)
 * Signature: uint8_t __thiscall FullCRC(CCRC32 * this, uchar * arg1, ulong arg2, ulong * arg3)
 * Class: CCRC32
 * Calls: `CCRC32__FullCRC__005b9eb0`
 * Called by: (none)
 */
/* CCRC32__FullCRC__005b9eb0(unsigned char const*, unsigned long, unsigned long*) */

void __thiscall CCRC32__FullCRC__005b9eb0(CCRC32 *this, uchar *arg1, ulong arg2, ulong *arg3)

{
  byte bVar1;
  ulong uVar2;

  uVar2 = 0;
  *arg3 = 0xffffffff;
  if (arg2 != 0) {
    uVar2 = 0xffffffff;
    do {
      bVar1 = *arg1;
      arg1 = arg1 + 1;
      uVar2 = *(ulong *)(this + (ulong)(byte)((byte)uVar2 ^ bVar1) * 8) ^ uVar2 >> 8;
      arg2 = arg2 - 1;
      *arg3 = uVar2;
    } while (arg2 != 0);
    uVar2 = uVar2 ^ 0xffffffff;
  }
  *arg3 = uVar2;
  return;
}

/* ======================================================================
 * CCRC32__FullCRC__005b9eb0  (Ghidra `FullCRC` @ 005b9eb0)
 * Signature: uint8_t __thiscall FullCRC(CCRC32 * this, uchar * arg1, ulong arg2)
 * Class: CCRC32
 * Calls: (none)
 * Called by: `CCRC32__FullCRC`
 */
/* CCRC32__FullCRC__005b9eb0(unsigned char const*, unsigned long) */

ulong __thiscall CCRC32__FullCRC__005b9eb0(CCRC32 *this, uchar *arg1, ulong arg2)

{
  byte bVar1;
  ulong uVar2;

  uVar2 = 0;
  if (arg2 != 0) {
    uVar2 = 0xffffffff;
    do {
      bVar1 = *arg1;
      arg1 = arg1 + 1;
      uVar2 = *(ulong *)(this + (ulong)(byte)((byte)uVar2 ^ bVar1) * 8) ^ uVar2 >> 8;
      arg2 = arg2 - 1;
    } while (arg2 != 0);
    uVar2 = uVar2 ^ 0xffffffff;
  }
  return uVar2;
}

/* ======================================================================
 * CCRC32__FileCRC  (Ghidra `FileCRC` @ 005b9ef0)
 * Signature: uint8_t __thiscall FileCRC(CCRC32 * this, char * arg1, ulong * arg2, ulong arg3)
 * Class: CCRC32
 * Calls: `CCRC32__FileCRC__005b9fc0`, `fclose`, `fopen`, `fread`, `free`, `malloc`
 * Called by: (none)
 */
/* CCRC32__FileCRC__005b9fc0(char const*, unsigned long*, unsigned long) */

uint64_t __thiscall CCRC32__FileCRC__005b9fc0(CCRC32 *this, char *arg1, ulong *arg2, ulong arg3)

{
  byte bVar1;
  FILE *__stream;
  byte *__ptr;
  size_t sVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  uint64_t uVar6;

  uVar6 = 0;
  *arg2 = 0xffffffff;
  __stream = fopen(arg1, "rb");
  if (__stream != (FILE *)0x0) {
    __ptr = malloc(arg3);
    if (__ptr == (byte *)0x0) {
      fclose(__stream);
    } else {
      while (true) {
        sVar2 = fread(__ptr, 1, arg3, __stream);
        if ((int)sVar2 == 0)
          break;
        uVar5 = *arg2;
        lVar3 = (long)(int)sVar2;
        pbVar4 = __ptr;
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          uVar5 = *(ulong *)(this + (ulong)(byte)((byte)uVar5 ^ bVar1) * 8) ^ uVar5 >> 8;
          lVar3 = lVar3 + -1;
          *arg2 = uVar5;
        } while (lVar3 != 0);
      }
      uVar6 = 1;
      free(__ptr);
      fclose(__stream);
      *arg2 = *arg2 ^ 0xffffffff;
    }
  }
  return uVar6;
}

/* ======================================================================
 * CCRC32__FileCRC__005b9fc0  (Ghidra `FileCRC` @ 005b9fc0)
 * Signature: uint8_t __thiscall FileCRC(CCRC32 * this, char * arg1, ulong * arg2)
 * Class: CCRC32
 * Calls: `fclose`, `fopen`, `fread`, `free`, `malloc`
 * Called by: `CCRC32__FileCRC`
 */
/* CCRC32__FileCRC__005b9fc0(char const*, unsigned long*) */

uint64_t __thiscall CCRC32__FileCRC__005b9fc0(CCRC32 *this, char *arg1, ulong *arg2)

{
  byte bVar1;
  FILE *__stream;
  byte *__ptr;
  size_t sVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  uint64_t uVar6;

  uVar6 = 0;
  *arg2 = 0xffffffff;
  __stream = fopen(arg1, "rb");
  if (__stream != (FILE *)0x0) {
    __ptr = malloc(0x100000);
    if (__ptr == (byte *)0x0) {
      fclose(__stream);
    } else {
      while (true) {
        sVar2 = fread(__ptr, 1, 0x100000, __stream);
        if ((int)sVar2 == 0)
          break;
        uVar5 = *arg2;
        lVar3 = (long)(int)sVar2;
        pbVar4 = __ptr;
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          uVar5 = *(ulong *)(this + (ulong)(byte)((byte)uVar5 ^ bVar1) * 8) ^ uVar5 >> 8;
          lVar3 = lVar3 + -1;
          *arg2 = uVar5;
        } while (lVar3 != 0);
      }
      uVar6 = 1;
      free(__ptr);
      fclose(__stream);
      *arg2 = *arg2 ^ 0xffffffff;
    }
  }
  return uVar6;
}
