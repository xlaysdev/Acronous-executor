/* FUN_1801badc0 @ 1801badc0 */

void FUN_1801badc0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = param_2[2];
  local_88 = (longlong *)*param_2;
  uStack_80 = param_2[1];
  FUN_1801b8f00(&local_a0,&local_88);
  if ((local_90 != 0) && (local_a0 != (longlong *)0x0)) {
    uVar4 = 0;
    lVar2 = local_90;
    plVar3 = local_a0;
    do {
      uVar4 = uVar4 + plVar3[2];
      lVar2 = lVar2 + -1;
      if (lVar2 == 0) break;
      plVar3 = (longlong *)plVar3[3];
    } while (plVar3 != (longlong *)0x0);
    if ((ulonglong)(*param_1 - param_1[2]) < uVar4) {
      local_49 = 1;
      FUN_1801f6a80(param_1,param_1[2],uVar4,8,0x158);
    }
  }
  local_88 = local_a0;
  uStack_80 = uStack_98;
  local_78 = local_90;
  local_58 = uStack_98;
  if (local_a0 != (longlong *)0x0) {
    do {
      lVar2 = local_90 + -1;
      plVar3 = (longlong *)local_a0[3];
      if (plVar3 == (longlong *)0x0) {
        local_58 = 0;
      }
      else {
        plVar3[4] = 0;
      }
      lVar1 = *local_a0;
      _Src = (void *)local_a0[1];
      uVar4 = local_a0[2];
      thunk_FUN_1801d3330((int)local_a0[1],0x28,8);
      local_90 = lVar2;
      if (SBORROW8(0,lVar1)) goto LAB_1801bafb3;
      lVar5 = param_1[2];
      local_68 = lVar2;
      local_60 = plVar3;
      if ((ulonglong)(*param_1 - lVar5) < uVar4) {
        FUN_1801f6a80(param_1,lVar5,uVar4,8,0x158);
        lVar5 = param_1[2];
      }
      memcpy((void *)(lVar5 * 0x158 + param_1[1]),_Src,uVar4 * 0x158);
      param_1[2] = lVar5 + uVar4;
      if (lVar1 != 0) {
        thunk_FUN_1801d3330(_Src,lVar1 * 0x158,8);
      }
      local_a0 = local_60;
      local_90 = local_68;
    } while (local_60 != (longlong *)0x0);
  }
  plVar3 = (longlong *)0x0;
LAB_1801bafb3:
  local_68 = local_90;
  uStack_80 = local_58;
  while (plVar3 != (longlong *)0x0) {
    local_60 = (longlong *)plVar3[3];
    if (local_60 == (longlong *)0x0) {
      local_58 = 0;
    }
    else {
      local_60[4] = 0;
    }
    FUN_1801b8990(plVar3);
    local_68 = local_68 + -1;
    plVar3 = local_60;
  }
  return;
}


