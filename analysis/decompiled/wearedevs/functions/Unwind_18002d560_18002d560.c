/* Unwind@18002d560 @ 18002d560 */

void Unwind_18002d560(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x30);
  for (lVar1 = *(longlong *)(param_2 + 0x28); lVar1 != 0; lVar1 = lVar1 + -1) {
    (**(code **)(puVar2[-3] + 0x20))(*puVar2,puVar2[-2],puVar2[-1]);
    puVar2 = puVar2 + 4;
  }
  return;
}


