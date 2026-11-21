/* Unwind@180082cc0 @ 180082cc0 */

void Unwind_180082cc0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x7c0);
  *puVar1 = 1;
  puVar1[1] = 2;
  memcpy(puVar1 + 2,(void *)(param_2 + 0x520),0x1e0);
  memcpy(puVar1 + 0x3e,(void *)(param_2 + 0x20),0x100);
  *(undefined1 *)(param_2 + 1999) = 0;
  return;
}


