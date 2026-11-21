/* FUN_180114360 @ 180114360 */

void FUN_180114360(longlong param_1)

{
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x80) == 1) {
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  else {
    if ((int)*(longlong *)(param_1 + 0x80) != 2) goto LAB_1801143be;
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  if ((uVar1 < 2) && (*(longlong *)(param_1 + 0xb8) != 0)) {
    FUN_1801b2a70(param_1 + 0xb8);
  }
LAB_1801143be:
  *(undefined8 *)(param_1 + 0x80) = 4;
  *(undefined1 *)(param_1 + 0x145) = 2;
  return;
}


