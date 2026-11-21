/* Unwind@18009fe70 @ 18009fe70 */

void Unwind_18009fe70(undefined8 param_1,longlong param_2)

{
  if ((*(char *)(param_2 + 0x4f) != '\0') &&
     ((**(ulonglong **)(param_2 + 0x30) & 0x7fffffffffffffff) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8),
                        **(ulonglong **)(param_2 + 0x30),1);
  }
  return;
}


