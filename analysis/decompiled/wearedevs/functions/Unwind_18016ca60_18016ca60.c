/* Unwind@18016ca60 @ 18016ca60 */

void Unwind_18016ca60(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != 0; lVar2 = lVar2 + -1) {
    (**(code **)(puVar1[-1] + 0x18))(*puVar1);
    puVar1 = puVar1 + 2;
  }
  return;
}


