/* Unwind@180143370 @ 180143370 */

void Unwind_180143370(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x58);
  *puVar1 = *(undefined8 *)(param_2 + 0xf8);
  puVar1[1] = *(undefined8 *)(param_2 + 0xf0);
  puVar1[2] = *(undefined8 *)(param_2 + 0xe8);
  puVar1[3] = *(undefined8 *)(param_2 + 0xd8);
  *(undefined1 *)(param_2 + 0xd4) = 0;
  return;
}


