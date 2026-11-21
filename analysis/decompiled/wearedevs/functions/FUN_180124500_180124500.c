/* FUN_180124500 @ 180124500 */

undefined2 *
FUN_180124500(undefined2 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  if ((0xfffffffffffffffd < param_3) && (cVar2 = FUN_18013a0c0(), cVar2 != '\0')) {
    param_3 = 0;
  }
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0xc) = *param_2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *param_1 = 2;
  *(ulonglong *)(param_1 + 4) = param_3;
  *(undefined8 *)(param_1 + 8) = param_4;
  return param_1;
}


