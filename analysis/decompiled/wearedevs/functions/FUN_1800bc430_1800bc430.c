/* FUN_1800bc430 @ 1800bc430 */

undefined8 FUN_1800bc430(longlong param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 *_Dst;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong _Size;
  undefined8 local_98;
  ulonglong local_90;
  int local_88;
  undefined4 local_84;
  longlong local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  
  FUN_1800bfb10(&local_98,param_1);
  if ((int)local_98 == 2) {
    uVar9 = 1;
  }
  else {
    uVar9 = 1;
    if ((local_98 & 1) != 0) {
      uVar4 = *(ulonglong *)(param_1 + 400);
      uVar6 = *(ulonglong *)(param_1 + 0x198);
      if (uVar6 == uVar4) {
        _Size = local_90 >> 0x20;
        if (param_3 <= local_90 >> 0x20) {
          _Size = param_3;
        }
        uVar1 = local_98 >> 0x20;
        uVar4 = _Size + uVar1;
        uVar7 = (local_90 & 0xffffffff) + uVar4;
        uVar8 = uVar7 - uVar6;
        if (uVar6 <= uVar7 && uVar8 != 0) {
          if (*(longlong *)(param_1 + 0x180) - uVar6 < uVar8) {
            FUN_1801f6a80(param_1 + 0x180,uVar6,uVar8,1,1);
            uVar6 = *(ulonglong *)(param_1 + 400);
            _Dst = (undefined1 *)(*(longlong *)(param_1 + 0x188) + uVar6);
            lVar2 = *(longlong *)(param_1 + 0x188);
            lVar5 = local_58;
          }
          else {
            _Dst = (undefined1 *)(*(longlong *)(param_1 + 0x188) + uVar6);
            lVar2 = *(longlong *)(param_1 + 0x188);
            lVar5 = local_58;
          }
          local_58 = lVar2;
          if (1 < uVar8) {
            memset(_Dst,0,uVar8 - 1);
            uVar6 = (uVar6 + uVar8) - 1;
            _Dst = (undefined1 *)(local_58 + uVar6);
            lVar5 = local_58;
          }
          local_58 = lVar5;
          *_Dst = 0;
          uVar6 = uVar6 + 1;
          *(ulonglong *)(param_1 + 400) = uVar6;
        }
        if (uVar6 < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(uVar1,uVar4,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_180212a48);
        }
        memcpy((void *)(*(longlong *)(param_1 + 0x188) + uVar1),param_2,_Size);
        uVar6 = *(ulonglong *)(param_1 + 400);
        if (uVar6 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,uVar1,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_180212a30);
        }
        if (uVar6 < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(uVar1,uVar4,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_180212a18);
        }
        local_90 = *(ulonglong *)(param_1 + 0x188);
        local_80 = local_90 + uVar1;
        local_78 = (int)uVar6 - (int)uVar4;
        local_70 = uVar4 + local_90;
        local_98 = CONCAT44(7,(int)(local_98 >> 0x20));
        local_88 = (int)_Size;
        local_84 = 1;
        local_74 = 6;
        local_68 = 0;
        uStack_60 = 0;
        local_50 = 0x400000000;
        local_48 = &local_98;
        iVar3 = EncryptMessage(param_1 + 0x1f0,0,&local_50,0);
        if (iVar3 != 0) {
          return 1;
        }
        uVar6 = (ulonglong)(uint)(local_88 + (int)local_98 + local_78);
        uVar4 = *(ulonglong *)(param_1 + 400);
        if (uVar6 <= *(ulonglong *)(param_1 + 400)) {
          *(ulonglong *)(param_1 + 400) = uVar6;
          uVar4 = uVar6;
        }
        *(undefined8 *)(param_1 + 0x198) = 0;
        *(ulonglong *)(param_1 + 0x218) = _Size;
        uVar6 = 0;
      }
      if ((uVar6 != uVar4) && (*(char *)(param_1 + 0x224) == '\0')) {
        do {
          if (uVar4 < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(uVar6,uVar4,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_180212ad0);
          }
          lVar5 = *(longlong *)(param_1 + 0x138);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: !self.context.is_null()",0x29,
                          &PTR_s_C__Users_burne__cargo_registry_s_180216370);
          }
          if (*(int *)(param_1 + 0x10) == 2) {
            uVar4 = thunk_FUN_18016e2f0(param_1 + 0x18);
          }
          else {
            local_98 = *(longlong *)(param_1 + 0x188) + uVar6;
            local_90 = uVar4 - uVar6;
            uVar4 = FUN_1800eb230((int *)(param_1 + 0x10),lVar5,&local_98);
          }
          if (uVar4 == 2) {
            return 1;
          }
          if ((uVar4 & 1) != 0) {
            return 1;
          }
          uVar6 = uVar6 + lVar5;
          *(ulonglong *)(param_1 + 0x198) = uVar6;
          uVar4 = *(ulonglong *)(param_1 + 400);
        } while (uVar6 != uVar4);
      }
      uVar9 = 0;
    }
  }
  return uVar9;
}


