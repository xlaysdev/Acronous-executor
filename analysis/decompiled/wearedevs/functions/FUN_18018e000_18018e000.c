/* FUN_18018e000 @ 18018e000 */

longlong * FUN_18018e000(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  plVar4 = param_2;
  uVar2 = FUN_180186ea0(param_1 + 0x10);
  if ((uVar2 & 1) == 0) {
    FUN_180027490();
    puVar3 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x18);
    }
    *puVar3 = 1;
    puVar3[1] = 1;
    puVar3[2] = plVar4;
    lVar1 = param_2[2];
    if (lVar1 == *param_2) {
      FUN_1801f88d0(param_2);
    }
    *(undefined8 **)(param_2[1] + lVar1 * 8) = puVar3;
    param_2[2] = lVar1 + 1;
    plVar4 = (longlong *)0x0;
  }
  return plVar4;
}


