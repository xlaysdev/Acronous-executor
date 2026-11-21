/* FUN_1801c3490 @ 1801c3490 */

undefined8 * FUN_1801c3490(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  void *_Dst;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 local_539;
  longlong *local_538;
  longlong *local_530;
  undefined8 *local_528;
  longlong *local_520;
  longlong *local_518;
  undefined8 *local_510;
  longlong *local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  longlong *local_4f0;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  longlong *local_4a8;
  longlong local_4a0;
  undefined8 local_490;
  undefined8 *puStack_488;
  longlong local_480;
  longlong local_470;
  longlong lStack_468;
  longlong local_460;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  longlong local_440;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined8 local_420;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined2 uStack_40c;
  undefined2 uStack_40a;
  undefined4 uStack_408;
  undefined2 uStack_404;
  undefined2 uStack_402;
  undefined4 uStack_400;
  undefined2 uStack_3fc;
  undefined2 uStack_3fa;
  undefined4 uStack_3f8;
  undefined2 uStack_3f4;
  undefined2 uStack_3f2;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  longlong *plStack_3b8;
  longlong local_3b0;
  undefined8 *local_3a8;
  undefined8 *local_3a0;
  undefined8 local_398;
  undefined8 *local_390;
  longlong *local_388;
  longlong *local_380;
  undefined8 local_378;
  longlong *local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  longlong local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  longlong *local_340;
  longlong local_330;
  undefined1 local_328;
  longlong local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  longlong *local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  longlong local_2a0;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_200;
  longlong local_1f8;
  undefined2 local_180;
  undefined8 local_17e;
  undefined6 uStack_176;
  undefined2 uStack_170;
  undefined6 uStack_16e;
  longlong *local_168;
  longlong local_160;
  longlong lStack_158;
  longlong local_150;
  longlong lStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  longlong *local_128;
  longlong local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined1 *local_108;
  longlong lStack_100;
  longlong *local_f8;
  undefined8 *local_58;
  undefined8 local_48;
  
  local_58 = &uStack_4f8;
  local_48 = 0xfffffffffffffffe;
  local_530 = param_2;
  plVar11 = (longlong *)FUN_1801c1990(param_2);
  plVar13 = (longlong *)0xffff;
  if (plVar11 < (longlong *)0xffff) {
    plVar13 = plVar11;
  }
  local_539 = *(undefined1 *)((longlong)local_530 + 0x59);
  uStack_4f8 = 0;
  local_500 = &local_539;
  local_300 = (longlong *)0x0;
  uStack_2f8 = (undefined8 *)&DAT_00000008;
  local_2f0 = (longlong *)0x0;
  uStack_2e8 = 0;
  local_2e0 = (longlong *)0x8;
  uStack_2d8 = 0;
  local_4f0 = plVar13;
  if (plVar11 != (longlong *)0x0) {
    FUN_1801f6a80(&local_300,0,plVar13,8,0x20);
    if ((longlong *)(uStack_2e8 - uStack_2d8) < plVar13) {
      FUN_1801f6a80(&uStack_2e8,uStack_2d8,plVar13,8,0x10);
    }
  }
  FUN_1801c6280(&local_500,&local_300);
  local_3f0 = (undefined4)local_2e0;
  uStack_3ec = local_2e0._4_4_;
  uStack_3e8 = (undefined4)uStack_2d8;
  uStack_3e4 = uStack_2d8._4_4_;
  uStack_400 = local_2f0._0_4_;
  uStack_3fc = (undefined2)((ulonglong)local_2f0 >> 0x20);
  uStack_3fa = (undefined2)((ulonglong)local_2f0 >> 0x30);
  uStack_3f8 = (undefined4)uStack_2e8;
  uStack_3f4 = (undefined2)((ulonglong)uStack_2e8 >> 0x20);
  uStack_3f2 = (undefined2)((ulonglong)uStack_2e8 >> 0x30);
  local_410 = SUB84(local_300,0);
  uStack_40c = (undefined2)((ulonglong)local_300 >> 0x20);
  uStack_40a = (undefined2)((ulonglong)local_300 >> 0x30);
  uStack_408 = SUB84(uStack_2f8,0);
  uStack_404 = (undefined2)((ulonglong)uStack_2f8 >> 0x20);
  uStack_402 = (undefined2)((ulonglong)uStack_2f8 >> 0x30);
  local_480 = (longlong)local_2f0;
  local_490 = local_300;
  puStack_488 = uStack_2f8;
  local_460 = uStack_2d8;
  local_470 = uStack_2e8;
  lStack_468 = (longlong)local_2e0;
  local_300 = (longlong *)0x0;
  uStack_2f8 = (undefined8 *)0x8;
  local_2f0 = (longlong *)0x0;
  uStack_2e8 = 0;
  local_2e0 = (longlong *)&DAT_00000008;
  uStack_2d8 = 0;
  FUN_1801c2170(&local_300,0,plVar13);
  local_3f0 = (undefined4)local_2e0;
  uStack_3ec = local_2e0._4_4_;
  uStack_3e8 = (undefined4)uStack_2d8;
  uStack_3e4 = uStack_2d8._4_4_;
  uStack_400 = local_2f0._0_4_;
  uStack_3fc = (undefined2)((ulonglong)local_2f0 >> 0x20);
  uStack_3fa = (undefined2)((ulonglong)local_2f0 >> 0x30);
  uStack_3f8 = (undefined4)uStack_2e8;
  uStack_3f4 = (undefined2)((ulonglong)uStack_2e8 >> 0x20);
  uStack_3f2 = (undefined2)((ulonglong)uStack_2e8 >> 0x30);
  local_410 = SUB84(local_300,0);
  uStack_40c = (undefined2)((ulonglong)local_300 >> 0x20);
  uStack_40a = (undefined2)((ulonglong)local_300 >> 0x30);
  uStack_408 = SUB84(uStack_2f8,0);
  uStack_404 = (undefined2)((ulonglong)uStack_2f8 >> 0x20);
  uStack_402 = (undefined2)((ulonglong)uStack_2f8 >> 0x30);
  local_340 = local_2f0;
  local_350 = local_300;
  uStack_348 = uStack_2f8;
  local_440 = uStack_2d8;
  uStack_44c = (undefined4)((ulonglong)uStack_2e8 >> 0x20);
  local_450 = (undefined4)uStack_2e8;
  uStack_448 = (undefined4)local_2e0;
  uStack_444 = local_2e0._4_4_;
  local_308 = local_460 * 0x10 + lStack_468;
  local_320 = lStack_468;
  local_318 = lStack_468;
  local_310 = local_470;
  FUN_1801c1e00(&local_500,&local_320);
  local_510 = (undefined8 *)((longlong)plVar13 << 7);
  if (plVar11 == (longlong *)0x0) {
    lVar12 = 0x80;
  }
  else {
    FUN_180027490();
    lVar12 = thunk_FUN_1801d32d0(local_510,0x80);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(0x80,local_510);
    }
    if (plVar11 < (longlong *)0x4) {
      uVar15 = 0;
    }
    else {
      puVar14 = (undefined8 *)(lVar12 + 0x180);
      uVar15 = 0;
      do {
        puVar14[-0x30] = 0;
        puVar14[-0x20] = 0;
        puVar14[-0x10] = 0;
        uVar15 = uVar15 + 4;
        *puVar14 = 0;
        puVar14 = puVar14 + 0x40;
      } while (((uint)plVar13 & 0xfffc) != uVar15);
    }
    if (((ulonglong)plVar13 & 3) != 0) {
      uVar16 = 0;
      do {
        *(undefined8 *)(lVar12 + uVar15 * 0x80 + uVar16) = 0;
        uVar16 = uVar16 + 0x80;
      } while (((uint)plVar13 & 3) << 7 != uVar16);
    }
  }
  FUN_180027490();
  local_278 = thunk_FUN_1801d3550(0x5f0,8);
  if (local_278 == 0) {
    local_520 = plVar11;
    local_518 = (longlong *)lVar12;
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x5f0);
  }
  uStack_3fa = SUB82(local_340,0);
  uStack_3f8 = (undefined4)((ulonglong)local_340 >> 0x10);
  uStack_3f4 = (undefined2)((ulonglong)local_340 >> 0x30);
  uStack_40a = (undefined2)local_350;
  uStack_408 = (undefined4)((ulonglong)local_350 >> 0x10);
  uStack_404 = (undefined2)((ulonglong)local_350 >> 0x30);
  uStack_402 = (undefined2)uStack_348;
  uStack_400 = (undefined4)((ulonglong)uStack_348 >> 0x10);
  uStack_3fc = (undefined2)((ulonglong)uStack_348 >> 0x30);
  local_f8 = local_4f0;
  local_108 = local_500;
  lStack_100 = uStack_4f8;
  local_110 = 0;
  local_17e = CONCAT26(uStack_40a,CONCAT24(uStack_40c,local_410));
  uStack_176 = (undefined6)((ulonglong)local_350 >> 0x10);
  uStack_16e = (undefined6)((ulonglong)uStack_348 >> 0x10);
  local_168 = local_340;
  local_300 = (longlong *)0x1;
  uStack_2f8._0_4_ = 1;
  uStack_2f8._4_4_ = 0;
  local_280 = 0;
  local_200 = 0;
  local_180 = 0;
  local_160 = local_530[3];
  lStack_158 = local_530[4];
  local_530[3] = 0;
  local_150 = local_530[7];
  lStack_148 = local_530[8];
  local_530[7] = 0;
  local_140 = (undefined4)local_530[9];
  uStack_13c = *(undefined4 *)((longlong)local_530 + 0x4c);
  uStack_138 = (undefined4)local_530[10];
  uStack_134 = *(undefined4 *)((longlong)local_530 + 0x54);
  local_530[9] = 0;
  local_130 = 1;
  local_1f8 = local_278;
  uStack_170 = uStack_402;
  local_128 = plVar13;
  local_120 = lVar12;
  local_118 = plVar13;
  FUN_180027490();
  plVar13 = (longlong *)thunk_FUN_1801d32d0(0x280,0x80);
  if (plVar13 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(0x80,0x280);
  }
  local_528 = param_1;
  memcpy(plVar13,&local_300,0x280);
  local_510 = puStack_488 + local_480 * 4;
  local_378 = CONCAT44(uStack_44c,local_450);
  local_388 = (longlong *)CONCAT44(uStack_444,uStack_448);
  local_518 = local_388 + local_440 * 2;
  local_368 = 0;
  uStack_360 = 0;
  local_3a8 = puStack_488;
  local_3a0 = puStack_488;
  local_398 = local_490;
  local_358 = 0;
  local_508 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 200)
  ;
  puVar14 = puStack_488;
  plVar11 = local_388;
  lVar12 = 0;
  local_538 = plVar13;
  local_390 = local_510;
  local_380 = local_388;
  local_370 = local_518;
  do {
    if (puVar14 == local_510) {
LAB_1801c3d11:
      FUN_1801c6980(&local_3a8);
      FUN_1801c6910(&local_388);
      local_528[1] = local_538;
      *local_528 = 3;
      puVar14 = local_528;
LAB_1801c3d3c:
      FUN_1801c4ea0(local_530);
      return puVar14;
    }
    puVar1 = puVar14 + 4;
    cVar3 = *(char *)(puVar14 + 3);
    local_3a0 = puVar1;
    if (cVar3 == '\x02') goto LAB_1801c3d11;
    local_2f0 = (longlong *)puVar14[2];
    local_300 = (longlong *)*puVar14;
    uStack_2f8._0_4_ = *(undefined4 *)(puVar14 + 1);
    uStack_2f8._4_4_ = *(undefined4 *)((longlong)puVar14 + 0xc);
    uStack_2e8._5_3_ = (undefined3)((uint)*(undefined4 *)((longlong)puVar14 + 0x1c) >> 8);
    uStack_2e8 = CONCAT71(CONCAT34(uStack_2e8._5_3_,*(undefined4 *)((longlong)puVar14 + 0x19)),cVar3
                         );
    if (plVar11 == local_518) {
      LOCK();
      *local_300 = *local_300 + -1;
      UNLOCK();
      if (*local_300 == 0) {
        FUN_1801c68a0(&local_300);
      }
      goto LAB_1801c3d11;
    }
    plVar13 = plVar11 + 2;
    local_520 = (longlong *)*plVar11;
    uVar4 = (undefined1)plVar11[1];
    local_420 = puVar14[2];
    local_430 = *(undefined4 *)puVar14;
    uStack_42c = *(undefined4 *)((longlong)puVar14 + 4);
    uStack_428 = *(undefined4 *)(puVar14 + 1);
    uStack_424 = *(undefined4 *)((longlong)puVar14 + 0xc);
    uStack_414._1_3_ = (undefined3)((uint)*(undefined4 *)((longlong)puVar14 + 0x1c) >> 8);
    uStack_414._0_1_ = (undefined1)((uint)*(undefined4 *)((longlong)puVar14 + 0x19) >> 0x18);
    lVar17 = lVar12 + 1;
    uStack_418 = CONCAT31((int3)*(undefined4 *)((longlong)puVar14 + 0x19),cVar3);
    local_380 = plVar13;
    local_358 = lVar17;
    local_330 = (longlong)local_520;
    local_328 = uVar4;
    if (local_530[5] == 0) {
      local_300 = (longlong *)0x8000000000000000;
    }
    else {
      (**(code **)(local_530[6] + 0x20))(&local_300,local_530[5],lVar12);
    }
    lVar9 = *local_530;
    uVar6 = *(undefined4 *)((longlong)local_530 + 4);
    puVar8 = (undefined1 *)*local_530;
    lVar10 = local_530[1];
    uVar7 = *(undefined4 *)((longlong)local_530 + 0xc);
    lVar2 = local_530[1];
    LOCK();
    lVar18 = *local_538;
    *local_538 = *local_538 + 1;
    UNLOCK();
    if (*local_538 == 0 || SCARRY8(lVar18,1) != *local_538 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uStack_4c8 = CONCAT44(uStack_42c,local_430);
    uStack_4c0 = CONCAT44(uStack_424,uStack_428);
    uStack_4b8 = (undefined4)local_420;
    uStack_4b4 = local_420._4_4_;
    uStack_4b0 = uStack_418;
    uStack_4ac = uStack_414;
    local_4e0 = local_2f0;
    plVar11 = local_4e0;
    uStack_4e8 = (undefined4)uStack_2f8;
    uStack_4e4 = uStack_2f8._4_4_;
    uStack_4d8 = (longlong)local_520;
    lVar18 = uStack_4d8;
    local_4d0 = CONCAT31(local_4d0._1_3_,uVar4);
    local_4a8 = local_538;
    local_500._0_4_ = SUB84(puVar8,0);
    local_500._4_4_ = (undefined4)((ulonglong)puVar8 >> 0x20);
    uStack_4f8._0_4_ = (undefined4)lVar2;
    uStack_4f8._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
    local_4f0._0_4_ = SUB84(local_300,0);
    local_500 = puVar8;
    uStack_4f8 = lVar2;
    local_4f0 = local_300;
    local_4a0 = lVar12;
    if ((lVar12 == 0) && ((char)local_530[0xb] != '\0')) {
      if (*local_508 != 0) {
        *local_528 = 1;
        FUN_1801c54b0(&local_500);
LAB_1801c3d77:
        FUN_1801c6980(&local_3a8);
        FUN_1801c6910(&local_388);
        LOCK();
        plVar13 = local_538 + 0x3a;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if ((*plVar13 == 0) && (local_538[0x41] != 0)) {
          lVar17 = local_538[0x40];
          lVar12 = lVar17 + local_538[0x41] * 0x28;
          plVar13 = local_538 + 0x3b;
          lVar18 = 0;
          do {
            LOCK();
            lVar2 = *(longlong *)(lVar17 + 0x10);
            *(longlong *)(lVar17 + 0x10) = 3;
            UNLOCK();
            if (lVar2 == 2) {
              FUN_1801c2880(plVar13,lVar18);
            }
            lVar17 = lVar17 + 0x28;
            lVar18 = lVar18 + 1;
          } while (lVar17 != lVar12);
        }
        puVar14 = local_528;
        LOCK();
        *local_538 = *local_538 + -1;
        UNLOCK();
        if (*local_538 == 0) {
          FUN_1801c64c0(&local_538);
        }
        goto LAB_1801c3d3c;
      }
      local_3c0 = CONCAT44(uStack_414,uStack_418);
      plStack_3b8 = local_538;
      uStack_3c8 = local_420;
      local_4e0._0_4_ = SUB84(local_2f0,0);
      local_4e0._4_4_ = (undefined4)((ulonglong)local_2f0 >> 0x20);
      uStack_4d8._0_4_ = SUB84(local_520,0);
      uStack_4d8._4_4_ = (undefined4)((ulonglong)local_520 >> 0x20);
      local_3e0 = local_4d0;
      uStack_3dc = uStack_4cc;
      uStack_3d8 = local_430;
      uStack_3d4 = uStack_42c;
      local_3f0 = (undefined4)local_4e0;
      uStack_3ec = local_4e0._4_4_;
      uStack_3e8 = (undefined4)uStack_4d8;
      uStack_3e4 = uStack_4d8._4_4_;
      uStack_400 = local_4f0._0_4_;
      uStack_3fc = (undefined2)((ulonglong)local_300 >> 0x20);
      uStack_3fa = (undefined2)((ulonglong)local_300 >> 0x30);
      uStack_3f8 = (undefined4)uStack_2f8;
      uStack_3f4 = (undefined2)uStack_2f8._4_4_;
      uStack_3f2 = (undefined2)((uint)uStack_2f8._4_4_ >> 0x10);
      local_410 = (undefined4)local_500;
      uStack_40c = (undefined2)uVar6;
      uStack_40a = (undefined2)((uint)uVar6 >> 0x10);
      uStack_408 = (undefined4)uStack_4f8;
      uStack_404 = (undefined2)uVar7;
      uStack_402 = (undefined2)((uint)uVar7 >> 0x10);
      local_4e0 = plVar11;
      uStack_4d8 = lVar18;
      local_3d0 = uStack_4c0;
      local_3b0 = lVar12;
      FUN_1801c4480(&local_300,&local_410);
      FUN_180027490();
      _Dst = (void *)thunk_FUN_1801d32d0(0x180,0x80);
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(0x80,0x180);
      }
      memcpy(_Dst,&local_300,0x180);
      if (*local_508 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: t.get().is_null()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\rayon-core-1.13.0\\src\\registry.rs"
                      ,0x23,&DAT_180287998);
      }
      *local_508 = (longlong)_Dst;
      if (local_538[0x41] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(0,0,&PTR_s_C__Users_burne__cargo_registry_s_180287f78);
      }
      FUN_1801c5bf0(local_538[0x40]);
    }
    else {
      local_2b0 = CONCAT44(uStack_414,uStack_418);
      local_2a8 = local_538;
      uStack_2b8 = local_420;
      local_2d0 = local_4d0;
      uStack_2cc = uStack_4cc;
      uStack_2c8 = local_430;
      uStack_2c4 = uStack_42c;
      local_2e0 = local_2f0;
      uStack_2d8 = (longlong)local_520;
      local_2f0 = local_300;
      uStack_2e8 = CONCAT44(uStack_2f8._4_4_,(undefined4)uStack_2f8);
      local_300 = (longlong *)CONCAT44(local_500._4_4_,(int)lVar9);
      uStack_2f8._4_4_ = uStack_4f8._4_4_;
      local_2c0 = uStack_4c0;
      local_2a0 = lVar12;
      uStack_2f8._0_4_ = (int)lVar10;
      lVar12 = FUN_1801c5d40(local_520,&local_300);
      if (lVar12 != 0) {
        *local_528 = 2;
        local_528[1] = lVar12;
        goto LAB_1801c3d77;
      }
    }
    puVar14 = puVar1;
    plVar11 = plVar13;
    lVar12 = lVar17;
  } while( true );
}


