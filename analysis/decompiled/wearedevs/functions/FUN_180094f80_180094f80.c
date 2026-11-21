/* FUN_180094f80 @ 180094f80 */

/* WARNING: Removing unreachable block (ram,0x00018009512e) */

ulonglong * FUN_180094f80(ulonglong *param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char cVar9;
  undefined4 local_130;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined2 uStack_12a;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 uStack_f0;
  undefined7 local_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  byte local_c8;
  char cStack_c7;
  undefined2 uStack_c6;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 local_70;
  char cStack_6f;
  undefined4 uStack_6e;
  undefined2 uStack_6a;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  ulonglong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar1 = *param_2;
  if (uVar1 == 5) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_18020f270);
  }
  lVar7 = 0;
  if (1 < uVar1) {
    lVar7 = uVar1 - 2;
  }
  if (lVar7 == 0) {
    if ((int)uVar1 == 2) {
      (**(code **)(param_2[2] + 0x18))(&local_d8,param_2[1],param_3);
      if (((ulonglong)local_d8 & 1) != 0) goto LAB_180095145;
      if (puStack_d0 != (undefined8 *)0x0) {
        cVar9 = '\x02';
        puVar6 = (undefined8 *)
                 CONCAT26(uStack_c2,
                          CONCAT24(uStack_c4,CONCAT22(uStack_c6,CONCAT11(cStack_c7,local_c8))));
        puVar8 = puStack_d0;
        goto LAB_1800951a9;
      }
    }
    else {
      local_d8 = (undefined8 *)0x0;
      puStack_d0 = (undefined8 *)0x0;
    }
    uVar1 = param_2[0x12];
    *(undefined1 *)(param_2 + 0x12) = 3;
    if ((char)uVar1 == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("already called",0xe,&PTR_s_C__Users_burne__cargo_registry_s_18020f138);
    }
    uStack_df = (undefined7)(param_2[0x1c] >> 8);
    local_ef = (undefined7)*(undefined8 *)((longlong)param_2 + 0xd1);
    uStack_e8 = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xd1) >> 0x38);
    uStack_e7 = (undefined7)*(undefined8 *)((longlong)param_2 + 0xd9);
    uStack_e0 = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xd9) >> 0x38);
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x95);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xa1);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xa5);
    uStack_fc._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0xc5);
    uStack_fc = CONCAT31(uStack_fc._1_3_,
                         (char)((uint)*(undefined4 *)((longlong)param_2 + 0xc1) >> 0x18));
    uStack_f8._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0xc9);
    uStack_f8 = CONCAT31(uStack_f8._1_3_,
                         (char)((uint)*(undefined4 *)((longlong)param_2 + 0xc5) >> 0x18));
    uStack_f4._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0xcd);
    uStack_f4 = CONCAT31(uStack_f4._1_3_,
                         (char)((uint)*(undefined4 *)((longlong)param_2 + 0xc9) >> 0x18));
    uStack_f0 = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 0xcd) >> 0x18);
    uStack_10c._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0xb5);
    uStack_10c = CONCAT31(uStack_10c._1_3_,
                          (char)((uint)*(undefined4 *)((longlong)param_2 + 0xb1) >> 0x18));
    uStack_108._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0xb9);
    uStack_108 = CONCAT31(uStack_108._1_3_,
                          (char)((uint)*(undefined4 *)((longlong)param_2 + 0xb5) >> 0x18));
    uStack_104._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0xbd);
    uStack_104 = CONCAT31(uStack_104._1_3_,
                          (char)((uint)*(undefined4 *)((longlong)param_2 + 0xb9) >> 0x18));
    uStack_100._0_1_ = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 0xbd) >> 0x18);
    uStack_100 = CONCAT31((int3)*(undefined4 *)((longlong)param_2 + 0xc1),(undefined1)uStack_100);
    uStack_11c._1_3_ = (undefined3)uVar4;
    uStack_11c = CONCAT31(uStack_11c._1_3_,(char)((uint)uVar3 >> 0x18));
    uStack_118._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0xa9);
    uStack_118 = CONCAT31(uStack_118._1_3_,(char)((uint)uVar4 >> 0x18));
    uStack_114._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0xad);
    uStack_114 = CONCAT31(uStack_114._1_3_,
                          (char)((uint)*(undefined4 *)((longlong)param_2 + 0xa9) >> 0x18));
    uStack_110._0_1_ = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 0xad) >> 0x18);
    uStack_110 = CONCAT31((int3)*(undefined4 *)((longlong)param_2 + 0xb1),(undefined1)uStack_110);
    local_130 = CONCAT31((int3)*(undefined4 *)((longlong)param_2 + 0x91),(char)uVar1);
    uStack_12c = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 0x91) >> 0x18);
    uStack_12b = (undefined1)uVar2;
    uStack_12a = (undefined2)((uint)uVar2 >> 8);
    uStack_128._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x99);
    uStack_128 = CONCAT31(uStack_128._1_3_,(char)((uint)uVar2 >> 0x18));
    uStack_124._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x9d);
    uStack_124 = CONCAT31(uStack_124._1_3_,
                          (char)((uint)*(undefined4 *)((longlong)param_2 + 0x99) >> 0x18));
    uStack_120._0_1_ = (byte)((uint)*(undefined4 *)((longlong)param_2 + 0x9d) >> 0x18);
    uStack_120 = CONCAT31((int3)uVar3,(byte)uStack_120);
    if ((int)*param_2 == 2) {
      local_88 = CONCAT71(uStack_df,uStack_e0);
      local_98 = CONCAT71(local_ef,uStack_f0);
      uStack_90 = CONCAT71(uStack_e7,uStack_e8);
      local_c8 = (byte)uStack_120;
      cStack_c7 = (char)uVar3;
      uStack_c6 = (undefined2)((uint)uVar3 >> 8);
      uStack_c4 = (undefined2)uStack_11c;
      uStack_c2 = (undefined2)((uint)uVar4 >> 8);
      local_d8 = (undefined8 *)
                 CONCAT44(CONCAT22(uStack_12a,CONCAT11(uStack_12b,uStack_12c)),local_130);
      puStack_d0 = (undefined8 *)CONCAT44(uStack_124,uStack_128);
      puVar6 = &local_d8;
      uStack_c0 = uStack_118;
      uStack_bc = uStack_114;
      local_b8 = uStack_110;
      uStack_b4 = uStack_10c;
      uStack_b0 = uStack_108;
      uStack_ac = uStack_104;
      local_a8 = uStack_100;
      uStack_a4 = uStack_fc;
      uStack_a0 = uStack_f8;
      uStack_9c = uStack_f4;
      local_60 = (undefined8 *)(**(code **)(param_2[2] + 0x20))(param_2[1]);
    }
    else {
      puVar6 = (undefined8 *)&local_130;
      local_60 = (undefined8 *)FUN_1800d49f0(param_2);
    }
    local_58 = puVar6;
    local_50 = param_2;
    FUN_180097490(param_2);
    *local_50 = 3;
    local_50[1] = (ulonglong)local_60;
    local_50[2] = (ulonglong)local_58;
    puVar6 = local_58;
    puVar8 = local_60;
    param_2 = local_50;
  }
  else {
    if (lVar7 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("polled after complete",0x2b,&PTR_s_C__Users_burne__cargo_registry_s_18020f168);
    }
    puVar6 = (undefined8 *)param_2[2];
    puVar8 = (undefined8 *)param_2[1];
  }
  (*(code *)puVar6[3])(&local_d8,puVar8,param_3);
  cVar5 = cStack_c7;
  if (cStack_c7 == '\x03') {
LAB_180095145:
    *(undefined1 *)((longlong)param_1 + 0x29) = 4;
    return param_1;
  }
  cVar9 = '\x02';
  puVar8 = local_d8;
  puVar6 = puStack_d0;
  if (cStack_c7 != '\x02') {
    local_58 = puStack_d0;
    local_60 = local_d8;
    param_3 = (ulonglong)local_c8;
    uStack_12c = (undefined1)uStack_c2;
    uStack_12b = (undefined1)((ushort)uStack_c2 >> 8);
    local_130 = CONCAT22(uStack_c4,uStack_c6);
    local_50 = param_2;
    FUN_180097490(param_2);
    *local_50 = 4;
    local_64 = CONCAT11(uStack_12b,uStack_12c);
    local_68 = local_130;
    puVar8 = local_60;
    puVar6 = local_58;
    param_2 = local_50;
    cVar9 = cVar5;
    if (cVar5 == '\x03') goto LAB_180095145;
  }
LAB_1800951a9:
  uStack_6a = local_64;
  uStack_6e = local_68;
  local_70 = (undefined1)param_3;
  local_80 = puVar8;
  local_78 = puVar6;
  cStack_6f = cVar9;
  if ((int)*param_2 == 5) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\future\\map.rs"
                  ,0x28,&DAT_18020f220);
  }
  local_50 = param_2;
  FUN_180097490(param_2);
  *local_50 = 5;
  *param_1 = (ulonglong)puVar8;
  param_1[1] = (ulonglong)puVar6;
  param_1[2] = CONCAT26(uStack_6a,CONCAT42(uStack_6e,CONCAT11(cStack_6f,local_70)));
  *(byte *)((longlong)param_1 + 0x29) = cVar9 == '\x02' ^ 3;
  *(undefined1 *)(param_1 + 6) = 2;
  return param_1;
}


