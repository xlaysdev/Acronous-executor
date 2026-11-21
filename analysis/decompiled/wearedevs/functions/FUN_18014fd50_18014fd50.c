/* FUN_18014fd50 @ 18014fd50 */

ulonglong FUN_18014fd50(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1[3] + 0x20);
  FUN_18015fac0(param_1[3],uVar1,param_2);
  FUN_180154980(*param_1,param_1[1],*(undefined4 *)(param_1 + 2),uVar1 & 0xffffffff);
  return uVar1 & 0xffffffff;
}


