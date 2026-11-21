/* Unwind@1800c1c50 @ 1800c1c50 */

void Unwind_1800c1c50(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_2 + 0x25c);
  plVar2 = *(longlong **)(param_2 + 0x210);
  DeleteSecurityContext(param_2 + 0x1a0);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003d7f0(param_2 + 0x218);
  }
  *(byte *)(param_2 + 0x25a) = bVar1 & 1;
  return;
}


