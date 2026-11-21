/* Unwind@180165c00 @ 180165c00 */

void Unwind_180165c00(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  bVar1 = *(byte *)(param_2 + 0x2a4);
  uVar3 = *(undefined8 *)(param_2 + 0x278);
  uVar2 = *(undefined1 *)(param_2 + 0x2a5);
  if (*(longlong *)(param_2 + 0x260) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x260) + 0x18))(*(undefined8 *)(param_2 + 0x268));
  }
  *(undefined1 *)(param_2 + 0x2a1) = uVar2;
  *(undefined8 *)(param_2 + 0x248) = uVar3;
  *(byte *)(param_2 + 0x2a0) = bVar1 & 1;
  return;
}


