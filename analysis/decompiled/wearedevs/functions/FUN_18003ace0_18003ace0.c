/* FUN_18003ace0 @ 18003ace0 */

void FUN_18003ace0(longlong *param_1)

{
  int iVar1;
  
  if (*param_1 == 5) {
    return;
  }
  iVar1 = (int)*param_1;
  if (iVar1 == 4) {
    FUN_18000afd0(param_1[1]);
    return;
  }
  if (iVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00018003ad14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x20))(param_1[4],param_1[2],param_1[3],*(code **)(param_1[1] + 0x20))
    ;
    return;
  }
  FUN_18000b470();
  return;
}


