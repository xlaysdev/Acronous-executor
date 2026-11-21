/* FUN_1801c6f60 @ 1801c6f60 */

void FUN_1801c6f60(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  
  uVar3 = *(ulonglong *)(param_1 + 0x80);
  plVar9 = *(longlong **)(param_1 + 0x88);
  lVar2 = 0;
  uVar10 = 0;
  do {
    uVar5 = uVar3;
    while( true ) {
      uVar7 = (uint)(uVar5 >> 1) & 0x3f;
      uVar8 = (ulonglong)uVar7;
      if (uVar7 != 0x3f) break;
      if (uVar10 < 7) {
        uVar7 = 1;
        do {
          uVar4 = uVar7 >> ((byte)uVar10 & 0x1f);
          uVar7 = uVar7 + 1;
        } while (uVar4 == 0);
LAB_1801c6fb0:
        uVar10 = uVar10 + 1;
      }
      else {
        SwitchToThread();
        if (uVar10 < 0xb) goto LAB_1801c6fb0;
      }
      uVar5 = *(ulonglong *)(param_1 + 0x80);
      plVar9 = *(longlong **)(param_1 + 0x88);
    }
    if (uVar8 == 0x3e && lVar2 == 0) {
      FUN_180027490();
      lVar2 = thunk_FUN_1801d3550(0x5f0,8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x5f0);
      }
    }
    LOCK();
    uVar1 = *(ulonglong *)(param_1 + 0x80);
    if (uVar5 == uVar1) {
      *(ulonglong *)(param_1 + 0x80) = uVar5 + 2;
      uVar3 = uVar5;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
    if (uVar5 == uVar1) {
      if (uVar7 == 0x3e) {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180288358);
        }
        *(longlong *)(param_1 + 0x88) = lVar2;
        *(ulonglong *)(param_1 + 0x80) = uVar5 + 4;
        *plVar9 = lVar2;
        plVar9[0xbb] = param_2;
        plVar9[0xbc] = param_3;
        LOCK();
        plVar9[0xbd] = plVar9[0xbd] | 1;
        UNLOCK();
      }
      else {
        plVar9[uVar8 * 3 + 1] = param_2;
        plVar9[uVar8 * 3 + 2] = param_3;
        LOCK();
        plVar9[uVar8 * 3 + 3] = plVar9[uVar8 * 3 + 3] | 1;
        UNLOCK();
        if (lVar2 != 0) {
          thunk_FUN_1801d3330(lVar2,0x5f0,8);
          return;
        }
      }
      return;
    }
    plVar9 = *(longlong **)(param_1 + 0x88);
    uVar7 = 6;
    if (uVar10 < 6) {
      uVar7 = uVar10;
    }
    uVar4 = 1;
    do {
      uVar6 = uVar4 >> ((byte)uVar7 & 0x1f);
      uVar4 = uVar4 + 1;
    } while (uVar6 == 0);
    uVar10 = uVar10 + (uVar10 < 7);
  } while( true );
}


