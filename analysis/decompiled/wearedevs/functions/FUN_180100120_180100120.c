/* FUN_180100120 @ 180100120 */

undefined4 *
FUN_180100120(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined **ppuVar2;
  undefined8 *******pppppppuVar3;
  undefined1 local_158 [8];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140 [2];
  undefined8 local_130;
  undefined8 *******local_120;
  undefined8 *******local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *******local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined **local_48;
  undefined8 *******local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_68 = (undefined8 *******)0x0;
  local_60 = (undefined **)0x1;
  local_58 = 0;
  uStack_108 = 0x60000020;
  local_118 = &local_68;
  local_110 = &PTR_LAB_180239238;
  cVar1 = FUN_1801ac560(param_4,&local_118);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("a Display implementation returned an error unexpectedly",0x37,&local_31,
                  &DAT_180239328,&PTR_s_C__Users_burne__rustup_toolchain_180239310);
  }
  local_40 = local_68;
  local_120 = (undefined8 *******)0x0;
  local_140[0] = 0;
  local_130 = 0;
  local_48 = local_60;
  FUN_180190620(&local_c0,local_140,local_60,local_58);
  pppppppuVar3 = (undefined8 *******)CONCAT44(uStack_bc,local_c0);
  if (SBORROW8(0,(longlong)pppppppuVar3)) {
    *(undefined1 *)param_1 = 3;
    if (local_40 == (undefined8 *******)0x0) {
      return param_1;
    }
    ppuVar2 = local_48;
    pppppppuVar3 = local_40;
    goto LAB_18010036f;
  }
  local_d0 = local_78;
  uStack_c8 = uStack_70;
  local_e0 = local_88;
  uStack_dc = uStack_84;
  uStack_d8 = uStack_80;
  uStack_d4 = uStack_7c;
  local_f0 = local_98;
  uStack_ec = uStack_94;
  uStack_e8 = uStack_90;
  uStack_e4 = uStack_8c;
  local_100 = uStack_a8;
  uStack_fc = uStack_a4;
  uStack_f8 = uStack_a0;
  uStack_f4 = uStack_9c;
  local_110 = (undefined **)CONCAT44(uStack_b4,uStack_b8);
  uStack_108 = CONCAT44(uStack_ac,uStack_b0);
  local_118 = pppppppuVar3;
  if (local_40 != (undefined8 *******)0x0) {
    thunk_FUN_1801d3330(local_48,local_40,1);
  }
  local_120 = &local_118;
  FUN_180190620(&local_c0,local_140,param_2,param_3);
  if (SBORROW8(0,CONCAT44(uStack_bc,local_c0))) {
LAB_18010030d:
    *(undefined1 *)param_1 = 3;
    pppppppuVar3 = local_118;
    ppuVar2 = local_110;
  }
  else {
    local_150 = uStack_b8;
    uStack_14c = uStack_b4;
    uStack_148 = uStack_b0;
    uStack_144 = uStack_ac;
    FUN_1801b3d20(&local_68,local_158);
    FUN_1801abad0(&local_c0,&local_68);
    if ((char)local_c0 == '\x03') goto LAB_18010030d;
    *(undefined8 *)(param_1 + 0x14) = uStack_70;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_7c,uStack_80);
    *(undefined8 *)(param_1 + 0x12) = local_78;
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_8c,uStack_90);
    *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_84,local_88);
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_9c,uStack_a0);
    *(ulonglong *)(param_1 + 10) = CONCAT44(uStack_94,local_98);
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_ac,uStack_b0);
    *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_a4,uStack_a8);
    *param_1 = local_c0;
    param_1[1] = uStack_bc;
    param_1[2] = uStack_b8;
    param_1[3] = uStack_b4;
    pppppppuVar3 = local_118;
    ppuVar2 = local_110;
  }
  if (pppppppuVar3 == (undefined8 *******)0x0) {
    return param_1;
  }
  local_118 = pppppppuVar3;
  local_110 = ppuVar2;
LAB_18010036f:
  thunk_FUN_1801d3330(ppuVar2,pppppppuVar3,1);
  return param_1;
}


