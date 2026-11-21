/* Unwind@1800e4a80 @ 1800e4a80 */

void Unwind_1800e4a80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x40),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10));
  }
  puVar2 = *(undefined8 **)(param_2 + 0x28);
  *puVar2 = *(undefined8 *)(param_2 + 0x38);
  puVar2[1] = *(undefined8 *)(param_2 + 0x30);
  return;
}


