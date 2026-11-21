/* FUN_1801ab190 @ 1801ab190 */

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_1801ab190(undefined1 *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  
  switch(param_3) {
  default:
    if (param_3 < 0x10) {
      FUN_1801ad690(&local_31);
      break;
    }
    FUN_180027490();
    lVar3 = thunk_FUN_1801d3550(param_3,1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,param_3);
    }
    uVar4 = 0;
    while ((&DAT_180283dd1)[(byte)param_2[uVar4]] != '\0') {
      *(undefined *)(lVar3 + uVar4) = (&DAT_180283dd1)[(byte)param_2[uVar4]];
      uVar4 = uVar4 + 1;
      if (param_3 == uVar4) {
        *param_1 = 0xb;
        *(longlong *)(param_1 + 8) = lVar3;
        *(ulonglong *)(param_1 + 0x10) = param_3;
        return param_1;
      }
    }
    thunk_FUN_1801d3330(lVar3,param_3,1);
  case 0:
    *param_1 = 0xc;
    return param_1;
  case 3:
    if (*param_2 == 'G') {
      if ((param_2[1] == 'E') && (param_2[2] == 'T')) {
        *param_1 = 1;
        return param_1;
      }
    }
    else if (((*param_2 == 'P') && (param_2[1] == 'U')) && (param_2[2] == 'T')) {
      *param_1 = 3;
      return param_1;
    }
    FUN_1801ad690(&local_31,param_2,3);
    break;
  case 4:
    if (*param_2 == 'H') {
      if (((param_2[1] == 'E') && (param_2[2] == 'A')) && (param_2[3] == 'D')) {
        *param_1 = 5;
        return param_1;
      }
    }
    else if (((*param_2 == 'P') && (param_2[1] == 'O')) &&
            ((param_2[2] == 'S' && (param_2[3] == 'T')))) {
      *param_1 = 2;
      return param_1;
    }
    FUN_1801ad690(&local_31,param_2,4);
    break;
  case 5:
    cVar1 = *param_2;
    if (cVar1 == 'P') {
      if ((((param_2[1] == 'A') && (param_2[2] == 'T')) && (param_2[3] == 'C')) &&
         (param_2[4] == 'H')) {
        *param_1 = 8;
        return param_1;
      }
    }
    else if (cVar1 == 'Q') {
      if (((param_2[1] == 'U') && (param_2[2] == 'E')) &&
         ((param_2[3] == 'R' && (param_2[4] == 'Y')))) {
        *param_1 = 9;
        return param_1;
      }
    }
    else if (((cVar1 == 'T') && (param_2[1] == 'R')) &&
            ((param_2[2] == 'A' && ((param_2[3] == 'C' && (param_2[4] == 'E')))))) {
      *param_1 = 6;
      return param_1;
    }
    FUN_1801ad690(&local_31,param_2,5);
    break;
  case 6:
    if (((*param_2 == 'D') && (param_2[1] == 'E')) &&
       (((param_2[2] == 'L' && ((param_2[3] == 'E' && (param_2[4] == 'T')))) && (param_2[5] == 'E'))
       )) {
      *param_1 = 4;
      return param_1;
    }
    FUN_1801ad690(&local_31,param_2,6);
    break;
  case 7:
    if (*param_2 == 'C') {
      if ((((param_2[1] == 'O') && (param_2[2] == 'N')) && (param_2[3] == 'N')) &&
         (((param_2[4] == 'E' && (param_2[5] == 'C')) && (param_2[6] == 'T')))) {
        *param_1 = 7;
        return param_1;
      }
    }
    else if (((*param_2 == 'O') && (param_2[1] == 'P')) &&
            (((param_2[2] == 'T' &&
              (((param_2[3] == 'I' && (param_2[4] == 'O')) && (param_2[5] == 'N')))) &&
             (param_2[6] == 'S')))) {
      *param_1 = 0;
      return param_1;
    }
    FUN_1801ad690(&local_31,param_2,7);
  }
  uVar2 = 0xc;
  if (local_31 == '\0') {
    *(undefined8 *)(param_1 + 1) = local_30;
    *(undefined8 *)(param_1 + 9) = uStack_28;
    uVar2 = 10;
  }
  *param_1 = uVar2;
  return param_1;
}


