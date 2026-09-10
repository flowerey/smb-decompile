/* src/game/classes/GSMBCharactor.c — 7 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "GSMBCharactor.h"

/* ======================================================================
 * GSMBCharactor__GSMBCharactor  (Ghidra `GSMBCharactor` @ 0049be70)
 * Signature: uint8_t __thiscall GSMBCharactor(GSMBCharactor * self)
 * Class: GSMBCharactor
 * Calls: `CriticalSection__CriticalSection`
 * Called by: `GSuperMeatBoy__Initialize__00516f60`
 */
/* GSMBCharactor__GSMBCharactor() */

void __thiscall GSMBCharactor__GSMBCharactor(GSMBCharactor *self)

{
  CriticalSection__CriticalSection((CriticalSection *)self);
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint16_t *)(self + 0x34) = 1;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  *(uint32_t *)(self + 0x48) = 0;
  self[0x2c] = (GSMBCharactor)0x4;
  *(uint32_t *)(self + 0x30) = 0;
  SMBCharactor = self;
  return;
}

/* ======================================================================
 * GSMBCharactor__GSMBCharactor__0049bec0  (Ghidra `~GSMBCharactor` @ 0049bec0)
 * Signature: uint8_t __thiscall ~GSMBCharactor(GSMBCharactor * self)
 * Class: GSMBCharactor
 * Calls: `CriticalSection__CriticalSection__005b71d0`, `free`
 * Called by: `GSuperMeatBoy__GSuperMeatBoy__00512120`
 */
/* GSMBCharactor__GSMBCharactor__0049bec0() */

void __thiscall GSMBCharactor__GSMBCharactor__0049bec0(GSMBCharactor *self)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;

  uVar2 = (uint) * (ushort *)(self + 0x28);
  if (*(ushort *)(self + 0x28) != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(*(long *)(self + 0x38) + (uVar4 & 0xffff) * 8);
      if (plVar1 != (long *)0x0) {
        /* try { // try from 0049beeb to 0049beed has its CatchHandler @ 0049bf6d */
        (**(code **)(*plVar1 + 8))();
        uVar2 = (uint) * (ushort *)(self + 0x28);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar3;
    } while ((int)uVar3 < (int)uVar2);
  }
  if (*(int *)(self + 0x48) != -0x5eef3582) {
    CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
    return;
  }
  *(uint32_t *)(self + 0x48) = 0;
  free(*(void **)(*(long *)(self + 0x38) + -8));
  if (*(int *)(self + 0x30) == 1) {
    free(*(void **)(*(long *)(self + 0x40) + -8));
  }
  *(uint32_t *)(self + 0x48) = 0;
  *(uint16_t *)(self + 0x2a) = 0;
  *(uint16_t *)(self + 0x28) = 0;
  *(uint64_t *)(self + 0x38) = 0;
  *(uint64_t *)(self + 0x40) = 0;
  CriticalSection__CriticalSection__005b71d0((CriticalSection *)self);
  return;
}

/* ======================================================================
 * GSMBCharactor__CreateCharactor  (Ghidra `CreateCharactor` @ 0049bfe0)
 * Signature: uint8_t __thiscall CreateCharactor(GSMBCharactor * self, tagSuperMeatBoyCharactor arg1, int arg2)
 * Class: GSMBCharactor
 * Calls: `AlienHominid__AlienHominid__00462960`, `BandageGirl__BandageGirl__004658c0`, `Brownie__Brownie__00465960`, `CommanderVideo__CommanderVideo__00464d60`, `DefaultMeatBoy__DefaultMeatBoy__00465540`, `DrFetus__DrFetus__00466f80`, `FlyWrench__FlyWrench__00469fb0`, `GSMBCharactor__CreateCharactor__0049c600`, `GooBall__GooBall__0046ad80`, `HeadCrab__HeadCrab__0046b0e0` (+21 more)
 * Called by: (none)
 */
/* GSMBCharactor__CreateCharactor__0049c600(tagSuperMeatBoyCharactor, int) */

DefaultMeatBoy *__thiscall GSMBCharactor__CreateCharactor__0049c600(GSMBCharactor *self,
                                                                    uint32_t arg2, byte arg3)

{
  void *pvVar1;
  ushort uVar2;
  DefaultMeatBoy *this_00;
  void *pvVar3;
  ushort *puVar4;
  void *pvVar5;
  ulong uVar6;
  short sVar7;
  ushort uVar8;
  ulong uVar9;
  uint64_t *puVar10;

  System_GetTimeInMS();
  switch (arg2) {
  default:
    this_00 = operator_new(0xaa0);
    /* try { // try from 0049c028 to 0049c02c has its CatchHandler @ 0049c53f */
    DefaultMeatBoy__DefaultMeatBoy__00465540(this_00);
    break;
  case 1:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c3c9 to 0049c3cd has its CatchHandler @ 0049c592 */
    MeatBoy8Bit__MeatBoy8Bit__004656e0((MeatBoy8Bit *)this_00);
    break;
  case 2:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c51b to 0049c51f has its CatchHandler @ 0049c5e5 */
    MeatBoy4Color__MeatBoy4Color__00465820((MeatBoy4Color *)this_00);
    break;
  case 3:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c2df to 0049c2e3 has its CatchHandler @ 0049c572 */
    MeatBoy4Bit__MeatBoy4Bit__00465780((MeatBoy4Bit *)this_00);
    break;
  case 4:
    this_00 = operator_new(0x14c0);
    /* try { // try from 0049c535 to 0049c539 has its CatchHandler @ 0049c574 */
    DrFetus__DrFetus__00466f80((DrFetus *)this_00);
    break;
  case 5:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c465 to 0049c469 has its CatchHandler @ 0049c582 */
    Brownie__Brownie__00465960((Brownie *)this_00);
    break;
  case 6:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c4cd to 0049c4d1 has its CatchHandler @ 0049c586 */
    BandageGirl__BandageGirl__004658c0((BandageGirl *)this_00);
    break;
  case 7:
    this_00 = operator_new(0xae8);
    /* try { // try from 0049c3fd to 0049c401 has its CatchHandler @ 0049c584 */
    MeatNinja__MeatNinja__00481750((MeatNinja *)this_00);
    break;
  case 10:
    this_00 = operator_new(0xae0);
    /* try { // try from 0049c501 to 0049c505 has its CatchHandler @ 0049c5a2 */
    Naija__Naija__00483350((Naija *)this_00);
    break;
  case 0xb:
    this_00 = operator_new(0xad8);
    /* try { // try from 0049c431 to 0049c435 has its CatchHandler @ 0049c596 */
    CommanderVideo__CommanderVideo__00464d60((CommanderVideo *)this_00);
    break;
  case 0xc:
    this_00 = operator_new(0xaa8);
    /* try { // try from 0049c499 to 0049c49d has its CatchHandler @ 0049c594 */
    Runman__Runman__00486800((Runman *)this_00);
    break;
  case 0xd:
    this_00 = operator_new(0xab0);
    /* try { // try from 0049c3af to 0049c3b3 has its CatchHandler @ 0049c5a4 */
    GooBall__GooBall__0046ad80((GooBall *)this_00);
    break;
  case 0xe:
    this_00 = operator_new(0xb00);
    /* try { // try from 0049c395 to 0049c399 has its CatchHandler @ 0049c576 */
    MrMinecraft__MrMinecraft__00482810((MrMinecraft *)this_00);
    break;
  case 0x10:
    this_00 = operator_new(0xaa0);
    /* try { // try from 0049c347 to 0049c34b has its CatchHandler @ 0049c566 */
    FlyWrench__FlyWrench__00469fb0((FlyWrench *)this_00);
    break;
  case 0x12:
    this_00 = operator_new(0xab0);
    /* try { // try from 0049c37b to 0049c37f has its CatchHandler @ 0049c562 */
    Jill__Jill__0046e1e0((Jill *)this_00);
    break;
  case 0x13:
    this_00 = operator_new(0xab0);
    /* try { // try from 0049c313 to 0049c317 has its CatchHandler @ 0049c564 */
    VVVVVV__VVVVVV__005196d0((VVVVVV *)this_00);
    break;
  case 0x14:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c361 to 0049c365 has its CatchHandler @ 0049c554 */
    TofuBoy__TofuBoy__00465aa0((TofuBoy *)this_00);
    break;
  case 0x15:
    this_00 = operator_new(0xaa8);
    /* try { // try from 0049c4e7 to 0049c4eb has its CatchHandler @ 0049c5b4 */
    Machinarium__Machinarium__00473bc0((Machinarium *)this_00);
    break;
  case 0x16:
    this_00 = operator_new(0xaa8);
    /* try { // try from 0049c417 to 0049c41b has its CatchHandler @ 0049c5b2 */
    TheKid__TheKid__005189d0((TheKid *)this_00);
    break;
  case 0x17:
    this_00 = operator_new(0xab0);
    /* try { // try from 0049c47f to 0049c483 has its CatchHandler @ 0049c5a6 */
    HeadCrab__HeadCrab__0046b0e0((HeadCrab *)this_00);
    break;
  case 0x18:
    this_00 = operator_new(0xaa8);
    /* try { // try from 0049c44b to 0049c44f has its CatchHandler @ 0049c5d5 */
    Ogmo__Ogmo__00483910((Ogmo *)this_00);
    break;
  case 0x19:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c2f9 to 0049c2fd has its CatchHandler @ 0049c552 */
    PotatoBoy__PotatoBoy__00465b40((PotatoBoy *)this_00);
    break;
  case 0x1a:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c3e3 to 0049c3e7 has its CatchHandler @ 0049c5b6 */
    MeatboyEnding__MeatboyEnding__00465a00((MeatboyEnding *)this_00);
    break;
  case 0x1b:
    this_00 = operator_new(0xb58);
    /* try { // try from 0049c32d to 0049c331 has its CatchHandler @ 0049c556 */
    AlienHominid__AlienHominid__00462960((AlienHominid *)this_00);
    break;
  case 0x1c:
    this_00 = operator_new(0xaa0);
    /* try { // try from 0049c4b3 to 0049c4b7 has its CatchHandler @ 0049c5c5 */
    SprintMeatBoy__SprintMeatBoy__00465640((SprintMeatBoy *)this_00);
  }
  this_00[0x7db] = (DefaultMeatBoy)((byte)this_00[0x7db] & 0xef | (arg3 & 1) << 4);
  (**(code **)(*(long *)this_00 + 0x58))(this_00);
  if (*(int *)(self + 0x48) == -0x5eef3582) {
    uVar2 = *(ushort *)(self + 0x28);
    if (*(ushort *)(self + 0x2a) <= uVar2) {
      uVar2 = *(ushort *)(self + 0x2a) + *(short *)(self + 0x34);
      uVar9 = (ulong)(byte)self[0x2c];
      pvVar3 = (void *)0x0;
      pvVar1 = *(void **)(self + 0x38);
      *(ushort *)(self + 0x2a) = uVar2;
      uVar6 = (ulong)uVar2 * 8;
      pvVar5 = malloc(uVar9 + 0x10 + uVar6);
      if (pvVar5 != (void *)0x0) {
        pvVar3 = (void *)((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
        *(ulong *)((long)pvVar3 + -0x10) = uVar6;
        *(void **)((long)pvVar3 + -8) = pvVar5;
        if (pvVar1 != (void *)0x0) {
          uVar9 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar6 < uVar9 || uVar6 - uVar9 == 0) {
            uVar9 = uVar6;
          }
          memcpy(pvVar3, pvVar1, uVar9);
          free(*(void **)((long)pvVar1 + -8));
        }
      }
      pvVar1 = *(void **)(self + 0x40);
      *(void **)(self + 0x38) = pvVar3;
      if (pvVar1 != (void *)0x0) {
        uVar8 = *(ushort *)(self + 0x2a);
        uVar9 = (ulong)(byte)self[0x2c];
        pvVar3 = (void *)0x0;
        uVar6 = (ulong)uVar8 * 2;
        pvVar5 = malloc(uVar9 + 0x10 + uVar6);
        if (pvVar5 != (void *)0x0) {
          pvVar3 =
              (void *)((long)pvVar5 + 0x10U + (uVar9 - ((long)pvVar5 + 0x10U) % uVar9) % uVar9);
          *(void **)((long)pvVar3 + -8) = pvVar5;
          *(ulong *)((long)pvVar3 + -0x10) = uVar6;
          uVar9 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar6 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar9 = uVar6;
          }
          memcpy(pvVar3, pvVar1, uVar9);
          free(*(void **)((long)pvVar1 + -8));
          uVar8 = *(ushort *)(self + 0x2a);
        }
        uVar2 = *(ushort *)(self + 0x28);
        *(void **)(self + 0x40) = pvVar3;
        if (uVar8 <= uVar2)
          goto LAB_0049c0ee;
        while (true) {
          uVar6 = (ulong)uVar2;
          uVar2 = uVar2 + 1;
          *(uint16_t *)((long)pvVar3 + uVar6 * 2) = 0xffff;
          if (uVar8 <= uVar2)
            break;
          pvVar3 = *(void **)(self + 0x40);
        }
      }
      uVar2 = *(ushort *)(self + 0x28);
    }
  } else {
    uVar6 = (ulong)(byte)self[0x2c];
    *(uint32_t *)(self + 0x30) = 0;
    pvVar3 = malloc(uVar6 + 0x38);
    puVar10 = (uint64_t *)0x0;
    if (pvVar3 != (void *)0x0) {
      puVar10 =
          (uint64_t *)((long)pvVar3 + 0x10U + (uVar6 - ((long)pvVar3 + 0x10U) % uVar6) % uVar6);
      puVar10[-2] = 0x28;
      puVar10[-1] = pvVar3;
    }
    *(uint64_t **)(self + 0x38) = puVar10;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    uVar2 = 0;
    *(uint16_t *)(self + 0x28) = 0;
    *(uint16_t *)(self + 0x2a) = 5;
    *(uint32_t *)(self + 0x48) = 0xa110ca7e;
    *(uint16_t *)(self + 0x34) = 5;
  }
LAB_0049c0ee:
  if ((*(int *)(self + 0x30) == 1) && (*(short *)(self + 0x2a) != 0)) {
    puVar4 = *(ushort **)(self + 0x40);
    sVar7 = 0;
    uVar8 = *puVar4;
    while (uVar8 != 0xffff) {
      puVar4 = puVar4 + 1;
      sVar7 = sVar7 + 1;
      if (sVar7 == *(short *)(self + 0x2a))
        goto LAB_0049c0f4;
      uVar8 = *puVar4;
    }
    *puVar4 = uVar2;
    uVar2 = *(ushort *)(self + 0x28);
  }
LAB_0049c0f4:
  *(DefaultMeatBoy **)(*(long *)(self + 0x38) + (ulong)uVar2 * 8) = this_00;
  *(short *)(self + 0x28) = *(short *)(self + 0x28) + 1;
  System_GetTimeInMS();
  return this_00;
}

/* ======================================================================
 * GSMBCharactor__CreateCharactor__0049c600  (Ghidra `CreateCharactor` @ 0049c600)
 * Signature: uint8_t __thiscall CreateCharactor(GSMBCharactor * self, MeatBoyCharactor * arg1, int arg2)
 * Class: GSMBCharactor
 * Calls: `AlienHominid__AlienHominid__00462960`, `BandageGirl__BandageGirl__004658c0`, `Brownie__Brownie__00465960`, `CommanderVideo__CommanderVideo__00464d60`, `DefaultMeatBoy__DefaultMeatBoy__00465540`, `DrFetus__DrFetus__00466f80`, `FlyWrench__FlyWrench__00469fb0`, `GooBall__GooBall__0046ad80`, `HeadCrab__HeadCrab__0046b0e0`, `Jill__Jill__0046e1e0` (+17 more)
 * Called by: `FactoryBoss__FactoryBoss__00468ff0`, `FinalBoss__FinalBoss__00469560`, `GSMBCharactor__CreateCharactor`, `GSuperMeatBoy__Initialize__00516f60`, `GSuperMeatBoy__LoadDeferredCharactor`, `GooBall__CreateClones`, `HeadCrab__CreateClones`, `LoadDeferredCharactor`, `MeatBoyCharactor__CreateClones`, `Runman__CreateClones`
 */
/* GSMBCharactor__CreateCharactor__0049c600(MeatBoyCharactor*, int) */

DefaultMeatBoy *__thiscall
GSMBCharactor__CreateCharactor__0049c600(GSMBCharactor *self, MeatBoyCharactor *arg1, int arg2)

{
  DefaultMeatBoy *this_00;

  switch (*(uint32_t *)(arg1 + 0xa54)) {
  default:
    this_00 = operator_new(0xaa0);
    /* try { // try from 0049c638 to 0049c63c has its CatchHandler @ 0049c9b0 */
    DefaultMeatBoy__DefaultMeatBoy__00465540(this_00, arg1, arg2);
    break;
  case 1:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c9a6 to 0049c9aa has its CatchHandler @ 0049c9c3 */
    MeatBoy8Bit__MeatBoy8Bit__004656e0((MeatBoy8Bit *)this_00, arg1, arg2);
    break;
  case 2:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c8a6 to 0049c8aa has its CatchHandler @ 0049c9f4 */
    MeatBoy4Color__MeatBoy4Color__00465820((MeatBoy4Color *)this_00, arg1, arg2);
    break;
  case 3:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c926 to 0049c92a has its CatchHandler @ 0049ca02 */
    MeatBoy4Bit__MeatBoy4Bit__00465780((MeatBoy4Bit *)this_00, arg1, arg2);
    break;
  case 4:
    this_00 = operator_new(0x14c0);
    /* try { // try from 0049c826 to 0049c82a has its CatchHandler @ 0049c9f6 */
    DrFetus__DrFetus__00466f80((DrFetus *)this_00, arg1, arg2);
    break;
  case 5:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c966 to 0049c96a has its CatchHandler @ 0049ca14 */
    Brownie__Brownie__00465960((Brownie *)this_00, arg1, arg2);
    break;
  case 6:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c866 to 0049c86a has its CatchHandler @ 0049ca12 */
    BandageGirl__BandageGirl__004658c0((BandageGirl *)this_00, arg1, arg2);
    break;
  case 7:
    this_00 = operator_new(0xae8);
    /* try { // try from 0049c8e6 to 0049c8ea has its CatchHandler @ 0049ca06 */
    MeatNinja__MeatNinja__00481750((MeatNinja *)this_00, arg1, arg2);
    break;
  case 10:
    this_00 = operator_new(0xae0);
    /* try { // try from 0049c7e6 to 0049c7ea has its CatchHandler @ 0049ca04 */
    Naija__Naija__00483350((Naija *)this_00, arg1, arg2);
    break;
  case 0xb:
    this_00 = operator_new(0xad8);
    /* try { // try from 0049c986 to 0049c98a has its CatchHandler @ 0049ca65 */
    CommanderVideo__CommanderVideo__00464d60((CommanderVideo *)this_00, arg1, arg2);
    break;
  case 0xc:
    this_00 = operator_new(0xaa8);
    /* try { // try from 0049c886 to 0049c88a has its CatchHandler @ 0049ca55 */
    Runman__Runman__00486800((Runman *)this_00, arg1, arg2);
    break;
  case 0xd:
    this_00 = operator_new(0xab0);
    /* try { // try from 0049c906 to 0049c90a has its CatchHandler @ 0049ca45 */
    GooBall__GooBall__0046ad80((GooBall *)this_00, arg1, arg2);
    break;
  case 0xe:
    this_00 = operator_new(0xb00);
    /* try { // try from 0049c806 to 0049c80a has its CatchHandler @ 0049ca35 */
    MrMinecraft__MrMinecraft__00482810((MrMinecraft *)this_00, arg1, arg2);
    break;
  case 0x10:
    this_00 = operator_new(0xaa0);
    /* try { // try from 0049c946 to 0049c94a has its CatchHandler @ 0049ca26 */
    FlyWrench__FlyWrench__00469fb0((FlyWrench *)this_00, arg1, arg2);
    break;
  case 0x12:
    this_00 = operator_new(0xab0);
    /* try { // try from 0049c846 to 0049c84a has its CatchHandler @ 0049ca24 */
    Jill__Jill__0046e1e0((Jill *)this_00, arg1, arg2);
    break;
  case 0x13:
    this_00 = operator_new(0xab0);
    /* try { // try from 0049c8c6 to 0049c8ca has its CatchHandler @ 0049ca22 */
    VVVVVV__VVVVVV__005196d0((VVVVVV *)this_00, arg1, arg2);
    break;
  case 0x14:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c7c6 to 0049c7ca has its CatchHandler @ 0049ca16 */
    TofuBoy__TofuBoy__00465aa0((TofuBoy *)this_00, arg1, arg2);
    break;
  case 0x15:
    this_00 = operator_new(0xaa8);
    /* try { // try from 0049c7a6 to 0049c7aa has its CatchHandler @ 0049c9f2 */
    Machinarium__Machinarium__00473bc0((Machinarium *)this_00, arg1, arg2);
    break;
  case 0x16:
    this_00 = operator_new(0xaa8);
    /* try { // try from 0049c726 to 0049c72a has its CatchHandler @ 0049c9c7 */
    TheKid__TheKid__005189d0((TheKid *)this_00, arg1, arg2);
    break;
  case 0x17:
    this_00 = operator_new(0xab0);
    /* try { // try from 0049c766 to 0049c76a has its CatchHandler @ 0049c9d4 */
    HeadCrab__HeadCrab__0046b0e0((HeadCrab *)this_00, arg1, arg2);
    break;
  case 0x18:
    this_00 = operator_new(0xaa8);
    /* try { // try from 0049c6e6 to 0049c6ea has its CatchHandler @ 0049c9d2 */
    Ogmo__Ogmo__00483910((Ogmo *)this_00, arg1, arg2);
    break;
  case 0x19:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c786 to 0049c78a has its CatchHandler @ 0049c9e6 */
    PotatoBoy__PotatoBoy__00465b40((PotatoBoy *)this_00, arg1, arg2);
    break;
  case 0x1a:
    this_00 = operator_new(0xa98);
    /* try { // try from 0049c706 to 0049c70a has its CatchHandler @ 0049c9e4 */
    MeatboyEnding__MeatboyEnding__00465a00((MeatboyEnding *)this_00, arg1, arg2);
    break;
  case 0x1b:
    this_00 = operator_new(0xb58);
    /* try { // try from 0049c746 to 0049c74a has its CatchHandler @ 0049c9e2 */
    AlienHominid__AlienHominid__00462960((AlienHominid *)this_00, arg1, arg2);
    break;
  case 0x1c:
    this_00 = operator_new(0xaa0);
    /* try { // try from 0049c6be to 0049c6c2 has its CatchHandler @ 0049c9d6 */
    SprintMeatBoy__SprintMeatBoy__00465640((SprintMeatBoy *)this_00, arg1, arg2);
    break;
  case 0x1d:
    this_00 = operator_new(0x10f0);
    /* try { // try from 0049c69e to 0049c6a2 has its CatchHandler @ 0049c9c5 */
    Tim__Tim__00518f20((Tim *)this_00, arg1, arg2);
  }
  this_00[0x7db] = (DefaultMeatBoy)((byte)this_00[0x7db] & 0xef | (byte)arg1[0x7db] & 0x10);
  return this_00;
}

/* ======================================================================
 * GSMBCharactor__Render  (Ghidra `Render` @ 0049ca80)
 * Signature: uint8_t __thiscall Render(GSMBCharactor * self)
 * Class: GSMBCharactor
 * Calls: (none)
 * Called by: `GSuperMeatBoy__Render__005126c0`
 */
/* GSMBCharactor__Render() */

void __thiscall GSMBCharactor__Render(GSMBCharactor *self)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;

  if (*(short *)(self + 0x28) != 0) {
    uVar3 = 0;
    do {
      uVar1 = uVar3 & 0xffff;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar2;
      (**(code **)(**(long **)(*(long *)(self + 0x38) + uVar1 * 8) + 0x48))();
    } while ((int)uVar2 < (int)(uint) * (ushort *)(self + 0x28));
  }
  return;
}

/* ======================================================================
 * GSMBCharactor__DestroyCharactor  (Ghidra `DestroyCharactor` @ 0049cac0)
 * Signature: uint8_t __thiscall DestroyCharactor(GSMBCharactor * self, MeatBoyCharactor * arg1)
 * Class: GSMBCharactor
 * Calls: `GSMBCharactor__DestroyCharactor__0049cbf0`, `MeatBoyCharactor__RemoveControls`
 * Called by: (none)
 */
/* GSMBCharactor__DestroyCharactor__0049cbf0(MeatBoyCharactor*) */

void __thiscall GSMBCharactor__DestroyCharactor__0049cbf0(GSMBCharactor *self,
                                                          MeatBoyCharactor *arg1)

{
  uint64_t *puVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  ushort uVar10;
  ushort uVar11;

  if (arg1 != (MeatBoyCharactor *)0x0) {
    MeatBoyCharactor__RemoveControls(arg1);
    uVar10 = *(ushort *)(self + 0x28);
    if (uVar10 != 0) {
      plVar7 = *(long **)(self + 0x38);
      uVar6 = (uint)uVar10;
      uVar5 = 0;
      if (arg1 == (MeatBoyCharactor *)*plVar7) {
        uVar8 = 1;
        uVar5 = 0;
      } else {
        do {
          uVar8 = uVar5;
          uVar5 = uVar8 + 1;
          if ((int)uVar6 <= (int)uVar5) {
            return;
          }
        } while (arg1 != (MeatBoyCharactor *)plVar7[(ushort)uVar5]);
        uVar8 = uVar8 + 2;
      }
      if ((uVar8 < uVar6) && ((int)uVar5 < (int)(uVar6 - 1))) {
        lVar9 = (long)(int)uVar5 << 3;
        uVar6 = uVar5;
        while (true) {
          puVar1 = (uint64_t *)((long)plVar7 + lVar9);
          lVar9 = lVar9 + 8;
          uVar6 = uVar6 + 1;
          *puVar1 = *(uint64_t *)((long)plVar7 + lVar9);
          uVar10 = *(ushort *)(self + 0x28);
          if ((int)(uVar10 - 1) <= (int)uVar6)
            break;
          plVar7 = *(long **)(self + 0x38);
        }
      }
      if ((*(int *)(self + 0x30) == 1) && (uVar11 = *(ushort *)(self + 0x2a), uVar11 != 0)) {
        uVar10 = 0;
        do {
          puVar2 = (ushort *)(*(long *)(self + 0x40) + (ulong)uVar10 * 2);
          uVar3 = *puVar2;
          if (uVar5 == uVar3) {
            *puVar2 = 0xffff;
            uVar11 = *(ushort *)(self + 0x2a);
          } else if ((uVar5 < uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
            *puVar2 = uVar3 - 1;
            uVar11 = *(ushort *)(self + 0x2a);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
        uVar10 = *(ushort *)(self + 0x28);
      }
      sVar4 = 0;
      if (uVar10 != 0) {
        sVar4 = uVar10 - 1;
      }
      *(short *)(self + 0x28) = sVar4;
      /* WARNING: Could not recover jumptable at 0x0049cb7a. Too many branches */
      /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)arg1 + 8))(arg1);
      return;
    }
  }
  return;
}

/* ======================================================================
 * GSMBCharactor__DestroyCharactor__0049cbf0  (Ghidra `DestroyCharactor` @ 0049cbf0)
 * Signature: uint8_t __thiscall DestroyCharactor(GSMBCharactor * self, int arg1)
 * Class: GSMBCharactor
 * Calls: (none)
 * Called by: `EndBackToTitleFromReplay`, `FactoryBoss__FactoryBoss`, `FactoryBoss__FactoryBoss__00468f70`, `FinalBoss__FinalBoss`, `FinalBoss__SetToPhaseTwo`, `GSMBCharactor__DestroyCharactor`, `GSuperMeatBoy__DestroyGameResources`, `GSuperMeatBoy__LoadDeferredCharactor`, `GSuperMeatBoy__SwitchGameMode`, `GSuperMeatBoy__Update__00516690` (+1 more)
 */
/* GSMBCharactor__DestroyCharactor__0049cbf0(int) */

void __thiscall GSMBCharactor__DestroyCharactor__0049cbf0(GSMBCharactor *self, int arg1)

{
  uint64_t *puVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;

  uVar8 = *(ushort *)(self + 0x28);
  uVar5 = (uint)uVar8;
  if ((int)uVar5 <= arg1) {
    return;
  }
  if ((arg1 + 1U < uVar5) && (arg1 < (int)(uVar5 - 1))) {
    lVar6 = (long)arg1 << 3;
    iVar7 = arg1;
    do {
      iVar7 = iVar7 + 1;
      puVar1 = (uint64_t *)(*(long *)(self + 0x38) + lVar6);
      lVar6 = lVar6 + 8;
      *puVar1 = *(uint64_t *)(*(long *)(self + 0x38) + lVar6);
      uVar8 = *(ushort *)(self + 0x28);
    } while (iVar7 < (int)(uVar8 - 1));
  }
  if (*(int *)(self + 0x30) == 1) {
    uVar9 = *(ushort *)(self + 0x2a);
    if (uVar9 != 0) {
      uVar8 = 0;
      do {
        puVar2 = (ushort *)(*(long *)(self + 0x40) + (ulong)uVar8 * 2);
        uVar3 = *puVar2;
        if (arg1 == (uint)uVar3) {
          *puVar2 = 0xffff;
          uVar9 = *(ushort *)(self + 0x2a);
        } else if (((uint)arg1 < (uint)uVar3) && ((ushort)(uVar3 - 1) < 0xfffe)) {
          *puVar2 = uVar3 - 1;
          uVar9 = *(ushort *)(self + 0x2a);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar9);
      uVar8 = *(ushort *)(self + 0x28);
    }
  }
  sVar4 = 0;
  if (uVar8 != 0) {
    sVar4 = uVar8 - 1;
  }
  *(short *)(self + 0x28) = sVar4;
  return;
}
