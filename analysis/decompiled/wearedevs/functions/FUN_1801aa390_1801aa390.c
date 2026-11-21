/* FUN_1801aa390 @ 1801aa390 */

size_t * FUN_1801aa390(size_t *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  size_t sVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *_Src;
  byte *pbVar9;
  byte *local_68;
  size_t local_60;
  void *pvStack_58;
  size_t local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar5 = param_2[1];
  if (uVar5 == 0) {
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    pbVar9 = (byte *)*param_2;
    lVar2 = param_2[2];
    bVar1 = *pbVar9;
    if (((char)bVar1 < '\0') ||
       ((*(uint *)(lVar2 + (ulonglong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) != 0)) {
      local_68 = pbVar9 + 1;
      uVar6 = uVar5 - 1;
      *param_2 = local_68;
      param_2[1] = uVar6;
      pbVar9 = &DAT_1802827d8 + (ulonglong)bVar1 * 3;
      uVar5 = 3;
    }
    else {
      uVar6 = 1;
      do {
        uVar7 = uVar6;
        if (uVar5 == uVar7) goto LAB_1801aa4ea;
        bVar1 = pbVar9[uVar7];
      } while ((-1 < (char)bVar1) &&
              (uVar6 = uVar7 + 1,
              (*(uint *)(lVar2 + (ulonglong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) == 0));
      uVar6 = uVar5 - uVar7;
      if (uVar5 < uVar7) goto LAB_1801aa708;
      local_68 = pbVar9 + uVar7;
      *param_2 = local_68;
      param_2[1] = uVar6;
      uVar5 = uVar7;
    }
    if (uVar6 != 0) {
      bVar1 = *local_68;
      if (((char)bVar1 < '\0') ||
         ((*(uint *)(lVar2 + (ulonglong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) != 0)) {
        _Src = local_68 + 1;
        uVar7 = uVar6 - 1;
        *param_2 = _Src;
        param_2[1] = uVar7;
        local_68 = &DAT_1802827d8 + (ulonglong)bVar1 * 3;
        uVar6 = 3;
      }
      else {
        uVar7 = 1;
        do {
          uVar8 = uVar7;
          if (uVar6 == uVar8) {
            *param_2 = 1;
            param_2[1] = 0;
            _Src = (byte *)0x1;
            uVar7 = 0;
            goto LAB_1801aa456;
          }
          bVar1 = local_68[uVar8];
        } while ((-1 < (char)bVar1) &&
                (uVar7 = uVar8 + 1,
                (*(uint *)(lVar2 + (ulonglong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) == 0));
        uVar7 = uVar6 - uVar8;
        if (uVar6 < uVar8) {
LAB_1801aa708:
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0("mid > len",0x13,&PTR_s_C__Users_burne__cargo_registry_s_180282ae8);
        }
        _Src = local_68 + uVar8;
        *param_2 = _Src;
        param_2[1] = uVar7;
        uVar6 = uVar8;
      }
LAB_1801aa456:
      if (uVar5 == 0) {
        pvVar4 = (void *)0x1;
      }
      else {
        FUN_180027490();
        pvVar4 = (void *)thunk_FUN_1801d32d0(uVar5,1);
        if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18020171e(1,uVar5);
        }
      }
      memcpy(pvVar4,pbVar9,uVar5);
      local_60 = uVar5;
      pvStack_58 = pvVar4;
      local_50 = uVar5;
      if (uVar6 != 0) {
        FUN_1801fc230(&local_60,uVar5,uVar6);
      }
      sVar3 = local_50;
      pvVar4 = pvStack_58;
      memcpy((void *)((longlong)pvStack_58 + local_50),local_68,uVar6);
      local_50 = sVar3 + uVar6;
      do {
        if (uVar7 == 0) {
          param_1[2] = local_50;
          *param_1 = local_60;
          param_1[1] = (size_t)pvStack_58;
          return param_1;
        }
        bVar1 = *_Src;
        if (((char)bVar1 < '\0') ||
           ((*(uint *)(lVar2 + (ulonglong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) != 0)) {
          pbVar9 = _Src + 1;
          uVar5 = uVar7 - 1;
          _Src = &DAT_1802827d8 + (ulonglong)bVar1 * 3;
          uVar7 = 3;
        }
        else {
          pbVar9 = (byte *)0x1;
          uVar5 = 1;
          do {
            uVar6 = uVar5;
            if (uVar7 == uVar6) {
              uVar5 = 0;
              goto LAB_1801aa589;
            }
            bVar1 = _Src[uVar6];
          } while ((-1 < (char)bVar1) &&
                  (uVar5 = uVar6 + 1,
                  (*(uint *)(lVar2 + (ulonglong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) == 0));
          uVar5 = uVar7 - uVar6;
          if (uVar7 < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0("mid > len",0x13,&PTR_s_C__Users_burne__cargo_registry_s_180282ae8);
          }
          pbVar9 = _Src + uVar6;
          uVar7 = uVar6;
        }
LAB_1801aa589:
        if (local_60 - local_50 < uVar7) {
          FUN_1801fc230(&local_60,local_50,uVar7);
          pvVar4 = pvStack_58;
        }
        sVar3 = local_50;
        memcpy((void *)((longlong)pvVar4 + local_50),_Src,uVar7);
        local_50 = sVar3 + uVar7;
        uVar7 = uVar5;
        _Src = pbVar9;
      } while( true );
    }
LAB_1801aa4ea:
    param_1[1] = (size_t)pbVar9;
    param_1[2] = uVar5;
  }
  *param_1 = 0x8000000000000000;
  return param_1;
}


