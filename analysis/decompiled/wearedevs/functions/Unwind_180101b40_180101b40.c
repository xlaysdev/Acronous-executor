/* Unwind@180101b40 @ 180101b40 */

void Unwind_180101b40(undefined8 param_1,longlong param_2)

{
  FreeCredentialsHandle(param_2 + 0x58);
  if (*(longlong *)(param_2 + 0x240) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x250),*(undefined8 *)(param_2 + 0x248),8);
  }
  return;
}


