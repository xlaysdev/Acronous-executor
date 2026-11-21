/* FUN_180135090 @ 180135090 */

void * FUN_180135090(void *param_1,char *param_2,char *param_3,longlong *param_4)

{
  char cVar1;
  char *pcVar2;
  longlong unaff_RBX;
  undefined **ppuVar3;
  char cVar4;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined **local_198;
  char *pcStack_190;
  longlong local_188;
  char *local_180;
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined **local_140;
  char *local_138;
  longlong local_130;
  char *local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined2 local_100;
  char local_f0 [16];
  undefined8 local_e0;
  char local_d8 [8];
  longlong *local_d0;
  char *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  char *local_a0;
  longlong local_98;
  undefined8 local_90;
  char *local_80;
  longlong *local_78;
  char *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_50;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_41 = 1;
  pcVar2 = local_d8;
  local_80 = param_2;
  local_78 = param_4;
  FUN_1801ac790();
  cVar1 = *local_80;
  if ((cVar1 == '\a') && (*local_78 == 0)) {
    local_50 = (longlong *)CONCAT71((int7)((ulonglong)local_78 >> 8),1);
    local_128 = pcVar2;
    ppuVar3 = (undefined **)0x0;
    cVar4 = '\x03';
    goto LAB_18013528f;
  }
  unaff_RBX = 1;
  ppuVar3 = &PTR_LAB_18024b6e8;
  if (local_a8 == 0) {
LAB_180135211:
    local_180 = (char *)0x0;
    local_198 = &PTR_LAB_18024b6e8;
    pcStack_190 = (char *)0x1;
  }
  else {
    local_60 = local_a8;
    local_68 = local_90;
    local_50 = (longlong *)local_98;
    local_70 = local_a0;
    pcVar2 = "/";
    if (local_98 != 0) {
      pcVar2 = local_a0;
    }
    FUN_1801b3ac0(&local_198,pcVar2,local_98 + (ulonglong)(local_98 == 0));
    local_42 = 1;
    local_43 = 1;
    local_44 = 0;
    local_45 = 1;
    (**(code **)(local_60 + 0x20))(local_68,local_70,local_50);
    if (local_198 == (undefined **)0x0) goto LAB_180135211;
    if (local_188 != 0) {
      local_50 = (longlong *)0x0;
      local_128 = local_180;
      param_3 = pcStack_190;
      unaff_RBX = local_188;
      ppuVar3 = local_198;
      cVar4 = local_d8[0];
      goto LAB_18013528f;
    }
  }
  cVar4 = local_d8[0];
  param_3 = "/";
  if (cVar1 == '\0') {
    param_3 = 
    "*event C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\h2-0.4.18\\src\\frame\\headers.rs:158"
    ;
  }
  local_42 = 1;
  local_43 = 1;
  local_44 = 0;
  local_45 = 0;
  local_50 = (longlong *)0x0;
  (*(code *)local_198[4])(local_180,pcStack_190,0);
  local_128 = (char *)0x0;
LAB_18013528f:
  local_188 = *(longlong *)(local_80 + 0x10);
  local_198 = *(undefined ***)local_80;
  pcStack_190 = *(char **)(local_80 + 8);
  local_180 = (char *)0x0;
  local_160 = 0;
  local_120 = (undefined4)*local_78;
  uStack_11c = *(undefined4 *)((longlong)local_78 + 4);
  uStack_118 = (undefined4)local_78[1];
  uStack_114 = *(undefined4 *)((longlong)local_78 + 0xc);
  local_110 = (undefined4)local_78[2];
  uStack_10c = *(undefined4 *)((longlong)local_78 + 0x14);
  uStack_108 = (undefined4)local_78[3];
  uStack_104 = *(undefined4 *)((longlong)local_78 + 0x1c);
  local_100 = 0;
  local_140 = ppuVar3;
  local_138 = param_3;
  local_130 = unaff_RBX;
  if (cVar4 != '\x03') {
    local_46 = 1;
    local_f0[0] = cVar4;
    FUN_180134ea0(&local_198,local_f0);
  }
  if (local_c8 != (char *)0x0) {
    local_70 = local_c8;
    local_e0 = local_b0;
    local_60 = local_c0;
    local_68 = local_b8;
    FUN_1801b3ac0(&local_1b8);
    if (local_160 != 0) {
      (**(code **)(local_160 + 0x20))
                (CONCAT44(uStack_144,uStack_148),CONCAT44(uStack_154,uStack_158),
                 CONCAT44(uStack_14c,local_150));
    }
    local_150 = local_1a8;
    uStack_14c = uStack_1a4;
    uStack_148 = uStack_1a0;
    uStack_144 = uStack_19c;
    local_160 = CONCAT44(uStack_1b4,local_1b8);
    uStack_158 = uStack_1b0;
    uStack_154 = uStack_1ac;
    local_46 = 0;
    (**(code **)(local_70 + 0x20))(local_e0,local_60,local_68);
  }
  memcpy(param_1,&local_198,0xa0);
  if ((char)local_50 != '\0') {
    if (local_d8[0] == '\x02') {
      local_50 = local_d0;
      (**(code **)(*local_d0 + 0x20))(local_d0[3],local_d0[1],local_d0[2]);
      thunk_FUN_1801d3330(local_50,0x20,8);
    }
    if (local_a8 != 0) {
      local_41 = 0;
      (**(code **)(local_a8 + 0x20))(local_90,local_a0,local_98);
    }
  }
  return param_1;
}


