/* FUN_18014b540 @ 18014b540 */

longlong * FUN_18014b540(longlong *param_1,longlong *param_2,char *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 local_30e [214];
  char local_238;
  undefined1 local_237;
  undefined1 local_236;
  undefined8 local_235;
  longlong *plStack_22d;
  longlong local_225;
  undefined8 uStack_21d;
  undefined8 local_215;
  longlong *plStack_20d;
  longlong local_205;
  undefined8 uStack_1fd;
  undefined4 local_1f5;
  undefined4 uStack_1f1;
  undefined4 uStack_1ed;
  undefined4 uStack_1e9;
  undefined5 uStack_1e5;
  longlong local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6 [86];
  byte local_180;
  undefined1 local_17f;
  undefined1 local_17e;
  undefined5 local_17d;
  undefined3 uStack_178;
  undefined5 uStack_175;
  undefined3 uStack_170;
  undefined5 uStack_16d;
  undefined3 uStack_168;
  undefined5 uStack_165;
  undefined3 uStack_160;
  undefined5 uStack_15d;
  undefined3 uStack_158;
  undefined5 uStack_155;
  undefined3 local_150;
  undefined5 uStack_14d;
  undefined3 uStack_148;
  undefined5 uStack_145;
  undefined3 uStack_140;
  undefined5 uStack_13d;
  undefined3 uStack_138;
  undefined5 uStack_135;
  undefined3 uStack_130;
  longlong *local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined5 uStack_a8;
  undefined3 uStack_a3;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar10 = *param_2;
  local_49 = (undefined1)param_2[1];
  local_4a = *(undefined1 *)((longlong)param_2 + 9);
  local_100 = param_1;
  memcpy(local_30e,(void *)((longlong)param_2 + 10),0xd6);
  cVar1 = *param_3;
  plVar2 = *(longlong **)(param_3 + 8);
  lVar7 = *(longlong *)(param_3 + 0x10);
  uVar9 = *(undefined8 *)(param_3 + 0x18);
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  plVar8 = *(longlong **)(param_3 + 0x28);
  lVar3 = *(longlong *)(param_3 + 0x30);
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  uVar5 = *(undefined8 *)(param_3 + 0x40);
  uVar6 = *(undefined8 *)(param_3 + 0x48);
  if (lVar10 == 3) {
    local_98 = uVar4;
    local_90 = uVar6;
    local_80 = uVar5;
    local_78 = lVar3;
    if (cVar1 == '\x02') {
      local_88 = plVar2;
      local_70 = uVar11;
      local_68 = uVar9;
      local_60 = plVar8;
      local_58 = lVar7;
      (**(code **)(*plVar2 + 0x20))(plVar2[3],plVar2[1],plVar2[2]);
      thunk_FUN_1801d3330(local_88,0x20,8);
      lVar7 = local_58;
      plVar8 = local_60;
      uVar9 = local_68;
      uVar11 = local_70;
    }
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x20))(plVar8,uVar9,uVar11);
    }
    lVar10 = 3;
    if (local_78 != 0) {
      (**(code **)(local_78 + 0x20))(local_90,local_98,local_80);
    }
  }
  else {
    local_80 = *(undefined8 *)(param_3 + 0x50);
    local_78 = lVar10;
    local_70 = uVar11;
    local_68 = uVar9;
    local_60 = plVar8;
    local_58 = lVar7;
    memcpy(local_1d6,(void *)((longlong)param_2 + 10),0xd6);
    lVar10 = local_78;
    local_f8._5_3_ = (undefined3)((uint)*(undefined4 *)(param_3 + 4) >> 8);
    local_f8 = CONCAT71(CONCAT34(local_f8._5_3_,*(undefined4 *)(param_3 + 1)),cVar1);
    local_e8 = local_58;
    uStack_e0 = local_68;
    local_d8 = local_70;
    plStack_d0 = local_60;
    uStack_b0 = (undefined4)uVar6;
    uStack_ac = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_a8 = (undefined5)local_80;
    uStack_a3 = (undefined3)((ulonglong)local_80 >> 0x28);
    local_1e0 = local_78;
    local_1d8 = local_49;
    local_1d7 = local_4a;
    plStack_f0 = plVar2;
    local_c8 = lVar3;
    uStack_c0 = uVar4;
    local_b8 = uVar5;
    FUN_1801ab8a0(&local_238,&local_f8);
    if (local_238 == '\x03') {
      FUN_18014ae20(&local_1e0);
      lVar10 = 3;
      local_49 = 3;
      local_4a = local_237;
    }
    else {
      local_70 = CONCAT71(local_70._1_7_,local_238);
      local_58 = CONCAT71(local_58._1_7_,local_237);
      local_68 = CONCAT71(local_68._1_7_,local_236);
      local_f8 = local_235;
      plStack_f0 = plStack_22d;
      local_e8 = local_225;
      uStack_e0 = uStack_21d;
      local_d8 = local_215;
      plStack_d0 = plStack_20d;
      local_c8 = local_205;
      uStack_c0 = uStack_1fd;
      local_b8 = CONCAT44(uStack_1f1,local_1f5);
      uStack_b0 = uStack_1ed;
      uStack_ac = uStack_1e9;
      uStack_a8 = uStack_1e5;
      if (1 < local_180) {
        local_60 = (longlong *)CONCAT53(uStack_175,uStack_178);
        (**(code **)(*local_60 + 0x20))(local_60[3],local_60[1],local_60[2]);
        thunk_FUN_1801d3330(local_60,0x20,8);
      }
      (**(code **)(CONCAT53(uStack_16d,uStack_170) + 0x20))
                (CONCAT53(uStack_155,uStack_158),CONCAT53(uStack_165,uStack_168),
                 CONCAT53(uStack_15d,uStack_160));
      (**(code **)(CONCAT53(uStack_14d,local_150) + 0x20))
                (CONCAT53(uStack_135,uStack_138),CONCAT53(uStack_145,uStack_148),
                 CONCAT53(uStack_13d,uStack_140));
      local_180 = (byte)local_70;
      local_17f = (undefined1)local_58;
      local_17e = (undefined1)local_68;
      local_17d = (undefined5)local_f8;
      uStack_178 = (undefined3)((ulonglong)local_f8 >> 0x28);
      uStack_175 = SUB85(plStack_f0,0);
      uStack_170 = (undefined3)((ulonglong)plStack_f0 >> 0x28);
      uStack_16d = (undefined5)local_e8;
      uStack_168 = (undefined3)((ulonglong)local_e8 >> 0x28);
      uStack_165 = (undefined5)uStack_e0;
      uStack_160 = (undefined3)((ulonglong)uStack_e0 >> 0x28);
      uStack_15d = (undefined5)local_d8;
      uStack_158 = (undefined3)((ulonglong)local_d8 >> 0x28);
      uStack_155 = SUB85(plStack_d0,0);
      local_150 = (undefined3)((ulonglong)plStack_d0 >> 0x28);
      uStack_14d = (undefined5)local_c8;
      uStack_148 = (undefined3)((ulonglong)local_c8 >> 0x28);
      uStack_145 = (undefined5)uStack_c0;
      uStack_140 = (undefined3)((ulonglong)uStack_c0 >> 0x28);
      uStack_13d = (undefined5)local_b8;
      uStack_138 = (undefined3)((ulonglong)local_b8 >> 0x28);
      uStack_135 = (undefined5)CONCAT44(uStack_ac,uStack_b0);
      uStack_130 = uStack_ac._1_3_;
      memcpy(local_30e,local_1d6,0xd6);
    }
  }
  plVar2 = local_100;
  *local_100 = lVar10;
  *(undefined1 *)(local_100 + 1) = local_49;
  *(undefined1 *)((longlong)local_100 + 9) = local_4a;
  memcpy((void *)((longlong)local_100 + 10),local_30e,0xd6);
  return plVar2;
}


