/* FUN_18006b3d0 @ 18006b3d0 */

void * FUN_18006b3d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void *_Dst;
  undefined8 local_e8 [11];
  undefined2 local_90;
  undefined4 *local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(char *)((longlong)param_1 + 0x29) == '\x03') {
    local_68 = (undefined4 *)0x0;
  }
  else {
    local_28 = *(undefined8 *)(param_1 + 0xc);
    local_58 = *param_1;
    uStack_54 = param_1[1];
    uStack_50 = param_1[2];
    uStack_4c = param_1[3];
    local_48 = param_1[4];
    uStack_44 = param_1[5];
    uStack_40 = param_1[6];
    uStack_3c = param_1[7];
    local_38 = param_1[8];
    uStack_34 = param_1[9];
    uStack_30 = param_1[10];
    uStack_2c = param_1[0xb];
    FUN_180027490();
    local_68 = (undefined4 *)thunk_FUN_1801d32d0(0x38,8);
    if (local_68 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x38);
    }
    *(undefined8 *)(local_68 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    uVar5 = param_1[4];
    uVar6 = param_1[5];
    uVar7 = param_1[6];
    uVar8 = param_1[7];
    uVar9 = param_1[9];
    uVar10 = param_1[10];
    uVar11 = param_1[0xb];
    local_68[8] = param_1[8];
    local_68[9] = uVar9;
    local_68[10] = uVar10;
    local_68[0xb] = uVar11;
    local_68[4] = uVar5;
    local_68[5] = uVar6;
    local_68[6] = uVar7;
    local_68[7] = uVar8;
    *local_68 = uVar1;
    local_68[1] = uVar2;
    local_68[2] = uVar3;
    local_68[3] = uVar4;
  }
  local_90 = 1;
  local_60 = &PTR_FUN_18020b000;
  local_e8[0] = 0x8000000000000000;
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x90,8);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x90);
  }
  memcpy(_Dst,local_e8,0x90);
  return _Dst;
}


