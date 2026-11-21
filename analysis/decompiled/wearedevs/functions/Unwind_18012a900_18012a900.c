/* Unwind@18012a900 @ 18012a900 */

void Unwind_18012a900(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x40);
  for (lVar2 = *(longlong *)(param_2 + 0x38); lVar2 != 0; lVar2 = lVar2 + -1) {
    (**(code **)(puVar1[-3] + 0x20))(*puVar1,puVar1[-2],puVar1[-1]);
    puVar1 = puVar1 + 9;
  }
  return;
}


