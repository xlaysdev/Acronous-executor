/* FUN_180178660 @ 180178660 */

void FUN_180178660(ulonglong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*param_1 != 2) {
    lVar2 = 0x220;
    if ((*param_1 & 1) != 0) {
      lVar2 = 0x160;
    }
    if (*(int *)(param_1[1] + 0x98 + lVar2) == 1000000000) {
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                    ,0x73,&PTR_s_C__Users_burne__cargo_registry_s_180260930,param_1,param_1,
                    0xfffffffffffffffe);
    }
    FUN_18016fef0(param_1[1] + lVar2 + 0x58,param_1 + 2);
    if ((char)*param_1 == '\0') {
      plVar1 = (longlong *)param_1[1];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_1801635e0();
      }
    }
    else {
      plVar1 = (longlong *)param_1[1];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180162f80();
      }
    }
    if (param_1[6] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001801786f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[6] + 0x18))(param_1[7]);
      return;
    }
  }
  return;
}


