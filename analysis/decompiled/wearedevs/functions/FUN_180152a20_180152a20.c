/* FUN_180152a20 @ 180152a20 */

longlong * FUN_180152a20(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_18015e150(param_2 + 0x28,param_3);
  if (puVar2 == (undefined4 *)0x0) {
    param_2 = 0;
  }
  else {
    uVar1 = *param_3;
    *(undefined4 *)(param_1 + 1) = *puVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}


