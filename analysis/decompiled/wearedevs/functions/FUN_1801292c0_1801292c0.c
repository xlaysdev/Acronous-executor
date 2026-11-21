/* FUN_1801292c0 @ 1801292c0 */

ulonglong FUN_1801292c0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong local_50;
  
  uVar7 = *(ulonglong *)(param_1 + 0x28);
  uVar16 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  uVar15 = param_2 + uVar7;
  if ((!CARRY8(param_2,uVar7)) &&
     (auVar5._8_8_ = 0, auVar5._0_8_ = uVar15, auVar6._8_8_ = 2, auVar6._0_8_ = 0xaaaaaaaaaaaaaaab,
     uVar13 = SUB168(auVar5 * auVar6,8) >> 1, !CARRY8(uVar15 / 3,uVar15))) {
    if (*(ulonglong *)(param_1 + 0x50) < uVar13) {
      lVar12 = 0x3f;
      if (uVar13 - 1 != 0) {
        for (; uVar13 - 1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar15 = 0;
      if (1 < uVar13) {
        uVar15 = 0xffffffffffffffff >> (~(byte)lVar12 & 0x3f);
      }
      if (0x7fff < uVar15) goto LAB_180129532;
      uVar16 = uVar15 + 1;
      if (uVar7 != 0) {
        uVar7 = FUN_18012b440(param_1,uVar16);
        return uVar7;
      }
      *(short *)(param_1 + 0x58) = (short)uVar15;
      FUN_180027490();
      puVar8 = (undefined4 *)thunk_FUN_1801d32d0(uVar16 * 4,2);
      if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(2,uVar16 * 4);
      }
      puVar9 = puVar8;
      if (1 < uVar16) {
        lVar12 = 1;
        if (7 < uVar15) {
          uVar11 = (uint)uVar15 & 0x7ff8;
          uVar7 = (ulonglong)(uVar11 * 4);
          puVar9 = (undefined4 *)((longlong)puVar8 + uVar7);
          lVar12 = (ulonglong)uVar11 + 1;
          uVar13 = 0;
          do {
            puVar1 = (undefined4 *)((longlong)puVar8 + uVar13);
            *puVar1 = 0xffff;
            puVar1[1] = 0xffff;
            puVar1[2] = 0xffff;
            puVar1[3] = 0xffff;
            puVar1 = (undefined4 *)((longlong)puVar8 + uVar13 + 0x10);
            *puVar1 = 0xffff;
            puVar1[1] = 0xffff;
            puVar1[2] = 0xffff;
            puVar1[3] = 0xffff;
            uVar13 = uVar13 + 0x20;
          } while (uVar7 != uVar13);
        }
        lVar12 = (uVar15 - lVar12) + 1;
        do {
          *puVar9 = 0xffff;
          puVar9 = puVar9 + 1;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      *puVar9 = 0xffff;
      if (*(longlong *)(param_1 + 0x50) != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x48),*(longlong *)(param_1 + 0x50) << 2,2);
      }
      *(undefined4 **)(param_1 + 0x48) = puVar8;
      *(ulonglong *)(param_1 + 0x50) = uVar16;
      uVar16 = uVar16 - (uVar16 >> 2);
      if (0x13b13b13b13b13b < uVar16) {
        uVar14 = 0;
LAB_180129444:
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(uVar14,puVar8);
      }
      puVar8 = (undefined4 *)(uVar16 * 0x68);
      FUN_180027490();
      uVar14 = 8;
      lVar12 = thunk_FUN_1801d32d0(puVar8,8);
      if (lVar12 == 0) goto LAB_180129444;
      lVar3 = *(longlong *)(param_1 + 0x20);
      lVar4 = *(longlong *)(param_1 + 0x28);
      local_50 = 0;
      while (local_50 != lVar4) {
        lVar10 = local_50 * 0x68;
        lVar2 = lVar3 + lVar10;
        local_50 = local_50 + 1;
        lVar10 = *(longlong *)(lVar3 + 0x40 + lVar10);
        if (lVar10 != 0) {
          (**(code **)(lVar10 + 0x20))
                    (*(undefined8 *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x48),
                     *(undefined8 *)(lVar2 + 0x50));
        }
        (**(code **)(*(longlong *)(lVar2 + 0x18) + 0x20))
                  (*(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x20),
                   *(undefined8 *)(lVar2 + 0x28));
      }
      if (*(longlong *)(param_1 + 0x18) != 0) {
        thunk_FUN_1801d3330(lVar3,*(longlong *)(param_1 + 0x18) * 0x68,8);
      }
      *(ulonglong *)(param_1 + 0x18) = uVar16;
      *(longlong *)(param_1 + 0x20) = lVar12;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    uVar16 = 0;
  }
LAB_180129532:
  return uVar16 & 0xffffffff;
}


