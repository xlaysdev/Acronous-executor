/* FUN_180169740 @ 180169740 */

undefined8 *
FUN_180169740(undefined8 *param_1,undefined8 *param_2,void *param_3,undefined8 param_4,
             undefined8 *param_5,char *param_6,undefined8 param_7,undefined8 *param_8)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *_Dst;
  void *_Dst_00;
  longlong **pplVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined8 local_590;
  void *local_578;
  undefined8 *local_570;
  void *local_568;
  longlong *local_560;
  longlong **pplStack_558;
  longlong *local_550;
  void *pvStack_548;
  undefined4 local_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 local_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined8 local_520;
  longlong lStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  longlong *local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  longlong *local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  longlong *local_380;
  undefined8 uStack_378;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  longlong lStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined4 local_300 [2];
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined1 local_2f0;
  undefined8 local_220;
  undefined4 local_218;
  longlong local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined1 local_1e0;
  undefined2 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  longlong *local_180;
  longlong **pplStack_178;
  longlong *local_170;
  void *pvStack_168;
  undefined1 local_160 [160];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  void **local_70;
  undefined8 local_60;
  
  local_70 = &local_578;
  local_60 = 0xfffffffffffffffe;
  local_4e0 = 0;
  uStack_4d8 = 0;
  local_4f0 = 0;
  uStack_4e8 = 0;
  local_500 = (longlong *)0x0;
  uStack_4f8 = 0;
  local_578 = param_3;
  local_570 = param_2;
  local_380 = (longlong *)FUN_1801e04b0();
  uVar7 = (undefined4)local_380[2];
  pplVar6 = &local_500;
  FUN_180167340();
  LOCK();
  *local_380 = *local_380 + -1;
  UNLOCK();
  if (*local_380 == 0) {
    pplVar6 = &local_380;
    FUN_1801e3970();
  }
  uVar8 = 0x1f;
  if (*param_6 != '\0') {
    uVar8 = *(undefined4 *)(param_6 + 4);
  }
  if (param_6[0x5a] == '\x01') {
    local_590 = FUN_1801df8c0();
  }
  else {
    uVar7 = 1000000000;
  }
  local_560 = *(longlong **)(param_6 + 0x28);
  if (local_560 == (longlong *)0x0) {
    local_550 = *(longlong **)(param_6 + 0x38);
    pplStack_558 = pplVar6;
  }
  else {
    LOCK();
    lVar5 = *local_560;
    *local_560 = *local_560 + 1;
    UNLOCK();
    if (*local_560 == 0 || SCARRY8(lVar5,1) != *local_560 < 0) goto LAB_180169ca6;
    pplStack_558 = *(longlong ***)(param_6 + 0x30);
    local_550 = *(longlong **)(param_6 + 0x38);
  }
  if (local_550 != (longlong *)0x0) {
    LOCK();
    lVar5 = *local_550;
    *local_550 = *local_550 + 1;
    UNLOCK();
    if (*local_550 == 0 || SCARRY8(lVar5,1) != *local_550 < 0) {
LAB_180169ca6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    param_3 = *(void **)(param_6 + 0x40);
  }
  pvStack_548 = param_3;
  FUN_180027490();
  lVar5 = thunk_FUN_1801d3550(0x60,8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(8,0x60);
  }
  do {
    lVar3 = DAT_1802fd4d0;
    LOCK();
    lVar2 = DAT_1802fd4d0 + 1;
    UNLOCK();
    bVar9 = DAT_1802fd4d0 == 0;
    DAT_1802fd4d0 = lVar2;
  } while (bVar9);
  local_200 = 0;
  uStack_1f8 = 0;
  local_400 = *(undefined8 *)param_6;
  uStack_3f8 = *(undefined8 *)(param_6 + 8);
  local_3f0 = *(undefined8 *)(param_6 + 0x10);
  uStack_3e8 = *(undefined8 *)(param_6 + 0x18);
  local_3e0 = *(undefined8 *)(param_6 + 0x20);
  uStack_3d8 = *(undefined8 *)(param_6 + 0x28);
  local_3d0 = *(undefined8 *)(param_6 + 0x30);
  uStack_3c8 = *(undefined8 *)(param_6 + 0x38);
  local_3c0 = *(undefined8 *)(param_6 + 0x40);
  uStack_3b8 = *(undefined8 *)(param_6 + 0x48);
  local_3b0 = *(undefined8 *)(param_6 + 0x50);
  uStack_3a8 = *(undefined8 *)(param_6 + 0x58);
  local_480 = local_500;
  uStack_478 = uStack_4f8;
  local_470 = local_4f0;
  uStack_468 = uStack_4e8;
  local_460 = local_4e0;
  uStack_458 = uStack_4d8;
  local_450 = local_4d0;
  uStack_448 = uStack_4c8;
  local_440 = local_4c0;
  uStack_438 = uStack_4b8;
  local_430 = local_4b0;
  uStack_428 = uStack_4a8;
  local_420 = local_4a0;
  uStack_418 = uStack_498;
  local_410 = local_490;
  uStack_408 = uStack_488;
  memcpy(local_160,local_578,0xa0);
  local_b0 = *param_8;
  uStack_a8 = param_8[1];
  local_a0 = param_8[2];
  local_98 = *param_5;
  local_90 = *(undefined4 *)(param_5 + 1);
  local_170 = local_550;
  pvStack_168 = pvStack_548;
  local_180 = local_560;
  pplStack_178 = pplStack_558;
  local_380 = (longlong *)0x1;
  uStack_378 = 1;
  memcpy(local_300,&local_480,0xe0);
  local_220 = local_590;
  local_208 = 4;
  local_1f0 = 3;
  local_1e8 = lVar3;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  local_c0 = param_7;
  local_218 = uVar7;
  local_210 = lVar5;
  local_b8 = param_4;
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x300,0x80);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(0x80,0x300);
  }
  memcpy(_Dst,&local_380,0x300);
  local_568 = _Dst;
  FUN_180027490();
  uVar7 = 8;
  lStack_518 = thunk_FUN_1801d32d0(0x200);
  puVar4 = local_570;
  if (lStack_518 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(8,0x200);
  }
  local_510 = 0;
  uStack_508 = 0;
  local_520 = 0x40;
  local_560 = (longlong *)*local_570;
  pplStack_558 = (longlong **)local_570[1];
  local_550 = (longlong *)local_570[2];
  pvStack_548 = (void *)local_570[3];
  local_540 = *(undefined4 *)(local_570 + 4);
  uStack_53c = *(undefined4 *)((longlong)local_570 + 0x24);
  uStack_538 = *(undefined4 *)(local_570 + 5);
  uStack_534 = *(undefined4 *)((longlong)local_570 + 0x2c);
  local_530 = *(undefined4 *)(local_570 + 6);
  uStack_52c = *(undefined4 *)((longlong)local_570 + 0x34);
  uStack_528 = *(undefined4 *)(local_570 + 7);
  uStack_524 = *(undefined4 *)((longlong)local_570 + 0x3c);
  local_308 = FUN_1801df8c0();
  local_318 = 0;
  uStack_310 = 0;
  local_340 = local_520;
  lStack_338 = lStack_518;
  local_330 = local_510;
  uStack_328 = uStack_508;
  local_2f8 = 0;
  local_380 = (longlong *)*puVar4;
  uStack_378 = puVar4[1];
  local_370 = *(undefined4 *)(puVar4 + 2);
  uStack_36c = *(undefined4 *)((longlong)puVar4 + 0x14);
  uStack_368 = *(undefined4 *)(puVar4 + 3);
  uStack_364 = *(undefined4 *)((longlong)puVar4 + 0x1c);
  local_360 = *(undefined4 *)(puVar4 + 4);
  uStack_35c = *(undefined4 *)((longlong)puVar4 + 0x24);
  uStack_358 = *(undefined4 *)(puVar4 + 5);
  uStack_354 = *(undefined4 *)((longlong)puVar4 + 0x2c);
  local_350 = *(undefined4 *)(puVar4 + 6);
  uStack_34c = *(undefined4 *)((longlong)puVar4 + 0x34);
  uStack_348 = *(undefined4 *)(puVar4 + 7);
  uStack_344 = *(undefined4 *)((longlong)puVar4 + 0x3c);
  local_320 = 0;
  local_2f0 = 0;
  local_300[0] = uVar7;
  local_2f4 = uVar8;
  FUN_180027490();
  _Dst_00 = (void *)thunk_FUN_1801d32d0(0x98,8);
  if (_Dst_00 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x98);
  }
  memcpy(_Dst_00,&local_380,0x98);
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = _Dst_00;
  param_1[5] = _Dst;
  return param_1;
}


