/* Unwind@1800ddbf0 @ 1800ddbf0 */

void Unwind_1800ddbf0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1898);
  uVar2 = *(undefined8 *)(param_2 + 0x18a8);
  **(undefined1 **)(param_2 + 0x18a0) = 2;
  *(undefined8 *)(param_2 + 0x1740) = uVar2;
  *(undefined8 *)(param_2 + 0x1738) = uVar1;
  return;
}


