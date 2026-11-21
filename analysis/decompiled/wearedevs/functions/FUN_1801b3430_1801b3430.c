/* FUN_1801b3430 @ 1801b3430 */

void FUN_1801b3430(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (((ulonglong)param_1 & 1) == 0) {
    LOCK();
    plVar1 = param_1 + 2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) {
      return;
    }
    uVar4 = *param_1;
    uVar2 = param_1[1];
    cVar3 = FUN_1801f2f10(uVar2,1);
    if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_21,&DAT_180285b28,
                    &PTR_s_C__Users_burne__cargo_registry_s_180285ce8);
    }
    thunk_FUN_1801d3330(uVar4,uVar2,1);
    param_3 = 0x18;
    uVar4 = 8;
  }
  else {
    param_1 = (undefined8 *)((ulonglong)param_1 & 0xfffffffffffffffe);
    param_3 = (param_2 - (longlong)param_1) + param_3;
    cVar3 = FUN_1801f2f10(param_3,1);
    if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_21,&DAT_180285b28,
                    &PTR_s_C__Users_burne__cargo_registry_s_180285c00);
    }
    uVar4 = 1;
  }
  thunk_FUN_1801d3330(param_1,param_3,uVar4);
  return;
}


