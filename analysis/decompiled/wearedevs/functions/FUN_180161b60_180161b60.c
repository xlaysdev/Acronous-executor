/* FUN_180161b60 @ 180161b60 */

undefined8 * FUN_180161b60(undefined8 *param_1,char *param_2,longlong *param_3)

{
  ulonglong ***pppuVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong ***pppuVar7;
  ulonglong ***pppuVar8;
  ulonglong ***pppuVar9;
  char cVar10;
  void *_Dst;
  undefined8 ****_Dst_00;
  ulonglong ***_Size;
  ulonglong ***pppuVar11;
  ulonglong uVar12;
  ulonglong ***local_c8;
  longlong *local_c0;
  ulonglong ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_98;
  char *local_90;
  ulonglong ***local_88;
  ulonglong ***local_80;
  undefined8 ****local_78;
  ulonglong ***pppuStack_70;
  undefined8 ****local_68;
  undefined1 *puStack_60;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(int *)(param_2 + 0x38) == 1) {
    uVar12 = *(ulonglong *)(param_2 + 0x40);
    if ((ulonglong)param_3[1] < uVar12) goto LAB_180161ecc;
LAB_180161ba5:
    FUN_1801b2630(&local_b8,param_3,uVar12);
    if (local_b8 != (ulonglong ***)0x0) {
      local_78 = (undefined8 ****)local_b8;
      param_2[0x38] = '\0';
      param_2[0x39] = '\0';
      param_2[0x3a] = '\0';
      param_2[0x3b] = '\0';
      param_2[0x3c] = '\0';
      param_2[0x3d] = '\0';
      param_2[0x3e] = '\0';
      param_2[0x3f] = '\0';
      uVar4 = *(longlong *)(param_2 + 0x18) + *(longlong *)(param_2 + 0x20);
      uVar12 = *(ulonglong *)(param_2 + 8);
      if (*(ulonglong *)(param_2 + 8) <= uVar4) {
        uVar12 = uVar4;
      }
      if (*param_2 == '\0') {
        uVar12 = uVar4;
      }
      uVar4 = param_3[1];
      uVar6 = 0;
      if (uVar4 <= uVar12) {
        uVar6 = uVar12 - uVar4;
      }
      if (param_3[2] - uVar4 < uVar6) {
        FUN_1801b2210(param_3,local_a8,CONCAT71((int7)(param_3[2] - uVar4 >> 8),1));
      }
      param_1[3] = CONCAT44(uStack_a4,local_a8);
      param_1[4] = CONCAT44(uStack_9c,uStack_a0);
      param_1[1] = local_b8;
      param_1[2] = CONCAT44(uStack_ac,uStack_b0);
      *param_1 = 0;
      return param_1;
    }
LAB_180161ecc:
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  pppuVar8 = *(ulonglong ****)(param_2 + 0x20);
  pppuVar11 = *(ulonglong ****)(param_2 + 0x18);
  pppuVar9 = *(ulonglong ****)(param_2 + 8);
  local_c8 = (ulonglong ***)((longlong)pppuVar11 + (longlong)pppuVar8);
  pppuVar7 = local_c8;
  if (local_c8 < pppuVar9) {
    pppuVar7 = pppuVar9;
  }
  cVar10 = *param_2;
  if (cVar10 == '\0') {
    pppuVar7 = local_c8;
  }
  pppuVar1 = (ulonglong ***)param_3[1];
  uVar3 = 0;
  uVar5 = 0;
  if (pppuVar1 < pppuVar7) goto LAB_180161e1f;
  if (pppuVar1 < pppuVar8) goto LAB_180161f07;
  local_c0 = param_3;
  if (param_2[0x30] == '\0') {
    local_b8 = (ulonglong ***)0x0;
    if (pppuVar11 < (ulonglong ***)0x9) {
      pppuStack_70 = (ulonglong ***)0x0;
      if (pppuVar8 <= pppuVar1) {
        pppuStack_70 = (ulonglong ***)((longlong)pppuVar1 - (longlong)pppuVar8);
      }
      if (pppuStack_70 < pppuVar11) goto LAB_180161f52;
      if (pppuVar11 == (ulonglong ***)0x0) {
        pppuVar8 = (ulonglong ***)0x0;
      }
      else {
        lVar2 = *param_3;
        _Dst_00 = &local_b8;
        local_98 = param_1;
        local_90 = param_2;
        local_88 = local_c8;
        local_80 = pppuVar9;
        local_49 = cVar10;
        do {
          pppuVar7 = (ulonglong ***)((longlong)pppuVar1 - (longlong)pppuVar8);
          pppuVar9 = pppuVar8;
          if (pppuVar1 < pppuVar8) {
            pppuVar7 = (ulonglong ***)0x0;
            pppuVar9 = pppuVar1;
          }
          _Size = (ulonglong ***)((longlong)pppuVar1 - (longlong)pppuVar9);
          if (pppuVar11 < (ulonglong ***)((longlong)pppuVar1 - (longlong)pppuVar9)) {
            _Size = pppuVar11;
          }
          memcpy(_Dst_00,(void *)((longlong)pppuVar9 + lVar2),(size_t)_Size);
          if (pppuVar7 < _Size) goto LAB_180161ee9;
          _Dst_00 = (undefined8 ****)((longlong)_Dst_00 + (longlong)_Size);
          pppuVar8 = (ulonglong ***)((longlong)pppuVar8 + (longlong)_Size);
          pppuVar11 = (ulonglong ***)((longlong)pppuVar11 - (longlong)_Size);
        } while (pppuVar11 != (ulonglong ***)0x0);
        pppuVar8 = local_b8;
        local_c8 = local_88;
        param_1 = local_98;
        pppuVar9 = local_80;
        param_2 = local_90;
        cVar10 = local_49;
        if (*(ulonglong ****)(local_90 + 0x10) < local_b8) goto LAB_180161e13;
      }
      goto LAB_180161e34;
    }
  }
  else if (pppuVar11 < (ulonglong ***)0x9) {
    local_b8 = (ulonglong ***)0x0;
    pppuStack_70 = (ulonglong ***)0x0;
    if (pppuVar8 <= pppuVar1) {
      pppuStack_70 = (ulonglong ***)((longlong)pppuVar1 - (longlong)pppuVar8);
    }
    if (pppuStack_70 < pppuVar11) {
LAB_180161f52:
      local_b8 = (undefined8 ***)0x0;
      local_78 = (undefined8 ****)pppuVar11;
                    /* WARNING: Subroutine does not return */
      FUN_1801fc980(&local_78);
    }
    if (pppuVar11 == (ulonglong ***)0x0) {
      pppuVar8 = (ulonglong ***)0x0;
LAB_180161e34:
      param_3 = local_c0;
      uVar12 = *(ulonglong *)(param_2 + 0x28);
      if ((longlong)uVar12 < 0) {
        if ((ulonglong ***)-uVar12 <= pppuVar8) goto LAB_180161e71;
      }
      else if (!CARRY8(uVar12,(ulonglong)pppuVar8)) {
LAB_180161e71:
        uVar12 = uVar12 + (longlong)pppuVar8;
        if (cVar10 != '\0') {
          local_c8 = pppuVar9;
        }
        if (pppuVar1 < local_c8) {
          local_78 = &local_c8;
          pppuStack_70 = (ulonglong ***)&LAB_1800273d0;
          local_68 = &local_b8;
          puStack_60 = &LAB_1800273d0;
          local_b8 = pppuVar1;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_18025fda0,&local_78,&PTR_s_C__Users_burne__cargo_registry_s_18025fe30);
        }
        FUN_1801b2540(local_c0);
        uVar4 = param_3[1];
        uVar6 = 0;
        if (uVar4 <= uVar12) {
          uVar6 = uVar12 - uVar4;
        }
        if (param_3[2] - uVar4 < uVar6) {
          FUN_1801b2210(param_3,uVar6,CONCAT71((int7)(uVar12 - uVar4 >> 8),1));
        }
        param_2[0x38] = '\x01';
        param_2[0x39] = '\0';
        param_2[0x3a] = '\0';
        param_2[0x3b] = '\0';
        param_2[0x3c] = '\0';
        param_2[0x3d] = '\0';
        param_2[0x3e] = '\0';
        param_2[0x3f] = '\0';
        *(ulonglong *)(param_2 + 0x40) = uVar12;
        if ((ulonglong)param_3[1] < uVar12) goto LAB_180161ecc;
        goto LAB_180161ba5;
      }
      uVar3 = FUN_1801d6710(0x14,"provided length would overflow after adjustment",0x2f);
    }
    else {
      _Dst = (void *)((longlong)&uStack_b0 - (longlong)pppuVar11);
      lVar2 = *param_3;
      local_98 = param_1;
      local_90 = param_2;
      local_88 = local_c8;
      local_80 = pppuVar9;
      local_49 = cVar10;
      do {
        pppuVar7 = (ulonglong ***)((longlong)pppuVar1 - (longlong)pppuVar8);
        pppuVar9 = pppuVar8;
        if (pppuVar1 < pppuVar8) {
          pppuVar7 = (ulonglong ***)0x0;
          pppuVar9 = pppuVar1;
        }
        _Size = (ulonglong ***)((longlong)pppuVar1 - (longlong)pppuVar9);
        if (pppuVar11 < (ulonglong ***)((longlong)pppuVar1 - (longlong)pppuVar9)) {
          _Size = pppuVar11;
        }
        memcpy(_Dst,(void *)((longlong)pppuVar9 + lVar2),(size_t)_Size);
        if (pppuVar7 < _Size) {
LAB_180161ee9:
          local_78 = (undefined8 ****)_Size;
          pppuStack_70 = pppuVar7;
                    /* WARNING: Subroutine does not return */
          FUN_1801fc980(&local_78);
        }
        _Dst = (void *)((longlong)_Dst + (longlong)_Size);
        pppuVar8 = (ulonglong ***)((longlong)pppuVar8 + (longlong)_Size);
        pppuVar11 = (ulonglong ***)((longlong)pppuVar11 - (longlong)_Size);
      } while (pppuVar11 != (ulonglong ***)0x0);
      pppuVar8 = (ulonglong ***)
                 ((ulonglong)local_b8 >> 0x38 | ((ulonglong)local_b8 & 0xff000000000000) >> 0x28 |
                  ((ulonglong)local_b8 & 0xff0000000000) >> 0x18 |
                  ((ulonglong)local_b8 & 0xff00000000) >> 8 |
                  ((ulonglong)local_b8 & 0xff000000) << 8 | ((ulonglong)local_b8 & 0xff0000) << 0x18
                  | ((ulonglong)local_b8 & 0xff00) << 0x28 | (longlong)local_b8 << 0x38);
      local_c8 = local_88;
      param_1 = local_98;
      pppuVar9 = local_80;
      param_2 = local_90;
      cVar10 = local_49;
      if (pppuVar8 <= *(ulonglong ****)(local_90 + 0x10)) goto LAB_180161e34;
LAB_180161e13:
      param_1 = local_98;
      uVar3 = FUN_180162040(0x15);
    }
    uVar5 = 1;
LAB_180161e1f:
    param_1[1] = uVar3;
    *param_1 = uVar5;
    return param_1;
  }
  FUN_1801fc9c0(8,pppuVar11);
LAB_180161f07:
  local_78 = (undefined8 ****)pppuVar8;
  pppuStack_70 = pppuVar1;
                    /* WARNING: Subroutine does not return */
  FUN_1801fc980(&local_78);
}


