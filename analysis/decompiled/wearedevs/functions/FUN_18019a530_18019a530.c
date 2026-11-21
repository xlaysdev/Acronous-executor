/* FUN_18019a530 @ 18019a530 */

ulonglong FUN_18019a530(longlong param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = *(longlong *)(param_1 + 0x10) - 2;
  uVar3 = uVar2;
  if (uVar2 < 4) {
    puVar1 = *(uint **)(param_1 + 8);
    uVar3 = (longlong)&switchD_18019a550::switchdataD_180267b08 +
            (longlong)(int)(&switchD_18019a550::switchdataD_180267b08)[uVar2];
    switch(uVar2) {
    case 0:
      if ((short)*puVar1 == 0x7377) {
LAB_18019a580:
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      break;
    case 1:
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
      if (*(char *)((longlong)puVar1 + 2) == 's' && (short)*puVar1 == 0x7377) {
        return uVar3;
      }
      if (*(char *)((longlong)puVar1 + 2) == 'p' && (short)*puVar1 == 0x7466) {
        return uVar3;
      }
      break;
    case 2:
      if (*puVar1 == 0x70747468) goto LAB_18019a580;
      if (*puVar1 == 0x656c6966) {
        return 0;
      }
      break;
    case 3:
      uVar3 = (ulonglong)(*puVar1 ^ 0x70747468);
      if ((char)puVar1[1] == 's' && (*puVar1 ^ 0x70747468) == 0) goto LAB_18019a580;
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),2);
}


