/* FUN_180125240 @ 180125240 */

void FUN_180125240(ulonglong *param_1)

{
  ulonglong _Size;
  ulonglong uVar1;
  void *_Src;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  ulonglong local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  ulonglong uStack_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  void *pvStack_70;
  ulonglong local_68;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  ulonglong local_58;
  ulonglong local_50;
  void *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar1 = param_1[10];
  _Size = uVar1 * 4;
  if (0x7ffffffffffffffe < _Size || uVar1 >> 0x3e != 0) {
    uVar4 = 0;
LAB_180125290:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar4,_Size);
  }
  uVar2 = param_1[0xb];
  _Src = (void *)param_1[9];
  local_50 = uVar1;
  if (_Size == 0) {
    local_48 = (void *)0x2;
  }
  else {
    FUN_180027490();
    uVar4 = 2;
    local_48 = (void *)thunk_FUN_1801d32d0(_Size,2);
    if (local_48 == (void *)0x0) goto LAB_180125290;
  }
  local_58 = _Size;
  memcpy(local_48,_Src,_Size);
  FUN_180126ec0(&local_d0,param_1 + 3);
  FUN_180126d10(&local_100,param_1 + 6);
  local_b8 = *param_1;
  if (1 < local_b8) {
    local_e8 = param_1[1];
    uStack_e0 = param_1[2];
  }
  local_90 = local_c0;
  uStack_a0 = local_d0;
  uStack_98 = uStack_c8;
  local_88 = local_100;
  uStack_80 = uStack_f8;
  local_78 = local_f0;
  uStack_b0 = (undefined4)local_e8;
  uStack_ac = local_e8._4_4_;
  uStack_a8 = (undefined4)uStack_e0;
  uStack_a4 = uStack_e0._4_4_;
  pvStack_70 = local_48;
  local_68 = local_50;
  uStack_60 = (short)uVar2;
  FUN_180027490();
  puVar3 = (ulonglong *)thunk_FUN_1801d32d0(0x60,8);
  if (puVar3 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x60);
  }
  puVar3[10] = local_68;
  puVar3[0xb] = CONCAT62(uStack_5e,uStack_60);
  puVar3[8] = local_78;
  puVar3[9] = (ulonglong)pvStack_70;
  puVar3[6] = local_88;
  puVar3[7] = uStack_80;
  puVar3[4] = uStack_98;
  puVar3[5] = local_90;
  puVar3[2] = CONCAT44(uStack_a4,uStack_a8);
  puVar3[3] = uStack_a0;
  *puVar3 = local_b8;
  puVar3[1] = CONCAT44(uStack_ac,uStack_b0);
  return;
}


