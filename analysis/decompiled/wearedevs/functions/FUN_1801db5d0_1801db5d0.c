/* FUN_1801db5d0 @ 1801db5d0 */

void FUN_1801db5d0(ulonglong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  short *psVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong local_70;
  longlong local_68;
  undefined2 local_60;
  ulonglong local_58;
  short *psStack_50;
  ulonglong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar4 = param_3 + 1;
  uVar1 = param_3 * 2 + 2;
  if (0x7ffffffffffffffe < uVar1 || (longlong)uVar4 < 0) {
    uVar3 = 0;
LAB_1801db612:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar3,uVar1);
  }
  if (uVar1 == 0) {
    psStack_50 = (short *)0x2;
    uVar4 = 0;
  }
  else {
    FUN_180027490();
    uVar3 = 2;
    psStack_50 = (short *)thunk_FUN_1801d32d0(uVar1,2);
    if (psStack_50 == (short *)0x0) goto LAB_1801db612;
  }
  local_48 = 0;
  local_68 = param_3 + param_2;
  local_60 = 0;
  local_70 = param_2;
  local_58 = uVar4;
  FUN_1801e3620(&local_58,&local_70);
  uVar1 = local_48;
  uVar4 = local_48;
  psVar2 = psStack_50;
  if (7 < local_48) {
    do {
      if (((((*psVar2 == 0) || (psVar2[1] == 0)) || (psVar2[2] == 0)) ||
          ((psVar2[3] == 0 || (psVar2[4] == 0)))) ||
         ((psVar2[5] == 0 || ((psVar2[6] == 0 || (psVar2[7] == 0)))))) goto LAB_1801db797;
      uVar4 = uVar4 - 8;
      psVar2 = psVar2 + 8;
    } while (7 < uVar4);
  }
  if ((uVar4 == 0) ||
     ((*psVar2 != 0 &&
      ((uVar4 == 1 ||
       ((psVar2[1] != 0 &&
        ((uVar4 == 2 ||
         ((psVar2[2] != 0 &&
          ((uVar4 == 3 ||
           ((psVar2[3] != 0 &&
            ((uVar4 == 4 ||
             ((psVar2[4] != 0 &&
              ((uVar4 == 5 || ((psVar2[5] != 0 && ((uVar4 == 6 || (psVar2[6] != 0 && uVar4 == 7)))))
               ))))))))))))))))))))) {
    if (local_48 == local_58) {
      FUN_180200ca0(&local_58);
    }
    psStack_50[uVar1] = 0;
    param_1[2] = uVar1 + 1;
    *param_1 = local_58;
    param_1[1] = (ulonglong)psStack_50;
  }
  else {
LAB_1801db797:
    param_1[1] = (ulonglong)&DAT_18028fa78;
    *param_1 = 0x8000000000000000;
    if (local_58 != 0) {
      thunk_FUN_1801d3330(psStack_50,local_58 * 2,2);
      return;
    }
  }
  return;
}


