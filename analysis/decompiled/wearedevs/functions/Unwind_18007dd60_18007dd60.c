/* Unwind@18007dd60 @ 18007dd60 */

void Unwind_18007dd60(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  bVar1 = *(byte *)(param_2 + 0x6ac);
  uVar2 = *(undefined1 *)(param_2 + 0x6ad);
  uVar3 = *(undefined1 *)(param_2 + 0x6ae);
  if ((*(byte *)(param_2 + 0x6af) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x6ab) = uVar3;
    *(undefined1 *)(param_2 + 0x6aa) = uVar2;
    *(byte *)(param_2 + 0x6a9) = bVar1 & 1;
    return;
  }
  FUN_18007b640(param_2 + 0x680);
  *(undefined1 *)(param_2 + 0x6ab) = uVar3;
  *(undefined1 *)(param_2 + 0x6aa) = uVar2;
  *(byte *)(param_2 + 0x6a9) = bVar1 & 1;
  return;
}


