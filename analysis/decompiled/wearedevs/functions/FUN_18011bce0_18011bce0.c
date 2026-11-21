/* FUN_18011bce0 @ 18011bce0 */

undefined8 FUN_18011bce0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  if (2 < param_3) {
    uVar6 = param_3 - 3;
  }
  if (param_2 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar6,param_2,param_2,&PTR_s_C__Users_burne__cargo_registry_s_180241510);
  }
  uVar4 = param_2 - uVar6;
  if (uVar4 != 0) {
    param_1 = param_1 + uVar6;
    uVar6 = 3;
    if (param_3 < 3) {
      uVar6 = param_3;
    }
    uVar5 = ~param_3 + param_2 + uVar6;
    uVar3 = 1;
    do {
      cVar2 = *(char *)(param_1 + -1 + uVar3);
      if (cVar2 == '\n') {
        if ((uVar3 < uVar4) && (*(char *)(param_1 + uVar3) == '\n')) {
LAB_18011bd9b:
          return CONCAT71((int7)(uVar3 >> 8),1);
        }
      }
      else if (cVar2 == '\r') {
        if (uVar4 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(uVar3,uVar4,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_1802414f8);
        }
        if ((2 < uVar5) &&
           (*(char *)(param_1 + 2 + uVar3) == '\n' && *(short *)(param_1 + uVar3) == 0xd0a))
        goto LAB_18011bd9b;
      }
      lVar1 = ((param_3 - param_2) - uVar6) + uVar3;
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (lVar1 != 0);
  }
  return 0;
}


