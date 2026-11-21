/* FUN_1800c38d0 @ 1800c38d0 */

void * FUN_1800c38d0(void *param_1,void *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 local_78;
  char cStack_76;
  undefined1 uStack_75;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  void *local_40;
  ulonglong *local_38;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  puVar1 = (ulonglong *)((longlong)param_2 + 0x40);
  lVar10 = 2;
  if (2 < *(ulonglong *)((longlong)param_2 + 0x40)) {
    lVar10 = *(ulonglong *)((longlong)param_2 + 0x40) - 3;
  }
  if (lVar10 == 0) {
    uVar3 = param_3[0xb];
    *(ulonglong *)((longlong)param_2 + 0x90) = param_3[10];
    *(ulonglong *)((longlong)param_2 + 0x98) = uVar3;
    uVar3 = param_3[9];
    *(ulonglong *)((longlong)param_2 + 0x80) = param_3[8];
    *(ulonglong *)((longlong)param_2 + 0x88) = uVar3;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[7];
    *(ulonglong *)((longlong)param_2 + 0x70) = param_3[6];
    *(ulonglong *)((longlong)param_2 + 0x78) = uVar9;
    *(ulonglong *)((longlong)param_2 + 0x60) = uVar7;
    *(ulonglong *)((longlong)param_2 + 0x68) = uVar8;
    *(ulonglong *)((longlong)param_2 + 0x50) = uVar5;
    *(ulonglong *)((longlong)param_2 + 0x58) = uVar6;
    *puVar1 = uVar3;
    *(ulonglong *)((longlong)param_2 + 0x48) = uVar4;
  }
  else {
    local_d0 = param_3;
    local_40 = param_2;
    local_38 = puVar1;
    if (lVar10 == 1) {
      local_c8 = *(undefined8 *)((longlong)param_2 + 0x48);
      local_c0 = *(undefined8 *)((longlong)param_2 + 0x50);
      local_b8 = *(undefined8 *)((longlong)param_2 + 0x58);
      local_b0 = *(undefined8 *)((longlong)param_2 + 0x60);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x68);
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0x33;
      uStack_fc = 0;
      local_29 = 0;
      local_2a = 1;
      local_2b = 1;
      FUN_1800528f0(&local_a8,param_3,&local_108);
      if (cStack_76 == '\x03') {
        local_29 = 0;
        local_2a = 1;
        local_2b = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_2e,&DAT_1802136a8,
                      &PTR_s_C__Users_burne__cargo_registry_s_180213418);
      }
      local_e8 = (undefined4)local_88;
      uStack_e4 = local_88._4_4_;
      uStack_e0 = uStack_80;
      uStack_dc = uStack_7c;
      local_108 = (undefined4)local_a8;
      uStack_104 = local_a8._4_4_;
      uStack_100 = (undefined4)uStack_a0;
      uStack_fc = uStack_a0._4_4_;
      local_a8 = local_c8;
      uStack_a0 = local_c0;
      local_98 = local_b8;
      uStack_90 = local_b0;
      local_29 = 0;
      local_2a = 1;
      local_2b = 0;
      local_88 = uVar2;
      lVar10 = FUN_180051da0(&local_108,&local_a8);
      if (lVar10 == 0) {
        local_29 = 0;
        local_2a = 1;
        local_2b = 0;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_2e,&DAT_1802136a8,
                      &PTR_s_C__Users_burne__cargo_registry_s_180213430);
      }
      local_58 = local_d0[10];
      uStack_50 = local_d0[0xb];
      local_68 = local_d0[8];
      uStack_60 = local_d0[9];
      local_a8 = *local_d0;
      uStack_a0 = local_d0[1];
      local_98 = local_d0[2];
      uStack_90 = local_d0[3];
      local_88 = local_d0[4];
      uStack_80 = (undefined4)local_d0[5];
      uStack_7c = *(undefined4 *)((longlong)local_d0 + 0x2c);
      uVar3 = local_d0[6];
      uStack_74 = *(undefined4 *)((longlong)local_d0 + 0x34);
      uStack_70 = (undefined4)local_d0[7];
      uStack_6c = *(undefined4 *)((longlong)local_d0 + 0x3c);
      local_78 = (undefined2)uVar3;
      cStack_76 = (char)(uVar3 >> 0x10);
      uStack_75 = (undefined1)(uVar3 >> 0x18);
      uVar3 = *local_38;
      if (uVar3 != 4) {
        lVar10 = 2;
        if (2 < uVar3) {
          lVar10 = uVar3 - 3;
        }
        if (lVar10 != 0) {
          if (lVar10 == 1) {
            (**(code **)(*(longlong *)((longlong)local_40 + 0x48) + 0x20))
                      (*(undefined8 *)((longlong)local_40 + 0x60),
                       *(undefined8 *)((longlong)local_40 + 0x50),
                       *(undefined8 *)((longlong)local_40 + 0x58));
          }
          else {
            FUN_18000b470(local_38);
          }
        }
      }
      local_38[10] = local_58;
      local_38[0xb] = uStack_50;
      local_38[8] = local_68;
      local_38[9] = uStack_60;
      local_38[6] = CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT12(cStack_76,local_78)));
      local_38[7] = CONCAT44(uStack_6c,uStack_70);
      local_38[4] = local_88;
      local_38[5] = CONCAT44(uStack_7c,uStack_80);
      local_38[2] = local_98;
      local_38[3] = uStack_90;
      *local_38 = local_a8;
      local_38[1] = uStack_a0;
    }
    else {
      local_58 = param_3[10];
      uStack_50 = param_3[0xb];
      local_68 = param_3[8];
      uStack_60 = param_3[9];
      local_a8 = *param_3;
      uStack_a0 = param_3[1];
      local_98 = param_3[2];
      uStack_90 = param_3[3];
      local_88 = param_3[4];
      uStack_80 = (undefined4)param_3[5];
      uStack_7c = *(undefined4 *)((longlong)param_3 + 0x2c);
      uVar3 = param_3[6];
      uStack_74 = *(undefined4 *)((longlong)param_3 + 0x34);
      uStack_70 = (undefined4)param_3[7];
      uStack_6c = *(undefined4 *)((longlong)param_3 + 0x3c);
      local_78 = (undefined2)uVar3;
      cStack_76 = (char)(uVar3 >> 0x10);
      uStack_75 = (undefined1)(uVar3 >> 0x18);
      local_2c = 1;
      local_2d = 0;
      FUN_18004f9e0(puVar1,&local_a8);
    }
    param_2 = local_40;
  }
  memcpy(param_1,param_2,0xf8);
  return param_1;
}


