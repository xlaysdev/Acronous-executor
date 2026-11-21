/* FUN_180090450 @ 180090450 */

void FUN_180090450(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *_Src;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong local_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  void *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar2 = param_2[10];
  uVar1 = uVar2 * 4;
  if (0x7ffffffffffffffe < uVar1 || uVar2 >> 0x3e != 0) {
    uVar4 = 0;
LAB_1800904a3:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar4,uVar1);
  }
  uVar3 = param_2[0xb];
  _Src = (void *)param_2[9];
  local_58 = uVar2;
  if (uVar1 == 0) {
    local_50 = (void *)0x2;
  }
  else {
    FUN_180027490();
    uVar4 = 2;
    local_50 = (void *)thunk_FUN_1801d32d0(uVar1,2);
    if (local_50 == (void *)0x0) goto LAB_1800904a3;
  }
  local_60 = uVar1;
  memcpy(local_50,_Src,uVar1);
  FUN_18009cd60(&local_78,param_2 + 3);
  FUN_18009c810(&local_a0,param_2 + 6);
  uVar1 = *param_2;
  if (1 < uVar1) {
    local_88 = param_2[1];
    uStack_80 = param_2[2];
  }
  *(short *)(param_1 + 0xb) = (short)uVar3;
  param_1[9] = (ulonglong)local_50;
  param_1[10] = local_58;
  param_1[3] = local_78;
  param_1[4] = uStack_70;
  param_1[5] = local_68;
  param_1[6] = local_a0;
  param_1[7] = uStack_98;
  param_1[8] = local_90;
  *param_1 = uVar1;
  param_1[1] = local_88;
  param_1[2] = uStack_80;
  return;
}


