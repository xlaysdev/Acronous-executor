/* FUN_18013a2c0 @ 18013a2c0 */

longlong * FUN_18013a2c0(longlong *param_1,longlong *param_2,byte param_3)

{
  longlong lVar1;
  undefined *puVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 uVar8;
  bool bVar9;
  char *local_d0;
  undefined8 local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  char *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar1 = *param_2;
  pcVar7 = (char *)(lVar1 + 0x10);
  LOCK();
  bVar9 = *(char *)(lVar1 + 0x10) == '\0';
  if (bVar9) {
    *(char *)(lVar1 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar9) {
    FUN_180200390(pcVar7);
  }
  puVar2 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_44 = 0;
    cVar3 = *(char *)(lVar1 + 0x11);
  }
  else {
    local_44 = FUN_180200a50();
    local_44 = local_44 ^ 1;
    cVar3 = *(char *)(lVar1 + 0x11);
  }
  if (cVar3 != '\0') {
    uVar4 = (ulonglong)local_c8 >> 8;
    local_c8 = (code *)CONCAT71((int7)uVar4,(char)local_44);
    local_d0 = pcVar7;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_d0,&PTR_FUN_18024fab8,
                  &PTR_s_C__Users_burne__cargo_registry_s_18024e3c8);
  }
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  local_68 = param_2[1];
  local_70 = pcVar7;
  if (uVar4 < *(ulonglong *)(lVar1 + 0x1e8)) {
    lVar6 = uVar4 * 0x148;
    if ((*(int *)(*(longlong *)(lVar1 + 0x1e0) + lVar6) != 2) &&
       (*(int *)(*(longlong *)(lVar1 + 0x1e0) + lVar6 + 300) == *(int *)((longlong)param_2 + 0xc)))
    {
      FUN_1801575e0(&local_d0);
      if (((char)local_44 == '\0') &&
         (((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0 &&
          (cVar3 = FUN_180200a50(), cVar3 == '\0')))) {
        *(undefined1 *)(lVar1 + 0x11) = 1;
      }
      LOCK();
      cVar3 = *local_70;
      *local_70 = '\0';
      UNLOCK();
      lVar1 = (longlong)local_c8;
      lVar6 = local_68;
      if (cVar3 == '\x02') {
        WakeByAddressSingle();
        lVar1 = (longlong)local_c8;
        lVar6 = local_68;
      }
      pcVar7 = (char *)0x5;
      if (local_d0 != (char *)0x5) {
        if ((int)local_d0 == 4) {
          pcVar7 = (char *)0x3;
        }
        else if ((int)local_d0 == 3) {
          local_c8._0_1_ = (char)lVar1;
          local_c8._1_1_ = (byte)((ulonglong)lVar1 >> 8);
          local_c8._4_4_ = (uint)((ulonglong)lVar1 >> 0x20);
          if ((char)local_c8 == '\0') {
            uVar4 = (ulonglong)uStack_c0;
            uVar8 = 0;
            local_68 = lVar6;
          }
          else if ((char)local_c8 == '\x01') {
            uVar4 = CONCAT44(uStack_bc,uStack_c0);
            uStack_60 = CONCAT44(uStack_ac,uStack_b0);
            uVar8 = 1;
            local_68 = CONCAT44(uStack_b4,local_b8);
            local_58 = local_a8;
          }
          else {
            uVar4 = (ulonglong)local_c8._1_1_;
            uVar5 = (uint)local_c8._1_1_;
            local_c8._4_4_ = (uint)local_c8._1_1_;
            local_68 = CONCAT44(uStack_bc,uStack_c0);
            local_c8._1_1_ = param_3;
            if (SBORROW8(0,local_68)) {
              uVar4 = uVar4 << 0x20 | 3;
              local_68 = lVar6;
            }
            else {
              uStack_60 = CONCAT44(uStack_b4,local_b8);
              local_58 = CONCAT44(uStack_ac,uStack_b0);
              local_c8._4_4_ = uVar5;
              uVar4 = FUN_18018c8e0(uVar4,&local_68);
            }
            uVar8 = 4;
          }
          *(undefined1 *)(param_1 + 1) = uVar8;
          *(byte *)((longlong)param_1 + 9) = local_c8._1_1_;
          *(uint *)((longlong)param_1 + 0xc) = local_c8._4_4_;
          param_1[2] = uVar4;
          param_1[3] = local_68;
          param_1[4] = uStack_60;
          param_1[5] = local_58;
          pcVar7 = (char *)0x4;
        }
        else {
          param_1[5] = local_a8;
          param_1[3] = CONCAT44(uStack_b4,local_b8);
          param_1[4] = CONCAT44(uStack_ac,uStack_b0);
          param_1[1] = lVar1;
          param_1[2] = CONCAT44(uStack_bc,uStack_c0);
          param_1[6] = local_a0;
          param_1[7] = lStack_98;
          param_1[8] = local_90;
          param_1[9] = lStack_88;
          param_1[10] = local_80;
          param_1[0xb] = lStack_78;
          pcVar7 = local_d0;
        }
      }
      *param_1 = (longlong)pcVar7;
      return param_1;
    }
  }
  local_d0 = (char *)((longlong)&local_68 + 4);
  local_c8 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_d0,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
}


