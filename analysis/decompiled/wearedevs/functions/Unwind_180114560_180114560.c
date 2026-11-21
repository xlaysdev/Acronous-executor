/* Unwind@180114560 @ 180114560 */

void Unwind_180114560(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x48),*(longlong *)(param_2 + 0x40) << 5,8);
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xe8) = 0x8000000000000005;
  return;
}


