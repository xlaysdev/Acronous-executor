/* Unwind@180138ec0 @ 180138ec0 */

void Unwind_180138ec0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x40);
  *puVar1 = *(undefined4 *)(param_2 + 0x8c);
  *(char *)(puVar1 + 1) = (char)*(undefined4 *)(param_2 + 0x94);
  *(undefined1 *)((longlong)puVar1 + 5) = *(undefined1 *)(param_2 + 0x93);
  return;
}


