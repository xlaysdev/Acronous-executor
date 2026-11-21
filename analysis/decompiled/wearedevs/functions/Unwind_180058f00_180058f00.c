/* Unwind@180058f00 @ 180058f00 */

void Unwind_180058f00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x148);
  *(undefined8 *)(lVar1 + 0x138) = 1;
  *(undefined8 *)(lVar1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(char *)(lVar1 + 0x148) = (char)*(undefined8 *)(param_2 + 0x138);
  uVar2 = *(undefined8 *)(param_2 + 0x130);
  *(int *)(lVar1 + 0x149) = (int)uVar2;
  *(char *)(lVar1 + 0x14f) = (char)((ulonglong)uVar2 >> 0x30);
  *(short *)(lVar1 + 0x14d) = (short)((ulonglong)uVar2 >> 0x20);
  *(undefined8 *)(lVar1 + 0x150) = 0;
  *(undefined8 *)(lVar1 + 400) = 0;
  *(undefined1 *)(lVar1 + 0x198) = 0;
  *(undefined8 *)(lVar1 + 0x160) = 0;
  *(undefined8 *)(lVar1 + 0x168) = 0;
  *(undefined8 *)(lVar1 + 0x170) = 0;
  return;
}


