/* FUN_1801b5010 @ 1801b5010 */

longlong *
FUN_1801b5010(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int local_1f0 [86];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_58 = param_2;
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    lVar1 = local_58[3];
    local_49 = 1;
    FUN_1801b6870(local_1f0,lVar1,*param_3);
    if (local_1f0[0] == 2) {
      local_88 = local_58[2];
      local_98 = *local_58;
      uStack_90 = local_58[1];
    }
    else {
      local_78 = (undefined4)*local_58;
      uStack_74 = *(undefined4 *)((longlong)local_58 + 4);
      uStack_70 = (undefined4)local_58[1];
      uStack_6c = *(undefined4 *)((longlong)local_58 + 0xc);
      lVar2 = local_58[2];
      local_68 = lVar2;
      if (lVar2 == *local_58) {
        FUN_1801fca90(&local_78);
      }
      memcpy((void *)(lVar2 * 0x158 + CONCAT44(uStack_6c,uStack_70)),local_1f0,0x158);
      local_88 = lVar2 + 1;
      local_98 = CONCAT44(uStack_74,local_78);
      uStack_90 = CONCAT44(uStack_6c,uStack_70);
    }
    local_58[2] = local_88;
    *(undefined4 *)local_58 = (undefined4)local_98;
    *(undefined4 *)((longlong)local_58 + 4) = local_98._4_4_;
    *(undefined4 *)(local_58 + 1) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)local_58 + 0xc) = uStack_90._4_4_;
    local_58[3] = lVar1;
  }
  lVar1 = *local_58;
  lVar2 = local_58[1];
  lVar3 = local_58[3];
  param_1[2] = local_58[2];
  param_1[3] = lVar3;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}


