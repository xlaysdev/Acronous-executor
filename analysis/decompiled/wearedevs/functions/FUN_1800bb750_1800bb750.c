/* FUN_1800bb750 @ 1800bb750 */

undefined8 FUN_1800bb750(longlong param_1,void *param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  size_t _Size;
  undefined1 *_Dst;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  ulonglong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  void *local_80;
  ulonglong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 *local_60;
  
  uVar5 = *(ulonglong *)(param_1 + 0x150);
  uVar3 = *(ulonglong *)(param_1 + 0x158);
  if (uVar3 <= uVar5) {
    local_70 = param_1 + 0x1f0;
    local_80 = param_2;
    local_78 = param_3;
    do {
      if (uVar5 != uVar3) {
LAB_1800bbccc:
        uVar5 = *(ulonglong *)(param_1 + 0x150);
        uVar3 = *(ulonglong *)(param_1 + 0x158);
        if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(uVar3,uVar5,uVar5,&PTR_s_C__Users_burne__cargo_registry_s_180212a60);
        }
        uVar6 = local_78;
        if (uVar5 - uVar3 < local_78) {
          uVar6 = uVar5 - uVar3;
        }
        memcpy(local_80,(void *)(*(longlong *)(param_1 + 0x148) + uVar3),uVar6);
        if (uVar5 < uVar3 + uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: pos <= self.dec_in.get_ref().len() as u64",0x3b,
                        &PTR_s_C__Users_burne__cargo_registry_s_180212658);
        }
        *(ulonglong *)(param_1 + 0x158) = uVar3 + uVar6;
        return 0;
      }
      FUN_1800bfb10(&local_c0);
      if ((int)local_c0 == 2) {
        return 1;
      }
      if ((int)local_c0 != 1) goto LAB_1800bbccc;
      uVar5 = *(ulonglong *)(param_1 + 0x178);
      uVar3 = *(ulonglong *)(param_1 + 0x210);
      if (uVar3 != 0) {
        lVar7 = 0;
        do {
          if (uVar3 < uVar5 * 2) {
            uVar3 = uVar5 * 2;
          }
          if (uVar3 < 0x401) {
            uVar3 = 0x400;
          }
          uVar6 = *(ulonglong *)(param_1 + 0x170);
          uVar4 = uVar3 - uVar6;
          if (uVar6 <= uVar3 && uVar4 != 0) {
            if (*(longlong *)(param_1 + 0x160) - uVar6 < uVar4) {
              FUN_1801f6a80(param_1 + 0x160,uVar6,uVar4,1,1);
              uVar6 = *(ulonglong *)(param_1 + 0x170);
              lVar2 = *(longlong *)(param_1 + 0x168);
              _Dst = (undefined1 *)(lVar2 + uVar6);
            }
            else {
              lVar2 = *(longlong *)(param_1 + 0x168);
              _Dst = (undefined1 *)(lVar2 + uVar6);
            }
            if (1 < uVar4) {
              memset(_Dst,0,uVar4 - 1);
              uVar6 = (uVar6 + uVar4) - 1;
              _Dst = (undefined1 *)(lVar2 + uVar6);
            }
            *_Dst = 0;
            uVar6 = uVar6 + 1;
            *(ulonglong *)(param_1 + 0x170) = uVar6;
          }
          uVar3 = uVar6 - uVar5;
          if (uVar6 < uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(uVar5,uVar6,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_180212a78);
          }
          local_c0 = *(longlong *)(param_1 + 0x168) + uVar5;
          local_b0 = 0;
          lVar2 = *(longlong *)(param_1 + 0x138);
          local_b8 = uVar3;
          uStack_a8 = uVar3;
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: !self.context.is_null()",0x29,
                          &PTR_s_C__Users_burne__cargo_registry_s_180216370);
          }
          uVar3 = FUN_18005afd0(param_1 + 0x10,lVar2,&local_c0);
          if ((uVar3 & 1) != 0) {
            lVar2 = 0xd00000003;
          }
          if (lVar2 != 0) {
            return 1;
          }
          if (local_b8 < local_b0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,local_b0,local_b8,&PTR_s_C__Users_burne__cargo_registry_s_180216970);
          }
          uVar5 = uVar5 + local_b0;
          *(ulonglong *)(param_1 + 0x178) = uVar5;
          uVar6 = *(ulonglong *)(param_1 + 0x210);
          uVar3 = 0;
          if (local_b0 <= uVar6) {
            uVar3 = uVar6 - local_b0;
          }
          *(ulonglong *)(param_1 + 0x210) = uVar3;
        } while ((local_b0 != 0) && (lVar7 = lVar7 + local_b0, local_b0 < uVar6));
        if (lVar7 == 0) goto LAB_1800bbccc;
        *(undefined8 *)(param_1 + 0x210) = 0;
      }
      if (*(ulonglong *)(param_1 + 0x170) < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(0,uVar5,*(ulonglong *)(param_1 + 0x170),
                      &PTR_s_C__Users_burne__cargo_registry_s_180212a00);
      }
      local_b8 = *(ulonglong *)(param_1 + 0x168);
      local_c0 = CONCAT44(1,(int)uVar5);
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_68 = 0x400000000;
      local_60 = &local_c0;
      iVar1 = DecryptMessage(local_70,&local_68,0,0);
      if (iVar1 < 0x90317) {
        if (iVar1 == -0x7ff6fce8) {
          uVar5 = local_b0 & 0xffffffff;
          if (local_b0._4_4_ != 4) {
            uVar5 = 1;
          }
        }
        else {
          if (iVar1 != 0) {
            return 1;
          }
          uVar5 = *(ulonglong *)(param_1 + 0x150);
          uVar3 = *(ulonglong *)(param_1 + 0x158);
          _Size = uVar5 - uVar3;
          if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,uVar3,uVar5,&PTR_s_C__Users_burne__rustup_toolchain_18020f518);
          }
          uVar6 = uStack_a8 - *(longlong *)(param_1 + 0x168);
          uVar4 = local_b0 & 0xffffffff;
          *(undefined8 *)(param_1 + 0x150) = 0;
          if (uVar3 == 0) {
            if (uVar5 == 0) goto LAB_1800bbb5d;
LAB_1800bbb61:
            *(size_t *)(param_1 + 0x150) = _Size;
          }
          else {
            if (uVar5 != uVar3) {
              memmove(*(void **)(param_1 + 0x148),
                      (void *)(uVar3 + (longlong)*(void **)(param_1 + 0x148)),_Size);
              goto LAB_1800bbb61;
            }
LAB_1800bbb5d:
            _Size = 0;
          }
          uVar5 = uVar6 + uVar4;
          if ((uVar5 < uVar6) || (*(ulonglong *)(param_1 + 0x170) < uVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(uVar6,uVar5,*(ulonglong *)(param_1 + 0x170),
                          &PTR_s_C__Users_burne__cargo_registry_s_1802129e8);
          }
          lVar7 = *(longlong *)(param_1 + 0x168);
          if (*(longlong *)(param_1 + 0x140) - _Size < uVar4) {
            FUN_1801f6a80(param_1 + 0x140,_Size,uVar4,1,1);
            _Size = *(size_t *)(param_1 + 0x150);
          }
          memcpy((void *)(*(longlong *)(param_1 + 0x148) + _Size),(void *)(uVar6 + lVar7),uVar4);
          *(size_t *)(param_1 + 0x150) = _Size + uVar4;
          *(undefined8 *)(param_1 + 0x158) = 0;
          uVar5 = *(ulonglong *)(param_1 + 0x178);
          uVar3 = local_90 & 0xffffffff;
          if (local_90._4_4_ != 5) {
            uVar3 = 0;
          }
          uVar6 = uVar5 - uVar3;
          if (uVar5 < uVar3) {
LAB_1800bbdb9:
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: size >= nread",0x1f,
                          &PTR_s_C__Users_burne__cargo_registry_s_180212970);
          }
          if ((int)uVar3 == 0) goto LAB_1800bbc65;
          uVar4 = *(ulonglong *)(param_1 + 0x170);
          if (uVar4 < uVar6) {
LAB_1800bbdd1:
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,uVar6,uVar4,&PTR_s_C__Users_burne__rustup_toolchain_18020f518);
          }
          *(undefined8 *)(param_1 + 0x170) = 0;
          if (uVar5 == uVar3) {
            if (uVar4 != uVar6) {
LAB_1800bbc5e:
              *(ulonglong *)(param_1 + 0x170) = uVar4 - uVar6;
            }
          }
          else if (uVar4 != uVar6) {
            memmove(*(void **)(param_1 + 0x168),
                    (void *)(uVar6 + (longlong)*(void **)(param_1 + 0x168)),uVar4 - uVar6);
            goto LAB_1800bbc5e;
          }
LAB_1800bbc65:
          uVar5 = (ulonglong)((int)uVar3 == 0);
          *(ulonglong *)(param_1 + 0x178) = uVar3;
        }
      }
      else {
        if (iVar1 != 0x90321) {
          if (iVar1 != 0x90317) {
            return 1;
          }
          goto LAB_1800bbccc;
        }
        *(undefined4 *)(param_1 + 0x1d0) = 0x10000;
        *(undefined1 *)(param_1 + 0x1d4) = 0;
        if (*(ulonglong *)(param_1 + 0x198) < *(ulonglong *)(param_1 + 400)) {
          *(undefined1 *)(param_1 + 0x224) = 1;
        }
        uVar5 = *(ulonglong *)(param_1 + 0x178);
        uVar3 = local_90 & 0xffffffff;
        if (local_90._4_4_ != 5) {
          uVar3 = 0;
        }
        uVar6 = uVar5 - uVar3;
        if (uVar5 < uVar3) goto LAB_1800bbdb9;
        if ((int)uVar3 == 0) goto LAB_1800bbc39;
        uVar4 = *(ulonglong *)(param_1 + 0x170);
        if (uVar4 < uVar6) goto LAB_1800bbdd1;
        *(undefined8 *)(param_1 + 0x170) = 0;
        if (uVar5 == uVar3) {
          if (uVar4 != uVar6) {
LAB_1800bbc32:
            *(ulonglong *)(param_1 + 0x170) = uVar4 - uVar6;
          }
        }
        else if (uVar4 != uVar6) {
          memmove(*(void **)(param_1 + 0x168),
                  (void *)(uVar6 + (longlong)*(void **)(param_1 + 0x168)),uVar4 - uVar6);
          goto LAB_1800bbc32;
        }
LAB_1800bbc39:
        *(ulonglong *)(param_1 + 0x178) = uVar3;
        uVar5 = 0;
      }
      *(ulonglong *)(param_1 + 0x210) = uVar5;
      uVar5 = *(ulonglong *)(param_1 + 0x150);
      uVar3 = *(ulonglong *)(param_1 + 0x158);
    } while (uVar3 <= uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201a30(uVar3,uVar5,uVar5,&PTR_s_C__Users_burne__cargo_registry_s_180212a60);
}


