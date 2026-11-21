/* FUN_1801a8d20 @ 1801a8d20 */

uint FUN_1801a8d20(undefined8 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1801a9db0(param_1,param_3);
  uVar2 = 0x110000;
  if (iVar1 == 1) {
    iVar1 = FUN_1801a9db0(param_1);
    if ((iVar1 == 2) && (uVar2 = 0x110000, 0xffef07ff < (param_2 ^ 0xd800) - 0x110000)) {
      uVar2 = param_2;
    }
  }
  return uVar2;
}


