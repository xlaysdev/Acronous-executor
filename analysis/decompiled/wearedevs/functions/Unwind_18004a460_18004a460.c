/* Unwind@18004a460 @ 18004a460 */

void Unwind_18004a460(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 0xd8d);
  uVar2 = *(undefined1 *)(param_2 + 0xd8e);
  uVar3 = *(undefined1 *)(param_2 + 0xd8f);
  FUN_180042e50(param_2 + 0x968);
  *(undefined1 *)(param_2 + 0xd86) = uVar3;
  *(undefined1 *)(param_2 + 0xd85) = uVar2;
  *(undefined1 *)(param_2 + 0xd84) = uVar1;
  return;
}


