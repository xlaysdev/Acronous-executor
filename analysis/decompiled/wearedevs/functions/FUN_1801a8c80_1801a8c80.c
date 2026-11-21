/* FUN_1801a8c80 @ 1801a8c80 */

void FUN_1801a8c80(uint *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  if (0xfe < uVar1 >> 0x18) {
    uVar2 = uVar1 & 0xffffff;
    uVar3 = 0xffff;
    if (*(char *)((longlong)param_2 + 0x34) != '\0') {
      uVar3 = 0xfff;
    }
    if (uVar3 < uVar2) {
      if (uVar2 < 0x110000) {
        uVar1 = FUN_1801a8300(param_2,uVar2);
      }
      else {
        uVar1 = *(uint *)(param_2 + 4);
      }
    }
    else {
      uVar1 = *(uint *)(param_2[2] +
                       (ulonglong)
                       ((uVar1 & 0x3f) + (uint)*(ushort *)(*param_2 + (ulonglong)(uVar2 >> 6) * 2))
                       * 4);
    }
    uVar3 = 0;
    if ((uVar1 & 0x3ffffe00) == 0xd800) {
      uVar3 = uVar1 << 0x18;
    }
    *param_1 = uVar3 | uVar2;
  }
  return;
}


