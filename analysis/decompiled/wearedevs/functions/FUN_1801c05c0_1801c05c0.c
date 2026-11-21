/* FUN_1801c05c0 @ 1801c05c0 */

void FUN_1801c05c0(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 *local_50;
  longlong *local_48 [2];
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  plVar4 = (longlong *)param_1[4];
  param_1[4] = 0;
  local_38 = param_1;
  if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&DAT_1802872e0);
  }
  FUN_1801b8c90(&local_88,*plVar4 - *(longlong *)param_1[5],
                CONCAT71((int7)((ulonglong)param_1[9] >> 8),1),*(undefined8 *)param_1[6],
                ((undefined8 *)param_1[6])[1],param_1[7],param_1[8],param_1[9]);
  local_68 = local_88;
  uStack_64 = uStack_84;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  local_70 = local_78;
  local_58 = 1;
  if (*local_38 != 0) {
    if ((int)*local_38 == 1) {
      local_30 = local_38 + 1;
      lVar3 = local_38[1];
      lVar5 = local_38[3];
      while (lVar5 = lVar5 + -1, lVar3 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x18);
        *local_30 = lVar3;
        if (lVar3 == 0) {
          local_38[2] = 0;
        }
        else {
          *(undefined8 *)(lVar3 + 0x20) = 0;
        }
        local_38[3] = lVar5;
        FUN_1801b8990();
      }
    }
    else {
      local_30 = (longlong *)local_38[1];
      local_50 = (undefined8 *)local_38[2];
      if ((code *)*local_50 != (code *)0x0) {
        (*(code *)*local_50)(local_30);
      }
      if (local_50[1] != 0) {
        thunk_FUN_1801d3330(local_30,local_50[1],local_50[2]);
      }
    }
  }
  *local_38 = local_58;
  *(undefined4 *)(local_38 + 1) = local_68;
  *(undefined4 *)((longlong)local_38 + 0xc) = uStack_64;
  *(undefined4 *)(local_38 + 2) = uStack_60;
  *(undefined4 *)((longlong)local_38 + 0x14) = uStack_5c;
  local_38[3] = local_70;
  local_30 = (longlong *)CONCAT71(local_30._1_7_,(char)local_38[0xd]);
  if ((char)local_38[0xd] == '\0') {
    plVar4 = *(longlong **)local_38[10];
  }
  else {
    puVar1 = (undefined8 *)local_38[10];
    plVar4 = (longlong *)*puVar1;
    LOCK();
    lVar3 = *plVar4;
    *plVar4 = *plVar4 + 1;
    UNLOCK();
    if (*plVar4 == 0 || SCARRY8(lVar3,1) != *plVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    plVar4 = (longlong *)*puVar1;
    local_48[0] = plVar4;
  }
  LOCK();
  lVar3 = local_38[0xb];
  local_38[0xb] = 3;
  UNLOCK();
  if (lVar3 == 2) {
    FUN_1801c3480(plVar4 + 0x10,local_38[0xc]);
  }
  if ((char)local_30 != '\0') {
    LOCK();
    *local_48[0] = *local_48[0] + -1;
    UNLOCK();
    if (*local_48[0] == 0) {
      FUN_1801c64c0(local_48);
    }
  }
  return;
}


