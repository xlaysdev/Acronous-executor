/* Unwind@180170560 @ 180170560 */

void Unwind_180170560(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x260);
  for (lVar1 = *(longlong *)(param_2 + 600); lVar1 != 0; lVar1 = lVar1 + -1) {
    (**(code **)(puVar2[-1] + 0x18))(*puVar2);
    puVar2 = puVar2 + 2;
  }
  return;
}


