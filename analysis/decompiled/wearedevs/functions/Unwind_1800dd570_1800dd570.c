/* Unwind@1800dd570 @ 1800dd570 */

void Unwind_1800dd570(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1768);
  uVar2 = *(undefined8 *)(param_2 + 6000);
  uVar3 = *(undefined8 *)(param_2 + 0x1778);
  uVar4 = *(undefined8 *)(param_2 + 0x1780);
  lVar5 = *(longlong *)(param_2 + 0x19a8);
  *(undefined1 *)(lVar5 + 0xbe3) = 0;
  if (*(char *)(lVar5 + 0xbe4) == '\0') {
    *(undefined8 *)(param_2 + 0x1760) = uVar4;
    *(undefined8 *)(param_2 + 0x1758) = uVar3;
    *(undefined8 *)(param_2 + 0x1750) = uVar2;
    *(undefined8 *)(param_2 + 0x1748) = uVar1;
    return;
  }
  FUN_18009acf0(lVar5 + 0xbe8);
  *(undefined8 *)(param_2 + 0x1760) = uVar4;
  *(undefined8 *)(param_2 + 0x1758) = uVar3;
  *(undefined8 *)(param_2 + 0x1750) = uVar2;
  *(undefined8 *)(param_2 + 0x1748) = uVar1;
  return;
}


