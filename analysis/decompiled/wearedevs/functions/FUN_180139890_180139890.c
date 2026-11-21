/* FUN_180139890 @ 180139890 */

void * FUN_180139890(byte param_1,char *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  void *_Dst;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 local_498;
  longlong local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined1 local_380;
  undefined8 local_358;
  undefined8 local_348;
  undefined8 local_340;
  ulonglong local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  longlong local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  ulonglong local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  byte local_2c8;
  undefined1 local_2c0 [4];
  undefined4 local_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined2 local_2ac;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  longlong local_110;
  longlong lStack_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined6 uStack_86;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  uVar13 = 0xffffffffffffffff;
  if (*param_2 != '\0') {
    uVar13 = *(undefined8 *)(param_2 + 8);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  local_498 = 0;
  uVar12 = 0xffff;
  uVar10 = FUN_180131b80(&local_498);
  if ((uVar10 & 1) != 0) {
    local_348 = CONCAT44(local_348._4_4_,uVar12);
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("invalid initial remote window size",0x22,&local_348,&DAT_18025bae8,
                  &PTR_s_C__Users_burne__cargo_registry_s_18025af00);
  }
  if (SCARRY4(local_498._4_4_,0xffff)) {
    local_348 = CONCAT44(local_348._4_4_,3);
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_348,&DAT_18025bae8,
                  &PTR_s_C__Users_burne__cargo_registry_s_18025af18);
  }
  local_310 = *(undefined8 *)(param_2 + 0x20);
  local_2ac = *(undefined2 *)(param_2 + 0x60);
  local_300 = CONCAT44(local_498._4_4_ + 0xffff,(int)local_498);
  local_320 = (ulonglong)(2 - param_1) << 0x20;
  local_2bc = 0xffff;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0x7fffffff;
  local_2f8 = (ulonglong)local_2f8._4_4_ << 0x20;
  local_2e8 = (ulonglong)(uint)local_2e8;
  local_2d0 = (ulonglong)local_2d0._4_4_ << 0x20;
  local_308 = CONCAT44(local_308._4_4_,*(undefined4 *)(param_2 + 0x28));
  local_348 = 0;
  local_340 = 8;
  local_318 = (ulonglong)local_318._4_4_ << 0x20;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0;
  uVar1 = *(uint *)(param_2 + 0x58);
  uVar12 = *(undefined4 *)(param_2 + 0x5c);
  local_80 = uVar2;
  local_78 = uVar5;
  FUN_180130e50(&uStack_f0,param_2);
  local_f8 = (ulonglong)uVar1 << 0x20;
  uStack_90 = 0x7fffffff;
  local_88 = 1;
  uStack_8c = uVar12;
  memcpy(&local_498,&local_348,0xa0);
  local_3f8 = local_f8;
  uStack_3f0 = uStack_f0;
  local_3e8 = (undefined4)local_e8;
  uStack_3e4 = local_e8._4_4_;
  uStack_3e0 = (undefined4)uStack_e0;
  uStack_3dc = uStack_e0._4_4_;
  local_3d8 = (undefined4)local_d8;
  uStack_3d4 = local_d8._4_4_;
  uStack_3d0 = uStack_d0;
  uStack_3cc = uStack_cc;
  local_3c8 = local_c8;
  uStack_3c4 = uStack_c4;
  uStack_3c0 = uStack_c0;
  uStack_3bc = uStack_bc;
  local_3b8 = local_b8;
  uStack_3b0 = uStack_b0;
  local_3a8 = local_a8;
  uStack_3a0 = uStack_a0;
  local_398 = local_98;
  uStack_394 = uStack_94;
  uStack_390 = uStack_90;
  uStack_38c = uStack_8c;
  local_388 = CONCAT62(uStack_86,local_88);
  local_358 = 0;
  local_380 = 3;
  local_f8 = 0;
  uStack_f0 = 8;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  plVar11 = (longlong *)FUN_18009ec50(0);
  uVar2 = local_80;
  if (plVar11 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_18024de88);
  }
  lVar8 = *plVar11;
  lVar9 = plVar11[1];
  *plVar11 = *plVar11 + 1;
  local_150 = local_d8;
  local_160 = local_e8;
  uStack_158 = uStack_e0;
  local_170 = local_f8;
  uStack_168 = uStack_f0;
  memcpy(local_2c0,&local_498,0x150);
  local_348 = 1;
  local_340 = 1;
  local_338 = local_338 & 0xffffffffffff0000;
  local_320 = uVar2;
  local_318 = 0;
  local_308 = 0;
  local_2f8 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = local_78;
  local_2d0 = local_78;
  local_148 = 0;
  local_140 = 8;
  local_138 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0x80257cb0;
  uStack_12c = 1;
  uStack_128 = 0;
  uStack_124 = 0;
  local_100 = 1;
  uStack_330 = uVar6;
  local_328 = uVar7;
  local_310 = uVar13;
  local_300 = uVar3;
  local_2f0 = uVar4;
  local_2c8 = param_1;
  local_110 = lVar8;
  lStack_108 = lVar9;
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x250,8);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x250);
  }
  memcpy(_Dst,&local_348,0x250);
  return _Dst;
}


