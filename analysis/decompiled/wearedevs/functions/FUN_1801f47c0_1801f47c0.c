/* FUN_1801f47c0 @ 1801f47c0 */

ulonglong FUN_1801f47c0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  code *local_48;
  
  if (param_4 != 0) {
    local_50 = &local_58;
    local_48 = FUN_1801ede80;
    local_58 = param_3;
    cVar2 = FUN_1801ef150(param_1,param_2,&DAT_1802934cf,&local_50);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (cVar2 != '\0') goto LAB_1801f4875;
    if (param_4 != 1) {
      pcVar1 = *(code **)(param_2 + 0x20);
      lVar3 = param_4 * 2 + -2;
      do {
        param_3 = param_3 + 2;
        local_60 = param_3;
        cVar2 = (*pcVar1)(param_1,0x3a);
        if (cVar2 != '\0') goto LAB_1801f4875;
        local_50 = &local_60;
        local_48 = FUN_1801ede80;
        cVar2 = FUN_1801ef150(param_1,param_2,&DAT_1802934cf,&local_50);
        if (cVar2 != '\0') goto LAB_1801f4875;
        lVar3 = lVar3 + -2;
      } while (lVar3 != 0);
    }
  }
  uVar4 = 0;
LAB_1801f4875:
  return uVar4 & 0xffffffff;
}


