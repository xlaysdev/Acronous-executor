/* FUN_18002d650 @ 18002d650 */

ulonglong *
FUN_18002d650(ulonglong *param_1,undefined8 *param_2,longlong param_3,undefined4 *param_4,
             ulonglong param_5)

{
  void *pvVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *_Dst;
  undefined1 *_Dst_00;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  ulonglong local_78;
  ulonglong uStack_70;
  longlong local_68;
  ulonglong local_60;
  undefined4 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return param_1;
  }
  lVar14 = param_3 * 0x10;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_5;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = lVar14 - 0x10U >> 4;
  uVar5 = SUB168(auVar2 * auVar3,0);
  local_58 = param_4;
  if (SUB168(auVar2 * auVar3,8) == 0) {
    local_50 = param_2 + param_3 * 2;
    lVar8 = 0x10;
    puVar10 = param_2 + 2;
    lVar6 = lVar14;
    puVar7 = param_2;
    do {
      if (lVar6 == 0) {
        if ((longlong)uVar5 < 0) {
          uVar9 = 0;
LAB_18002d6f2:
                    /* WARNING: Subroutine does not return */
          FUN_18020171e(uVar9,uVar5);
        }
        if (uVar5 == 0) {
          uStack_70 = 1;
        }
        else {
          FUN_180027490();
          uVar9 = 1;
          uStack_70 = thunk_FUN_1801d32d0(uVar5,1);
          if (uStack_70 == 0) goto LAB_18002d6f2;
        }
        local_68 = 0;
        pvVar1 = (void *)*param_2;
        local_60 = param_2[1];
        local_78 = uVar5;
        if (uVar5 < local_60) {
          FUN_1801f6a80(&local_78,0,local_60,1,1);
          uVar11 = local_60;
        }
        else {
          uVar11 = local_60;
        }
        lVar6 = local_68;
        local_60 = uStack_70;
        memcpy((void *)(uStack_70 + local_68),pvVar1,uVar11);
        puVar7 = local_50;
        puVar4 = local_58;
        _Dst = (undefined4 *)(local_60 + lVar6 + uVar11);
        uVar11 = uVar5 - (lVar6 + uVar11);
        switch(param_5) {
        case 0:
          if (lVar14 != 0x10) {
            do {
              uVar13 = *(ulonglong *)((longlong)param_2 + lVar8 + 8);
              bVar15 = uVar11 < uVar13;
              uVar11 = uVar11 - uVar13;
              if (bVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_180201ee0("mid > len",0x13,&DAT_180205f40);
              }
              memcpy(_Dst,*(void **)((longlong)param_2 + lVar8),uVar13);
              lVar8 = lVar8 + 0x10;
              _Dst = (undefined4 *)((longlong)_Dst + uVar13);
            } while (lVar14 != lVar8);
          }
          break;
        case 1:
          if (lVar14 != 0x10) {
            do {
              if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_180201ee0("mid > len",0x13,&DAT_180205f40);
              }
              pvVar1 = (void *)*puVar10;
              uVar13 = puVar10[1];
              uVar12 = uVar11 - 1;
              *(undefined1 *)_Dst = *(undefined1 *)puVar4;
              uVar11 = uVar12 - uVar13;
              if (uVar12 < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_180201ee0("mid > len",0x13,&DAT_180205f40);
              }
              memcpy((undefined1 *)((longlong)_Dst + 1),pvVar1,uVar13);
              puVar10 = puVar10 + 2;
              _Dst = (undefined4 *)((longlong)_Dst + uVar13 + 1);
            } while (puVar10 != puVar7);
          }
          break;
        case 2:
          if (lVar14 != 0x10) {
            do {
              if (uVar11 < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_180201ee0("mid > len",0x13,&DAT_180205f40);
              }
              pvVar1 = (void *)*puVar10;
              uVar13 = puVar10[1];
              uVar12 = uVar11 - 2;
              *(undefined2 *)_Dst = *(undefined2 *)puVar4;
              uVar11 = uVar12 - uVar13;
              if (uVar12 < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_180201ee0("mid > len",0x13,&DAT_180205f40);
              }
              memcpy((undefined2 *)((longlong)_Dst + 2),pvVar1,uVar13);
              puVar10 = puVar10 + 2;
              _Dst = (undefined4 *)((longlong)_Dst + uVar13 + 2);
            } while (puVar10 != puVar7);
          }
          break;
        case 3:
          if (lVar14 != 0x10) {
            do {
              if (uVar11 < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_180201ee0("mid > len",0x13,&DAT_180205f40);
              }
              pvVar1 = (void *)*puVar10;
              uVar13 = puVar10[1];
              uVar12 = uVar11 - 3;
              *(undefined1 *)((longlong)_Dst + 2) = *(undefined1 *)((longlong)puVar4 + 2);
              *(undefined2 *)_Dst = *(undefined2 *)puVar4;
              uVar11 = uVar12 - uVar13;
              if (uVar12 < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_180201ee0("mid > len",0x13,&DAT_180205f40);
              }
              memcpy((undefined1 *)((longlong)_Dst + 3),pvVar1,uVar13);
              puVar10 = puVar10 + 2;
              _Dst = (undefined4 *)((longlong)_Dst + uVar13 + 3);
            } while (puVar10 != puVar7);
          }
          break;
        case 4:
          if (lVar14 != 0x10) {
            do {
              if (uVar11 < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_180201ee0("mid > len",0x13,&DAT_180205f40);
              }
              pvVar1 = (void *)*puVar10;
              uVar13 = puVar10[1];
              uVar12 = uVar11 - 4;
              *_Dst = *puVar4;
              uVar11 = uVar12 - uVar13;
              if (uVar12 < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_180201ee0("mid > len",0x13,&DAT_180205f40);
              }
              memcpy(_Dst + 1,pvVar1,uVar13);
              puVar10 = puVar10 + 2;
              _Dst = (undefined4 *)((longlong)_Dst + uVar13 + 4);
            } while (puVar10 != puVar7);
          }
          break;
        default:
          if (lVar14 != 0x10) {
            do {
              uVar13 = uVar11 - param_5;
              if (uVar11 < param_5) {
                    /* WARNING: Subroutine does not return */
                FUN_180201ee0("mid > len",0x13,&DAT_180205f40);
              }
              pvVar1 = (void *)*puVar10;
              uVar12 = puVar10[1];
              memcpy(_Dst,local_58,param_5);
              uVar11 = uVar13 - uVar12;
              if (uVar13 < uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_180201ee0("mid > len",0x13,&DAT_180205f40);
              }
              _Dst_00 = (undefined1 *)((longlong)_Dst + param_5);
              _Dst = (undefined4 *)(_Dst_00 + uVar12);
              memcpy(_Dst_00,pvVar1,uVar12);
              puVar10 = puVar10 + 2;
            } while (puVar10 != local_50);
          }
        }
        param_1[2] = uVar5 - uVar11;
        *param_1 = local_78;
        param_1[1] = uStack_70;
        return param_1;
      }
      lVar6 = lVar6 + -0x10;
      bVar15 = CARRY8(uVar5,puVar7[1]);
      uVar5 = uVar5 + puVar7[1];
      puVar7 = puVar7 + 2;
    } while (!bVar15);
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201b60("attempt to join into collection with len > usize::MAXC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\alloc\\src\\str.rs"
                ,0x35,&DAT_180205f28);
}


