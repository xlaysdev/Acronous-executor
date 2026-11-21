/* FUN_1801d1a90 @ 1801d1a90 */

void FUN_1801d1a90(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(longlong *)PTR_DAT_1802fd650 == 0) {
    param_1 = param_1 & 0xffffffff;
    sVar1 = FUN_180201000();
  }
  else {
    sVar1 = (short)*(longlong *)PTR_DAT_1802fd650;
  }
  if (sVar1 < 0) {
    UNRECOVERED_JUMPTABLE = FUN_1801d1af0;
  }
  else {
    UNRECOVERED_JUMPTABLE = FUN_1801d1b40;
  }
  PTR_FUN_1802fd588 = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x0001801d1ae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}


