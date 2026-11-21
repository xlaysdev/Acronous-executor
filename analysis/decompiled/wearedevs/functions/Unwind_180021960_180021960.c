/* Unwind@180021960 @ 180021960 */

void Unwind_180021960(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  uVar1 = *(undefined8 *)(param_2 + 0x6b8);
  uVar2 = *(undefined8 *)(param_2 + 0x6c0);
  uVar3 = *(undefined8 *)(param_2 + 0x6c8);
  uVar4 = *(undefined8 *)(param_2 + 0x6d0);
  uVar5 = *(undefined8 *)(param_2 + 0x6d8);
  uVar6 = *(undefined8 *)(param_2 + 0x6e0);
  plVar7 = *(longlong **)(*(longlong *)(param_2 + 0x770) + 0x78);
  LOCK();
  *plVar7 = *plVar7 + -1;
  UNLOCK();
  if (*plVar7 == 0) {
    FUN_18003e300(*(longlong *)(param_2 + 0x770) + 0x78);
  }
  *(undefined8 *)(param_2 + 0x6b0) = uVar6;
  *(undefined8 *)(param_2 + 0x6a8) = uVar5;
  *(undefined8 *)(param_2 + 0x6a0) = uVar4;
  *(undefined8 *)(param_2 + 0x698) = uVar3;
  *(undefined8 *)(param_2 + 0x690) = uVar2;
  *(undefined8 *)(param_2 + 0x688) = uVar1;
  return;
}


