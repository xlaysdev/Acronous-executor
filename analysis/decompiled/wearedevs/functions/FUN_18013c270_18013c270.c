/* FUN_18013c270 @ 18013c270 */

void FUN_18013c270(longlong *param_1)

{
  code cVar1;
  char ***pppcVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  code *pcVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  char *local_b8;
  undefined8 *local_b0;
  char **local_a8;
  undefined *local_a0;
  code *local_98;
  undefined8 local_90;
  code *local_88;
  char local_80;
  longlong local_78;
  char ***pppcStack_70;
  undefined8 local_68;
  undefined *local_60;
  longlong local_58;
  undefined8 uStack_50;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  pcVar7 = (code *)(lVar3 + 0x10);
  pppcVar2 = (char ***)param_1[1];
  LOCK();
  bVar11 = *(char *)(lVar3 + 0x10) == '\0';
  if (bVar11) {
    *(char *)(lVar3 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar11) {
    FUN_180200390(pcVar7);
  }
  puVar4 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_180200a50();
    uVar8 = uVar8 ^ 1;
  }
  bVar11 = *(char *)(lVar3 + 0x11) != '\0';
  local_90 = (char ***)(ulonglong)bVar11;
  cVar6 = (char)uVar8;
  local_88 = pcVar7;
  local_80 = cVar6;
  if (bVar11) {
    if (((*(ulonglong *)puVar4 & 0x7fffffffffffffff) == 0) ||
       (cVar5 = FUN_180200a50(), cVar5 != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("StreamRef::drop; mutex poisoned",0x3f,
                    &PTR_s_C__Users_burne__cargo_registry_s_18024e6f0);
    }
    if (((*(longlong *)PTR_DAT_1802fd448 == 0) &&
        ((uVar8 = (uint)DAT_1802fc610, uVar8 - 1 < 2 ||
         ((uVar8 != 0 && (uVar8 = FUN_1801faaf0(&PTR_DAT_1802fc600), (char)uVar8 != '\0')))))) &&
       (cVar5 = FUN_1801601d0(PTR_DAT_1802fc600,uVar8), cVar5 != '\0')) {
      local_60 = PTR_DAT_1802fc600 + 0x30;
      local_b8 = "StreamRef::drop; mutex poisoned";
      local_b0 = (undefined8 *)0x3f;
      local_a8 = &local_b8;
      local_a0 = &DAT_18024e6b0;
      local_78 = 1;
      pppcStack_70 = &local_a8;
      local_68 = 1;
      FUN_180160ae0(PTR_DAT_1802fc600,&local_78);
    }
    if (((cVar6 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar6 = FUN_180200a50(), cVar6 == '\0')) {
      *(undefined1 *)(lVar3 + 0x11) = 1;
    }
    LOCK();
    cVar1 = *pcVar7;
    *pcVar7 = (code)0x0;
    UNLOCK();
    if (cVar1 != (code)0x2) {
      return;
    }
LAB_18013c623:
    WakeByAddressSingle(pcVar7);
    return;
  }
  *(longlong *)(lVar3 + 0x248) = *(longlong *)(lVar3 + 0x248) + -1;
  local_58 = lVar3 + 0x1d8;
  local_98 = pcVar7;
  uStack_50 = pppcVar2;
  local_44 = uVar8;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar8 = (uint)DAT_1802fc628, uVar8 - 1 < 2 ||
       ((uVar8 != 0 && (uVar8 = FUN_1801faaf0(&PTR_DAT_1802fc618), (char)uVar8 != '\0')))) &&
      (cVar6 = FUN_1801601d0(PTR_DAT_1802fc618,uVar8), cVar6 != '\0')))) {
    local_60 = PTR_DAT_1802fc618 + 0x30;
    local_88 = FUN_180152dd0;
    local_b8 = &DAT_18024e690;
    local_b0 = &local_90;
    local_a8 = &local_b8;
    local_a0 = &DAT_18024e6b0;
    local_78 = 1;
    pppcStack_70 = &local_a8;
    local_68 = 1;
    local_90 = (char ***)&local_58;
    FUN_180160ae0(PTR_DAT_1802fc618,&local_78);
  }
  local_90 = uStack_50;
  if (((ulonglong)uStack_50 & 0xffffffff) < *(ulonglong *)(local_58 + 0x10)) {
    lVar9 = ((ulonglong)uStack_50 & 0xffffffff) * 0x148;
    if ((*(int *)(*(longlong *)(local_58 + 8) + lVar9) != 2) &&
       (lVar9 = *(longlong *)(local_58 + 8) + lVar9, *(int *)(lVar9 + 300) == uStack_50._4_4_)) {
      if (*(longlong *)(lVar9 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: self.ref_count > 0",0x24,
                      &PTR_s_C__Users_burne__cargo_registry_s_180249780);
      }
      *(longlong *)(lVar9 + 0x80) = *(longlong *)(lVar9 + 0x80) + -1;
      if (((ulonglong)uStack_50 & 0xffffffff) < *(ulonglong *)(local_58 + 0x10)) {
        lVar10 = ((ulonglong)uStack_50 & 0xffffffff) * 0x148;
        lVar9 = *(longlong *)(*(longlong *)(local_58 + 8) + lVar10);
        if ((lVar9 != 2) &&
           (lVar10 = *(longlong *)(local_58 + 8) + lVar10, *(int *)(lVar10 + 300) == uStack_50._4_4_
           )) {
          if (((*(longlong *)(lVar10 + 0x80) == 0) && (lVar9 == 0 && *(uint *)(lVar10 + 0x40) < 4))
             && (*(longlong *)(lVar10 + 0x90) == 0)) {
            lVar9 = *(longlong *)(lVar3 + 0x1c8);
            *(undefined8 *)(lVar3 + 0x1c8) = 0;
            if (lVar9 != 0) {
              (**(code **)(lVar9 + 8))(*(undefined8 *)(lVar3 + 0x1d0));
            }
          }
          local_78 = local_58;
          pppcStack_70 = uStack_50;
          FUN_1801533a0(lVar3 + 0x18,&local_78,lVar3 + 0x88);
          if ((((char)local_44 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
             (cVar6 = FUN_180200a50(), cVar6 == '\0')) {
            *(undefined1 *)(lVar3 + 0x11) = 1;
          }
          LOCK();
          cVar1 = *local_98;
          *local_98 = (code)0x0;
          UNLOCK();
          pcVar7 = local_98;
          if (cVar1 != (code)0x2) {
            return;
          }
          goto LAB_18013c623;
        }
      }
      pppcStack_70 = (char ***)FUN_180152d10;
      local_78 = (longlong)&local_90 + 4;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_78,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
    }
  }
  pppcStack_70 = (char ***)FUN_180152d10;
  local_78 = (longlong)&local_90 + 4;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_78,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
}


