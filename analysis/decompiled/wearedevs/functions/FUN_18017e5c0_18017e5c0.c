/* FUN_18017e5c0 @ 18017e5c0 */

undefined8 FUN_18017e5c0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_3;
  LOCK();
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar4,1) != *plVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar4 = param_2[2];
  if (lVar4 == *param_2) {
    FUN_1801fb290(param_2);
  }
  lVar2 = param_2[1];
  *(longlong **)(lVar2 + lVar4 * 8) = plVar1;
  lVar4 = lVar4 + 1;
  param_2[2] = lVar4;
  *param_1 = lVar4;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar4 == 0x10);
}


