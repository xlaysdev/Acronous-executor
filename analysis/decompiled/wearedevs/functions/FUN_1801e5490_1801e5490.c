/* FUN_1801e5490 @ 1801e5490 */

undefined8 FUN_1801e5490(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  puVar2 = *(ulonglong **)*param_1;
  if (puVar2[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&DAT_180290e30);
  }
  puVar2[2] = 0xffffffffffffffff;
  uVar1 = FUN_1801d6150(puVar2 + 3);
  uVar3 = 0;
  if ((uVar1 & 0xffffffff00000003) != 0x600000002) {
    uVar3 = uVar1;
  }
  puVar2[2] = puVar2[2] + 1;
  if (uVar3 != 0) {
    puVar2 = param_1 + 1;
    if (param_1[1] != 0) {
      FUN_1801e2450(puVar2);
    }
    *puVar2 = uVar3;
  }
  return CONCAT71((int7)((ulonglong)puVar2 >> 8),uVar3 != 0);
}


