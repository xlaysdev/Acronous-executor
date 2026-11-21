/* Unwind@18018f100 @ 18018f100 */

void Unwind_18018f100(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  plVar2 = (longlong *)*puVar1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180187950(puVar1);
  }
  return;
}


