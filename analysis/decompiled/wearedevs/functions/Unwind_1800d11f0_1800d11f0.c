/* Unwind@1800d11f0 @ 1800d11f0 */

void Unwind_1800d11f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x230);
  uVar2 = *(undefined8 *)(param_2 + 0x210);
  plVar3 = *(longlong **)(param_2 + 0x200);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003cc40(param_2 + 0x200);
  }
  *(undefined8 *)(param_2 + 0x1f8) = uVar1;
  *(undefined8 *)(param_2 + 0x1f0) = uVar2;
  *(undefined1 *)(param_2 + 0x23c) = 0;
  return;
}


