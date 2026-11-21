/* FUN_180038ad0 @ 180038ad0 */

undefined8 *
FUN_180038ad0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  bool bVar13;
  int *local_98;
  longlong local_90;
  undefined1 local_88;
  undefined4 local_87;
  undefined4 uStack_83;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_61;
  
  puVar11 = *(ulonglong **)(param_2 + 0x18);
  uVar8 = 1;
  if ((longlong)*(ulonglong *)(param_2 + 0x10) < 0) {
    uVar8 = *(ulonglong *)(param_2 + 0x10) ^ 0x8000000000000000;
  }
  puVar12 = puVar11 + *(longlong *)(param_2 + 0x20) * 4;
  do {
    if (uVar8 == 0) {
      lVar10 = 7;
      lVar9 = 5;
      bVar13 = true;
      uVar8 = 2;
      pcVar7 = 
      "utf-8C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\mime-0.3.17\\src\\lib.rs"
      ;
      local_98 = (int *)0x180206da0;
    }
    else {
      if ((uVar8 != 1) || (puVar12 == puVar11)) {
        *(undefined1 *)(param_1 + 2) = 2;
        return param_1;
      }
      uVar8 = *puVar11;
      uVar1 = puVar11[1];
      lVar2 = *(longlong *)(param_2 + 0x38 + (ulonglong)*(byte *)(param_2 + 0x30) * 8);
      uVar3 = *(ulonglong *)(param_2 + 0x40 + (ulonglong)*(byte *)(param_2 + 0x30) * 8);
      lVar10 = uVar1 - uVar8;
      if (uVar1 < uVar8) goto LAB_180038d01;
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      if (uVar8 != 0) {
        if (uVar8 < uVar3) {
          if (*(char *)(lVar2 + uVar8) < -0x40) goto LAB_180038d01;
        }
        else if (uVar8 != uVar3) goto LAB_180038d01;
      }
      if (uVar1 != 0) {
        if (uVar1 < uVar3) {
          if (*(char *)(lVar2 + uVar1) < -0x40) {
LAB_180038d01:
                    /* WARNING: Subroutine does not return */
            FUN_1802018d0(lVar2,uVar3,uVar8,uVar1,&DAT_180206e08);
          }
        }
        else if (uVar1 != uVar3) goto LAB_180038d01;
      }
      lVar9 = uVar5 - uVar4;
      if (uVar5 < uVar4) goto LAB_180038ced;
      if (uVar4 != 0) {
        if (uVar4 < uVar3) {
          if (*(char *)(lVar2 + uVar4) < -0x40) goto LAB_180038ced;
        }
        else if (uVar4 != uVar3) goto LAB_180038ced;
      }
      if (uVar5 != 0) {
        if (uVar5 < uVar3) {
          if (*(char *)(lVar2 + uVar5) < -0x40) {
LAB_180038ced:
                    /* WARNING: Subroutine does not return */
            FUN_1802018d0(lVar2,uVar3,uVar4,uVar5,&DAT_180206e20);
          }
        }
        else if (uVar5 != uVar3) goto LAB_180038ced;
      }
      local_98 = (int *)(uVar8 + lVar2);
      if (lVar10 == 7) {
        bVar13 = *(int *)((longlong)local_98 + 3) == 0x74657372 && *local_98 == 0x72616863;
      }
      else {
        bVar13 = false;
      }
      puVar11 = puVar11 + 4;
      pcVar7 = (char *)(lVar2 + uVar4);
      uVar8 = 1;
    }
    local_88 = 1;
    local_87 = 0;
    uStack_83._3_1_ = (byte)pcVar7;
    uStack_83 = (uint)uStack_83._3_1_ << 0x18;
    uStack_7f = (undefined7)((ulonglong)pcVar7 >> 8);
    uStack_78 = (undefined1)lVar9;
    uStack_77 = (undefined7)((ulonglong)lVar9 >> 8);
    uStack_70 = (uint)bVar13;
    uStack_6c = 0;
    local_90 = lVar10;
    cVar6 = FUN_1800f59b0(&local_98,param_3,param_4);
    if (cVar6 != '\0') {
      uStack_61 = (undefined1)((uint)uStack_83 >> 0x18);
      param_1[2] = CONCAT44(uStack_6c,uStack_70);
      *param_1 = CONCAT71(uStack_7f,uStack_61);
      param_1[1] = CONCAT71(uStack_77,uStack_78);
      return param_1;
    }
  } while( true );
}


