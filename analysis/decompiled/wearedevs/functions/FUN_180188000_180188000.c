/* FUN_180188000 @ 180188000 */

undefined8 FUN_180188000(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_50 = param_4;
  uVar5 = FUN_1801e4810(&local_50);
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    cVar4 = FUN_180188340(param_2);
    uVar7 = 1;
    if ((cVar4 == '\r') && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
      lVar1 = *param_1;
      plVar2 = (longlong *)param_1[1];
      LOCK();
      lVar6 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      local_38 = (undefined8 *)param_2;
      if (*plVar2 == 0 || SCARRY8(lVar6,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar6 = FUN_18018ce70(lVar1 + 0x10,param_1[1],param_1[2],(char)param_1[3]);
      if ((lVar6 != 0) && (((uint)local_38 & 3) == 1)) {
        local_48 = param_2 + -1;
        local_40 = *(undefined8 *)((longlong)local_38 + -1);
        local_38 = *(undefined8 **)((longlong)local_38 + 7);
        if ((code *)*local_38 != (code *)0x0) {
          (*(code *)*local_38)(local_40);
        }
        if (local_38[1] != 0) {
          thunk_FUN_1801d3330(local_40,local_38[1],local_38[2]);
        }
        thunk_FUN_1801d3330(local_48,0x18,8);
      }
    }
  }
  return uVar7;
}


