/* Unwind@18016c880 @ 18016c880 */

void Unwind_18016c880(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
  if (lVar2 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x20),lVar2,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x10));
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    *(longlong *)(param_2 + 0x38) = -*(longlong *)(param_2 + 0x38);
    do {
      puVar3 = *(undefined8 **)(param_2 + 0x28);
      FUN_18000aa80(puVar3[-1],*puVar3);
      *(undefined8 **)(param_2 + 0x28) = puVar3 + 2;
      plVar1 = (longlong *)(param_2 + 0x38);
      *plVar1 = *plVar1 + -1;
    } while (*plVar1 != 0);
  }
  return;
}


