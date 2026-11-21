/* FUN_180195110 @ 180195110 */

undefined8
FUN_180195110(longlong *param_1,char param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  int *_Buf1;
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  undefined *_Buf2;
  void *pvVar6;
  ulonglong _Size;
  longlong lVar7;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  byte local_70;
  longlong local_68;
  undefined *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_a0 = (char)param_1[8] == '\0';
  local_b8 = param_5;
  local_b0 = (undefined4)param_1[6];
  uStack_ac = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_a8 = (undefined4)param_1[7];
  uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_60 = &DAT_180267080;
  if (param_2 == '\x02') {
    local_60 = &DAT_180267070;
  }
  local_50 = (void *)param_1[4];
  local_c0 = param_4;
  if ((local_50 == (void *)0x0) || (param_3 == 0)) {
LAB_1801951d0:
    local_50 = (void *)0x0;
  }
  else {
    local_68 = param_1[5];
    _Size = (ulonglong)param_3;
    _Buf1 = (int *)param_1[1];
    uVar1 = param_1[2];
    if (_Size < uVar1) {
      if (*(char *)((longlong)_Buf1 + _Size) < -0x40) goto LAB_18019519b;
    }
    else if (uVar1 != _Size) {
LAB_18019519b:
                    /* WARNING: Subroutine does not return */
      FUN_1802018d0(_Buf1,uVar1,0,_Size,&PTR_s_C__Users_burne__cargo_registry_s_180267090);
    }
    if (param_3 == 3) {
      _Buf2 = &DAT_180266edd;
    }
    else if (param_3 == 4) {
      if (*_Buf1 == 0x70747468) goto LAB_180195212;
      _Buf2 = &DAT_180266f10;
    }
    else {
      if (param_3 != 5) goto LAB_1801951d0;
      _Buf2 = &DAT_180266ed8;
    }
    iVar3 = memcmp(_Buf1,_Buf2,_Size);
    if (iVar3 != 0) {
      local_50 = (void *)0x0;
    }
  }
LAB_180195212:
  FUN_180191910(&local_80,&local_c0);
  if (local_70 != 2) {
    do {
      bVar2 = local_70;
      if (local_50 == (void *)0x0) {
        local_f0 = local_80;
        local_e8 = local_78;
        local_e0 = local_60;
        pvVar6 = local_50;
        pvVar4 = (void *)FUN_1801aac60(&local_f0);
        if (pvVar4 != (void *)0x0) {
          lVar7 = param_1[2];
          do {
            if ((void *)(*param_1 - lVar7) < pvVar6) {
              FUN_1801f6a80(param_1,lVar7,pvVar6,1,1);
              lVar7 = param_1[2];
            }
            memcpy((void *)(param_1[1] + lVar7),pvVar4,(size_t)pvVar6);
            lVar7 = lVar7 + (longlong)pvVar6;
            param_1[2] = lVar7;
            pvVar5 = (void *)FUN_1801aac60(&local_f0);
            pvVar6 = pvVar4;
            pvVar4 = pvVar5;
          } while (pvVar5 != (void *)0x0);
        }
      }
      else {
        pvVar6 = local_50;
        (**(code **)(local_68 + 0x28))(&local_98);
        local_58 = local_90;
        local_d8 = local_90;
        local_d0 = local_88;
        local_c8 = local_60;
        while (pvVar4 = (void *)FUN_1801aac60(&local_d8), pvVar4 != (void *)0x0) {
          lVar7 = param_1[2];
          if ((void *)(*param_1 - lVar7) < pvVar6) {
            FUN_1801f6a80(param_1,lVar7,pvVar6,1,1);
            lVar7 = param_1[2];
          }
          memcpy((void *)(param_1[1] + lVar7),pvVar4,(size_t)pvVar6);
          param_1[2] = (longlong)pvVar6 + lVar7;
          pvVar6 = pvVar4;
        }
        if ((local_98 & 0x7fffffffffffffff) != 0) {
          thunk_FUN_1801d3330(local_58,local_98,1);
        }
      }
      if ((bVar2 & 1) != 0) {
        return local_c0;
      }
      FUN_180191910(&local_80,&local_c0);
    } while (local_70 != 2);
  }
  return 0;
}


