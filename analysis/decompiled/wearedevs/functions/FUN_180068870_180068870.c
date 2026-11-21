/* FUN_180068870 @ 180068870 */

longlong * FUN_180068870(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_180027490();
  puVar3 = (undefined8 *)thunk_FUN_1801d32d0(8,8);
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,8);
  }
  *puVar3 = param_2;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)param_1[1];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
    }
  }
  *param_1 = (longlong)puVar3;
  param_1[1] = (longlong)&DAT_18020b0f0;
  return param_1;
}


