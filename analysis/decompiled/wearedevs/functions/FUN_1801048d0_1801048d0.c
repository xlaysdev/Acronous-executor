/* FUN_1801048d0 @ 1801048d0 */

longlong * FUN_1801048d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = param_2;
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(8,8,param_3,param_4,uVar2,uVar3);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,8);
  }
  *puVar1 = param_2;
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = (longlong)puVar1;
  param_1[1] = (longlong)&PTR_FUN_18023b118;
  *(undefined1 *)((longlong)param_1 + 0x29) = 2;
  return param_1;
}


