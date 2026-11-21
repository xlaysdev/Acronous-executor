/* Unwind@18017e9f0 @ 18017e9f0 */

void Unwind_18017e9f0(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((param_2 & 0xffffffffffffff80) + 0x70);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180162e30((param_2 & 0xffffffffffffff80) + 0x78);
  }
  return;
}


