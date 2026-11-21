/* FUN_180044a30 @ 180044a30 */

void FUN_180044a30(longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000180044a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[3],param_1[1],param_1[2],UNRECOVERED_JUMPTABLE);
    return;
  }
  plVar1 = (longlong *)param_1[1];
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)plVar1[1];
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(lVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_1801d3330(lVar2,puVar3[1],puVar3[2]);
    }
  }
  thunk_FUN_1801d3330(plVar1,0x18,8);
  return;
}


