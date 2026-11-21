/* FUN_18017ad40 @ 18017ad40 */

void FUN_18017ad40(undefined8 *param_1,undefined1 param_2)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  undefined *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_180027490();
  local_48 = (undefined8 *)thunk_FUN_1801d32d0(0x10,8);
  if (local_48 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x10);
  }
  *local_48 = 1;
  local_48[1] = 1;
  local_40 = &DAT_180264260;
  local_38 = local_48;
  plVar3 = (longlong *)FUN_18009ec50(0);
  if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180261f40);
  }
  local_58 = (undefined4)*plVar3;
  uStack_54 = *(undefined4 *)((longlong)plVar3 + 4);
  uStack_50 = (undefined4)plVar3[1];
  uStack_4c = *(undefined4 *)((longlong)plVar3 + 0xc);
  *plVar3 = *plVar3 + 1;
  iVar6 = DAT_1802fd4d8;
  LOCK();
  DAT_1802fd4d8 = DAT_1802fd4d8 + 1;
  UNLOCK();
  uVar4 = FUN_1801804c0(&local_58,iVar6);
  bVar1 = uVar4 >> 0x20 != 0;
  iVar2 = (int)uVar4;
  iVar6 = 1;
  if (bVar1 || iVar2 != 0) {
    iVar6 = iVar2;
  }
  uVar5 = 0;
  if (bVar1 || iVar2 != 0) {
    uVar5 = (int)(uVar4 >> 0x20);
  }
  *(undefined1 *)(param_1 + 0x1c) = param_2;
  param_1[4] = 0x8000000000000000;
  param_1[0xc] = 0x400;
  *param_1 = 0;
  param_1[0xd] = 0x200;
  param_1[10] = local_38;
  param_1[0xb] = &DAT_180264260;
  param_1[2] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 9) = 1000000000;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0x1a] = 0x3d;
  *(undefined4 *)((longlong)param_1 + 0xe1) = 0;
  *(undefined4 *)(param_1 + 0x1b) = uVar5;
  *(int *)((longlong)param_1 + 0xdc) = iVar6;
  *(undefined2 *)((longlong)param_1 + 0xe5) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe7) = 0;
  return;
}


