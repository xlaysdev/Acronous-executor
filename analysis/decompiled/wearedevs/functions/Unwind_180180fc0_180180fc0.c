/* Unwind@180180fc0 @ 180180fc0 */

void Unwind_180180fc0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x240);
  for (lVar1 = *(longlong *)(param_2 + 0x238); lVar1 != 0; lVar1 = lVar1 + -1) {
    (**(code **)(puVar2[-1] + 0x18))(*puVar2);
    puVar2 = puVar2 + 2;
  }
  return;
}


