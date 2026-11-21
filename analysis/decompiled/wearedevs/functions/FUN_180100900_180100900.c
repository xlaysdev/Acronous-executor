/* FUN_180100900 @ 180100900 */

void FUN_180100900(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  undefined8 local_60;
  undefined4 local_58;
  char *local_50;
  undefined1 local_48;
  char *local_40;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  LOCK();
  cVar6 = *param_1;
  if (cVar6 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar6 != '\0') {
    FUN_180200390(param_1);
  }
  puVar4 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_34 = 0;
    cVar6 = param_1[1];
  }
  else {
    local_34 = FUN_180200a50();
    local_34 = local_34 ^ 1;
    cVar6 = param_1[1];
  }
  if (cVar6 != '\0') {
    local_48 = (undefined1)local_34;
    local_50 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("generation lock",0xf,&local_50,&PTR_FUN_180239428,&DAT_180239628);
  }
  local_40 = param_1;
  uVar7 = thunk_FUN_1801df8c0();
  uVar10 = *(ulonglong *)(local_40 + 0x10);
  local_60 = uVar7;
  local_58 = param_2;
  uVar8 = thunk_FUN_1801df680(&local_60,uVar10,*(undefined4 *)(local_40 + 0x18));
  pcVar5 = local_40;
  uVar12 = uVar10 & 0xffffffff;
  if (uVar8 == *(ulonglong *)(local_40 + 0x50)) {
    if (*(uint *)(local_40 + 0x58) <= (uint)uVar10) {
LAB_1801009a0:
      LOCK();
      pcVar1 = local_40 + 0x38;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      UNLOCK();
      uVar10 = *(ulonglong *)(local_40 + 8);
      if (*(ulonglong *)(local_40 + 0x28) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar10,*(ulonglong *)(local_40 + 0x28),&DAT_180239640);
      }
      LOCK();
      *(undefined8 *)(*(longlong *)(local_40 + 0x20) + uVar10 * 8) = *(undefined8 *)pcVar1;
      UNLOCK();
      uVar10 = *(ulonglong *)(local_40 + 0x28);
      if (uVar10 == 0) {
        FUN_180201c40(&DAT_180239658);
LAB_180100bd2:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar9 = *(longlong *)(local_40 + 8) + 1;
      if ((uVar9 | uVar10) >> 0x20 == 0) {
        uVar9 = (uVar9 & 0xffffffff) % (uVar10 & 0xffffffff);
        bVar13 = uVar8 < *(ulonglong *)(local_40 + 0x50);
        bVar14 = uVar8 == *(ulonglong *)(local_40 + 0x50);
      }
      else {
        uVar9 = uVar9 % uVar10;
        bVar13 = uVar8 < *(ulonglong *)(local_40 + 0x50);
        bVar14 = uVar8 == *(ulonglong *)(local_40 + 0x50);
      }
joined_r0x0001801009eb:
      if (!bVar14) goto LAB_180100a11;
LAB_180100a0d:
      bVar13 = (uint)uVar12 < *(uint *)(local_40 + 0x58);
      bVar14 = (uint)uVar12 == *(uint *)(local_40 + 0x58);
LAB_180100a11:
      do {
        uVar11 = (uint)uVar12;
        if (bVar13 || bVar14) {
          *(ulonglong *)(local_40 + 8) = uVar9;
          *(undefined8 *)(local_40 + 0x10) = uVar7;
          *(undefined4 *)(local_40 + 0x18) = param_2;
          break;
        }
        if (uVar10 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar9,uVar10,&DAT_180239670);
        }
        LOCK();
        *(undefined8 *)(*(longlong *)(local_40 + 0x20) + uVar9 * 8) = 0;
        UNLOCK();
        uVar2 = *(ulonglong *)(local_40 + 0x50);
        bVar14 = uVar8 < uVar2;
        uVar8 = uVar8 - uVar2;
        if (bVar14) {
LAB_180100b7c:
                    /* WARNING: Subroutine does not return */
          FUN_180201b60("overflow when subtracting durations",0x23,
                        &PTR_s_C__Users_burne__rustup_toolchain_1802396b0);
        }
        if (uVar11 < *(uint *)(local_40 + 0x58)) {
          if (uVar8 == 0) goto LAB_180100b7c;
          uVar8 = uVar8 - 1;
          uVar11 = uVar11 + 1000000000;
        }
        uVar11 = uVar11 - *(uint *)(local_40 + 0x58);
        if (999999999 < uVar11) {
          if (uVar8 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_180201b60("overflow in Duration::new",0x19,
                          &PTR_s_C__Users_burne__rustup_toolchain_180239410);
          }
          uVar11 = uVar11 + 0xc4653600;
          if (uVar11 == 1000000000) goto LAB_180100b7c;
          uVar8 = uVar8 + 1;
        }
        uVar12 = (ulonglong)uVar11;
        uVar10 = *(ulonglong *)(local_40 + 0x28);
        if (uVar10 == 0) {
          FUN_180201c40(&DAT_1802396c8);
          goto LAB_180100bd2;
        }
        uVar9 = uVar9 + 1;
        if ((uVar9 | uVar10) >> 0x20 != 0) {
          uVar9 = uVar9 % uVar10;
          bVar13 = uVar8 < uVar2;
          bVar14 = uVar8 == uVar2;
          goto joined_r0x0001801009eb;
        }
        uVar9 = (uVar9 & 0xffffffff) % (uVar10 & 0xffffffff);
        bVar13 = uVar8 < uVar2;
        if (uVar8 == uVar2) goto LAB_180100a0d;
        bVar14 = false;
      } while( true );
    }
  }
  else if (*(ulonglong *)(local_40 + 0x50) <= uVar8) goto LAB_1801009a0;
  if ((((char)local_34 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = FUN_180200a50(), cVar6 == '\0')) {
    pcVar5[1] = '\x01';
  }
  LOCK();
  cVar6 = *pcVar5;
  *pcVar5 = '\0';
  UNLOCK();
  if (cVar6 == '\x02') {
    WakeByAddressSingle(pcVar5);
  }
  return;
}


