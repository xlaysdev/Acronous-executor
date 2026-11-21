/* FUN_180081550 @ 180081550 */

ulonglong FUN_180081550(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong *unaff_RBX;
  ulonglong unaff_R14;
  ulonglong uVar6;
  char local_170 [80];
  char local_120;
  char local_11f;
  char local_f8;
  undefined1 local_f7;
  longlong *local_f0;
  byte local_d0 [8];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char local_b0 [4];
  undefined4 local_ac;
  char local_88 [4];
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  longlong *local_60;
  undefined8 *local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  do {
    uVar6 = unaff_R14;
    FUN_180086650(param_1,1);
    iVar3 = FUN_1800867f0(param_1);
    if (iVar3 == 0) {
      uVar4 = FUN_180085d20(param_1,param_2);
      if ((char)uVar4 == '\x02') {
LAB_1800816d1:
        unaff_RBX = (longlong *)FUN_1801158a0(8);
        FUN_180068680(unaff_RBX,"send stream capacity unexpectedly closed",0x28);
      }
      else {
        if (((uint)uVar4 & 0xff) == 3) {
LAB_1800816f5:
          FUN_180085710(local_b0,param_1,param_2,1);
          if (local_b0[0] == '\x06') {
            lVar1 = *(longlong *)(param_1 + 0x20);
            if ((lVar1 != 0) &&
               (uVar6 = CONCAT71((int7)(uVar6 >> 8),1),
               (*(ulonglong *)(lVar1 + 0x38) & 0x7fffffffffffffff) != 0)) goto LAB_18008190f;
            cVar2 = FUN_180116270(*(longlong *)(param_1 + 0x18) + 0x10,param_2);
            uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
            if (cVar2 != '\0') goto LAB_18008190f;
            _local_88 = 2;
            local_11f = FUN_180086970(param_1,local_88,1);
            if (local_11f == '\r') goto LAB_18008190c;
            local_120 = '\x03';
            pcVar5 = &local_120;
          }
          else {
LAB_180081778:
            if (local_b0[0] == '\x05') {
              _local_88 = CONCAT71(stack0xffffffffffffff79,2);
              _local_88 = CONCAT44(local_ac,local_88);
              pcVar5 = local_88;
            }
            else {
              pcVar5 = local_b0;
            }
          }
        }
        else {
          if ((uVar4 & 1) == 0) {
            while (uVar4 >> 0x20 == 0) {
              uVar4 = FUN_180085d20(param_1,param_2);
              if ((char)uVar4 == '\x02') goto LAB_1800816d1;
              if (((uint)uVar4 & 0xff) == 3) goto LAB_1800816f5;
              if ((uVar4 & 1) != 0) {
                local_f0 = (longlong *)0x0;
                goto LAB_1800817df;
              }
            }
            FUN_180085710(local_b0,param_1,param_2,1);
            if (local_b0[0] == '\x06') {
              unaff_RBX = (longlong *)(uVar4 >> 0x20);
              local_50 = unaff_RBX;
              goto LAB_180081669;
            }
            goto LAB_180081778;
          }
          local_f0 = local_50;
LAB_1800817df:
          local_f8 = '\x03';
          local_f7 = (undefined1)(uVar4 >> 8);
          pcVar5 = &local_f8;
        }
        unaff_RBX = (longlong *)FUN_180068350(pcVar5);
      }
      uVar6 = 0;
      goto LAB_1800817f9;
    }
    FUN_180085710(local_b0,param_1,param_2,1);
    if (local_b0[0] != '\x06') goto LAB_180081778;
LAB_180081669:
    FUN_1800acd90(local_d0,(longlong *)(param_1 + 0x20),param_2);
    uVar6 = (ulonglong)local_d0[0];
    if (local_d0[0] != 0) goto LAB_1800817f9;
    if (CONCAT44(uStack_c4,local_c8) == 0) {
      _local_88 = 2;
      cVar2 = FUN_180086970(param_1,local_88,1);
      if (cVar2 == '\r') {
        unaff_RBX = (longlong *)0x0;
        goto LAB_1800817f9;
      }
      pcVar5 = local_170;
      goto LAB_1800817c8;
    }
    local_70 = local_b8;
    local_80 = local_c8;
    uStack_7c = uStack_c4;
    uStack_78 = uStack_c0;
    uStack_74 = uStack_bc;
    _local_88 = 1;
    cVar2 = FUN_180086970(param_1,local_88,0);
    unaff_R14 = 0;
  } while (cVar2 == '\r');
  pcVar5 = local_170 + 0x28;
LAB_1800817c8:
  *pcVar5 = '\x03';
  pcVar5[1] = cVar2;
  unaff_RBX = (longlong *)FUN_180068350();
LAB_1800817f9:
  if (((char)uVar6 != '\0') || (unaff_RBX == (longlong *)0x0)) goto LAB_18008190f;
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar1 == 0) {
    local_50 = (longlong *)*unaff_RBX;
    if (local_50 != (longlong *)0x0) {
      local_58 = (undefined8 *)unaff_RBX[1];
      local_60 = unaff_RBX;
      if ((code *)*local_58 != (code *)0x0) {
        (*(code *)*local_58)(local_50);
      }
      unaff_RBX = local_60;
      if (local_58[1] != 0) {
        thunk_FUN_1801d3330(local_50,local_58[1],local_58[2]);
      }
    }
LAB_180081907:
    thunk_FUN_1801d3330(unaff_RBX,0x18,8);
  }
  else {
    unaff_RBX = (longlong *)FUN_1800394f0(lVar1,unaff_RBX);
    if (unaff_RBX != (longlong *)0x0) {
      local_50 = (longlong *)*unaff_RBX;
      if (local_50 != (longlong *)0x0) {
        local_58 = (undefined8 *)unaff_RBX[1];
        local_60 = unaff_RBX;
        if ((code *)*local_58 != (code *)0x0) {
          (*(code *)*local_58)(local_50);
        }
        unaff_RBX = local_60;
        if (local_58[1] != 0) {
          thunk_FUN_1801d3330(local_50,local_58[1],local_58[2]);
        }
      }
      goto LAB_180081907;
    }
  }
LAB_18008190c:
  uVar6 = 0;
LAB_18008190f:
  return uVar6 & 0xffffffff;
}


