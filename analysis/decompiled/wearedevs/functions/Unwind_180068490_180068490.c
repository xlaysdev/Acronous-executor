/* Unwind@180068490 @ 180068490 */

void Unwind_180068490(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x40),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10));
  }
  puVar2 = *(undefined8 **)(param_2 + 0x28);
  *puVar2 = *(undefined8 *)(param_2 + 0x30);
  puVar2[1] = &PTR_FUN_18020b438;
  return;
}


