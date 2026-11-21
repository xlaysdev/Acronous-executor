/* FUN_18010a7d0 @ 18010a7d0 */

undefined ** FUN_18010a7d0(void *param_1,undefined1 *param_2,ulonglong param_3)

{
  void *_Dst;
  longlong *plVar1;
  longlong lVar2;
  ulonglong unaff_RBP;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong _Size;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    _Dst = (void *)((longlong)param_1 + 0x420);
    do {
      plVar1 = *(longlong **)((longlong)param_1 + 0x400);
      if (plVar1 == (longlong *)0x0) {
        FUN_180200a26(&DAT_18023bee0,0x28,&PTR_s_C__Users_burne__cargo_registry_s_18023bf08);
        goto LAB_18010aa8d;
      }
      uVar3 = *(ulonglong *)((longlong)param_1 + 0x410);
      if (uVar3 != 0) {
        *(undefined1 *)((longlong)param_1 + 0x423) = 1;
        if (0x400 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,uVar3,0x400,&PTR_s_C__Users_burne__cargo_registry_s_18023be38);
        }
        lVar6 = plVar1[2];
        if ((ulonglong)(*plVar1 - lVar6) < uVar3) {
          FUN_1801f6a80(plVar1,lVar6,uVar3,1,1);
          lVar6 = plVar1[2];
        }
        memcpy((void *)(plVar1[1] + lVar6),param_1,uVar3);
        plVar1[2] = lVar6 + uVar3;
        *(undefined1 *)((longlong)param_1 + 0x423) = 0;
        *(undefined8 *)((longlong)param_1 + 0x410) = 0;
        goto LAB_18010aa5d;
      }
      uVar3 = *(ulonglong *)((longlong)param_1 + 0x408);
      if (uVar3 == 0) {
        if (2 < param_3) {
          uVar5 = 0x300;
          lVar6 = 0;
          _Size = 0;
          uVar3 = param_3;
          puVar4 = param_2;
          goto LAB_18010a91d;
        }
        memcpy(_Dst,param_2,param_3);
        *(ulonglong *)((longlong)param_1 + 0x408) = param_3;
        uVar3 = param_3;
      }
      else if (uVar3 + param_3 < 3) {
        if (2 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar3,3,&PTR_s_C__Users_burne__cargo_registry_s_18023be98);
        }
        *(undefined1 *)((longlong)_Dst + uVar3) = *param_2;
        *(ulonglong *)((longlong)param_1 + 0x408) = uVar3 + 1;
        uVar3 = 1;
      }
      else {
        _Size = 3 - uVar3;
        if (3 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(uVar3,3,3,&PTR_s_C__Users_burne__cargo_registry_s_18023bec8);
        }
        if (param_3 < _Size) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,_Size,param_3,&PTR_s_C__Users_burne__cargo_registry_s_18023beb0);
        }
        memcpy((void *)(uVar3 + (longlong)_Dst),param_2,_Size);
        FUN_180111970(*(undefined8 *)((longlong)param_1 + 0x418),_Dst,3,param_1,0x400);
        *(undefined8 *)((longlong)param_1 + 0x408) = 0;
        lVar6 = 4;
        uVar5 = 0x2fd;
        uVar3 = param_3 - _Size;
        puVar4 = param_2 + _Size;
LAB_18010a91d:
        uVar3 = (uVar3 / 3) * 3;
        if (uVar3 <= uVar5) {
          uVar5 = uVar3;
        }
        lVar2 = FUN_180111970(*(undefined8 *)((longlong)param_1 + 0x418),puVar4,uVar5,
                              (longlong)param_1 + lVar6,0x400 - lVar6);
        *(undefined1 *)((longlong)param_1 + 0x423) = 1;
        plVar1 = *(longlong **)((longlong)param_1 + 0x400);
        if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201b60("Writer must be present",0x16,
                        &PTR_s_C__Users_burne__cargo_registry_s_18023be20);
        }
        unaff_RBP = lVar2 + lVar6;
        if (0x400 < unaff_RBP) {
LAB_18010aa8d:
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,unaff_RBP,0x400,&PTR_s_C__Users_burne__cargo_registry_s_18023be38);
        }
        lVar6 = plVar1[2];
        if ((ulonglong)(*plVar1 - lVar6) < unaff_RBP) {
          FUN_1801f6a80(plVar1,lVar6,unaff_RBP,1,1);
          lVar6 = plVar1[2];
        }
        memcpy((void *)(plVar1[1] + lVar6),param_1,unaff_RBP);
        plVar1[2] = lVar6 + unaff_RBP;
        *(undefined1 *)((longlong)param_1 + 0x423) = 0;
        *(undefined8 *)((longlong)param_1 + 0x410) = 0;
        uVar3 = uVar5 + _Size;
        if (uVar5 + _Size == 0) {
LAB_18010aa5d:
          return &PTR_s_failed_to_write_whole_buffer_18023bca8;
        }
      }
      if (param_3 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar3,param_3,param_3,&PTR_s_C__Users_burne__rustup_toolchain_18023bd30);
      }
      param_2 = param_2 + uVar3;
      param_3 = param_3 - uVar3;
    } while (param_3 != 0);
  }
  return (undefined **)0x0;
}


