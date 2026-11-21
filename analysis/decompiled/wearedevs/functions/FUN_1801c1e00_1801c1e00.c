/* FUN_1801c1e00 @ 1801c1e00 */

ulonglong * FUN_1801c1e00(ulonglong *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  undefined4 *local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar5 = *(longlong *)(param_2 + 6) - *(longlong *)(param_2 + 2);
  local_48 = param_2;
  if (0x3333333333333330 < uVar5) {
    uVar4 = 0;
LAB_1801c1e36:
    local_39 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar4,unaff_RDI);
  }
  unaff_RDI = (uVar5 >> 1) * 5;
  if (unaff_RDI == 0) {
    uStack_58 = 8;
    local_60 = 0;
  }
  else {
    FUN_180027490();
    uVar4 = 8;
    uStack_58 = thunk_FUN_1801d32d0(unaff_RDI,8);
    if (uStack_58 == 0) goto LAB_1801c1e36;
    local_60 = uVar5 >> 4;
  }
  local_88 = *param_2;
  uStack_84 = param_2[1];
  puStack_80 = *(undefined8 **)(param_2 + 2);
  local_78 = param_2[4];
  uStack_74 = param_2[5];
  uStack_70 = param_2[6];
  uStack_6c = param_2[7];
  puVar2 = *(undefined8 **)(param_2 + 6);
  if (puStack_80 == puVar2) {
    local_50 = 0;
  }
  else {
    puVar3 = (undefined1 *)(uStack_58 + 0x20);
    local_50 = 0;
    do {
      uVar4 = *puStack_80;
      uVar1 = *(undefined1 *)(puStack_80 + 1);
      puStack_80 = puStack_80 + 2;
      *(undefined8 *)(puVar3 + -0x20) = 0;
      *(undefined8 *)(puVar3 + -0x18) = 0;
      *(undefined8 *)(puVar3 + -0x10) = 0;
      *(undefined8 *)(puVar3 + -8) = uVar4;
      *puVar3 = uVar1;
      local_50 = local_50 + 1;
      puVar3 = puVar3 + 0x28;
    } while (puStack_80 != puVar2);
  }
  FUN_1801c6910(&local_88);
  param_1[2] = local_50;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return param_1;
}


