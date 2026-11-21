/* Unwind@180068960 @ 180068960 */

void Unwind_180068960(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x40),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10));
  }
  puVar2 = *(undefined8 **)(param_2 + 0x30);
  *puVar2 = *(undefined8 *)(param_2 + 0x38);
  puVar2[1] = &DAT_18020b0f0;
  return;
}


