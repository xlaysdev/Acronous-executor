/* Unwind@1800c2600 @ 1800c2600 */

void Unwind_1800c2600(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_2 + 0x46c);
  plVar2 = *(longlong **)(param_2 + 0x418);
  DeleteSecurityContext(param_2 + 0x3a0);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003d7f0(param_2 + 0x420);
  }
  *(byte *)(param_2 + 0x46a) = bVar1 & 1;
  return;
}


