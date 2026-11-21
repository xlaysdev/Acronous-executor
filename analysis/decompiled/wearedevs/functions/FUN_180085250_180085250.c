/* FUN_180085250 @ 180085250 */

void FUN_180085250(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined **local_198;
  undefined *local_190;
  undefined *local_188;
  longlong *local_180;
  longlong local_178;
  code *local_170;
  undefined8 local_168;
  undefined ***pppuStack_160;
  undefined8 local_158;
  longlong local_150;
  
  lVar6 = FUN_180152e90(param_2);
  puVar3 = PTR_PTR_1802fd438;
  iVar2 = *(int *)(lVar6 + 0x78);
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar1 = PTR_PTR_1802fd438[0x10];
    uVar5 = (uint)bVar1;
    if (((bVar1 - 1 < 2) ||
        ((bVar1 != 0 && (uVar5 = FUN_1801faaf0(PTR_PTR_1802fd438), (char)uVar5 != '\0')))) &&
       (cVar4 = FUN_1801601d0(*(undefined8 *)puVar3,uVar5), cVar4 != '\0')) {
      lVar6 = *(longlong *)puVar3;
      local_178 = FUN_180152e90(param_2);
      local_178 = local_178 + 300;
      local_170 = FUN_1800901b0;
      local_188 = &DAT_18020d7c2;
      local_180 = &local_178;
      local_198 = &local_188;
      local_190 = &DAT_18020d788;
      local_168 = 1;
      pppuStack_160 = &local_198;
      local_158 = 1;
      local_150 = lVar6 + 0x30;
      FUN_180160ae0(*(undefined8 *)puVar3,&local_168);
    }
  }
  lVar6 = FUN_180152e90(param_2);
  iVar8 = 6;
  if (3 < *(uint *)(lVar6 + 0x40)) {
    iVar8 = *(uint *)(lVar6 + 0x40) - 4;
  }
  if (iVar8 == 3) {
    cVar4 = *(char *)(lVar6 + 0x45);
  }
  else {
    if (iVar8 != 4) goto LAB_1800853ee;
    cVar4 = *(char *)(lVar6 + 0x44);
  }
  if (cVar4 == '\x01') {
    lVar6 = FUN_180152e90(param_2);
    iVar8 = *(int *)(lVar6 + 0xa8);
    iVar9 = *(int *)(lVar6 + 0xac) - iVar8;
    if ((iVar9 != 0 && iVar8 <= *(int *)(lVar6 + 0xac)) && (iVar8 / 2 <= iVar9)) {
      lVar6 = FUN_180152e90(param_2);
      local_168 = CONCAT44(*(undefined4 *)(lVar6 + 300),(undefined4)local_168);
      pppuStack_160 = (undefined ***)CONCAT44(pppuStack_160._4_4_,iVar9);
      local_168 = CONCAT71(local_168._1_7_,7);
      cVar4 = FUN_18005b0b0(param_3 + 0x48,&local_168);
      if (cVar4 != '\r') {
        local_168 = CONCAT71(local_168._1_7_,cVar4);
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("invalid WINDOW_UPDATE frame",0x1b,&local_168,&DAT_18020e6a0,
                      &PTR_s_C__Users_burne__cargo_registry_s_18020d870);
      }
      lVar6 = FUN_180152f00(param_2);
      uVar7 = FUN_180131b80(lVar6 + 0xa8);
      if ((uVar7 & 1) != 0) {
        local_168 = CONCAT44(local_168._4_4_,iVar9);
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("unexpected flow control state",0x1d,&local_168,&DAT_18020e6c0,
                      &PTR_s_C__Users_burne__cargo_registry_s_18020d8a8);
      }
    }
  }
LAB_1800853ee:
  local_168 = *param_2;
  pppuStack_160 = (undefined ***)param_2[1];
  FUN_1801537a0(param_1,&local_168,iVar2 != 1000000000);
  return;
}


