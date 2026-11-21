/* Unwind@18006e210 @ 18006e210 */

void Unwind_18006e210(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x230) == 3) {
    if ((*(byte *)(param_2 + 0x45e) & 1) != 0) {
      FUN_18007a620(param_2 + 0x238);
    }
  }
  else if ((*(byte *)(param_2 + 0x45f) & 1) != 0) {
    FUN_18007c020(param_2 + 0x230);
  }
  return;
}


