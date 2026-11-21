/* FUN_180124f40 @ 180124f40 */

longlong * FUN_180124f40(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_2;
  if ((char)param_2[0x15] == '\0') {
    LOCK();
    lVar17 = param_2[0xe];
    *(char *)(param_2 + 0xe) = '\x01';
    UNLOCK();
    if ((char)lVar17 == '\0') {
      plVar1 = param_2 + 2;
      if ((int)*plVar1 != 3) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: slot.is_none()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-channel-0.3.34\\src\\oneshot.rs"
                      ,0x20,&DAT_180242480);
      }
      lVar17 = *(longlong *)(param_3 + 0x16);
      param_2[0xc] = *(longlong *)(param_3 + 0x14);
      param_2[0xd] = lVar17;
      lVar17 = *(longlong *)(param_3 + 0x12);
      param_2[10] = *(longlong *)(param_3 + 0x10);
      param_2[0xb] = lVar17;
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[4];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      uVar10 = param_3[8];
      uVar11 = param_3[9];
      uVar12 = param_3[10];
      uVar13 = param_3[0xb];
      uVar14 = param_3[0xd];
      uVar15 = param_3[0xe];
      uVar16 = param_3[0xf];
      *(undefined4 *)(param_2 + 8) = param_3[0xc];
      *(undefined4 *)((longlong)param_2 + 0x44) = uVar14;
      *(undefined4 *)(param_2 + 9) = uVar15;
      *(undefined4 *)((longlong)param_2 + 0x4c) = uVar16;
      *(undefined4 *)(param_2 + 6) = uVar10;
      *(undefined4 *)((longlong)param_2 + 0x34) = uVar11;
      *(undefined4 *)(param_2 + 7) = uVar12;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uVar13;
      *(undefined4 *)(param_2 + 4) = uVar6;
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar7;
      *(undefined4 *)(param_2 + 5) = uVar8;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uVar9;
      *(undefined4 *)plVar1 = uVar2;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
      *(undefined4 *)(param_2 + 3) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar5;
      LOCK();
      *(undefined1 *)(param_2 + 0xe) = 0;
      UNLOCK();
      if ((char)param_2[0x15] != '\0') {
        LOCK();
        lVar17 = param_2[0xe];
        *(char *)(param_2 + 0xe) = '\x01';
        UNLOCK();
        if ((char)lVar17 == '\0') {
          lVar17 = *plVar1;
          *plVar1 = 3;
          if (lVar17 == 3) {
            LOCK();
            *(undefined1 *)(param_2 + 0xe) = 0;
            UNLOCK();
            *param_1 = 3;
          }
          else {
            param_1[0xb] = param_2[0xd];
            lVar18 = param_2[0xc];
            param_1[9] = param_2[0xb];
            param_1[10] = lVar18;
            lVar18 = param_2[3];
            uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
            lVar19 = param_2[4];
            uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
            lVar20 = param_2[5];
            uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
            lVar21 = param_2[6];
            uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
            lVar22 = param_2[7];
            uVar6 = *(undefined4 *)((longlong)param_2 + 0x3c);
            lVar23 = param_2[8];
            uVar7 = *(undefined4 *)((longlong)param_2 + 0x44);
            uVar8 = *(undefined4 *)((longlong)param_2 + 0x4c);
            lVar24 = param_2[10];
            uVar9 = *(undefined4 *)((longlong)param_2 + 0x54);
            *(int *)(param_1 + 7) = (int)param_2[9];
            *(undefined4 *)((longlong)param_1 + 0x3c) = uVar8;
            *(int *)(param_1 + 8) = (int)lVar24;
            *(undefined4 *)((longlong)param_1 + 0x44) = uVar9;
            *(int *)(param_1 + 5) = (int)lVar22;
            *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
            *(int *)(param_1 + 6) = (int)lVar23;
            *(undefined4 *)((longlong)param_1 + 0x34) = uVar7;
            *(int *)(param_1 + 3) = (int)lVar20;
            *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
            *(int *)(param_1 + 4) = (int)lVar21;
            *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
            *(int *)(param_1 + 1) = (int)lVar18;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
            *(int *)(param_1 + 2) = (int)lVar19;
            *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
            *param_1 = lVar17;
            LOCK();
            *(undefined1 *)(param_2 + 0xe) = 0;
            UNLOCK();
          }
          goto LAB_180124fa8;
        }
      }
      *param_1 = 3;
      goto LAB_180124fa8;
    }
  }
  lVar17 = *(longlong *)(param_3 + 0x16);
  param_1[10] = *(longlong *)(param_3 + 0x14);
  param_1[0xb] = lVar17;
  lVar17 = *(longlong *)(param_3 + 0x12);
  param_1[8] = *(longlong *)(param_3 + 0x10);
  param_1[9] = lVar17;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  uVar10 = param_3[8];
  uVar11 = param_3[9];
  uVar12 = param_3[10];
  uVar13 = param_3[0xb];
  uVar14 = param_3[0xd];
  uVar15 = param_3[0xe];
  uVar16 = param_3[0xf];
  *(undefined4 *)(param_1 + 6) = param_3[0xc];
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar14;
  *(undefined4 *)(param_1 + 7) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar16;
  *(undefined4 *)(param_1 + 4) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar11;
  *(undefined4 *)(param_1 + 5) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar13;
  *(undefined4 *)(param_1 + 2) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
  *(undefined4 *)(param_1 + 3) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar9;
  *(undefined4 *)param_1 = uVar2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
LAB_180124fa8:
  LOCK();
  *(undefined1 *)(param_2 + 0x15) = 1;
  UNLOCK();
  LOCK();
  lVar17 = param_2[0x11];
  *(char *)(param_2 + 0x11) = '\x01';
  UNLOCK();
  if ((char)lVar17 == '\0') {
    lVar17 = param_2[0xf];
    param_2[0xf] = 0;
    LOCK();
    lVar18 = param_2[0x11];
    *(undefined1 *)(param_2 + 0x11) = 0;
    UNLOCK();
    if (lVar17 != 0) {
      (**(code **)(lVar17 + 8))(param_2[0x10],(char)lVar18);
    }
  }
  LOCK();
  lVar17 = param_2[0x14];
  *(char *)(param_2 + 0x14) = '\x01';
  UNLOCK();
  if ((char)lVar17 == '\0') {
    lVar17 = param_2[0x12];
    param_2[0x12] = 0;
    if (lVar17 != 0) {
      (**(code **)(lVar17 + 0x18))(param_2[0x13]);
    }
    LOCK();
    *(undefined1 *)(param_2 + 0x14) = 0;
    UNLOCK();
    LOCK();
    *local_30 = *local_30 + -1;
    lVar17 = *local_30;
    UNLOCK();
  }
  else {
    LOCK();
    *local_30 = *local_30 + -1;
    lVar17 = *local_30;
    UNLOCK();
  }
  if (lVar17 == 0) {
    FUN_180113b80(&local_30);
  }
  return param_1;
}


