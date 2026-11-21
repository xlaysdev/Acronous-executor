/* FUN_1801fbd60 @ 1801fbd60 */

void FUN_1801fbd60(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  void *_Dst;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 *_Src;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar1 = param_1[0x19];
  uVar10 = uVar1;
  if ((uVar1 < 9) || (uVar10 = param_1[1], uVar10 != 0xffffffffffffffff)) {
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar7 = 0xffffffffffffffff >> (~(byte)lVar2 & 0x3f);
    if (uVar10 == 0) {
      uVar7 = 0;
    }
    if (uVar7 != 0xffffffffffffffff) {
      uVar10 = uVar7 + 1;
      _Src = param_1 + 1;
      uVar11 = uVar1;
      uVar12 = 8;
      if (8 < uVar1) {
        uVar11 = param_1[1];
        _Src = (undefined8 *)param_1[2];
        uVar12 = uVar1;
      }
      if (uVar10 < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0(&DAT_1802821d0,0x20,&PTR_s_C__Users_burne__cargo_registry_s_1802821f0);
      }
      if (uVar7 < 8) {
        if (8 < uVar1) {
          *param_1 = 0;
          memcpy(param_1 + 1,_Src,uVar11 * 0x18);
          param_1[0x19] = uVar11;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar12;
          local_40 = SUB168(auVar3 * ZEXT816(0x18),0);
          if ((SUB168(auVar3 * ZEXT816(0x18),8) != 0) ||
             (cVar6 = FUN_1801f2f10(local_40,8), cVar6 == '\0')) {
            local_48 = 0;
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_48,
                          &DAT_180282010,&PTR_s_C__Users_burne__cargo_registry_s_180282100);
          }
          thunk_FUN_1801d3330(_Src,local_40,8);
          return;
        }
      }
      else if (uVar10 != uVar12) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar10;
        uVar8 = SUB168(auVar4 * ZEXT816(0x18),0);
        if ((SUB168(auVar4 * ZEXT816(0x18),8) != 0) ||
           (cVar6 = FUN_1801f2f10(uVar8,8), cVar6 == '\0')) {
LAB_1801fbf64:
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("capacity overflow",0x11,&PTR_s_C__Users_burne__cargo_registry_s_180282130);
        }
        if (uVar1 < 9) {
          FUN_180027490();
          _Dst = (void *)thunk_FUN_1801d32d0(uVar8,8);
          if (_Dst == (void *)0x0) {
LAB_1801fbfb3:
                    /* WARNING: Subroutine does not return */
            FUN_180201705(8,uVar8);
          }
          memcpy(_Dst,_Src,uVar11 * 0x18);
        }
        else {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar12;
          uVar9 = SUB168(auVar5 * ZEXT816(0x18),0);
          if ((SUB168(auVar5 * ZEXT816(0x18),8) != 0) ||
             (cVar6 = FUN_1801f2f10(uVar9,8), cVar6 == '\0')) goto LAB_1801fbf64;
          _Dst = (void *)thunk_FUN_1801d3370(_Src,uVar9,8,uVar8);
          if (_Dst == (void *)0x0) goto LAB_1801fbfb3;
        }
        *param_1 = 1;
        param_1[1] = uVar11;
        param_1[2] = _Dst;
        param_1[0x19] = uVar10;
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201b60("capacity overflow",0x11,&PTR_s_C__Users_burne__cargo_registry_s_180282148);
}


