/* FUN_1800a98b0 @ 1800a98b0 */

void FUN_1800a98b0(int *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int local_258 [66];
  longlong local_150;
  longlong local_148 [19];
  longlong local_b0;
  longlong lStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  longlong lStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  int *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_40 = param_2;
  local_38 = param_1;
  if (*param_1 == 1) {
    uVar1 = *(undefined8 *)(param_1 + 4);
    iVar3 = param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    if ((char)iVar3 == '\0') {
      local_29 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("callback sender not dropped before send",0x27,&DAT_1802104c8);
    }
    lVar2 = *param_2;
    local_48 = uVar1;
    if (lVar2 == 4) {
      memcpy(&local_150,param_2 + 1,0x98);
    }
    else {
      memcpy(local_148,param_2 + 1,0x98);
      local_b0 = param_2[0x14];
      lStack_a8 = param_2[0x15];
      local_a0 = (undefined4)param_2[0x16];
      uStack_9c = *(undefined4 *)((longlong)param_2 + 0xb4);
      uStack_98 = (undefined4)param_2[0x17];
      uStack_94 = *(undefined4 *)((longlong)param_2 + 0xbc);
      local_90 = (undefined4)param_2[0x18];
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc4);
      uStack_88 = (undefined4)param_2[0x19];
      uStack_84 = *(undefined4 *)((longlong)param_2 + 0xcc);
      local_80 = (undefined4)param_2[0x1a];
      uStack_7c = *(undefined4 *)((longlong)param_2 + 0xd4);
      uStack_78 = (undefined4)param_2[0x1b];
      uStack_74 = *(undefined4 *)((longlong)param_2 + 0xdc);
      local_70 = param_2[0x1c];
      lStack_68 = param_2[0x1d];
      local_60 = (undefined4)param_2[0x1e];
      uStack_5c = *(undefined4 *)((longlong)param_2 + 0xf4);
      uStack_58 = (undefined4)param_2[0x1f];
      uStack_54 = *(undefined4 *)((longlong)param_2 + 0xfc);
      local_148[0] = param_2[0x20];
      local_50 = local_148[0];
      if (lVar2 != 3) {
        local_2a = 1;
        local_150 = lVar2;
        FUN_1800a7560(&local_150);
      }
      local_150 = 3;
    }
    local_2a = 0;
    FUN_1800aa560(local_258,uVar1,&local_150);
    if (local_258[0] != 4) {
      local_29 = 0;
      FUN_1800a5890(local_258);
    }
  }
  else {
    iVar3 = param_1[2];
    uVar1 = *(undefined8 *)(param_1 + 4);
    param_1[2] = 0;
    param_1[3] = 0;
    if (iVar3 != 1) {
      local_29 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("callback sender not dropped before send",0x27,&DAT_1802104b0);
    }
    memcpy(&local_150,param_2,0x108);
    local_29 = 0;
    FUN_1800aaa30(local_258,uVar1,&local_150);
    if (local_258[0] != 5) {
      local_29 = 0;
      FUN_1800a62b0(local_258);
    }
  }
  FUN_1800a5d50(local_38);
  return;
}


