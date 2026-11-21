/* FUN_1801a9db0 @ 1801a9db0 */

undefined8 FUN_1801a9db0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (0xffff < param_2) {
    uVar1 = FUN_1801a9e10(param_1,(param_2 >> 10) - 0x2840);
    if ((uVar1 | 2) != 3) {
      return 0;
    }
    param_2 = param_2 & 0x3ff | 0xdc00;
  }
  uVar2 = FUN_1801a9e10(param_1,param_2);
  return uVar2;
}


