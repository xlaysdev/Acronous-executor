/* FUN_1801c4480 @ 1801c4480 */

undefined8 * FUN_1801c4480(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined1 uVar23;
  
  uVar18 = *(undefined4 *)(param_2 + 0x38);
  uVar19 = *(undefined4 *)(param_2 + 0x40);
  uVar20 = *(undefined4 *)(param_2 + 0x48);
  uVar21 = *(undefined4 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined1 *)(param_2 + 0x30);
  uVar22 = uVar2;
  uVar23 = uVar1;
  FUN_180027490();
  lVar13 = thunk_FUN_1801d3550(0x5f0,8);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x5f0);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  do {
    LOCK();
    uVar5 = DAT_1802fd768 + 1;
    UNLOCK();
    uVar16 = DAT_1802fd768 ^ 0x7465646279746573;
    uVar14 = (uVar16 << 0x10 | uVar16 >> 0x30) ^ uVar16 + 0x6c7967656e657261;
    uVar16 = uVar16 + 0xa60c596fc19fead0;
    uVar17 = uVar16 ^ 0xe414a674f0de7325;
    uVar15 = uVar14 + 0xded7d4e2d7dedfc6 ^ 0x800000000000000 ^ (uVar14 << 0x15 | uVar14 >> 0x2b);
    uVar14 = (DAT_1802fd768 ^ uVar14 + 0xded7d4e2d7dedfc6) + uVar17;
    uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) + uVar15;
    uVar17 = (uVar17 << 0xd | uVar17 >> 0x33) ^ uVar14;
    uVar15 = (uVar15 << 0x10 | uVar15 >> 0x30) ^ uVar16;
    uVar16 = uVar16 + uVar17;
    uVar14 = (uVar14 << 0x20 | uVar14 >> 0x20) + uVar15;
    uVar17 = (uVar17 << 0x11 | uVar17 >> 0x2f) ^ uVar16;
    uVar15 = (uVar15 << 0x15 | uVar15 >> 0x2b) ^ uVar14;
    uVar14 = (uVar14 ^ 0x800000000000000) + uVar17;
    uVar16 = ((uVar16 << 0x20 | uVar16 >> 0x20) ^ 0xff) + uVar15;
    uVar17 = (uVar17 << 0xd | uVar17 >> 0x33) ^ uVar14;
    uVar15 = (uVar15 << 0x10 | uVar15 >> 0x30) ^ uVar16;
    uVar16 = uVar16 + uVar17;
    uVar14 = (uVar14 << 0x20 | uVar14 >> 0x20) + uVar15;
    uVar17 = (uVar17 << 0x11 | uVar17 >> 0x2f) ^ uVar16;
    uVar15 = (uVar15 << 0x15 | uVar15 >> 0x2b) ^ uVar14;
    uVar14 = uVar14 + uVar17;
    uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) + uVar15;
    uVar17 = (uVar17 << 0xd | uVar17 >> 0x33) ^ uVar14;
    uVar15 = (uVar15 << 0x10 | uVar15 >> 0x30) ^ uVar16;
    uVar16 = uVar16 + uVar17;
    uVar14 = (uVar14 << 0x20 | uVar14 >> 0x20) + uVar15;
    uVar17 = (uVar17 << 0x11 | uVar17 >> 0x2f) ^ uVar16;
    uVar15 = (uVar15 << 0x15 | uVar15 >> 0x2b) ^ uVar14;
    uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) + uVar15;
    uVar17 = (uVar17 << 0xd | uVar17 >> 0x33) ^ uVar14 + uVar17;
    uVar14 = (uVar15 << 0x10 | uVar15 >> 0x30) ^ uVar16;
    uVar16 = uVar16 + uVar17;
    uVar14 = (uVar16 << 0x20 | uVar16 >> 0x20) ^ (uVar17 << 0x11 | uVar17 >> 0x2f) ^
             (uVar14 << 0x15 | uVar14 >> 0x2b);
    DAT_1802fd768 = uVar5;
  } while (uVar14 == uVar16);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  uVar8 = *(undefined4 *)(param_2 + 0x40);
  uVar9 = *(undefined4 *)(param_2 + 0x44);
  uVar10 = *(undefined4 *)(param_2 + 0x4c);
  uVar11 = *(undefined4 *)(param_2 + 0x50);
  uVar12 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 300) = uVar10;
  *(undefined4 *)(param_1 + 0x26) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar12;
  *(undefined4 *)(param_1 + 0x23) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar9;
  param_1[0x27] = uVar2;
  *(undefined1 *)(param_1 + 0x28) = uVar1;
  *param_1 = 0;
  param_1[1] = lVar13;
  param_1[0x10] = 0;
  param_1[0x11] = lVar13;
  param_1[0x20] = uVar3;
  param_1[0x21] = uVar14 ^ uVar16;
  param_1[0x22] = uVar4;
  lVar13 = *(longlong *)(param_2 + 0x10);
  if ((!SBORROW8(0,lVar13)) && (lVar13 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x18),lVar13,1,param_2,uVar18,uVar19,uVar20,uVar21
                        ,uVar22,uVar23);
  }
  return param_1;
}


