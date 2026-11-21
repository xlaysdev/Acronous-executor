/* FUN_1801e96ba @ 1801e96ba */

ulonglong FUN_1801e96ba(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  ulonglong local_40;
  int local_34;
  
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    cVar2 = FUN_1801edcb0("\'",1,lVar1);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (cVar2 != '\0') goto LAB_1801e9728;
    if (param_2 == 0) {
      uVar4 = FUN_1801edcb0(&DAT_1802922c4,1,lVar1);
      return uVar4;
    }
    uVar5 = *(uint *)(param_1 + 5) - param_2;
    if (param_2 <= *(uint *)(param_1 + 5)) {
      if (uVar5 < 0x1a) {
        local_34 = (int)uVar5 + 0x61;
        uVar3 = FUN_1801edd10(&local_34,lVar1);
      }
      else {
        cVar2 = FUN_1801edcb0(&DAT_1802922c4,1,lVar1);
        if (cVar2 != '\0') goto LAB_1801e9728;
        local_40 = uVar5;
        uVar3 = FUN_1801ee720(&local_40,lVar1);
      }
      uVar4 = (ulonglong)uVar3;
      goto LAB_1801e9728;
    }
    cVar2 = FUN_1801edcb0("{invalid syntax}",0x10,lVar1);
    if (cVar2 != '\0') goto LAB_1801e9728;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  uVar4 = 0;
LAB_1801e9728:
  return uVar4 & 0xffffffff;
}


