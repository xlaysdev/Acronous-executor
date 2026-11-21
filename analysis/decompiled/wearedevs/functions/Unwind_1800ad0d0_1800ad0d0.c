/* Unwind@1800ad0d0 @ 1800ad0d0 */

void Unwind_1800ad0d0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x278);
  puVar1[2] = *(undefined8 *)(param_2 + 0x140);
  uVar2 = *(undefined8 *)(param_2 + 0x138);
  *puVar1 = *(undefined8 *)(param_2 + 0x130);
  puVar1[1] = uVar2;
  *(undefined1 *)(param_2 + 0x287) = 0;
  return;
}


