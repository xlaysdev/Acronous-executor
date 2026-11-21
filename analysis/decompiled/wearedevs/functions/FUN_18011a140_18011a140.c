/* FUN_18011a140 @ 18011a140 */

void FUN_18011a140(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  void *_Src;
  ulonglong *_Size;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_d8 [24];
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong *local_b0;
  ulonglong *puStack_a8;
  ulonglong *local_a0;
  undefined1 *puStack_98;
  char local_90;
  undefined7 uStack_8f;
  ulonglong *local_88;
  longlong lStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  ulonglong *local_48;
  ulonglong local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar7 = *param_1;
  uVar4 = param_1[2];
  if (*(ulonglong *)(lVar7 + 0x28) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(uVar4,*(ulonglong *)(lVar7 + 0x28),
                  &PTR_s_C__Users_burne__cargo_registry_s_180242e80);
  }
  lVar1 = *(longlong *)(lVar7 + 0x20);
  lVar6 = uVar4 * 0x68;
  if ((*(byte *)(lVar1 + lVar6) & 1) != 0) {
    param_4 = *(longlong *)(lVar1 + lVar6 + 0x10);
  }
  plVar8 = (longlong *)(*(longlong *)(lVar7 + 0x38) + param_4 * 0x48 + 0x20);
  if ((*(byte *)(lVar1 + lVar6) & 1) == 0) {
    plVar8 = (longlong *)(lVar1 + lVar6 + 0x18);
  }
  puVar3 = (ulonglong *)(plVar8[2] + 9);
  if ((longlong)puVar3 < 0) {
    uVar5 = 0;
LAB_18011a1b5:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar5,puVar3);
  }
  if (puVar3 == (ulonglong *)0x0) {
    local_58 = 1;
  }
  else {
    FUN_180027490();
    uVar5 = 1;
    local_58 = thunk_FUN_1801d32d0(puVar3,1);
    if (local_58 == 0) goto LAB_18011a1b5;
  }
  uVar4 = 0x3f;
  if ((ulonglong)puVar3 >> 10 != 0) {
    for (; ((ulonglong)puVar3 >> 10) >> uVar4 == 0; uVar4 = uVar4 - 1) {
    }
  }
  uVar2 = (uVar4 ^ 0xffffffffffffffc0) + 0x41;
  uVar4 = 7;
  if (uVar2 < 7) {
    uVar4 = uVar2;
  }
  local_40 = (uVar4 & 0xffffffff) * 4 + 1;
  local_50 = 0;
  _Src = (void *)plVar8[1];
  _Size = (ulonglong *)plVar8[2];
  local_48 = puVar3;
  if (puVar3 < _Size) {
    local_31 = 1;
    FUN_1801b2210(&local_58,_Size,1);
  }
  memcpy((void *)(local_58 + local_50),_Src,(size_t)_Size);
  if ((ulonglong *)((longlong)local_48 - local_50) < _Size) {
    local_31 = 1;
    local_b0 = _Size;
    puStack_a8 = (ulonglong *)((longlong)local_48 - local_50);
                    /* WARNING: Subroutine does not return */
    FUN_1801fc980(&local_b0);
  }
  local_50 = local_50 + (longlong)_Size;
  if ((ulonglong)((longlong)local_48 - local_50) < 2) {
    local_31 = 1;
    FUN_1801b2210(&local_58,2,1);
  }
  *(undefined2 *)(local_58 + local_50) = 0x202c;
  if ((ulonglong)((longlong)local_48 - local_50) < 2) {
    local_b0 = (ulonglong *)0x2;
    local_31 = 1;
    puStack_a8 = (ulonglong *)((longlong)local_48 - local_50);
                    /* WARNING: Subroutine does not return */
    FUN_1801fc980(&local_b0);
  }
  local_50 = local_50 + 2;
  if ((ulonglong)((longlong)local_48 - local_50) < 7) {
    local_31 = 1;
    FUN_1801b2210(&local_58,7,1);
  }
  *(undefined4 *)(local_58 + 3 + local_50) = 0x64656b6e;
  *(undefined4 *)(local_58 + local_50) = 0x6e756863;
  if ((ulonglong)((longlong)local_48 - local_50) < 7) {
    local_b0 = (ulonglong *)0x7;
    local_31 = 1;
    puStack_a8 = (ulonglong *)((longlong)local_48 - local_50);
                    /* WARNING: Subroutine does not return */
    FUN_1801fc980(&local_b0);
  }
  lVar7 = local_50 + 7;
  local_50 = lVar7;
  if ((local_40 & 1) == 0) {
    local_88 = (ulonglong *)PTR_PTR_1802fd530;
    lStack_80 = local_58;
    uStack_70 = local_40;
  }
  else {
    uVar4 = local_40 >> 5;
    local_31 = 0;
    FUN_1801b1ef0(local_d8,local_58,lVar7,local_48,uVar4);
    local_31 = 0;
    FUN_1801b3d40(&local_88,local_d8);
    lVar7 = local_78 - uVar4;
    local_b8 = uVar4;
    if (local_78 < uVar4) {
      local_60 = (longlong *)local_78;
      local_c0 = local_78;
      local_b0 = &local_b8;
      puStack_a8 = (ulonglong *)&LAB_1800273d0;
      local_a0 = &local_c0;
      puStack_98 = &LAB_1800273d0;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180240de8,&local_b0,&PTR_s_C__Users_burne__cargo_registry_s_180240e70);
    }
    if (local_88 == (ulonglong *)0x0) {
      local_31 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180241e90);
    }
    lStack_80 = uVar4 + lStack_80;
  }
  local_31 = 0;
  local_78 = lVar7;
  FUN_1801b18c0(&local_b0,&local_88);
  if (local_90 == '\x02') {
    local_31 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("original header value plus ascii is valid",0x29,&local_88,&DAT_180240bc8,
                  &PTR_s_C__Users_burne__cargo_registry_s_180240d48);
  }
  local_68 = CONCAT71(uStack_8f,local_90);
  local_78 = (ulonglong)local_a0;
  uStack_70 = (ulonglong)puStack_98;
  local_88 = local_b0;
  lStack_80 = (longlong)puStack_a8;
  local_60 = plVar8;
  (**(code **)(*plVar8 + 0x20))(plVar8[3],plVar8[1],plVar8[2]);
  local_60[4] = local_68;
  local_60[2] = local_78;
  local_60[3] = uStack_70;
  *local_60 = (longlong)local_88;
  local_60[1] = lStack_80;
  return;
}


