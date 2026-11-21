/* FUN_1801d99b0 @ 1801d99b0 */

void FUN_1801d99b0(undefined8 param_1,longlong param_2)

{
  short *psVar1;
  short *psVar2;
  ulonglong uVar3;
  
  psVar2 = (short *)(param_2 + 0x34);
  uVar3 = 0x104;
  psVar1 = psVar2;
  do {
    if (*psVar1 == 0) goto LAB_1801d9a83;
    if (psVar1[1] == 0) {
      psVar1 = psVar1 + 1;
      goto LAB_1801d9a83;
    }
    if (psVar1[2] == 0) {
      psVar1 = psVar1 + 2;
      goto LAB_1801d9a83;
    }
    if (psVar1[3] == 0) {
      psVar1 = psVar1 + 3;
      goto LAB_1801d9a83;
    }
    if (psVar1[4] == 0) {
      psVar1 = psVar1 + 4;
      goto LAB_1801d9a83;
    }
    if (psVar1[5] == 0) {
      psVar1 = psVar1 + 5;
      goto LAB_1801d9a83;
    }
    if (psVar1[6] == 0) {
      psVar1 = psVar1 + 6;
      goto LAB_1801d9a83;
    }
    if (psVar1[7] == 0) {
      psVar1 = psVar1 + 7;
      goto LAB_1801d9a83;
    }
    uVar3 = uVar3 - 8;
    psVar1 = psVar1 + 8;
  } while (7 < uVar3);
  psVar1 = (short *)(param_2 + 0x234);
  if (*(short *)(param_2 + 0x234) != 0) {
    if (*(short *)(param_2 + 0x236) == 0) {
      psVar1 = (short *)(param_2 + 0x236);
    }
    else if (*(short *)(param_2 + 0x238) == 0) {
      psVar1 = (short *)(param_2 + 0x238);
    }
    else {
      uVar3 = 0x104;
      if (*(short *)(param_2 + 0x23a) != 0) goto LAB_1801d9a95;
      psVar1 = (short *)(param_2 + 0x23a);
    }
  }
LAB_1801d9a83:
  uVar3 = (ulonglong)((longlong)psVar1 - (longlong)psVar2) >> 1;
  if (0x209 < (ulonglong)((longlong)psVar1 - (longlong)psVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0,uVar3,0x104,&PTR_s_library_std_src_sys_pal_windows__18028f800);
  }
LAB_1801d9a95:
  FUN_1801ecc30(param_1,psVar2,uVar3);
  return;
}


