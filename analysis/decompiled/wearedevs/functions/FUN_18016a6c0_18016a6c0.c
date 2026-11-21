/* FUN_18016a6c0 @ 18016a6c0 */

undefined8 * FUN_18016a6c0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  
  LOCK();
  lVar1 = *(longlong *)(param_2 + 0x20);
  *(longlong *)(param_2 + 0x20) = 0;
  UNLOCK();
  if (lVar1 == 0) {
    *param_1 = 2;
    return param_1;
  }
  plVar3 = (longlong *)*param_3;
  LOCK();
  lVar2 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 == 0 || SCARRY8(lVar2,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *param_1 = 0;
  param_1[1] = plVar3;
  param_1[2] = 0;
  param_1[3] = lVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 8;
  param_1[7] = 0;
  param_1[8] = param_2;
  return param_1;
}


