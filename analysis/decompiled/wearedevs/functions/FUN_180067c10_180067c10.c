/* FUN_180067c10 @ 180067c10 */

void FUN_180067c10(ulonglong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 < 3) {
    lVar3 = 0x18;
    lVar2 = 0x10;
    lVar1 = 0x20;
    lVar4 = 8;
  }
  else {
    if ((int)*param_1 == 3) {
      return;
    }
    lVar3 = 0x28;
    lVar2 = 0x20;
    lVar1 = 0x30;
    lVar4 = 0x18;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)((longlong)param_1 + lVar4) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000180067c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)((longlong)param_1 + lVar1),*(undefined8 *)((longlong)param_1 + lVar2),
             *(undefined8 *)((longlong)param_1 + lVar3),UNRECOVERED_JUMPTABLE);
  return;
}


