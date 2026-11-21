/* FUN_1801bf590 @ 1801bf590 */

void FUN_1801bf590(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong local_90;
  longlong local_88;
  undefined2 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_90 = param_1[1];
  local_88 = param_1[2] + local_90;
  local_80 = 0;
  local_48 = local_90;
  local_40 = param_1;
  local_38 = param_4;
  FUN_1801ba750(&local_60,&local_90);
  if (local_50 == CONCAT44(uStack_5c,local_60)) {
    local_29 = 1;
    FUN_180200ca0(&local_60);
  }
  *(undefined2 *)(CONCAT44(uStack_54,uStack_58) + local_50 * 2) = 0;
  local_68 = local_50 + 1;
  local_78 = local_60;
  uStack_74 = uStack_5c;
  uStack_70 = uStack_58;
  uStack_6c = uStack_54;
  local_29 = 0;
  local_50 = local_68;
  cVar3 = FUN_1801b7d00(param_2,local_38,&local_78);
  plVar2 = local_40;
  if (cVar3 == '\0') {
    if (*local_38 != 0) {
      thunk_FUN_1801d3330(local_38[1],*local_38,1);
    }
  }
  else {
    local_68 = local_38[2];
    local_78 = (undefined4)*local_38;
    uStack_74 = *(undefined4 *)((longlong)local_38 + 4);
    uStack_70 = (undefined4)local_38[1];
    uStack_6c = *(undefined4 *)((longlong)local_38 + 0xc);
    lVar1 = *param_3;
    if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
      thunk_FUN_1801d3330(param_3[1],lVar1,1);
    }
    param_3[2] = local_68;
    *(undefined4 *)param_3 = local_78;
    *(undefined4 *)((longlong)param_3 + 4) = uStack_74;
    *(undefined4 *)(param_3 + 1) = uStack_70;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_6c;
  }
  if (*plVar2 != 0) {
    thunk_FUN_1801d3330(local_48,*plVar2,1);
  }
  return;
}


