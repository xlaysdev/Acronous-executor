/* Unwind@180138fd0 @ 180138fd0 */

void Unwind_180138fd0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x20);
  *puVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 0x37);
  *(char *)((longlong)puVar1 + 5) = (char)*(undefined4 *)(param_2 + 0x2c);
  return;
}


