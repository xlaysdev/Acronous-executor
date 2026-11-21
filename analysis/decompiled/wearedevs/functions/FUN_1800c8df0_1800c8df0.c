/* FUN_1800c8df0 @ 1800c8df0 */

void FUN_1800c8df0(int *param_1)

{
  longlong *plVar1;
  
  if (*param_1 != 2) {
    FUN_1801672e0();
    if ((char)*param_1 == '\0') {
      plVar1 = *(longlong **)(param_1 + 2);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_1801635e0();
      }
    }
    else {
      plVar1 = *(longlong **)(param_1 + 2);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180162f80();
      }
    }
    if (*(longlong *)(param_1 + 0xc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800c8e51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0xc) + 0x18))(*(undefined8 *)(param_1 + 0xe));
      return;
    }
  }
  return;
}


