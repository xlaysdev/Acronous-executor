/* FUN_18016ec90 @ 18016ec90 */

void FUN_18016ec90(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  
  lVar1 = *param_3;
  plVar6 = (longlong *)(*(code *)*param_1)(0);
  if (plVar6 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180261f40);
  }
  if (plVar6[3] != lVar1) {
    if (((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) ||
       (cVar5 = FUN_180200a50(), cVar5 != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("`EnterGuard` values dropped out of order. Guards returned by `tokio::runtime::Handle::enter()` must be dropped in the reverse order as they were acquired."
                    ,0x135,&PTR_s_C__Users_burne__cargo_registry_s_180262298);
    }
    return;
  }
  lVar3 = *param_2;
  lVar4 = param_2[1];
  *param_2 = 2;
  if (*plVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_1802621e0);
  }
  *plVar6 = -1;
  if (plVar6[1] != 2) {
    if (plVar6[1] == 0) {
      plVar2 = (longlong *)plVar6[2];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_1801635e0();
      }
    }
    else {
      plVar2 = (longlong *)plVar6[2];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180162f80();
      }
    }
  }
  plVar6[1] = lVar3;
  plVar6[2] = lVar4;
  *plVar6 = *plVar6 + 1;
  plVar6[3] = lVar1 + -1;
  return;
}


