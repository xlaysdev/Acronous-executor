/* FUN_1801b2630 @ 1801b2630 */

longlong * FUN_1801b2630(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong *local_58;
  undefined1 *puStack_50;
  ulonglong *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_68 = param_2[1];
  local_60 = param_3;
  if (local_68 < param_3) {
    local_58 = &local_60;
    puStack_50 = &LAB_1800273d0;
    local_48 = &local_68;
    local_40 = &LAB_1800273d0;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180285a58,&local_58,&DAT_180285a80);
  }
  uVar2 = param_2[3];
  if ((uVar2 & 1) == 0) {
    LOCK();
    plVar3 = (longlong *)(uVar2 + 0x20);
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1801fca10();
    }
  }
  else {
    FUN_180027490();
    plVar3 = (longlong *)thunk_FUN_1801d32d0(0x28,8);
    if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x28);
    }
    uVar4 = uVar2 >> 5;
    lVar1 = *param_2;
    *plVar3 = uVar4 + param_2[2];
    plVar3[1] = lVar1 - uVar4;
    plVar3[2] = local_68 + uVar4;
    plVar3[3] = (ulonglong)((uint)(uVar2 >> 2) & 7);
    plVar3[4] = 2;
    param_2[3] = (longlong)plVar3;
  }
  local_58 = (ulonglong *)*param_2;
  puStack_50 = (undefined1 *)param_2[1];
  local_48 = (ulonglong *)param_2[2];
  local_40 = (undefined1 *)param_2[3];
  FUN_1801b2540(param_2,param_3);
  param_1[2] = param_3;
  param_1[3] = (longlong)local_40;
  *param_1 = (longlong)local_58;
  param_1[1] = param_3;
  return param_1;
}


