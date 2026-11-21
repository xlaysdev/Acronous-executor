/* Unwind@180135550 @ 180135550 */

void Unwind_180135550(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = *(byte *)(param_2 + 0x194);
  bVar2 = *(byte *)(param_2 + 0x195);
  bVar3 = *(byte *)(param_2 + 0x196);
  if ((*(byte *)(param_2 + 0x193) & 1) != 0) {
    FUN_1801051c0(*(undefined1 *)(param_2 + 0x100),*(undefined8 *)(param_2 + 0x108));
  }
  if ((bVar2 & *(longlong *)(param_2 + 0x110) != 0) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x110) + 0x20))
              (*(undefined8 *)(param_2 + 0x128),*(undefined8 *)(param_2 + 0x118),
               *(undefined8 *)(param_2 + 0x120));
  }
  if ((bVar1 & 1) == 0) {
    *(byte *)(param_2 + 0x197) = bVar3 & 1;
    return;
  }
  if (*(longlong *)(param_2 + 0x130) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x130) + 0x20))
              (*(undefined8 *)(param_2 + 0x148),*(undefined8 *)(param_2 + 0x138),
               *(undefined8 *)(param_2 + 0x140));
  }
  *(byte *)(param_2 + 0x197) = bVar3 & 1;
  return;
}


