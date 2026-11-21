/* FUN_1801aac60 @ 1801aac60 */

byte * FUN_1801aac60(longlong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = param_1[1];
  if (uVar2 == 0) {
    return (byte *)0x0;
  }
  pbVar3 = (byte *)*param_1;
  bVar1 = *pbVar3;
  if (((char)bVar1 < '\0') ||
     ((*(uint *)(param_1[2] + (ulonglong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) != 0)) {
    *param_1 = (longlong)(pbVar3 + 1);
    param_1[1] = uVar2 - 1;
    return &DAT_1802827d8 + (ulonglong)bVar1 * 3;
  }
  uVar4 = 1;
  do {
    uVar5 = uVar4;
    if (uVar2 == uVar5) {
      *param_1 = 1;
      param_1[1] = 0;
      return pbVar3;
    }
    bVar1 = pbVar3[uVar5];
  } while ((-1 < (char)bVar1) &&
          (uVar4 = uVar5 + 1,
          (*(uint *)(param_1[2] + (ulonglong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) == 0));
  if (uVar2 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("mid > len",0x13,&PTR_s_C__Users_burne__cargo_registry_s_180282ae8);
  }
  *param_1 = (longlong)(pbVar3 + uVar5);
  param_1[1] = uVar2 - uVar5;
  return pbVar3;
}


