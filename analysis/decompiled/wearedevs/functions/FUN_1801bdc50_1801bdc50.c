/* FUN_1801bdc50 @ 1801bdc50 */

void FUN_1801bdc50(undefined2 param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  char param_5,longlong *param_6,longlong *param_7)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_4 == '\0') {
    bVar4 = false;
  }
  else if (param_4 == '\x01') {
    bVar4 = true;
  }
  else {
    bVar4 = SBORROW8(0,*param_6);
  }
  bVar1 = bVar4;
  if (param_5 != '\0') {
    if (param_5 == '\x01') goto LAB_1801bdcde;
    bVar1 = (bool)(SBORROW8(0,*param_7) | bVar4);
  }
  if (!bVar1) {
    return;
  }
LAB_1801bdcde:
  FUN_1801bded0(&local_78,param_3,param_2,param_1);
  if (SBORROW8(0,local_78)) {
    lVar3 = *param_6;
    if ((!SBORROW8(0,lVar3)) && (lVar3 != 0)) {
      thunk_FUN_1801d3330(param_6[1],lVar3,1);
    }
    *param_6 = -0x8000000000000000;
  }
  else {
    local_50 = local_78;
    if (local_68 == 0) {
      lVar3 = 0;
    }
    else {
      lVar2 = local_68 * 2;
      lVar3 = 0;
      do {
        if (*(short *)(local_70 + lVar3 * 2) == 0) goto LAB_1801bdd69;
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + -2;
      } while (lVar2 != 0);
      lVar3 = local_68;
    }
LAB_1801bdd69:
    local_60 = local_70;
    FUN_1801e5470(&local_98,local_70,lVar3);
    local_48 = local_98;
    local_58 = local_90;
    FUN_1801bbae0(param_5,local_90,local_88,param_7);
    lVar2 = local_50;
    lVar3 = local_60;
    if (bVar4) {
      lVar3 = *param_6;
      if ((!SBORROW8(0,lVar3)) && (lVar3 != 0)) {
        thunk_FUN_1801d3330(param_6[1],lVar3,1);
      }
      *param_6 = local_48;
      param_6[1] = local_58;
      param_6[2] = local_88;
      param_6[3] = lStack_80;
      lVar3 = local_60;
    }
    else if (local_48 != 0) {
      thunk_FUN_1801d3330(local_58,local_48,1);
    }
    if (lVar2 != 0) {
      thunk_FUN_1801d3330(lVar3,lVar2 * 2,2);
    }
  }
  return;
}


