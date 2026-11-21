/* Unwind@1800945d0 @ 1800945d0 */

void Unwind_1800945d0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x290);
  *puVar1 = *(undefined8 *)(param_2 + 0x278);
  puVar1[1] = *(undefined8 *)(param_2 + 0x268);
  uVar2 = *(undefined8 *)(param_2 + 600);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_2 + 0x270);
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_2 + 0x288);
  *(undefined8 *)(param_2 + 0x280) = uVar2;
  *(undefined1 *)(param_2 + 0x29e) = 0;
  return;
}


