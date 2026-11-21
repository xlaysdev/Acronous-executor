/* FUN_1800e39f0 @ 1800e39f0 */

undefined8 * FUN_1800e39f0(undefined8 *param_1,void *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined1 uStack_660;
  undefined1 uStack_65f;
  undefined2 uStack_65e;
  undefined2 uStack_65c;
  undefined2 uStack_65a;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined8 local_648;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined4 local_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  longlong local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  byte local_4d0;
  undefined1 local_4cf;
  undefined8 local_130;
  char ***local_128;
  undefined8 local_120;
  longlong local_118;
  char *local_110;
  undefined8 local_108;
  char **local_100;
  undefined *local_f8;
  char *local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  void *local_38;
  undefined1 local_2e;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = *param_3;
  local_40 = (undefined8 *)param_3[1];
  local_2a = 1;
  local_2b = 1;
  local_38 = param_2;
  (*(code *)local_40[10])(&local_678);
  uStack_65f = *(undefined1 *)(param_3 + 2);
  local_a8 = local_678;
  uStack_a4 = uStack_674;
  uStack_a0 = uStack_670;
  uStack_9c = uStack_66c;
  local_98 = CONCAT44(uStack_664,local_668);
  uStack_90 = uStack_660;
  uStack_8e = uStack_65e;
  uStack_8c = uStack_65c;
  uStack_8a = uStack_65a;
  uStack_8f = uStack_65f;
  if (*(char *)((longlong)param_3 + 0x11) == '\0') {
    uStack_50 = CONCAT26(uStack_65a,
                         CONCAT42(CONCAT22(uStack_65c,uStack_65e),CONCAT11(uStack_65f,uStack_660)));
    local_58 = local_98;
  }
  else {
    local_2e = 1;
    (*(code *)local_40[0xc])(&local_e8,local_48);
    if (local_e8 != -0x7fffffffffffffff) {
      local_668 = (undefined4)local_98;
      uStack_664 = local_98._4_4_;
      uStack_660 = uStack_90;
      uStack_65f = uStack_8f;
      uStack_65a = uStack_8a;
      local_678 = local_a8;
      uStack_674 = uStack_a4;
      uStack_670 = uStack_a0;
      uStack_66c = uStack_9c;
      local_2e = 0;
      FUN_1800b8d10(&local_68,&local_678,&local_e8);
      goto LAB_1800e3b65;
    }
    uStack_50 = CONCAT26(uStack_8a,
                         CONCAT24(uStack_8c,CONCAT22(uStack_8e,CONCAT11(uStack_8f,uStack_90))));
    local_58 = local_98;
  }
  local_98 = local_58;
  local_68 = local_a8;
  uStack_64 = uStack_a4;
  uStack_60 = uStack_a0;
  uStack_5c = uStack_9c;
LAB_1800e3b65:
  bVar5 = *(byte *)((longlong)local_38 + 0x148);
  if ((((byte)uStack_50 | bVar5) & 1) == 0) {
    local_648 = *(undefined8 *)((longlong)local_38 + 0x128);
    local_678 = *(undefined4 *)((longlong)local_38 + 0xf8);
    uStack_674 = *(undefined4 *)((longlong)local_38 + 0xfc);
    uStack_670 = *(undefined4 *)((longlong)local_38 + 0x100);
    uStack_66c = *(undefined4 *)((longlong)local_38 + 0x104);
    local_668 = *(undefined4 *)((longlong)local_38 + 0x108);
    uStack_664 = *(undefined4 *)((longlong)local_38 + 0x10c);
    uVar3 = *(undefined4 *)((longlong)local_38 + 0x110);
    local_658 = *(undefined4 *)((longlong)local_38 + 0x118);
    uStack_654 = *(undefined4 *)((longlong)local_38 + 0x11c);
    uStack_650 = *(undefined4 *)((longlong)local_38 + 0x120);
    uStack_64c = *(undefined4 *)((longlong)local_38 + 0x124);
    uStack_660 = (undefined1)uVar3;
    uStack_65f = (undefined1)((uint)uVar3 >> 8);
    uStack_65e = (undefined2)((uint)uVar3 >> 0x10);
    uStack_65c = (undefined2)*(undefined4 *)((longlong)local_38 + 0x114);
    uStack_65a = (undefined2)((uint)*(undefined4 *)((longlong)local_38 + 0x114) >> 0x10);
    puVar11 = (undefined8 *)((longlong)local_38 + 0x140);
    FUN_180070d90(&local_a8,puVar11,&local_678,1);
    local_29 = 1;
    FUN_180079680(&local_678);
    puVar4 = PTR_PTR_1802fb238;
    if ((char)local_a8 == '\x03') {
      FUN_180027490();
      pcVar8 = (char *)thunk_FUN_1801d32d0(0x17,1);
      if (pcVar8 == (char *)0x0) {
        local_29 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(1,0x17);
      }
      builtin_strncpy(pcVar8,"ALPN upgraded to HTTP/2",0x17);
      FUN_180027490();
      puVar9 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
      if (puVar9 == (undefined8 *)0x0) {
        local_f0 = pcVar8;
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x18);
      }
      *puVar9 = 0x17;
      puVar9[1] = pcVar8;
      puVar9[2] = 0x17;
      *param_1 = puVar9;
      param_1[1] = &PTR_LAB_180215448;
      *(undefined1 *)((longlong)param_1 + 0x29) = 2;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 0xe) = 2;
      local_2a = 1;
      local_2b = 0;
      FUN_18003c220(&local_68);
      if ((code *)*local_40 != (code *)0x0) {
        (*(code *)*local_40)(local_48);
      }
      if (local_40[1] != 0) {
        thunk_FUN_1801d3330(local_48,local_40[1],local_40[2]);
      }
      plVar1 = (longlong *)*puVar11;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_18003cf20(puVar11);
        }
      }
      plVar1 = *(longlong **)((longlong)local_38 + 0x98);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_18003cc40((longlong)local_38 + 0x98);
      }
      plVar1 = *(longlong **)((longlong)local_38 + 0xa8);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_18003cc40((longlong)local_38 + 0xa8);
        }
      }
      plVar1 = *(longlong **)((longlong)local_38 + 0x130);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_18003cc40((longlong)local_38 + 0x130);
        return param_1;
      }
      return param_1;
    }
    local_648 = local_78;
    local_658 = local_88;
    uStack_654 = uStack_84;
    uStack_650 = uStack_80;
    uStack_64c = uStack_7c;
    local_668 = (undefined4)local_98;
    uStack_664 = local_98._4_4_;
    uStack_660 = uStack_90;
    uStack_65f = uStack_8f;
    uStack_65e = uStack_8e;
    uStack_65c = uStack_8c;
    uStack_65a = uStack_8a;
    local_678 = local_a8;
    uStack_674 = uStack_a4;
    uStack_670 = uStack_a0;
    uStack_66c = uStack_9c;
    if (*(longlong *)PTR_DAT_1802fd448 == 0) {
      bVar5 = PTR_PTR_1802fb238[0x10];
      uVar7 = (uint)bVar5;
      if (((bVar5 - 1 < 2) ||
          ((bVar5 != 0 && (uVar7 = FUN_1801faaf0(PTR_PTR_1802fb238), (char)uVar7 != '\0')))) &&
         (cVar6 = FUN_1801601d0(*(undefined8 *)puVar4,uVar7), cVar6 != '\0')) {
        lVar2 = *(longlong *)puVar4;
        local_118 = lVar2 + 0x30;
        local_110 = "ALPN negotiated h2, updating pool";
        local_108 = 0x43;
        local_100 = &local_110;
        local_f8 = &DAT_1802154c8;
        local_130 = 1;
        local_128 = &local_100;
        local_120 = 1;
        FUN_180160ae0(lVar2,&local_130);
      }
    }
    local_b8 = local_648;
    local_e8 = CONCAT44(uStack_674,local_678);
    uStack_e0 = CONCAT44(uStack_66c,uStack_670);
    local_d8 = CONCAT44(uStack_664,local_668);
    uStack_d0 = CONCAT26(uStack_65a,
                         CONCAT24(uStack_65c,CONCAT22(uStack_65e,CONCAT11(uStack_65f,uStack_660))));
    local_c8 = CONCAT44(uStack_654,local_658);
    uStack_c0 = CONCAT44(uStack_64c,uStack_650);
    bVar5 = *(byte *)((longlong)local_38 + 0x148);
  }
  else {
    local_b8 = *(undefined8 *)((longlong)local_38 + 0x128);
    local_e8 = *(longlong *)((longlong)local_38 + 0xf8);
    uStack_e0 = *(undefined8 *)((longlong)local_38 + 0x100);
    local_d8 = *(undefined8 *)((longlong)local_38 + 0x108);
    uStack_d0 = *(undefined8 *)((longlong)local_38 + 0x110);
    local_c8 = *(undefined8 *)((longlong)local_38 + 0x118);
    uStack_c0 = *(undefined8 *)((longlong)local_38 + 0x120);
  }
  pvVar10 = local_38;
  local_4d0 = 1;
  if ((bVar5 & 1) == 0) {
    local_4d0 = (byte)uStack_50 ^ 1;
  }
  memcpy(&local_678,local_38,0xb8);
  local_580 = *param_3;
  uStack_578 = param_3[1];
  local_570 = param_3[2];
  local_510 = *(undefined8 *)((longlong)pvVar10 + 0x130);
  uStack_508 = *(undefined8 *)((longlong)pvVar10 + 0x138);
  local_5c0 = *(undefined8 *)((longlong)pvVar10 + 0xb8);
  uStack_5b8 = *(undefined8 *)((longlong)pvVar10 + 0xc0);
  local_5b0 = *(undefined8 *)((longlong)pvVar10 + 200);
  uStack_5a8 = *(undefined8 *)((longlong)pvVar10 + 0xd0);
  local_5a0 = *(undefined8 *)((longlong)pvVar10 + 0xd8);
  uStack_598 = *(undefined8 *)((longlong)pvVar10 + 0xe0);
  local_590 = *(undefined4 *)((longlong)pvVar10 + 0xe8);
  uStack_58c = *(undefined4 *)((longlong)pvVar10 + 0xec);
  uStack_588 = *(undefined4 *)((longlong)pvVar10 + 0xf0);
  uStack_584 = *(undefined4 *)((longlong)pvVar10 + 0xf4);
  local_500 = *(undefined8 *)((longlong)pvVar10 + 0x140);
  local_518 = local_b8;
  local_528 = (undefined4)local_c8;
  uStack_524 = local_c8._4_4_;
  uStack_520 = (undefined4)uStack_c0;
  uStack_51c = uStack_c0._4_4_;
  local_538 = local_d8;
  uStack_530 = uStack_d0;
  local_548 = local_e8;
  uStack_540 = uStack_e0;
  local_568 = local_68;
  uStack_564 = uStack_64;
  uStack_560 = uStack_60;
  uStack_55c = uStack_5c;
  local_558 = (undefined4)local_58;
  uStack_554 = local_58._4_4_;
  uStack_550 = (undefined4)uStack_50;
  uStack_54c = uStack_50._4_4_;
  local_4cf = 0;
  FUN_180027490();
  pvVar10 = (void *)thunk_FUN_1801d32d0(0x540,8);
  if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x540);
  }
  memcpy(pvVar10,&local_678,0x540);
  *param_1 = pvVar10;
  *(undefined1 *)(param_1 + 0xe) = 4;
  return param_1;
}


