/* FUN_18000b7c0 @ 18000b7c0 */

void FUN_18000b7c0(longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00018000b7f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[3],param_1[1],param_1[2],UNRECOVERED_JUMPTABLE);
    return;
  }
  lVar1 = param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(lVar1);
  }
  if (puVar2[1] == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
  return;
}


