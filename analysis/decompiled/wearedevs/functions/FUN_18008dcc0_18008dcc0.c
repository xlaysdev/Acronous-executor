/* FUN_18008dcc0 @ 18008dcc0 */

undefined4 *
FUN_18008dcc0(undefined4 *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  longlong local_d8;
  undefined ***pppuStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined *local_a8;
  longlong *local_a0;
  undefined **local_98;
  undefined *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_50;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar3 = *param_2;
  pcVar1 = (char *)(lVar3 + 0x10);
  LOCK();
  bVar11 = *(char *)(lVar3 + 0x10) == '\0';
  if (bVar11) {
    *(char *)(lVar3 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar11) {
    FUN_180200390(pcVar1);
  }
  puVar6 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_44 = 0;
    cVar7 = *(char *)(lVar3 + 0x11);
  }
  else {
    local_44 = FUN_180200a50();
    local_44 = local_44 ^ 1;
    cVar7 = *(char *)(lVar3 + 0x11);
  }
  if (cVar7 != '\0') {
    uVar4 = (ulonglong)uStack_70 >> 8;
    uStack_70 = (undefined ***)CONCAT71((int7)uVar4,(char)local_44);
    local_78 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dde0);
  }
  local_50 = pcVar1;
  FUN_180139f40(&local_78,lVar3 + 0x88);
  puVar5 = PTR_PTR_1802fc830;
  if ((char)local_78 == '\x03') {
    if (*(int *)(lVar3 + 0x128) != 1) {
      if (param_4 != 0) {
        local_88 = lVar3 + 0x1d8;
        local_80 = *(undefined8 *)(param_4 + 8);
        if (*(longlong *)PTR_DAT_1802fd448 == 0) {
          bVar2 = PTR_PTR_1802fc830[0x10];
          uVar8 = (uint)bVar2;
          if (((bVar2 - 1 < 2) ||
              ((bVar2 != 0 && (uVar8 = FUN_1801faaf0(PTR_PTR_1802fc830), (char)uVar8 != '\0')))) &&
             (cVar7 = FUN_1801601d0(*(undefined8 *)puVar5,uVar8), cVar7 != '\0')) {
            lVar9 = *(longlong *)puVar5;
            local_d8 = FUN_180152e90(&local_88);
            uStack_60 = lVar9 + 0x30;
            local_d8 = local_d8 + 0x13c;
            pppuStack_d0 = (undefined ***)&DAT_180039950;
            local_a8 = &DAT_18020ddf8;
            local_a0 = &local_d8;
            local_98 = &local_a8;
            local_90 = &DAT_18020d788;
            local_78 = (char *)0x1;
            uStack_70 = &local_98;
            local_68 = 1;
            FUN_180160ae0(*(undefined8 *)puVar5,&local_78);
          }
        }
        lVar9 = FUN_180152e90(&local_88);
        if (*(char *)(lVar9 + 0x13c) != '\0') {
          uVar10 = FUN_180152f00(&local_88);
          FUN_180132930(uVar10,param_3);
          *(undefined1 *)param_1 = 6;
          pcVar1 = local_50;
          goto joined_r0x00018008de2e;
        }
      }
      *(undefined1 *)param_1 = 5;
      if ((((char)local_44 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
         (cVar7 = FUN_180200a50(), cVar7 == '\0')) {
        *(undefined1 *)(lVar3 + 0x11) = 1;
      }
      LOCK();
      cVar7 = *local_50;
      *local_50 = '\0';
      UNLOCK();
      pcVar1 = local_50;
      goto joined_r0x00018008ddbd;
    }
    *(undefined2 *)param_1 = 0x503;
    pcVar1 = local_50;
  }
  else {
    local_b8 = local_58;
    local_c8 = (undefined4)local_68;
    uStack_c4 = local_68._4_4_;
    uStack_c0 = (undefined4)uStack_60;
    uStack_bc = uStack_60._4_4_;
    local_d8 = (longlong)local_78;
    pppuStack_d0 = uStack_70;
    FUN_18012e200(&local_78,&local_d8);
    *(undefined8 *)(param_1 + 8) = local_58;
    *(undefined8 *)(param_1 + 4) = local_68;
    *(longlong *)(param_1 + 6) = uStack_60;
    *param_1 = (undefined4)local_78;
    param_1[1] = local_78._4_4_;
    param_1[2] = (undefined4)uStack_70;
    param_1[3] = uStack_70._4_4_;
    pcVar1 = local_50;
  }
joined_r0x00018008de2e:
  local_50 = pcVar1;
  if ((((char)local_44 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = FUN_180200a50(), cVar7 == '\0')) {
    *(undefined1 *)(lVar3 + 0x11) = 1;
  }
  LOCK();
  cVar7 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
joined_r0x00018008ddbd:
  if (cVar7 == '\x02') {
    WakeByAddressSingle(pcVar1);
  }
  return param_1;
}


