/* FUN_1800bb170 @ 1800bb170 */

undefined8 FUN_1800bb170(longlong param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  size_t _Size;
  undefined1 *_Dst;
  ulonglong uVar6;
  longlong lVar7;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  void *local_80;
  ulonglong local_78;
  longlong local_70;
  undefined8 local_68;
  int *local_60;
  
  uVar5 = *(ulonglong *)(param_1 + 0x48);
  uVar3 = *(ulonglong *)(param_1 + 0x50);
  if (uVar3 <= uVar5) {
    local_70 = param_1 + 0xe8;
    local_80 = param_2;
    local_78 = param_3;
    do {
      if (uVar5 != uVar3) {
LAB_1800bb622:
        uVar5 = *(ulonglong *)(param_1 + 0x48);
        uVar3 = *(ulonglong *)(param_1 + 0x50);
        if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(uVar3,uVar5,uVar5,&PTR_s_C__Users_burne__cargo_registry_s_180212a60);
        }
        uVar6 = local_78;
        if (uVar5 - uVar3 < local_78) {
          uVar6 = uVar5 - uVar3;
        }
        memcpy(local_80,(void *)(*(longlong *)(param_1 + 0x40) + uVar3),uVar6);
        if (uVar5 < uVar3 + uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: pos <= self.dec_in.get_ref().len() as u64",0x3b,
                        &PTR_s_C__Users_burne__cargo_registry_s_180212658);
        }
        *(ulonglong *)(param_1 + 0x50) = uVar3 + uVar6;
        return 0;
      }
      FUN_1800be470(&local_c0);
      if (local_c0 == 2) {
        return 1;
      }
      if (local_c0 != 1) goto LAB_1800bb622;
      uVar5 = *(ulonglong *)(param_1 + 0x70);
      uVar3 = *(ulonglong *)(param_1 + 0x108);
      if (uVar3 != 0) {
        lVar7 = 0;
        do {
          if (uVar3 < uVar5 * 2) {
            uVar3 = uVar5 * 2;
          }
          if (uVar3 < 0x401) {
            uVar3 = 0x400;
          }
          uVar6 = *(ulonglong *)(param_1 + 0x68);
          uVar4 = uVar3 - uVar6;
          if (uVar6 <= uVar3 && uVar4 != 0) {
            if (*(longlong *)(param_1 + 0x58) - uVar6 < uVar4) {
              FUN_1801f6a80(param_1 + 0x58,uVar6,uVar4,1,1);
              uVar6 = *(ulonglong *)(param_1 + 0x68);
              lVar1 = *(longlong *)(param_1 + 0x60);
              _Dst = (undefined1 *)(lVar1 + uVar6);
            }
            else {
              lVar1 = *(longlong *)(param_1 + 0x60);
              _Dst = (undefined1 *)(lVar1 + uVar6);
            }
            if (1 < uVar4) {
              memset(_Dst,0,uVar4 - 1);
              uVar6 = (uVar6 + uVar4) - 1;
              _Dst = (undefined1 *)(lVar1 + uVar6);
            }
            *_Dst = 0;
            uVar6 = uVar6 + 1;
            *(ulonglong *)(param_1 + 0x68) = uVar6;
          }
          if (uVar6 < uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(uVar5,uVar6,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_180212a78);
          }
          uVar4 = *(longlong *)(param_1 + 0x60) + uVar5;
          uVar3 = FUN_1800f04f0(param_1 + 0x10,uVar4,uVar6 - uVar5);
          if ((uVar3 & 1) != 0) {
            return 1;
          }
          uVar5 = uVar5 + uVar4;
          *(ulonglong *)(param_1 + 0x70) = uVar5;
          uVar6 = *(ulonglong *)(param_1 + 0x108);
          uVar3 = 0;
          if (uVar4 <= uVar6) {
            uVar3 = uVar6 - uVar4;
          }
          *(ulonglong *)(param_1 + 0x108) = uVar3;
        } while ((uVar4 != 0) && (lVar7 = lVar7 + uVar4, uVar4 < uVar6));
        if (lVar7 == 0) goto LAB_1800bb622;
        *(undefined8 *)(param_1 + 0x108) = 0;
      }
      if (*(ulonglong *)(param_1 + 0x68) < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(0,uVar5,*(ulonglong *)(param_1 + 0x68),
                      &PTR_s_C__Users_burne__cargo_registry_s_180212a00);
      }
      local_b8 = *(undefined8 *)(param_1 + 0x60);
      local_c0 = (int)uVar5;
      local_bc = 1;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      lStack_a8 = 0;
      local_68 = 0x400000000;
      local_60 = &local_c0;
      iVar2 = DecryptMessage(local_70,&local_68,0,0);
      if (iVar2 < 0x90317) {
        if (iVar2 == -0x7ff6fce8) {
          uVar5 = local_b0 & 0xffffffff;
          if (local_b0._4_4_ != 4) {
            uVar5 = 1;
          }
        }
        else {
          if (iVar2 != 0) {
            return 1;
          }
          uVar5 = *(ulonglong *)(param_1 + 0x48);
          uVar3 = *(ulonglong *)(param_1 + 0x50);
          _Size = uVar5 - uVar3;
          if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,uVar3,uVar5,&PTR_s_C__Users_burne__rustup_toolchain_18020f518);
          }
          uVar6 = lStack_a8 - *(longlong *)(param_1 + 0x60);
          uVar4 = local_b0 & 0xffffffff;
          *(undefined8 *)(param_1 + 0x48) = 0;
          if (uVar3 == 0) {
            if (uVar5 == 0) goto LAB_1800bb4e4;
LAB_1800bb4e8:
            *(size_t *)(param_1 + 0x48) = _Size;
          }
          else {
            if (uVar5 != uVar3) {
              memmove(*(void **)(param_1 + 0x40),
                      (void *)(uVar3 + (longlong)*(void **)(param_1 + 0x40)),_Size);
              goto LAB_1800bb4e8;
            }
LAB_1800bb4e4:
            _Size = 0;
          }
          uVar5 = uVar6 + uVar4;
          if ((uVar5 < uVar6) || (*(ulonglong *)(param_1 + 0x68) < uVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(uVar6,uVar5,*(ulonglong *)(param_1 + 0x68),
                          &PTR_s_C__Users_burne__cargo_registry_s_1802129e8);
          }
          lVar7 = *(longlong *)(param_1 + 0x60);
          if (*(longlong *)(param_1 + 0x38) - _Size < uVar4) {
            FUN_1801f6a80(param_1 + 0x38,_Size,uVar4,1,1);
            _Size = *(size_t *)(param_1 + 0x48);
          }
          memcpy((void *)(*(longlong *)(param_1 + 0x40) + _Size),(void *)(uVar6 + lVar7),uVar4);
          *(size_t *)(param_1 + 0x48) = _Size + uVar4;
          *(undefined8 *)(param_1 + 0x50) = 0;
          uVar5 = *(ulonglong *)(param_1 + 0x70);
          uVar3 = local_90 & 0xffffffff;
          if (local_90._4_4_ != 5) {
            uVar3 = 0;
          }
          uVar6 = uVar5 - uVar3;
          if (uVar5 < uVar3) {
LAB_1800bb6dd:
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: size >= nread",0x1f,
                          &PTR_s_C__Users_burne__cargo_registry_s_180212970);
          }
          if ((int)uVar3 == 0) goto LAB_1800bb5c4;
          uVar4 = *(ulonglong *)(param_1 + 0x68);
          if (uVar4 < uVar6) {
LAB_1800bb6f5:
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,uVar6,uVar4,&PTR_s_C__Users_burne__rustup_toolchain_18020f518);
          }
          *(undefined8 *)(param_1 + 0x68) = 0;
          if (uVar5 == uVar3) {
            if (uVar4 != uVar6) {
LAB_1800bb5c0:
              *(ulonglong *)(param_1 + 0x68) = uVar4 - uVar6;
            }
          }
          else if (uVar4 != uVar6) {
            memmove(*(void **)(param_1 + 0x60),
                    (void *)(uVar6 + (longlong)*(void **)(param_1 + 0x60)),uVar4 - uVar6);
            goto LAB_1800bb5c0;
          }
LAB_1800bb5c4:
          uVar5 = (ulonglong)((int)uVar3 == 0);
          *(ulonglong *)(param_1 + 0x70) = uVar3;
        }
      }
      else {
        if (iVar2 != 0x90321) {
          if (iVar2 != 0x90317) {
            return 1;
          }
          goto LAB_1800bb622;
        }
        *(undefined4 *)(param_1 + 200) = 0x10000;
        *(undefined1 *)(param_1 + 0xcc) = 0;
        if (*(ulonglong *)(param_1 + 0x90) < *(ulonglong *)(param_1 + 0x88)) {
          *(undefined1 *)(param_1 + 0x11c) = 1;
        }
        uVar5 = *(ulonglong *)(param_1 + 0x70);
        uVar3 = local_90 & 0xffffffff;
        if (local_90._4_4_ != 5) {
          uVar3 = 0;
        }
        uVar6 = uVar5 - uVar3;
        if (uVar5 < uVar3) goto LAB_1800bb6dd;
        if ((int)uVar3 == 0) goto LAB_1800bb59c;
        uVar4 = *(ulonglong *)(param_1 + 0x68);
        if (uVar4 < uVar6) goto LAB_1800bb6f5;
        *(undefined8 *)(param_1 + 0x68) = 0;
        if (uVar5 == uVar3) {
          if (uVar4 != uVar6) {
LAB_1800bb598:
            *(ulonglong *)(param_1 + 0x68) = uVar4 - uVar6;
          }
        }
        else if (uVar4 != uVar6) {
          memmove(*(void **)(param_1 + 0x60),(void *)(uVar6 + (longlong)*(void **)(param_1 + 0x60)),
                  uVar4 - uVar6);
          goto LAB_1800bb598;
        }
LAB_1800bb59c:
        *(ulonglong *)(param_1 + 0x70) = uVar3;
        uVar5 = 0;
      }
      *(ulonglong *)(param_1 + 0x108) = uVar5;
      uVar5 = *(ulonglong *)(param_1 + 0x48);
      uVar3 = *(ulonglong *)(param_1 + 0x50);
    } while (uVar3 <= uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201a30(uVar3,uVar5,uVar5,&PTR_s_C__Users_burne__cargo_registry_s_180212a60);
}


