/* Unwind@1800ea130 @ 1800ea130 */

void Unwind_1800ea130(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x5d0) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x5c8),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x5d0) + 0x10));
  }
  *(undefined8 *)(param_2 + 0x530) = *(undefined8 *)(param_2 + 0x5f0);
  *(undefined8 *)(param_2 + 0x528) = *(undefined8 *)(param_2 + 0x5f8);
  *(undefined8 *)(param_2 + 0x520) = *(undefined8 *)(param_2 + 0x5e0);
  *(undefined8 *)(param_2 + 0x518) = *(undefined8 *)(param_2 + 0x5e8);
  return;
}


