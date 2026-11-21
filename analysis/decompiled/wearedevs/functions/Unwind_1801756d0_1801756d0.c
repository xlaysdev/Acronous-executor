/* Unwind@1801756d0 @ 1801756d0 */

longlong Unwind_1801756d0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_18002ce10(*(undefined8 *)((param_2 & 0xffffffffffffff80) + 0x78));
  lVar3 = 0xcc;
  plVar2 = *(longlong **)((param_2 & 0xffffffffffffff80) + 0x58);
  LOCK();
  lVar1 = *plVar2;
  if (lVar1 == 0xcc) {
    *plVar2 = 0x84;
  }
  else {
    lVar3 = lVar1;
  }
  UNLOCK();
  if (lVar1 != 0xcc) {
    lVar3 = (**(code **)(plVar2[2] + 0x20))();
  }
  return lVar3;
}


