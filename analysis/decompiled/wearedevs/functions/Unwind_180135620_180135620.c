/* Unwind@180135620 @ 180135620 */

void Unwind_180135620(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x197) != '\0') {
    if (**(longlong **)(param_2 + 0x160) != 0) {
      lVar1 = *(longlong *)(param_2 + 0x160);
      (**(code **)(**(longlong **)(param_2 + 0x160) + 0x20))
                (*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 8),
                 *(undefined8 *)(lVar1 + 0x10));
    }
    FUN_18000af90(*(undefined8 *)(param_2 + 0x158));
  }
  return;
}


