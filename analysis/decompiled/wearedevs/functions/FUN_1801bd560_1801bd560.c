/* FUN_1801bd560 @ 1801bd560 */

void FUN_1801bd560(undefined2 param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_4 == '\0') {
    return;
  }
  if ((param_4 != '\x01') && (param_5[2] != 0)) {
    return;
  }
  if (DAT_1802fd548 != 0) {
    FUN_1801fcfb2(&DAT_1802fd548);
  }
  if (DAT_1802fd54c == '\0') {
    FUN_1801bded0(&local_70,param_3,param_2,param_1);
    local_38 = CONCAT44(uStack_6c,local_70);
    if (SBORROW8(0,local_38)) {
      local_58 = 0;
      uStack_50 = 8;
      local_48 = 0;
    }
    else {
      local_40 = CONCAT44(uStack_64,uStack_68);
      FUN_1801be060(&local_58);
      if (local_38 != 0) {
        thunk_FUN_1801d3330(local_40,local_38 * 2,2);
      }
    }
    lVar1 = param_5[1];
    lVar2 = param_5[2];
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar3[-1] != 0) {
          thunk_FUN_1801d3330(*puVar3,puVar3[-1],1);
        }
        puVar3 = puVar3 + 4;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (*param_5 != 0) {
      thunk_FUN_1801d3330(lVar1,*param_5 << 5,8);
    }
    param_5[2] = local_48;
    local_70 = (undefined4)local_58;
    uStack_6c = local_58._4_4_;
    uStack_68 = (undefined4)uStack_50;
    uStack_64 = uStack_50._4_4_;
  }
  else {
    FUN_1801bdab0(&local_70,param_3);
    lVar1 = param_5[1];
    lVar2 = param_5[2];
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar3[-1] != 0) {
          thunk_FUN_1801d3330(*puVar3,puVar3[-1],1);
        }
        puVar3 = puVar3 + 4;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (*param_5 != 0) {
      thunk_FUN_1801d3330(lVar1,*param_5 << 5,8);
    }
    param_5[2] = local_60;
  }
  *(undefined4 *)param_5 = local_70;
  *(undefined4 *)((longlong)param_5 + 4) = uStack_6c;
  *(undefined4 *)(param_5 + 1) = uStack_68;
  *(undefined4 *)((longlong)param_5 + 0xc) = uStack_64;
  return;
}


