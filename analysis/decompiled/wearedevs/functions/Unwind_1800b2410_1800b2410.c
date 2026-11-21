/* Unwind@1800b2410 @ 1800b2410 */

void Unwind_1800b2410(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x448) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x440),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x448) + 0x10));
  }
  return;
}


