/* Unwind@180137f30 @ 180137f30 */

void Unwind_180137f30(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x98);
  *puVar1 = *(undefined4 *)(param_2 + 0xa8);
  *(undefined2 *)(puVar1 + 2) = 0x200;
  puVar1[3] = *(undefined4 *)(param_2 + 0xb0);
  puVar1[4] = *(undefined4 *)(param_2 + 0xac);
  return;
}


