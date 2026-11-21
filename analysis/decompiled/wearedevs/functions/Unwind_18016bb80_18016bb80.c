/* Unwind@18016bb80 @ 18016bb80 */

void Unwind_18016bb80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x30);
  for (lVar1 = *(longlong *)(param_2 + 0x28); lVar1 != 0; lVar1 = lVar1 + -1) {
    (**(code **)(puVar2[-1] + 0x18))(*puVar2);
    puVar2 = puVar2 + 2;
  }
  return;
}


