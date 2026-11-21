/* FUN_1800c3760 @ 1800c3760 */

undefined8 FUN_1800c3760(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)param_1[1]) {
                    /* WARNING: Could not recover jumptable at 0x0001800c37b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_180215148 + *(int *)(&DAT_180215148 + *plVar1 * 4)))
                      (param_1,(ulonglong)(param_1[1] - (longlong)plVar1) / 0x50);
    return uVar2;
  }
  plVar1 = (longlong *)param_1[2];
  if (plVar1 == (longlong *)param_1[3]) {
    return param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800c3867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&DAT_18021515c + *(int *)(&DAT_18021515c + *plVar1 * 4)))
                    (&DAT_18021515c + *(int *)(&DAT_18021515c + *plVar1 * 4),
                     (ulonglong)(param_1[3] - (longlong)plVar1) / 0x50);
  return uVar2;
}


