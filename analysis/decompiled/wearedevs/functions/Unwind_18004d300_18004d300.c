/* Unwind@18004d300 @ 18004d300 */

void Unwind_18004d300(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 0x144a);
  uVar2 = *(undefined1 *)(param_2 + 0x144b);
  uVar3 = *(undefined1 *)(param_2 + 0x144c);
  FUN_18003b820(*(undefined8 *)(param_2 + 0x1408));
  *(undefined1 *)(param_2 + 0x1443) = uVar3;
  *(undefined1 *)(param_2 + 0x1442) = uVar2;
  *(undefined1 *)(param_2 + 0x1441) = uVar1;
  return;
}


