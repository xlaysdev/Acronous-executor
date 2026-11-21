/* FUN_180179020 @ 180179020 */

ulonglong *
FUN_180179020(ulonglong *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,undefined8 param_6)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plStack_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  plStack_20 = param_5;
  plVar2 = param_5 + 0x2c;
  if ((param_4 & 1) == 0) {
    plVar2 = param_5 + 0x44;
  }
  if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                  ,0x68,param_6);
  }
  uVar1 = FUN_1801726e0();
  if ((uVar1 & 1) == 0) {
    *param_1 = param_4;
    param_1[1] = (ulonglong)plStack_20;
    param_1[2] = param_2;
  }
  else {
    param_1[1] = param_2;
    *param_1 = 2;
    if ((char)param_4 == '\0') {
      LOCK();
      *plStack_20 = *plStack_20 + -1;
      UNLOCK();
      if (*plStack_20 == 0) {
        FUN_1801635e0(&plStack_20);
      }
    }
    else {
      LOCK();
      *plStack_20 = *plStack_20 + -1;
      UNLOCK();
      if (*plStack_20 == 0) {
        FUN_180162f80();
      }
    }
  }
  return param_1;
}


