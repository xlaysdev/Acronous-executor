/* FUN_180132620 @ 180132620 */

void FUN_180132620(longlong param_1,uint param_2,ulonglong param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  undefined **local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined4 **local_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 *local_78;
  undefined1 *local_70;
  longlong local_68;
  code *local_60;
  longlong local_58;
  code *local_50;
  ulonglong *local_48;
  code *local_40;
  uint *local_38;
  code *local_30;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x8c);
  if ((int)*(uint *)(param_1 + 0x8c) < 1) {
    uVar2 = 0;
  }
  if (param_3 < uVar2) {
    uVar2 = param_3;
  }
  uVar4 = 0;
  if (*(ulonglong *)(param_1 + 0x90) <= uVar2) {
    uVar4 = (int)uVar2 - (int)*(ulonglong *)(param_1 + 0x90);
  }
  local_c8 = uVar4;
  local_c0 = param_3;
  FUN_180131f80(param_1 + 0x88);
  *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) - (ulonglong)param_2;
  *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) - param_2;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar3 = (uint)DAT_1802fbf28, uVar3 - 1 < 2 ||
       ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fbf18), (char)uVar3 != '\0')))) &&
      (cVar1 = FUN_1801601d0(PTR_DAT_1802fbf18,uVar3), cVar1 != '\0')))) {
    local_68 = param_1 + 0x90;
    local_80 = PTR_DAT_1802fbf18 + 0x30;
    local_c4 = *(undefined4 *)(param_1 + 0x8c);
    local_58 = param_1 + 300;
    local_78 = &local_c4;
    local_70 = &LAB_1801338c0;
    local_60 = FUN_1801ee720;
    local_50 = FUN_1801330a0;
    local_48 = &local_c0;
    local_40 = FUN_1801ee720;
    local_38 = &local_c8;
    local_30 = FUN_1801ee6c0;
    local_a8 = &DAT_1802498d0;
    local_a0 = &local_78;
    local_b8 = &local_a8;
    local_b0 = &DAT_180247960;
    local_98 = 1;
    local_90 = &local_b8;
    local_88 = 1;
    FUN_180160ae0(PTR_DAT_1802fbf18,&local_98);
    param_3 = local_c0;
    uVar4 = local_c8;
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x8c);
  if ((int)*(uint *)(param_1 + 0x8c) < 1) {
    uVar2 = 0;
  }
  if (param_3 < uVar2) {
    uVar2 = param_3;
  }
  uVar3 = 0;
  if (*(ulonglong *)(param_1 + 0x90) <= uVar2) {
    uVar3 = (int)uVar2 - (int)*(ulonglong *)(param_1 + 0x90);
  }
  if (uVar4 < uVar3) {
    FUN_180132360(param_1);
  }
  return;
}


