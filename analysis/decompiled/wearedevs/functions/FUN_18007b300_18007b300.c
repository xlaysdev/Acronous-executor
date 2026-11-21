/* FUN_18007b300 @ 18007b300 */

void FUN_18007b300(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180114260(param_1 + 6);
    }
  }
  FUN_18007bb00(param_1 + 7);
  plVar1 = param_1 + 4;
  FUN_18013bd90();
  FUN_18013c270(plVar1);
  plVar2 = (longlong *)*plVar1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18013bc70(plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00018007b38b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1[3],param_1[1],param_1[2]);
  return;
}


