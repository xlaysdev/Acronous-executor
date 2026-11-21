/* FUN_18017e260 @ 18017e260 */

char * FUN_18017e260(void)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined **local_48;
  undefined1 *local_40;
  char *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  pcVar7 = "TOKIO_W";
  FUN_1801d7a30(&local_98,"TOKIO_W",0x14);
  if (CONCAT44(uStack_94,local_98) != -0x7fffffffffffffff) {
    if (!SBORROW8(0,CONCAT44(uStack_94,local_98))) {
      local_68 = uStack_88;
      uStack_64 = uStack_84;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
      local_58 = &DAT_180264958;
      uStack_50 = &LAB_1800a5660;
      local_48 = &local_78;
      local_40 = &LAB_1801e3450;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180264a00,&local_58,&PTR_s_C__Users_burne__cargo_registry_s_180264a28);
    }
    uVar4 = FUN_1801e04f0();
    if ((uVar4 & 1) == 0) {
      return pcVar7;
    }
    pcVar8 = (char *)0x1;
    if (((uint)pcVar7 & 3) != 1) {
      return (char *)0x1;
    }
    local_38 = pcVar7 + -1;
    local_28 = *(undefined8 *)(pcVar7 + -1);
    local_30 = *(undefined8 **)(pcVar7 + 7);
    if ((code *)*local_30 != (code *)0x0) {
      (*(code *)*local_30)(local_28);
    }
    if (local_30[1] != 0) {
      thunk_FUN_1801d3330(local_28,local_30[1],local_30[2]);
    }
    local_58 = (undefined *)0x18;
    uVar10 = 8;
    uStack_50 = local_38;
LAB_18017e3de:
    thunk_FUN_1801d3330(uStack_50,local_58,uVar10);
    return pcVar8;
  }
  local_58 = (undefined *)CONCAT44(uStack_8c,uStack_90);
  uStack_50 = (char *)CONCAT44(uStack_84,uStack_88);
  uVar4 = CONCAT44(uStack_7c,uStack_80);
  if (uVar4 == 1) {
    cVar3 = *uStack_50;
    uVar10 = 1;
    if ((cVar3 == '+') || (cVar3 == '-')) goto LAB_18017e49e;
  }
  else {
    if (uVar4 == 0) {
      uVar10 = 0;
      goto LAB_18017e49e;
    }
    cVar3 = *uStack_50;
  }
  uVar9 = (ulonglong)(cVar3 == '+');
  if (0x10 < uVar4 - uVar9) {
    lVar5 = 0;
    pcVar8 = (char *)0x0;
    do {
      if (lVar5 == uVar4 + -uVar9) goto LAB_18017e3c6;
      uVar11 = (byte)uStack_50[lVar5 + uVar9] - 0x30;
      if (9 < uVar11) goto LAB_18017e49c;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = pcVar8;
      uVar6 = SUB168(auVar1 * ZEXT816(10),0);
      pcVar8 = (char *)(uVar11 + uVar6);
      uVar10 = 2;
    } while ((SUB168(auVar1 * ZEXT816(10),8) == 0) &&
            (lVar5 = lVar5 + 1, !CARRY8((ulonglong)uVar11,uVar6)));
LAB_18017e49e:
    FUN_1801fb230(&local_58,uVar10);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar4 != uVar9) {
    lVar5 = 0;
    pcVar8 = (char *)0x0;
    do {
      if (9 < (byte)uStack_50[lVar5 + uVar9] - 0x30) goto LAB_18017e49c;
      pcVar8 = (char *)((ulonglong)((byte)uStack_50[lVar5 + uVar9] - 0x30) + (longlong)pcVar8 * 10);
      lVar5 = lVar5 + 1;
    } while (lVar5 != uVar4 + -uVar9);
LAB_18017e3c6:
    if (pcVar8 != (char *)0x0) {
      if (local_58 == (undefined *)0x0) {
        return pcVar8;
      }
      uVar10 = 1;
      goto LAB_18017e3de;
    }
  }
  local_78 = &DAT_180264958;
  puStack_70 = &LAB_1800a5660;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180264968,&local_78,&PTR_s_C__Users_burne__cargo_registry_s_1802649e8);
LAB_18017e49c:
  uVar10 = 1;
  goto LAB_18017e49e;
}


