/* FUN_18008c6e0 @ 18008c6e0 */

undefined8 FUN_18008c6e0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  undefined *puVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  byte unaff_R14B;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  uint local_5c;
  char *local_58;
  char *local_50;
  undefined8 local_48;
  
  puVar6 = PTR_DAT_1802fd600;
  local_48 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_50 = (char *)(lVar2 + 0x10);
  local_58 = (char *)(lVar3 + 0x10);
  lVar1 = lVar2 + 0x1d8;
  do {
    do {
      if ((*(int *)(param_3 + 0x128) != 4) ||
         ((ulonglong)(*(longlong *)(param_3 + 0x180) - *(longlong *)(param_3 + 0x178)) <
          *(ulonglong *)(param_3 + 0x1a0))) {
        plVar13 = param_2;
        uVar11 = FUN_18005ccd0(param_3 + 0x48);
        if ((uVar11 & 1) != 0) {
          return 1;
        }
        if (plVar13 != (longlong *)0x0) {
          return 0;
        }
        if (*(int *)(param_3 + 0x128) != 4) {
          return 1;
        }
        if ((ulonglong)(*(longlong *)(param_3 + 0x180) - *(longlong *)(param_3 + 0x178)) <
            *(ulonglong *)(param_3 + 0x1a0)) {
          return 1;
        }
      }
      LOCK();
      cVar7 = *local_50;
      if (cVar7 == '\0') {
        *local_50 = '\x01';
      }
      UNLOCK();
      if (cVar7 == '\0') {
        if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0) goto LAB_18008cacc;
LAB_18008c800:
        uVar9 = 0;
        cVar7 = *(char *)(lVar2 + 0x11);
        uVar12 = local_78;
        local_78 = local_50;
      }
      else {
        FUN_180200390();
        if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) == 0) goto LAB_18008c800;
LAB_18008cacc:
        uVar9 = FUN_180200a50();
        uVar9 = uVar9 ^ 1;
        cVar7 = *(char *)(lVar2 + 0x11);
        uVar12 = local_78;
        local_78 = local_50;
      }
      local_50 = local_78;
      if (cVar7 != '\0') {
        local_70 = (undefined1)uVar9;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,
                      &PTR_FUN_18020e6e0,&PTR_s_C__Users_burne__cargo_registry_s_18020dd08);
      }
      LOCK();
      cVar7 = *local_58;
      if (cVar7 == '\0') {
        *local_58 = '\x01';
      }
      UNLOCK();
      local_5c = uVar9;
      if (cVar7 != '\0') {
        FUN_180200390();
        local_78 = (char *)uVar12;
        uVar12 = local_78;
      }
      local_78 = (char *)uVar12;
      if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) == 0) {
        uVar9 = 0;
        cVar7 = *(char *)(lVar3 + 0x11);
        uVar12 = local_78;
        local_78 = local_58;
      }
      else {
        uVar9 = FUN_180200a50();
        uVar9 = uVar9 ^ 1;
        cVar7 = *(char *)(lVar3 + 0x11);
        uVar12 = local_78;
        local_78 = local_58;
      }
      local_58 = local_78;
      if (cVar7 != '\0') {
        local_70 = (undefined1)uVar9;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,
                      &PTR_FUN_18020e730,&PTR_s_C__Users_burne__cargo_registry_s_18020e128);
      }
      local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
      local_68 = (undefined8 *)CONCAT44(local_68._4_4_,uVar9);
      FUN_1800ad710(&local_78,lVar2 + 0x88,lVar1,lVar2 + 0x18,param_3);
      local_78 = (char *)uVar12;
      if ((char)local_78 == '\x01') {
LAB_18008c862:
        bVar4 = true;
joined_r0x00018008c890:
        if ((((char)local_68 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
           (cVar7 = FUN_180200a50(), cVar7 == '\0')) {
          *(undefined1 *)(lVar3 + 0x11) = 1;
        }
        LOCK();
        cVar7 = *local_58;
        *local_58 = '\0';
        UNLOCK();
        if (cVar7 == '\x02') {
LAB_18008cc0e:
          WakeByAddressSingle(local_58);
        }
        if (bVar4) {
          if ((((char)local_5c == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
             (cVar7 = FUN_180200a50(), cVar7 == '\0')) {
            *(undefined1 *)(lVar2 + 0x11) = 1;
          }
          LOCK();
          cVar7 = *local_50;
          *local_50 = '\0';
          UNLOCK();
          if (cVar7 == '\x02') {
            WakeByAddressSingle();
            return 0;
          }
          return 0;
        }
        if (unaff_R14B == 0) goto LAB_18008c940;
        bVar5 = unaff_R14B;
        unaff_R14B = 1;
      }
      else {
        if (local_78._1_1_ != '\0') {
LAB_18008c886:
          bVar4 = false;
          unaff_R14B = 1;
          goto joined_r0x00018008c890;
        }
        FUN_180062bc0(&local_78,lVar2 + 0x130,lVar3 + 0x18,lVar1,lVar2 + 0x18,param_3);
        if ((char)local_78 == '\x01') goto LAB_18008c862;
        if (local_78._1_1_ != '\0') goto LAB_18008c886;
        if ((((char)local_68 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
           (cVar7 = FUN_180200a50(), cVar7 == '\0')) {
          *(undefined1 *)(lVar3 + 0x11) = 1;
        }
        unaff_R14B = 0;
        LOCK();
        cVar7 = *local_58;
        *local_58 = '\0';
        UNLOCK();
        if (cVar7 == '\x02') {
          bVar4 = false;
          goto LAB_18008cc0e;
        }
LAB_18008c940:
        puVar14 = *(undefined8 **)*param_2;
        uVar12 = (*(code *)*puVar14)(((undefined8 *)*param_2)[1]);
        local_68 = puVar14;
        if (*(longlong *)(lVar2 + 0x1c8) != 0) {
          (**(code **)(*(longlong *)(lVar2 + 0x1c8) + 0x18))(*(undefined8 *)(lVar2 + 0x1d0));
        }
        *(undefined8 *)(lVar2 + 0x1c8) = uVar12;
        *(undefined8 **)(lVar2 + 0x1d0) = local_68;
        bVar5 = 0;
        unaff_R14B = 0;
      }
      if ((((char)local_5c == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
         (cVar7 = FUN_180200a50(), cVar7 == '\0')) {
        *(undefined1 *)(lVar2 + 0x11) = 1;
      }
      LOCK();
      cVar7 = *local_50;
      *local_50 = '\0';
      UNLOCK();
      if (cVar7 == '\x02') {
        WakeByAddressSingle();
      }
    } while ((bVar5 & 1) != 0);
    plVar13 = param_2;
    uVar11 = FUN_18005ccd0(param_3 + 0x48);
    if ((uVar11 & 1) != 0) {
      return 1;
    }
    if (plVar13 != (longlong *)0x0) {
      return 0;
    }
    LOCK();
    cVar7 = *local_50;
    if (cVar7 == '\0') {
      *local_50 = '\x01';
    }
    UNLOCK();
    if (cVar7 == '\0') {
      if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0) goto LAB_18008cb73;
LAB_18008ca00:
      uVar9 = 0;
      cVar7 = *(char *)(lVar2 + 0x11);
      uVar12 = local_78;
      local_78 = local_50;
    }
    else {
      FUN_180200390();
      if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) == 0) goto LAB_18008ca00;
LAB_18008cb73:
      uVar9 = FUN_180200a50();
      uVar9 = uVar9 ^ 1;
      cVar7 = *(char *)(lVar2 + 0x11);
      uVar12 = local_78;
      local_78 = local_50;
    }
    local_50 = local_78;
    if (cVar7 != '\0') {
      local_70 = (undefined1)uVar9;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,&PTR_FUN_18020e6e0,
                    &PTR_s_C__Users_burne__cargo_registry_s_18020dd20);
    }
    LOCK();
    cVar7 = *local_58;
    if (cVar7 == '\0') {
      *local_58 = '\x01';
    }
    UNLOCK();
    local_5c = uVar9;
    if (cVar7 != '\0') {
      FUN_180200390(local_58);
      local_78 = (char *)uVar12;
      uVar12 = local_78;
    }
    local_78 = (char *)uVar12;
    if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) == 0) {
      local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
      cVar7 = *(char *)(lVar3 + 0x11);
      uVar12 = local_78;
      local_78 = local_58;
    }
    else {
      uVar10 = FUN_180200a50();
      local_68 = (undefined8 *)(CONCAT44(local_68._4_4_,uVar10) ^ 1);
      cVar7 = *(char *)(lVar3 + 0x11);
      uVar12 = local_78;
      local_78 = local_58;
    }
    local_58 = local_78;
    if (cVar7 != '\0') {
      local_70 = SUB81(local_68,0);
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,&PTR_FUN_18020e730,
                    &PTR_s_C__Users_burne__cargo_registry_s_18020e2d8);
    }
    cVar7 = FUN_180062350(lVar2 + 0x130,lVar3 + 0x18,lVar1,param_3);
    local_78 = (char *)uVar12;
    if ((((char)local_68 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = FUN_180200a50(), cVar8 == '\0')) {
      *(undefined1 *)(lVar3 + 0x11) = 1;
    }
    LOCK();
    cVar8 = *local_58;
    *local_58 = '\0';
    UNLOCK();
    if (cVar8 == '\x02') {
      WakeByAddressSingle(local_58);
    }
    if ((((char)local_5c == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = FUN_180200a50(), cVar8 == '\0')) {
      *(undefined1 *)(lVar2 + 0x11) = 1;
    }
    LOCK();
    cVar8 = *local_50;
    *local_50 = '\0';
    UNLOCK();
    if (cVar8 == '\x02') {
      WakeByAddressSingle();
    }
    if (cVar7 == '\0') {
      return 0;
    }
  } while( true );
}


