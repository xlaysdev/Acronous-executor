/* FUN_1801fbb00 @ 1801fbb00 */

void FUN_1801fbb00(undefined8 *param_1)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *_Src;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 local_48;
  longlong local_40;
  
  uVar1 = param_1[0x77];
  uVar4 = uVar1;
  if ((uVar1 < 0x3c) || (uVar4 = param_1[1], uVar4 != 0xffffffffffffffff)) {
    lVar6 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar3 = 0xffffffffffffffff >> (~(byte)lVar6 & 0x3f);
    if (uVar4 == 0) {
      uVar3 = 0;
    }
    if (uVar3 != 0xffffffffffffffff) {
      uVar4 = uVar3 + 1;
      uVar5 = 0x3b;
      _Src = param_1 + 1;
      uVar7 = uVar1;
      if (0x3b < uVar1) {
        uVar7 = param_1[1];
        _Src = (undefined8 *)param_1[2];
        uVar5 = uVar1;
      }
      if (uVar4 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0(&DAT_1802821d0,0x20,&PTR_s_C__Users_burne__cargo_registry_s_1802821f0);
      }
      if (uVar3 < 0x3b) {
        if (0x3b < uVar1) {
          *param_1 = 0;
          memcpy(param_1 + 1,_Src,uVar7 << 4);
          param_1[0x77] = uVar7;
          local_40 = uVar5 << 4;
          if ((uVar5 >> 0x3c != 0) || (cVar2 = FUN_1801f2f10(local_40,8), cVar2 == '\0')) {
            local_48 = 0;
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_48,
                          &DAT_180282010,&PTR_s_C__Users_burne__cargo_registry_s_180282100);
          }
          thunk_FUN_1801d3330(_Src,local_40,8);
          return;
        }
      }
      else if (uVar4 != uVar5) {
        if (uVar3 < 0xfffffffffffffff) {
          lVar6 = uVar4 * 0x10;
          cVar2 = FUN_1801f2f10(lVar6,8);
          if (cVar2 != '\0') {
            if (uVar1 < 0x3c) {
              FUN_180027490();
              _Dst = (void *)thunk_FUN_1801d32d0(lVar6,8);
              if (_Dst == (void *)0x0) {
LAB_1801fbd48:
                    /* WARNING: Subroutine does not return */
                FUN_180201705(8,lVar6);
              }
              memcpy(_Dst,_Src,uVar7 << 4);
LAB_1801fbca3:
              *param_1 = 1;
              param_1[1] = uVar7;
              param_1[2] = _Dst;
              param_1[0x77] = uVar4;
              return;
            }
            if (uVar5 >> 0x3c == 0) {
              cVar2 = FUN_1801f2f10(uVar5 << 4,8);
              if (cVar2 != '\0') {
                _Dst = (void *)thunk_FUN_1801d3370(_Src,uVar5 << 4,8,lVar6);
                if (_Dst == (void *)0x0) goto LAB_1801fbd48;
                goto LAB_1801fbca3;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("capacity overflow",0x11,&PTR_s_C__Users_burne__cargo_registry_s_180282130);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201b60("capacity overflow",0x11,&PTR_s_C__Users_burne__cargo_registry_s_180282148);
}


