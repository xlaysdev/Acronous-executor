/* FUN_18009eb50 @ 18009eb50 */

void FUN_18009eb50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  plVar5 = plVar2;
  FUN_180027490();
  puVar4 = (undefined8 *)thunk_FUN_1801d32d0(8,8,param_3,param_4,plVar5);
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,8);
  }
  *puVar4 = plVar2;
  return;
}


