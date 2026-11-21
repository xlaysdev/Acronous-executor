/* FUN_180039290 @ 180039290 */

undefined4 *
FUN_180039290(undefined4 *param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
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
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = param_2;
  local_28 = param_2;
  if ((char)param_2[0x10] == '\0') {
    LOCK();
    lVar13 = param_2[9];
    *(char *)(param_2 + 9) = '\x01';
    UNLOCK();
    if ((char)lVar13 == '\0') {
      if (*(char *)((longlong)param_2 + 0x41) != '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: slot.is_none()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-channel-0.3.34\\src\\oneshot.rs"
                      ,0x20,&DAT_180206f48,param_4,param_3);
      }
      param_2[8] = *(longlong *)(param_3 + 0xc);
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[4];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      uVar10 = param_3[9];
      uVar11 = param_3[10];
      uVar12 = param_3[0xb];
      *(undefined4 *)(param_2 + 6) = param_3[8];
      *(undefined4 *)((longlong)param_2 + 0x34) = uVar10;
      *(undefined4 *)(param_2 + 7) = uVar11;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uVar12;
      *(undefined4 *)(param_2 + 4) = uVar6;
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar7;
      *(undefined4 *)(param_2 + 5) = uVar8;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uVar9;
      *(undefined4 *)(param_2 + 2) = uVar2;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
      *(undefined4 *)(param_2 + 3) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar5;
      LOCK();
      *(undefined1 *)(param_2 + 9) = 0;
      UNLOCK();
      if ((char)param_2[0x10] != '\0') {
        LOCK();
        lVar13 = param_2[9];
        *(char *)(param_2 + 9) = '\x01';
        UNLOCK();
        if ((char)lVar13 == '\0') {
          cVar1 = *(char *)((longlong)param_2 + 0x41);
          *(undefined1 *)((longlong)param_2 + 0x41) = 2;
          if (cVar1 == '\x02') {
            LOCK();
            *(undefined1 *)(param_2 + 9) = 0;
            UNLOCK();
            *(undefined1 *)((longlong)param_1 + 0x31) = 2;
          }
          else {
            *(char *)(param_1 + 0xc) = (char)param_2[8];
            lVar13 = param_2[2];
            uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
            lVar14 = param_2[3];
            uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
            lVar15 = param_2[4];
            uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
            lVar16 = param_2[5];
            uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
            uVar6 = *(undefined4 *)((longlong)param_2 + 0x34);
            lVar17 = param_2[7];
            uVar7 = *(undefined4 *)((longlong)param_2 + 0x3c);
            param_1[8] = (int)param_2[6];
            param_1[9] = uVar6;
            param_1[10] = (int)lVar17;
            param_1[0xb] = uVar7;
            param_1[4] = (int)lVar15;
            param_1[5] = uVar4;
            param_1[6] = (int)lVar16;
            param_1[7] = uVar5;
            *param_1 = (int)lVar13;
            param_1[1] = uVar2;
            param_1[2] = (int)lVar14;
            param_1[3] = uVar3;
            *(undefined4 *)((longlong)param_1 + 0x32) = *(undefined4 *)((longlong)param_2 + 0x42);
            *(undefined2 *)((longlong)param_1 + 0x36) = *(undefined2 *)((longlong)param_2 + 0x46);
            *(char *)((longlong)param_1 + 0x31) = cVar1;
            LOCK();
            *(undefined1 *)(param_2 + 9) = 0;
            UNLOCK();
          }
          goto LAB_1800392e8;
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x31) = 2;
      goto LAB_1800392e8;
    }
  }
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  uVar10 = param_3[9];
  uVar11 = param_3[10];
  uVar12 = param_3[0xb];
  param_1[8] = param_3[8];
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
LAB_1800392e8:
  LOCK();
  *(undefined1 *)(param_2 + 0x10) = 1;
  UNLOCK();
  LOCK();
  lVar13 = param_2[0xc];
  *(char *)(param_2 + 0xc) = '\x01';
  UNLOCK();
  if ((char)lVar13 == '\0') {
    lVar13 = param_2[10];
    param_2[10] = 0;
    LOCK();
    lVar14 = param_2[0xc];
    *(undefined1 *)(param_2 + 0xc) = 0;
    UNLOCK();
    if (lVar13 != 0) {
      (**(code **)(lVar13 + 8))(param_2[0xb],(char)lVar14);
    }
  }
  LOCK();
  lVar13 = local_28[0xf];
  *(char *)(local_28 + 0xf) = '\x01';
  UNLOCK();
  if ((char)lVar13 == '\0') {
    lVar13 = local_28[0xd];
    local_28[0xd] = 0;
    if (lVar13 != 0) {
      (**(code **)(lVar13 + 0x18))(local_28[0xe]);
    }
    LOCK();
    *(undefined1 *)(local_28 + 0xf) = 0;
    UNLOCK();
    LOCK();
    *local_28 = *local_28 + -1;
    lVar13 = *local_28;
    UNLOCK();
  }
  else {
    LOCK();
    *local_28 = *local_28 + -1;
    lVar13 = *local_28;
    UNLOCK();
  }
  if (lVar13 == 0) {
    FUN_18003ce90(&local_30);
  }
  return param_1;
}


