/* FUN_180093fd0 @ 180093fd0 */

undefined8 FUN_180093fd0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  longlong local_2c8;
  longlong local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  longlong local_268;
  undefined8 local_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208;
  char local_207;
  undefined1 local_1e0;
  char local_1df;
  char local_1b8;
  char local_1b7;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  char local_168;
  undefined1 local_167;
  ulonglong local_160;
  char local_140 [4];
  undefined4 local_13c;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar1 = param_1 + 5;
  plVar2 = param_1 + 8;
  local_58 = param_1;
LAB_18009405e:
  do {
    FUN_180085710(local_140,plVar1,param_2,1);
    if (local_140[0] != '\x06') {
      if (local_140[0] == '\x05') {
        local_f0 = CONCAT71(local_f0._1_7_,2);
        local_f0 = CONCAT44(local_13c,(undefined4)local_f0);
        pcVar12 = (char *)&local_f0;
      }
      else {
        pcVar12 = local_140;
      }
LAB_180094386:
      FUN_180068350(pcVar12);
      return 0;
    }
    if ((char)param_1[4] != '\x02') {
      iVar8 = FUN_1800867f0(plVar1);
      if (iVar8 == 0) {
        uVar10 = FUN_180085d20(plVar1,param_2);
        if ((char)uVar10 == '\x02') {
LAB_1800944fc:
          uVar11 = FUN_1801158a0(8);
          FUN_180068680(uVar11,"send stream capacity unexpectedly closed",0x28);
          return 0;
        }
        if (((uint)uVar10 & 0xff) == 3) {
          return 1;
        }
        if ((uVar10 & 1) != 0) {
          local_160 = local_88;
LAB_180094551:
          local_168 = '\x03';
          local_167 = (undefined1)(uVar10 >> 8);
          pcVar12 = &local_168;
          goto LAB_180094386;
        }
        while (uVar10 >> 0x20 == 0) {
          iVar8 = FUN_1800867f0(plVar1);
          if (iVar8 != 0) {
            local_88 = 0;
            goto LAB_1800942e4;
          }
          uVar10 = FUN_180085d20(plVar1,param_2);
          if ((char)uVar10 == '\x02') goto LAB_1800944fc;
          if (((uint)uVar10 & 0xff) == 3) {
            return 1;
          }
          if ((uVar10 & 1) != 0) {
            local_160 = 0;
            goto LAB_180094551;
          }
        }
        local_88 = uVar10 >> 0x20;
LAB_1800942e4:
        param_1 = local_58;
      }
      bVar3 = *(byte *)(param_1 + 4);
      *(undefined1 *)(param_1 + 4) = 2;
      if (bVar3 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("checked is_some aboveC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-1.11.0\\src\\proto\\h2\\mod.rs"
                      ,0x15,&DAT_18020f048);
      }
      local_188 = (undefined4)*param_1;
      uStack_184 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_180 = (undefined4)param_1[1];
      uStack_17c = *(undefined4 *)((longlong)param_1 + 0xc);
      local_178 = (undefined4)param_1[2];
      uStack_174 = *(undefined4 *)((longlong)param_1 + 0x14);
      uStack_170 = (undefined4)param_1[3];
      uStack_16c = *(undefined4 *)((longlong)param_1 + 0x1c);
      local_190 = 0;
      cVar7 = FUN_180086970(plVar1,&local_190,bVar3);
      if (cVar7 != '\r') {
        local_1b8 = '\x03';
        pcVar12 = &local_1b8;
        local_1b7 = cVar7;
        goto LAB_180094386;
      }
      param_1 = local_58;
      if ((bVar3 & 1) != 0) {
        return 0;
      }
      goto LAB_18009405e;
    }
    FUN_18003ea80(&local_2c8,plVar2,param_2);
    param_1 = local_58;
    if (local_2c8 == 6) {
      return 1;
    }
    if ((int)local_2c8 == 4) {
      local_f0 = FUN_1800681a0();
      local_60 = local_f0;
      uVar9 = FUN_180115ef0(&local_f0);
      FUN_1800858e0(plVar1,uVar9);
      return 0;
    }
    if ((int)local_2c8 == 5) {
      local_f0 = 2;
      cVar7 = FUN_180086970(plVar1,&local_f0,1);
      if (cVar7 == '\r') {
        return 0;
      }
      local_f0._0_2_ = CONCAT11(cVar7,3);
      FUN_180068350(&local_f0);
      return 0;
    }
    local_268 = local_2c8;
    local_260 = local_2c0;
    local_218 = local_278;
    uStack_210 = uStack_270;
    local_228 = local_288;
    uStack_224 = uStack_284;
    uStack_220 = uStack_280;
    uStack_21c = uStack_27c;
    local_238 = local_298;
    uStack_234 = uStack_294;
    uStack_230 = uStack_290;
    uStack_22c = uStack_28c;
    uStack_248 = local_2a8;
    uStack_244 = uStack_2a4;
    uStack_240 = uStack_2a0;
    uStack_23c = uStack_29c;
    uStack_258 = local_2b8;
    uStack_254 = uStack_2b4;
    uStack_250 = uStack_2b0;
    uStack_24c = uStack_2ac;
    if (local_2c8 != 3) {
      local_49 = 1;
      FUN_180086650(plVar1,0);
      local_98 = uStack_210;
      local_a8 = CONCAT44(uStack_21c,uStack_220);
      uStack_a0 = local_218;
      local_b8 = uStack_230;
      uStack_b4 = uStack_22c;
      uStack_b0 = local_228;
      uStack_ac = uStack_224;
      local_c8 = uStack_240;
      uStack_c4 = uStack_23c;
      uStack_c0 = local_238;
      uStack_bc = uStack_234;
      local_d8 = uStack_250;
      uStack_d4 = uStack_24c;
      uStack_d0 = uStack_248;
      uStack_cc = uStack_244;
      local_e8 = (undefined4)local_260;
      uStack_e4 = local_260._4_4_;
      uStack_e0 = uStack_258;
      uStack_dc = uStack_254;
      local_f0 = local_2c8;
      local_49 = 0;
      local_207 = FUN_180085ed0(plVar1,&local_f0);
      if (local_207 == '\r') {
        return 0;
      }
      local_208 = 3;
      local_49 = 0;
      FUN_180068350(&local_208);
      return 0;
    }
    local_80 = CONCAT44(uStack_2b4,local_2b8);
    lVar4 = CONCAT44(uStack_2ac,uStack_2b0);
    local_78 = CONCAT44(uStack_2a4,local_2a8);
    local_70 = local_2c0;
    if (*plVar2 == 0) {
      local_4a = 1;
      uVar6 = (**(code **)(local_58[10] + 0x20))(local_58[9]);
      local_60 = CONCAT71(local_60._1_7_,uVar6);
      lVar5 = local_110;
      local_110 = local_70;
    }
    else {
      local_60 = CONCAT71(local_60._1_7_,local_58[10] == 0);
      lVar5 = local_110;
      local_110 = local_2c0;
    }
    local_70 = local_110;
    if (lVar4 == 0) {
      local_100 = 0;
      local_118 = 0;
      local_68 = 0;
      local_4a = 0;
      local_1df = FUN_180086970(plVar1,&local_118,local_60 & 0xff);
      if (local_1df != '\r') {
        local_1e0 = 3;
        local_68 = 0;
        local_4a = 0;
        FUN_180068350(&local_1e0);
        return 0;
      }
      if ((char)local_60 != '\0') {
        return 0;
      }
    }
    else {
      local_4a = 1;
      local_110 = lVar5;
      local_90 = lVar4;
      local_68 = lVar4;
      FUN_180086650(plVar1);
      if ((char)param_1[4] != '\x02') {
        (**(code **)(*local_58 + 0x20))(local_58[3],local_58[1],local_58[2]);
      }
      *local_58 = local_70;
      local_58[1] = local_80;
      local_58[2] = local_90;
      local_58[3] = local_78;
      *(char *)(local_58 + 4) = (char)local_60;
      param_1 = local_58;
    }
  } while( true );
}


