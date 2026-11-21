/* Unwind@1800ae440 @ 1800ae440 */

void Unwind_1800ae440(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  puVar1 = *(undefined8 **)(param_2 + 0xd8);
  *puVar1 = *(undefined8 *)(param_2 + 0x30);
  puVar1[1] = uVar2;
  return;
}


