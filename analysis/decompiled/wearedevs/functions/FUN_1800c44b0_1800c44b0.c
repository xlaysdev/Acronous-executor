/* FUN_1800c44b0 @ 1800c44b0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_1800c44b0(longlong param_1,undefined8 *param_2)

{
  ulonglong _Size;
  undefined2 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong *puVar6;
  ulonglong local_24c8;
  undefined8 uStack_24c0;
  undefined8 local_24b8;
  undefined8 uStack_24b0;
  undefined4 local_24a8;
  undefined4 uStack_24a4;
  undefined4 uStack_24a0;
  undefined4 uStack_249c;
  undefined4 local_2498;
  undefined4 uStack_2494;
  undefined4 uStack_2490;
  undefined4 uStack_248c;
  undefined8 local_2488;
  void *pvStack_2480;
  undefined4 local_2478;
  undefined4 uStack_2474;
  undefined4 uStack_2470;
  undefined4 uStack_246c;
  undefined8 local_2468;
  undefined8 uStack_2460;
  undefined8 local_2458;
  undefined8 uStack_2450;
  undefined8 local_2448;
  undefined8 uStack_2440;
  undefined4 local_2438;
  undefined4 uStack_2434;
  undefined4 uStack_2430;
  undefined4 uStack_242c;
  undefined8 local_2428;
  undefined8 uStack_2420;
  undefined8 local_2418;
  undefined8 local_2410;
  ulonglong *local_2408;
  undefined1 local_2400;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  void *pvStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  ulonglong local_70;
  void *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  ulonglong *local_50;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_42 = 1;
  local_60 = param_2;
  FUN_18008f930(&local_24c8,param_1 + 0xa0);
  local_42 = 1;
  puVar6 = &local_24c8;
  uVar3 = FUN_1800d5430(param_1);
  lVar4 = 2;
  if (2 < *(ulonglong *)(param_1 + 0x40)) {
    lVar4 = *(ulonglong *)(param_1 + 0x40) - 3;
  }
  if (lVar4 == 0) {
    local_d8 = 3;
  }
  else {
    local_58 = uVar3;
    local_50 = puVar6;
    if (lVar4 == 1) {
      local_41 = 1;
      (*(code *)**(undefined8 **)(param_1 + 0x48))
                (&local_d0,param_1 + 0x60,*(undefined8 *)(param_1 + 0x50),
                 *(undefined8 *)(param_1 + 0x58));
      uStack_b0 = CONCAT71(uStack_b0._1_7_,*(undefined1 *)(param_1 + 0x68));
      local_d8 = 4;
    }
    else {
      uVar2 = *(ulonglong *)(param_1 + 0x90);
      _Size = uVar2 * 4;
      if (0x7ffffffffffffffe < _Size || uVar2 >> 0x3e != 0) {
        uVar3 = 0;
LAB_1800c45c5:
        local_41 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(uVar3,_Size);
      }
      uVar1 = *(undefined2 *)(param_1 + 0x98);
      pvVar5 = *(void **)(param_1 + 0x88);
      local_70 = uVar2;
      if (_Size == 0) {
        local_68 = (void *)0x2;
      }
      else {
        FUN_180027490();
        uVar3 = 2;
        local_68 = (void *)thunk_FUN_1801d32d0(_Size,2);
        if (local_68 == (void *)0x0) goto LAB_1800c45c5;
      }
      local_78 = _Size;
      memcpy(local_68,pvVar5,_Size);
      FUN_18009cd60(&local_f0,param_1 + 0x58);
      FUN_18009c810(&local_24c8,param_1 + 0x70);
      local_d8 = *(ulonglong *)(param_1 + 0x40);
      if (1 < local_d8) {
        local_108 = *(undefined8 *)(param_1 + 0x48);
        uStack_100 = *(undefined8 *)(param_1 + 0x50);
      }
      uStack_b0 = local_e0;
      uStack_c0 = local_f0;
      uStack_b8 = uStack_e8;
      local_a8 = local_24c8;
      uStack_a0 = uStack_24c0;
      local_98 = local_24b8;
      local_d0 = local_108;
      uStack_c8 = uStack_100;
      pvStack_90 = local_68;
      local_88 = local_70;
      uStack_80 = CONCAT22(uStack_80._2_2_,uVar1);
    }
    puVar6 = local_50;
    uVar3 = local_58;
  }
  local_2468 = *local_60;
  uStack_2460 = local_60[1];
  local_2458 = local_60[2];
  uStack_2450 = local_60[3];
  local_2448 = local_60[4];
  uStack_2440 = local_60[5];
  local_2438 = *(undefined4 *)(local_60 + 6);
  uStack_2434 = *(undefined4 *)((longlong)local_60 + 0x34);
  uStack_2430 = *(undefined4 *)(local_60 + 7);
  uStack_242c = *(undefined4 *)((longlong)local_60 + 0x3c);
  local_2428 = local_60[8];
  uStack_2420 = local_60[9];
  local_2418 = local_60[10];
  local_24c8 = local_d8;
  uStack_24c0 = local_d0;
  local_24b8 = uStack_c8;
  uStack_24b0 = uStack_c0;
  local_24a8 = (undefined4)uStack_b8;
  uStack_24a4 = uStack_b8._4_4_;
  uStack_24a0 = (undefined4)uStack_b0;
  uStack_249c = uStack_b0._4_4_;
  local_2498 = (undefined4)local_a8;
  uStack_2494 = local_a8._4_4_;
  uStack_2490 = (undefined4)uStack_a0;
  uStack_248c = uStack_a0._4_4_;
  local_2488 = local_98;
  pvStack_2480 = pvStack_90;
  local_2478 = (undefined4)local_88;
  uStack_2474 = local_88._4_4_;
  uStack_2470 = uStack_80;
  uStack_246c = uStack_7c;
  local_2400 = 0;
  local_2410 = uVar3;
  local_2408 = puVar6;
  FUN_180027490();
  pvVar5 = (void *)thunk_FUN_1801d32d0(0x23c0,8);
  if (pvVar5 == (void *)0x0) {
    local_58 = uVar3;
    local_50 = puVar6;
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x23c0);
  }
  memcpy(pvVar5,&local_24c8,0x23c0);
  return pvVar5;
}


