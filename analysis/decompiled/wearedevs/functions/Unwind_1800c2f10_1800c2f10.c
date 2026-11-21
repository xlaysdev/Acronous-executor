/* Unwind@1800c2f10 @ 1800c2f10 */

void Unwind_1800c2f10(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_2 + 0x24c);
  plVar2 = *(longlong **)(param_2 + 0x200);
  DeleteSecurityContext(param_2 + 400);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003d7f0(param_2 + 0x208);
  }
  *(byte *)(param_2 + 0x24a) = bVar1 & 1;
  return;
}


