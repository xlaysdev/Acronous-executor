/* FUN_18010cda0 @ 18010cda0 */

void FUN_18010cda0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68;
  undefined1 local_67;
  longlong local_60;
  undefined8 *local_58;
  longlong *local_50;
  char local_47;
  longlong local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  lVar5 = param_2[3];
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x19);
  if (*param_2 == 0) {
    local_80 = 0;
    local_70 = (longlong *)param_2[2];
    LOCK();
    lVar1 = *local_70;
    *local_70 = *local_70 + 1;
    UNLOCK();
    if (*local_70 == 0 || SCARRY8(lVar1,1) != *local_70 < 0) goto LAB_18010ce89;
  }
  else {
    plVar6 = param_2;
    local_80 = (**(code **)(param_2[1] + 0x18))();
    local_70 = (longlong *)param_2[2];
    LOCK();
    lVar1 = *local_70;
    *local_70 = *local_70 + 1;
    UNLOCK();
    param_2 = plVar6;
    if (*local_70 == 0 || SCARRY8(lVar1,1) != *local_70 < 0) {
LAB_18010ce89:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  local_78 = param_2;
  local_68 = (char)lVar5;
  local_67 = uVar2;
  FUN_1801106c0(&local_60,lVar3 + 0x10,&local_80);
  if (local_47 != '\x02') {
    local_40 = local_60;
    if (local_60 != 0) {
      local_38 = local_58;
      if ((code *)*local_58 != (code *)0x0) {
        (*(code *)*local_58)(local_60);
      }
      if (local_38[1] != 0) {
        thunk_FUN_1801d3330(local_40,local_38[1],local_38[2]);
      }
    }
    LOCK();
    *local_50 = *local_50 + -1;
    UNLOCK();
    if (*local_50 == 0) {
      FUN_1801029b0(&local_50);
    }
  }
  return;
}


