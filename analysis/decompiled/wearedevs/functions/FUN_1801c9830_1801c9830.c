/* FUN_1801c9830 @ 1801c9830 */

void FUN_1801c9830(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong local_a0;
  longlong local_98;
  undefined2 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar8 = param_2[4];
  local_98 = param_2[5] + lVar8;
  local_90 = 0;
  local_a0 = lVar8;
  local_50 = param_2;
  FUN_1801ba750(&local_68,&local_a0);
  lVar4 = local_58;
  if (local_58 == local_68) {
    FUN_180200ca0(&local_68);
  }
  *(undefined2 *)(local_60 + lVar4 * 2) = 0;
  local_88 = local_68;
  local_78 = local_60;
  lVar6 = local_50[1];
  local_98 = local_50[2] + lVar6;
  local_90 = 0;
  local_a0 = lVar6;
  FUN_1801ba750(&local_68,&local_a0);
  if (local_58 == local_68) {
    FUN_180200ca0(&local_68);
  }
  plVar5 = local_50;
  *(undefined2 *)(local_60 + local_58 * 2) = 0;
  local_80 = local_68;
  local_70 = local_60;
  uVar1 = *(uint *)(&DAT_180288898 + (ulonglong)*(byte *)(local_50 + 0x15) * 4);
  uVar3 = local_50[6];
  uVar10 = 6;
  if ((longlong)uVar3 < 0) {
    uVar10 = uVar3 ^ 0x8000000000000000;
  }
  uVar2 = *(uint *)(&DAT_1802888a4 + uVar10 * 4);
  if ((int)local_50[0x12] == 0x10) {
    uVar9 = 0;
    lVar7 = 0x10;
  }
  else {
    if ((int)local_50[0x12] != 9) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("internal error: entered unreachable code: unsupported window handle, expected: WindowsC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\rfd-0.15.4\\src\\backend\\win_cid\\message_dialog.rs"
                    ,0xad,&DAT_180288880);
    }
    lVar7 = local_50[0x13];
    uVar9 = 1;
  }
  param_1[2] = local_88;
  param_1[3] = local_78;
  param_1[4] = lVar4 + 1;
  param_1[5] = local_68;
  param_1[6] = local_60;
  param_1[7] = local_58 + 1;
  *param_1 = uVar9;
  param_1[1] = lVar7;
  *(uint *)(param_1 + 8) = uVar2 | uVar1;
  if (*local_50 != 0) {
    thunk_FUN_1801d3330(lVar6,*local_50,1);
  }
  if (plVar5[3] != 0) {
    thunk_FUN_1801d3330(lVar8,plVar5[3],1);
  }
  if (3 < uVar10) {
    if (uVar10 == 4) {
      lVar8 = 8;
    }
    else {
      if (uVar10 == 5) {
        lVar4 = plVar5[7];
        lVar6 = 0x10;
        lVar8 = 0x20;
      }
      else {
        if (uVar3 != 0) {
          thunk_FUN_1801d3330(plVar5[7],uVar3,1);
        }
        lVar4 = plVar5[9];
        lVar6 = 0x20;
        lVar8 = 0x30;
      }
      if (lVar4 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)((longlong)plVar5 + lVar6 + 0x30),lVar4,1);
      }
    }
    lVar4 = *(longlong *)((longlong)plVar5 + lVar8 + 0x30);
    if (lVar4 != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)((longlong)plVar5 + lVar8 + 0x38),lVar4,1);
    }
  }
  return;
}


