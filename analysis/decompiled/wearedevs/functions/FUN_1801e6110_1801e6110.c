/* FUN_1801e6110 @ 1801e6110 */

void FUN_1801e6110(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar4 = *param_1;
  if (SBORROW8(0,lVar4)) {
    local_48 = 0;
    uStack_40 = 1;
    local_38 = 0;
    FUN_1801ef150(&local_48,&PTR_LAB_1802907c8,**(undefined8 **)param_1[3],
                  (*(undefined8 **)param_1[3])[1]);
    param_1[2] = local_38;
    *(undefined4 *)param_1 = (undefined4)local_48;
    *(undefined4 *)((longlong)param_1 + 4) = local_48._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
    lVar4 = *param_1;
  }
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  FUN_180027490();
  plVar3 = (longlong *)thunk_FUN_1801d32d0(0x18,8);
  if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *plVar3 = lVar4;
  plVar3[1] = lVar1;
  plVar3[2] = lVar2;
  return;
}


